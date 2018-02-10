#ifndef HEADER_ECHIQUIER
#define HEADER_ECHIQUIER

#include <QWidget>
#include <QPrintDialog>
#include <QTextBrowser>
#include <QMessageBox>
#include "ui_echiquier.h"
#include "Piece.h"
#include "Joueur.h"
#include "_Echiquier.h"


class echiquier : public QMainWindow, private Ui::echiquier

{
    Q_OBJECT

    public:
        echiquier(QMainWindow *parent = 0);
        JoueurBlanc jblanc;
        JoueurNoir jnoir;

        Echiquier e;
        bool Joueur_turn;

    private slots:
        void on_menuNvpartie_activated();
        void on_btDeplacer_clicked();
        void on_menuRegles_activated();
        void on_menuApropos_activated();

        bool en_echec(Joueur &j, Piece* p, Echiquier &e);
        int colEnEntier(QString c);
        QLabel* echiquier::selectLab(QString s);

    private:
        QTextBrowser *Boitedial;
        QPushButton *btFermer;
        QFrame *Regles;

};


#endif
