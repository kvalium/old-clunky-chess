/** 
 * Programme principal
*/

#include <iostream>
#include "Piece.h"
#include "Joueur.h"
#include "Echiquier.h"

using namespace std;

void compare(Piece &p1, Piece &p2)
{
  if ((p1.x()==p2.x())&&(p1.y()==p2.y())&&(p1.isWhite()==p2.isWhite()))
    cout << "ok" << endl;
  else
    cout << "nok" << endl;
}

bool en_echec(Joueur &j, Piece* p, Echiquier &e)
{
	int Roi_x = j.GetRoi()->x();
	int Roi_y = j.GetRoi()->y();

	if(p->mouvementValide(e,Roi_x, Roi_y))
	{
		j.SetEchec(true);
		return true;
	}
	else
	{
		j.SetEchec(false);
		return false;
	}
}

/**
 * Programme principal
 */
int main( int argc, char** argv )
{
  JoueurBlanc jblanc;
  JoueurNoir jnoir;

  Echiquier e;

  jblanc.placerPieces( e );
  jnoir.placerPieces( e );

  e.affiche();

  int x_pos=0;
  int y_pos=0;
  int x_dest=0;
  int y_dest=0;

  // joueur_turn : false --> Noir , true --> Blanc
  bool Joueur_turn = true;

  cout << endl << "Le joueur Blanc commence" << endl << endl;
 
  while ( true )
  {
	  do
	  {
		  do
		  {
			  cout << "----- Choix piece -----" << endl;
			  cout << "position x : ";
			  cin >> x_pos;
			  cout << "position y : ";
			  cin >> y_pos;

			  if(e.getPiece(x_pos, y_pos) == NULL)
				  cout << "Aucune piece sur la case" << endl;

		  }while(e.getPiece(x_pos, y_pos) == NULL);

		  if(e.getPiece(x_pos, y_pos)->isWhite() != Joueur_turn)
			 cout << "Ce n'est pas votre piece" << endl;
      }while(e.getPiece(x_pos, y_pos)->isWhite() != Joueur_turn);

	  do
	  {
		  cout << "----- Choix destination -----" << endl;
		  cout << "position x : ";
		  cin >> x_dest;
		  cout << "position y : ";
		  cin >> y_dest;
      }while(e.deplacement(x_pos,y_pos,x_dest,y_dest) == false);
	  

	  if (Joueur_turn == false)
	  {
		  cout << " BLANC EN ECHEC ? " << en_echec(jblanc, e.getPiece(x_dest, y_dest), e);
		  Joueur_turn = true;
	  }
	  else
	  {	  
		  cout << " NOIR EN ECHEC ? " << en_echec(jnoir, e.getPiece(x_dest, y_dest), e);
	      Joueur_turn = false;
	  }

	  cout << endl << "Au joueur " << (Joueur_turn ? "Blanc" : "Noir" ) << endl << endl;
  }
}
