/** 
 * Header de Joueur.cxx
 *
 * @file Joueur.h
 */

#if !defined Joueur_h
#define Joueur_h

#include "Piece.h"
#include "_Echiquier.h"

/**
 * Declaration d'une classe modelisant un joueur.
 */
class Joueur 
{
protected:
  Piece* m_pieces[ 16 ];
  bool en_echec;
  
public:
  virtual ~Joueur();
  Joueur();
  Joueur( bool white );
  virtual bool isWhite()=0;
  Piece* GetRoi();
  void SetEchec(bool VF);
  void init( bool white);
  void affiche();
  void placerPieces( Echiquier & echiquier );

};

class JoueurBlanc : public Joueur
{
public:
  JoueurBlanc();
  virtual bool isWhite();
};


class JoueurNoir : public Joueur
{
public:
  JoueurNoir();
  virtual bool isWhite();
};



#endif


