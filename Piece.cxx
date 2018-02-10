/** 
 * Mise en oeuvre de Piece.h
 *
 * @file Piece.cxx
 */

#include <iostream>
// A besoin de la declaration de la classe
#include "Piece.h"
#include "_Echiquier.h"

using namespace std;

Piece::~Piece()
{
  //cout << "Une piece detruite" << endl;
}

Piece::Piece(const Piece &autre)
{
  //cout << "Une piece copie" << endl;
  m_x=autre.x();
  m_y=autre.m_y;
  m_white=autre.m_white;
}

Piece::Piece()
{
  // ne fait rien => objet instancie mais non valide.
  // cout << "Une piece creee" << endl;
}

Piece::Piece( int x, int y, bool white )
{
  // cout << "Une piece creee avec ses coordonnees" << endl;
  init( x, y, white );
}

void
Piece::init( int x, int y, bool white )
{
  m_x = x;
  m_y = y;
  m_white = white;
}

void
Piece::move( int x, int y )
{
  m_x = x;
  m_y = y;
}

int
Piece::x() const
{
  return m_x;
}

int
Piece::y() const
{
  return m_y;
}

bool
Piece::isWhite()
{
  return m_white;
}

bool
Piece::isBlack()
{
  return ! isWhite();
}

void 
Piece::affiche()
{
  //cout << "Piece: x=" << x() << " y=" << y() << " "
       //<< ( isWhite() ? "blanche" : "noire" ) << endl;
}

bool
Piece::mouvementValide(Echiquier &e, int x, int y)
{
	if(bonneTraj(e, x, y))
	{
		// si le mouvement ne sort pas de l'echiquier (on ne sort pas)
		if ( ( x >= 1 ) && ( x <= 8 )
			&& ( y >= 1 ) && ( y <= 8 ))
		{
			// si une piece est sur cette case et qu'elle est de la m^ couleur (on ne mange pas ses pieces)
			if(e.getPiece(x, y) && (e.getPiece(x,y)->isWhite() == this->isWhite()))
				return false;
			
			return true;
		}
	}
  return false;
}


bool
Piece::bonneTraj(Echiquier &e, int x, int y)
{return true;}

char
Piece::myType()
{
  if (m_white)
    return 'B';
  else
    return 'N';
}

//----------------------------
//DEPLACEMENT AXIAL && DIAGONALE
//----------------------------

bool
Piece::depDiag(Echiquier &e, int x, int y)
{
int cpt_case = this->x();
	int cpt = 0;

	float sens_diag = (float)(this->x()-x)/(this->y()-y);
	
	if(sens_diag == 1 || sens_diag == (-1))
	{
		if(sens_diag == 1 && x < this->x()) /* DIAGONALE HAUT-GAUCHE */
		{
			for(cpt_case ;cpt_case > x; cpt_case--)
			{
				cpt ++;
				if (e.getPiece(this->x()-cpt, this->y()-cpt) != NULL && (this->x()-cpt != x))
					return false;
			}
		}

		if(sens_diag == (-1) && x > this->x()) /* DIAGONALE HAUT-DROITE */
		{
			for(cpt_case ;cpt_case < x; cpt_case++)
			{
				cpt ++;
				if (e.getPiece(this->x()+cpt, this->y()-cpt) != NULL && (this->x()+cpt != x))
					return false;
			}
		}

		if(sens_diag == (-1) && x < this->x()) /* DIAGONALE BAS-GAUCHE */
		{
			for(cpt_case ;cpt_case > x; cpt_case--)
			{
				cpt ++;
				if (e.getPiece(this->x()-cpt, this->y()+cpt) != NULL && (this->x()-cpt != x))
					return false;
			}
		}

		if(sens_diag == 1 && x > this->x()) /* DIAGONALE BAS-DROITE */
		{
			for(cpt_case ;cpt_case < x; cpt_case++)
			{
				cpt ++;
				if (e.getPiece(this->x()+cpt, this->y()+cpt) != NULL && (this->x()+cpt != x))
					return false;
			}
		}

		return true;
	}
	return false;
}

bool 
Piece::depAxial(Echiquier &e, int x, int y)
{
	int y_fin = y;
	int x_fin = x;

	// DIRECTION VERTICALE
	if(this->x() == x && this->y() < y)
	{
		for(y; y > this->y(); y--)
		{
			if (e.getPiece(this->x(), y) != NULL && (this->y() != y) && (y != y_fin))
			return false;
		}
	return true;
	}
	if(this->x() == x && this->y() > y)
	{
		for(y; y < this->y(); y++)
		{
			if (e.getPiece(this->x(), y) != NULL && (y != y_fin))
			return false;
		}
	return true;
	}

	// DIRECTION HORIZONTALE
	if(this->y() == y && this->x() < x)
	{
		for(x; x > this->x(); x--)
		{
			if (e.getPiece(x, this->y()) != NULL && (x != x_fin))
			return false;
		}
	return true;
	}
	if(this->y() == y && this->x() > x)
	{
		for(x; x < this->x(); x++)
		{
			if (e.getPiece(x, this->y()) != NULL && (x != x_fin))
			return false;
		}
	return true;
	}
	return false;
}

