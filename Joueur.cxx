/** 
 * Mise en oeuvre de Joueur.h
 *
 * @file Joueur.cxx
 */

#include <iostream>
// A besoin de la declaration de la classe
#include "Joueur.h"

using namespace std;

Joueur::~Joueur()
{
}

Joueur::Joueur()
{
}


Joueur::Joueur( bool white )
{
  en_echec = false;
  init( white );
}

void
Joueur::init( bool white )
{
  for(int place = 0; place < 8; place++)
  {
	 m_pieces[ place ] = new Pion(white, place+1); 
  }

  m_pieces[ 8 ] = new Tour(white, true); 
  m_pieces[ 9 ] = new Tour(white, false); 
  m_pieces[ 10 ] = new Cavalier(white, true); 
  m_pieces[ 11 ] = new Cavalier(white, false); 		
  m_pieces[ 12 ] = new Fou(white, true); 
  m_pieces[ 13 ] = new Fou(white, false); 
  m_pieces[ 14 ] = new Dame(white); 
  m_pieces[ 15 ] = new Roi(white); 
	  
}

Piece*
Joueur::GetRoi()
{
	return m_pieces[ 15 ];
}

void
Joueur::affiche()
{
  for ( int i = 0; i < 16; ++i )
    {
      m_pieces[ i ]->affiche();
    }    
}

void
Joueur::SetEchec(bool VF)
{
	en_echec = VF;
}

void
Joueur::placerPieces( Echiquier & echiquier )
{
  for ( int i = 0; i < 16; ++i )
    echiquier.placer( m_pieces[i] );
}


JoueurBlanc::JoueurBlanc() : Joueur(true)
{
}

JoueurNoir::JoueurNoir() : Joueur(false)
{
}

bool
Joueur::isWhite()
{
  //cout << "polymorphe Joueur" << endl;
  return m_pieces[0]->isWhite();
}

bool
JoueurBlanc::isWhite()
{
  //cout << "polymorphe Joueur Blanc" << endl;
  return true;
}

bool
JoueurNoir::isWhite()
{
  //cout << "polymorphe Joueur Noir" << endl;
  return false;
}



