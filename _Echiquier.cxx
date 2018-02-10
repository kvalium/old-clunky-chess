/** 
 * Mise en oeuvre de Echiquier.h
 *
 * @file Echiquier.cxx
 */

#include <iostream>
// A besoin de la declaration de la classe
#include "_Echiquier.h"

using namespace std;

/**
 * Constructeur par défaut.
 * Initialise à vide l'echiquier.
 */
Echiquier::Echiquier()
{
  for ( int n = 0; n < 64; ++n )
    {
      m_cases[ n ] = NULL;
    }
}


/**
 * Recupere la piece situee sur une case.
 *
 * @param x un entier entre 1 et 8
 * @param y un entier entre 1 et 8
 *
 * @return 0 si aucune piece n'est sur cette case et un pointeur
 * vers une piece sinon.
 */
Piece* 
Echiquier::getPiece( int x, int y )
{
  return m_cases[ x - 1 + ( y - 1 ) * 8 ];
}

  
/**
 * Place une piece sur l'echiquier, aux coordonnees specifiees dans la piece.
 *
 * @param p un pointeur vers une piece
 *
 * @return 'true' si le placement s'est bien passe, 'false' sinon
 * (case occupee, coordonnees invalides, piece vide )
 */
bool 
Echiquier::placer( Piece* p )
{
  if ( ( p->x() >= 1 ) && ( p->x() <= 8 )
       && ( p->y() >= 1 ) && ( p->y() <= 8 ) 
       && ( p != 0 ) && ( getPiece( p->x(), p->y() ) == 0 ) )
    {
      m_cases[ p->x() - 1 + ( p->y() - 1 ) * 8 ] = p;
      return true;
    }
  return false;
}


/**
 * Deplace une piece sur l'echiquier, des coordonnees specifiees
 * dans la piece aux coordonnees x,y. 
 *
 * @param p un pointeur vers une piece
 * @param x un entier entre 1 et 8
 * @param y un entier entre 1 et 8
 *
 * @return 'true' si le placement s'est bien passe, 'false' sinon
 * (case occupee, coordonnees invalides, piece vide, piece pas
 * presente au bon endroit sur l'echiquier)
 */
bool 
Echiquier::deplacer( Piece* p, int x, int y )
{
		// si le mouvement est valide
		if(p->mouvementValide(*this, x, y))
		{
			// mise en quarantaine de l'ancienne position
			int tmp_x = p->x();
			int tmp_y = p->y();

			// mouvement de la nouvelle piece
			p->move(x, y);
			m_cases[ p->x() - 1 + ( p->y() - 1 ) * 8 ] = p;

			// suppression de l'ancienne
			enleverPiece(tmp_x, tmp_y);

			// Réaffichage de l'echiquier
			affiche();
			return true;
		}
		else 
			cout << "mouvement invalide" << endl;

  return false;
}

bool 
Echiquier::deplacement(int x, int y, int x_fin, int y_fin)
{
		// recupération de la piece
		Piece * p = getPiece( x, y );
		if (p != NULL)
		{
		  // deplacement
		  //deplacer(p, x_fin, y_fin);
		  return deplacer(p, x_fin, y_fin);
		}
  cout << "aucune piece sur la case" << endl;
  return false;
}

/**
 * Enleve la piece situee sur une case (qui devient vide).
 *
 * @param x un entier entre 1 et 8
 * @param y un entier entre 1 et 8
 *
 * @return 0 si aucune piece n'est sur cette case et le pointeur
 * vers la piece enlevee sinon.
 */
Piece* 
Echiquier::enleverPiece( int x, int y )
{
  if ( ( x >= 1 ) && ( x <= 8 )
       && ( y >= 1 ) && ( y <= 8 ) 
       && ( getPiece( x, y ) != 0 ) )
    {
      Piece *tmp;
      tmp=m_cases[ x - 1 + ( y - 1 ) * 8 ];
      m_cases[ x - 1 + ( y - 1 ) * 8 ] = NULL;
      return tmp;
    }
  return NULL;
}


/**
 * Affiche l'echiquier avec des # pour les cases noires et . pour
 * les blanches si elles sont vides, et avec B pour les pieces
 * blanches et N pour les pieces noires.
 */
void
Echiquier::affiche()
{
  cout << endl << "  12345678" << endl;
  for ( int y = 1; y <= 8; ++y )
    {
      cout << y << " ";
      for ( int x = 1; x <= 8; ++x )
	{
	  char c;
	  Piece* p = getPiece( x, y );
	  if ( p == 0 ) 
	    c = ( ( x + y ) % 2 ) == 0 ? '#' : '.';
	  else
	    c = p->myType(); // c = p->isWhite() ? 'B' : 'N';
	  cout << c;
	}
      cout << " " << y << endl;
    }
  cout << "  12345678" << endl;
}

  

