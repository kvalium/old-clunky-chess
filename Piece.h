/** 
 * Header de Piece.cxx
 *
 * @file Piece.h
 */

#if !defined Piece_h
#define Piece_h

/**
 * Declaration d'une classe modélisant une piece de jeu d'echec.
 */

// #include "Echiquier.h"
class Echiquier;

class Piece 
{
protected:
  int m_x;
  int m_y;
  bool m_white;
  
public:
  virtual ~Piece();
  Piece();
  Piece(const Piece &autre);
  Piece( int x, int y, bool white );
  void init( int x, int y, bool white );
  void move( int x, int y );
  int x() const;
  int y() const;
  bool isWhite();
  bool isBlack();
  bool depDiag(Echiquier &e, int x, int y);
  bool depAxial(Echiquier &e, int x, int y);
  void affiche();
  virtual bool bonneTraj(Echiquier &e, int x, int y);
  virtual bool mouvementValide(Echiquier &e, int x, int y);
  virtual char myType();
}; 

class Roi : public Piece
{
public:
  Roi(bool white);
  bool bonneTraj(Echiquier &e, int x, int y);
  char myType();
};

class Dame : public Piece
{
public:
  Dame(bool white);
  bool bonneTraj(Echiquier &e, int x, int y);
  char myType();
};

class Pion : public Piece
{
public:
  Pion(bool white, int nbPion);
  bool bonneTraj(Echiquier &e, int x, int y);
  char myType();
};

class Fou : public Piece
{
public:
  Fou(bool white, bool premier);
  bool bonneTraj(Echiquier &e, int x, int y);
  char myType();
};

class Tour : public Piece
{
public:
  Tour(bool white, bool premier);
  bool bonneTraj(Echiquier &e, int x, int y);
  char myType();
};

class Cavalier : public Piece
{
public:
  Cavalier(bool white, bool premier);
  bool bonneTraj(Echiquier &e, int x, int y);
  char myType();
};

#endif // !defined Piece_h