//----------------------------
//------------------------ROI
//----------------------------

Roi::Roi(bool white) : Piece(5,(white?1:8),white)
{
  //cout << "Constructeur Roi" << endl;
}

bool
Roi::bonneTraj(Echiquier &e, int x, int y)
{
	// position courante
	int y_cou = this->y();
	int x_cou = this->x();

	// traitement de la trajectoire
	if((y_cou ==  y) || (y_cou ==  y+1) || (y_cou ==  y-1))
		if((x_cou ==  x) || (x_cou ==  x+1) || (x_cou ==  x-1))
			return true;

return false;
}

char
Roi::myType()
{
  if (m_white)
    return 'R';
  else
    return 'r';
}

//----------------------------
//------------------------DAME
//----------------------------

Dame::Dame(bool white) : Piece(4,(white?1:8),white)
{
  //cout << "Constructeur Dame" << endl;
}

bool
Dame::bonneTraj(Echiquier &e, int x, int y)
{
	if (this->depAxial(e, x, y) || this->depDiag(e, x, y))
		return true;

return false;
}

char
Dame::myType()
{
  if (m_white)
    return 'Q';
  else
    return 'q';
}

//----------------------------
//------------------------Pion
//----------------------------

Pion::Pion(bool white, int nbPion) : Piece()
{
	init(nbPion, (white?2:7), white);
}

bool
Pion::bonneTraj(Echiquier &e, int x, int y)
{
	// Si le pion est blanc
	if(m_white)
	{
		// Si il avance d'une case et qu'il n'y a personne == OK
		// Si il avance de deux et est sur sa case depart et personne == OK
		// Si il mange piece noir en diagonale == OK
		if( ((y == this->y()+1) && (x==this->x()) && (e.getPiece(x,y) == NULL))
   /* OU */ || ((y == this->y()+2) && (x==this->x()) && (this->y() == 2) 
			&& (e.getPiece(x,y) == NULL) && (e.getPiece(x+1,y+1) == NULL))
   /* OU */ || ((y == this->y()+1 ) && (x ==(this->x()+1) || (this->x()-1)) 
			&& (e.getPiece(x,y) != NULL) && (e.getPiece(x,y)->isWhite() !=  this->isWhite())) )
			return true;
	}

	// Si le pion est noir
	if(!m_white)
	{
		// Si il avance d'une case et personne == OK
		// Si il avance de deux et est sur sa case depart et personne == OK
		// Si il mange piece noir en diagonale == OK
		if( ((y == this->y()-1) && (x==this->x()) && (e.getPiece(x,y) == NULL)) 
  /* OU */  || ((y == this->y()-2) && (x==this->x()) && (this->y() == 7) 
			&& (e.getPiece(x,y) == NULL) && (e.getPiece(x-1,y-1) == NULL))
  /* OU */  || ((y == this->y()-1 ) && (x == (this->x()-1) || (this->x()+1)) 
			&& (e.getPiece(x,y) != NULL) && (e.getPiece(x,y)->isWhite() !=  this->isWhite())) )
		return true;
	}
	return false;
}

char
Pion::myType()
{
  if (m_white)
    return 'P';
  else
    return 'p';
}

//----------------------------
//------------------------Fou
//----------------------------

Fou::Fou(bool white, bool premier) : Piece()
{
	init((premier?3:6), (white?1:8), white);
}

bool
Fou::bonneTraj(Echiquier &e, int x, int y)
{
	return this->depDiag(e,x, y);
}

char
Fou::myType()
{
  if (m_white)
    return 'F';
  else
    return 'f';
}

//----------------------------
//------------------------Tour
//----------------------------

Tour::Tour(bool white, bool premier) : Piece()
{
	init((premier?1:8), (white?1:8), white);
}

bool
Tour::bonneTraj(Echiquier &e, int x, int y)
{
	return this->depAxial(e, x, y);
}

char
Tour::myType()
{
  if (m_white)
    return 'T';
  else
    return 't';
}

//----------------------------
//------------------------Cavalier
//----------------------------

Cavalier::Cavalier(bool white, bool premier) : Piece()
{
	init((premier?2:7), (white?1:8), white);
}

bool
Cavalier::bonneTraj(Echiquier &e, int x, int y)
{
	// huit possibilitées de direction
	if( ((y == this->y()+2) && (x == this->x()+1))
	 || ((y == this->y()+2) && (x == this->x()-1))
	 || ((y == this->y()-2) && (x == this->x()+1))
	 || ((y == this->y()-2) && (x == this->x()-1))
	 || ((y == this->y()+1) && (x == this->x()+2))
  	 || ((y == this->y()+1) && (x == this->x()-2))
 	 || ((y == this->y()-1) && (x == this->x()+2))
 	 || ((y == this->y()-1) && (x == this->x()-2)) )
		return true;
	else
		return false;
}

char
Cavalier::myType()
{
  if (m_white)
    return 'C';
  else
    return 'c';
}
