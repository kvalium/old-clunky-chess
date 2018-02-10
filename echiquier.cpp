
#include "echiquier.h"
#include "Piece.h"
#include "Joueur.h"
#include "_Echiquier.h"

echiquier::echiquier(QMainWindow *parent) : QMainWindow(parent)
{
    setupUi(this); // A faire en premier
}


// Initialisation de l'echiquier
void echiquier::on_menuNvpartie_activated()
{
    ListeMessages->clear();
    ListeMessages->addItem("C'est au joueur blanc de commencer...");


    // REMPLISSAGE DE L'ECHIQUIER
    // tours
    A1->setPixmap(QPixmap(QString::fromUtf8(":/Images/tourblanche.png")));
    H1->setPixmap(QPixmap(QString::fromUtf8(":/Images/tourblanche.png")));
    A8->setPixmap(QPixmap(QString::fromUtf8(":/Images/tournoire.png")));
    H8->setPixmap(QPixmap(QString::fromUtf8(":/Images/tournoire.png")));
    //cavaliers
    B1->setPixmap(QPixmap(QString::fromUtf8(":/Images/cavalierblanc.png")));
    G1->setPixmap(QPixmap(QString::fromUtf8(":/Images/cavalierblanc.png")));
    B8->setPixmap(QPixmap(QString::fromUtf8(":/Images/cavaliernoir.png")));
    G8->setPixmap(QPixmap(QString::fromUtf8(":/Images/cavaliernoir.png")));
    //fous
    C1->setPixmap(QPixmap(QString::fromUtf8(":/Images/foublanc.png")));
    F1->setPixmap(QPixmap(QString::fromUtf8(":/Images/foublanc.png")));
    C8->setPixmap(QPixmap(QString::fromUtf8(":/Images/founoir.png")));
    F8->setPixmap(QPixmap(QString::fromUtf8(":/Images/founoir.png")));
    //Rois et Reines
    D1->setPixmap(QPixmap(QString::fromUtf8(":/Images/dameblanche.png")));
    E1->setPixmap(QPixmap(QString::fromUtf8(":/Images/roiblanc.png")));
    D8->setPixmap(QPixmap(QString::fromUtf8(":/Images/damenoire.png")));
    E8->setPixmap(QPixmap(QString::fromUtf8(":/Images/roinoir.png")));
    //Pions noirs
    A7->setPixmap(QPixmap(QString::fromUtf8(":/Images/pionnoir.png")));
    B7->setPixmap(QPixmap(QString::fromUtf8(":/Images/pionnoir.png")));
    C7->setPixmap(QPixmap(QString::fromUtf8(":/Images/pionnoir.png")));
    D7->setPixmap(QPixmap(QString::fromUtf8(":/Images/pionnoir.png")));
    E7->setPixmap(QPixmap(QString::fromUtf8(":/Images/pionnoir.png")));
    F7->setPixmap(QPixmap(QString::fromUtf8(":/Images/pionnoir.png")));
    G7->setPixmap(QPixmap(QString::fromUtf8(":/Images/pionnoir.png")));
    H7->setPixmap(QPixmap(QString::fromUtf8(":/Images/pionnoir.png")));
    //pions blancs
    A2->setPixmap(QPixmap(QString::fromUtf8(":/Images/pionblanc.png")));
    B2->setPixmap(QPixmap(QString::fromUtf8(":/Images/pionblanc.png")));
    C2->setPixmap(QPixmap(QString::fromUtf8(":/Images/pionblanc.png")));
    D2->setPixmap(QPixmap(QString::fromUtf8(":/Images/pionblanc.png")));
    E2->setPixmap(QPixmap(QString::fromUtf8(":/Images/pionblanc.png")));
    F2->setPixmap(QPixmap(QString::fromUtf8(":/Images/pionblanc.png")));
    G2->setPixmap(QPixmap(QString::fromUtf8(":/Images/pionblanc.png")));
    H2->setPixmap(QPixmap(QString::fromUtf8(":/Images/pionblanc.png")));
    //cases vides
    A3->setPixmap(NULL);
    B3->setPixmap(NULL);
    C3->setPixmap(NULL);
    D3->setPixmap(NULL);
    E3->setPixmap(NULL);
    F3->setPixmap(NULL);
    G3->setPixmap(NULL);
    H3->setPixmap(NULL);
    A4->setPixmap(NULL);
    B4->setPixmap(NULL);
    C4->setPixmap(NULL);
    D4->setPixmap(NULL);
    E4->setPixmap(NULL);
    F4->setPixmap(NULL);
    G4->setPixmap(NULL);
    H4->setPixmap(NULL);
    A5->setPixmap(NULL);
    B5->setPixmap(NULL);
    C5->setPixmap(NULL);
    D5->setPixmap(NULL);
    E5->setPixmap(NULL);
    F5->setPixmap(NULL);
    G5->setPixmap(NULL);
    H5->setPixmap(NULL);
    A6->setPixmap(NULL);
    B6->setPixmap(NULL);
    C6->setPixmap(NULL);
    D6->setPixmap(NULL);
    E6->setPixmap(NULL);
    F6->setPixmap(NULL);
    G6->setPixmap(NULL);
    H6->setPixmap(NULL);

    jblanc.placerPieces( e );
    jnoir.placerPieces( e );
    Joueur_turn = true;

}



void echiquier::on_btDeplacer_clicked()
{
    // recuperation de la position actuelle et de la position voulue et affichage
    QString positionA, positionV;
    positionA = pa_ligne->currentText() + pa_col->currentText();
    positionV = pv_ligne->currentText() + pv_col->currentText();

    int y_pos=pa_col->currentText().toInt();
    int x_pos=colEnEntier(pa_ligne->currentText());
    int y_dest=pv_col->currentText().toInt();
    int x_dest=colEnEntier(pv_ligne->currentText());

    if(e.getPiece(x_pos, y_pos) != NULL)
    {
        if(e.getPiece(x_pos, y_pos)->isWhite() == Joueur_turn)
        {
            if(e.deplacement(x_pos,y_pos,x_dest,y_dest) == true)
            {
                try
                {
                // Ecriture du déplacement dans les logs
                ListeMessages->addItem(positionA+"-"+positionV);

                // Changement de tour et vérification de l'echec
                if (Joueur_turn == false)
                {
                  if(en_echec(jblanc, e.getPiece(x_dest, y_dest), e))
                      ListeMessages->addItem("Le joueur Blanc est en echec !");
                  Joueur_turn = true;
                }
                else
                {
                if(en_echec(jnoir, e.getPiece(x_dest, y_dest), e))
                       ListeMessages->addItem("Le joueur Noir est en echec !");
                Joueur_turn = false;
                }

                // transfert de l'image
                selectLab(positionV)->setPixmap(*selectLab(positionA)->pixmap());
                selectLab(positionA)->setPixmap(NULL);
                }
                catch(...)
                {
                ListeMessages->addItem("Mouvement invalide");
                }
           }
           else
              ListeMessages->addItem("Mouvement invalide : dép non autorisé");
       }
       else
          ListeMessages->addItem("Ce n'est pas votre pièce");
    }
    else
       ListeMessages->addItem("Mouvement invalide : Aucune piece trouvée");
 }


// Vérification de l'Echec
bool echiquier::en_echec(Joueur &j, Piece* p, Echiquier &e)
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


// Transformation des lettre en nombre pour les calculs
int echiquier::colEnEntier(QString s)
{
if( s == "A")
    return 1;
if( s == "B")
    return 2;
if( s == "C")
    return 3;
if( s == "D")
    return 4;
if( s == "E")
    return 5;
if( s == "F")
    return 6;
if( s == "G")
    return 7;
if( s == "H")
    return 8;

return 0;
}

// Detection du déplacement pour le mouvement des images
QLabel* echiquier::selectLab(QString s)
{
    // Malheuresement pour moi il est impossible de
    // faire un switch case avec une chaine de caractère
    // ...


    // colonne A
if(s == "A1")
    return A1;
if(s == "A2")
    return A2;
if(s == "A3")
    return A3;
if(s == "A4")
    return A4;
if(s == "A5")
    return A5;
if(s == "A6")
    return A6;
if(s == "A7")
    return A7;
if(s == "A8")
    return A8;
    // colonne B
if(s == "B1")
    return B1;
if(s == "B2")
    return B2;
if(s == "B3")
    return B3;
if(s == "B4")
    return B4;
if(s == "B5")
    return B5;
if(s == "B6")
    return B6;
if(s == "B7")
    return B7;
if(s == "B8")
    return B8;
    // colonne C
if(s == "C1")
    return C1;
if(s == "C2")
    return C2;
if(s == "C3")
    return C3;
if(s == "C4")
    return C4;
if(s == "C5")
    return C5;
if(s == "C6")
    return C6;
if(s == "C7")
    return C7;
if(s == "C8")
    return C8;
    // colonne D
if(s == "D1")
    return D1;
if(s == "D2")
    return D2;
if(s == "D3")
    return D3;
if(s == "D4")
    return D4;
if(s == "D5")
    return D5;
if(s == "D6")
    return D6;
if(s == "D7")
    return D7;
if(s == "D8")
    return D8;
    // colonne E
if(s == "E1")
    return E1;
if(s == "E2")
    return E2;
if(s == "E3")
    return E3;
if(s == "E4")
    return E4;
if(s == "E5")
    return E5;
if(s == "E6")
    return E6;
if(s == "E7")
    return E7;
if(s == "E8")
    return E8;
    // colonne F
if(s == "F1")
    return F1;
if(s == "F2")
    return F2;
if(s == "F3")
    return F3;
if(s == "F4")
    return F4;
if(s == "F5")
    return F5;
if(s == "F6")
    return F6;
if(s == "F7")
    return F7;
if(s == "F8")
    return F8;
    // colonne G
if(s == "G1")
    return G1;
if(s == "G2")
    return G2;
if(s == "G3")
    return G3;
if(s == "G4")
    return G4;
if(s == "G5")
    return G5;
if(s == "G6")
    return G6;
if(s == "G7")
    return G7;
if(s == "G8")
    return G8;
    // colonne H
if(s == "H1")
    return H1;
if(s == "H2")
    return H2;
if(s == "H3")
    return H3;
if(s == "H4")
    return H4;
if(s == "H5")
    return H5;
if(s == "H6")
    return H6;
if(s == "H7")
    return H7;
if(s == "H8")
    return H8;

}

void echiquier::on_menuRegles_activated()
{
    Regles = new QFrame();
    Regles->setWindowTitle("Règles du jeu d'échecs");
    Regles->resize(403, 466);

    btFermer = new QPushButton(Regles);
    btFermer->setText("Fermer");
    btFermer->setGeometry(QRect(300, 420, 81, 31));

    Boitedial = new QTextBrowser(Regles);
    Boitedial->setGeometry(QRect(10, 10, 381, 401));

    Boitedial->setHtml(QApplication::translate("WidgetClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Les R\303\250gles des \303\211checs</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Les \303\211checs se jouent \303\240 2 joueurs. L'un des joueurs joue avec les pi\303\250cesblanches, et l'autre joueur avec les pi\303\250ces noires. Chaque joueur a seizepi\303\250ces au d\303\251but du jeu: un Roi, une Dame, deux Tours, deux Fous, deuxCavaliers, et huit Pions. </spa"
        "n></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Le jeu se joue sur un \303\251chiquier, compos\303\251 de 64 carr\303\251s: huit lignes ethuit colonnes. Les carr\303\251s sont alternativement clairs (blancs) et de couleursombre (noirs). L'\303\251chiquier doit \303\252tre dispos\303\251 de telle sorte qu'un carr\303\251noir se trouve pour chaque joueur \303\240 l'angle inf\303\251rieur gauche. Pour aider\303\240 noter les mouvements des pi\303\250ces, chaque carr\303\251 a re\303\247u un nom. Vu du c\303\264t\303\251du joueur blanc, les lignes sont num\303\251rotees 1, 2, 3, 4, 5, 6, 7, 8; laligne la plus proche du joueur blanc est num\303\251rotee 1, et la plus \303\251loigneeporte le num\303\251ro 8. Les colonnes sont design\303\251es, de gauche \303\240 droite, a,b, c, d, e, f, g, h. Chaque carr\303\251 est rep\303\251r\303\251 par la combinaison de la lettrede sa colonne et du num\303\251ro"
        " de sa ligne. Par exemple, le carr\303\251 en bas \303\240gauche (vu du joueur blanc) est le carr\303\251 a1. </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">	Les joueurs jouent \303\240 tour de r\303\264le, en commen\303\247ant par les Blancs(le joueur qui joue avec les pi\303\250ces blanches). Pour jouer, un joueur doitd\303\251placer une pi\303\250ce vers une nouvelle case (un nouveau carr\303\251), en respectantles r\303\250gles de d\303\251placement de chacune des pi\303\250ces </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Un joueur peut </span><span style=\" font-size:8pt; font-weight:600;\">prendre</span><span style=\" font-size:8pt;\"> une pi\303\250ce de son adversaire en d\303\251pla\303\247antl'une de ses pi\303\250ces sur une case comportant une pi\303\250"
        "ce adverse. Dans cecas, la pi\303\250ce adverse captur\303\251e est retir\303\251e de l'echiquier pour le reste dela partie. (La prise n'est jamais obligatoire.) </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Au d\303\251but du jeu, la position des pi\303\250ces est la suivante:</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Sur la premi\303\250re ligne on trouve, de gauche \303\240 droite huit pi\303\250ces blanches:une Tour, un Cavalier, un Fou, la Dame blanche, le Roi blanc, un Fou,un Cavalier, une Tour. Sur la ligne 2, les huit Pions blancs. Sur la ligne7, les huit Pions noirs. Sur la ligne 8, les huit pi\303\250ces noires, de gauche \303\240droite: une Tour, un Cavalier, un Fou, la Dame noire, le Roi noir, unFou, un Cavalier, une Tour. </span></p>\n"
"<p style=\""
        " margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Notez que la Dame blanche est plac\303\251e sur une case blanche, alors quela Dame noire est plac\303\251e sur une case noire.</span></p>\n"
"<p style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">R\303\250gles de d\303\251placement des pi\303\250ces</span></p>\n"
"<p style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">La Tour</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">La Tour se d\303\251place en ligne droite, horizontalement ou verticalementd'autant de cases qu'elle le souhaite. La Tour ne peut sauter par dessusd"
        "'autres pi\303\250ces: toutes les cases entre la position de d\303\251part de la Touret sa position d'arriv\303\251e doivent \303\252tre libres. (Comme pour toutes les pi\303\250ces,lorsque la case d'arriv\303\251e de la Tour contient une pi\303\250ce adverse, celle-ciest prise. Par contre la case d'arriv\303\251e ne peut contenir une pi\303\250ce de sonpropre camp.)</span></p>\n"
"<p style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Le Fou</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Le Fou se d\303\251place en diagonale d'autant de cases qu'il le souhaite.Toutefois, le Fou ne peut sauter par dessus d'autres pi\303\250ces.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style"
        "=\" font-size:8pt;\">Notez que chaque joueur dispose d'un Fou se d\303\251pla\303\247ant sur les diagonalesblanches (compos\303\251es de cases blanches), et d'un Fou se d\303\251pla\303\247ant sur lesdiagonales noires (compos\303\251es de cases noires).</span></p>\n"
"<p style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">La Dame</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">La Dame est strat\303\251giquement parlant, la pi\303\250ce </span><span style=\" font-size:8pt; font-style:italic;\">ma\303\256tresse du jeu</span><span style=\" font-size:8pt;\">.Elle peut aussi bien se d\303\251placer comme une Tour, horizontalementou verticalement, que comme un Fou, en diagonale. </span></p>\n"
"<p style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-"
        "block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Le Cavalier</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Le d\303\251placement du Cavalier se fait en deux temps: un d\303\251placement d'unecase dans un sens vertical ou horizontal, suivi d'un d\303\251placement d'unecase selon une diagonale. On peut \303\251galement d\303\251crire le d\303\251placement du Cavaliercomme un d\303\251placement de deux cases verticalement suivi d'un d\303\251placementd'une case horizontalement (ou inversement, deux cases horizontalement,suivi d'une case verticalement). Le Cavalier est autoris\303\251 \303\240 </span><span style=\" font-size:8pt; font-style:italic;\">sauter</span><span style=\" font-size:8pt;\">par dessus une autre pi\303\250ce (amie ou ennemie) lors de son d\303\251placement.En particulier, le joueur blanc peut commencer la partie en d\303\251pla\303\247ant"
        " sonCavalier de la case b1 \303\240 la case c3. La pi\303\250ce par dessus laquelle un Cavalierpasse, reste en jeu. Comme pour les autres pi\303\250ces, un Cavalier prend unepi\303\250ce adverse en allant se placer sur la case occup\303\251e par celle-ci . </span></p>\n"
"<p style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Les Pions</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Les Pions se d\303\251placent diff\303\251remment selon qu'ils vont sur une case libreou qu'ils se d\303\251placent pour </span><span style=\" font-size:8pt; font-style:italic;\">prendre</span><span style=\" font-size:8pt;\"> une pi\303\250ce adverse. Quand unPion ne prend pas de pi\303\250ce adverse, il avance d'une case verticalement(il ne peut reculer). Toutefois, si un Pion n'a pas encore boug"
        "\303\251 depuisle d\303\251but de la partie (autrement dit, s'il est toujours sur sa ligne de d\303\251part), le Pionest autoris\303\251 \303\240 avancer verticalement de deux cases d'un coup. Par exemple,un Pion blanc en d2 peut au choix aller en d3 ou en d4. </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Quand il prend une pi\303\250ce adverse, le Pion se d\303\251place en avan\303\247ant endiagonale d'une case (il ne peut prendre en reculant). Par exemple un Pionblanc en d2 peut prendre un Cavalier noir se trouvant en e3. </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Un Pion qui atteint la huiti\303\250me ligne de l'\303\251chiquier (ligne 8 pour lesblancs, ligne 1 pour les noirs) </span><span style=\" font-size:8pt; font-style:italic;\">va \303\240 dame.</span><"
        "span style=\" font-size:8pt;\"> Le joueur qui amene l'unde ses Pions jusqu'\303\240 la huiti\303\250me ligne remplace ce Pion par une Dame,une Tour, un Cavalier ou un Fou (de meme couleur bien entendu). Habituellement,les joueurs changent leur Pion en Dame, mais ce n'est pas une obligation.Tous les autres types de pi\303\250ces sont autoris\303\251s. (Il n'est pas obligatoirede remplacer un Pion dans cette situation par une pi\303\250ce ayant ete priseauparavant. Ainsi, il est par exemple possible qu'un joueur, \303\240 un momentde la partie, poss\303\250de deux Dames...)</span></p>\n"
"<p style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">Le Roi</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Le Roi se d\303\251place d'une case dans n'importe quelle direction, horizontaleme"
        "nt,verticalement ou en diagonale. Il existe un d\303\251placement particulier effectu\303\251</span><span style=\" font-size:8pt; font-style:italic;\">simultan\303\251ment</span><span style=\" font-size:8pt;\"> par le Roi et une Tour appel\303\251 </span><span style=\" font-size:8pt; font-style:italic;\">roque</span><span style=\" font-size:8pt;\">: voir plusloin. </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Le Roi est la pi\303\250ce la plus importante du jeu, et ses d\303\251placements doivent\303\252tre effectu\303\251s de telle sorte qu'il ne soit jamais mis en \303\251chec(voir ci-dessous). </span></p>\n"
"<p style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">\303\211chec, \303\211chec et Mat </span></p>\n"
"<p style=\" margin-top:14px; margin-bottom:12px; margin-le"
        "ft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">\303\211chec</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Lorsque le Roi d'un joueur peut \303\252tre pris par une pi\303\250ce adverse, ondit qu'il est </span><span style=\" font-size:8pt; font-style:italic;\">en \303\251chec</span><span style=\" font-size:8pt;\">. Par exemple, le joueur blanc d\303\251place satour de facon \303\240 ce qu'elle se trouve en position de prendre le Roi noir,C'est \303\240 dire que si le Roi noir ne fait rien, la Tour blanche peut le prendreau tour suivant: on dit que la Tour blanche </span><span style=\" font-size:8pt; font-style:italic;\">met en \303\251chec</span><span style=\" font-size:8pt;\"> le Roinoir. La bonne r\303\250gle veut que l'on annonce \303\240 haute voix </span><span style=\" font-size:8pt; font-style:italic;\">\303\211chec</s"
        "pan><span style=\" font-size:8pt;\"> lorsquel'on met en \303\251chec le Roi adverse. </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Il est interdit de d\303\251placer l'une de ses pi\303\250ces si ce mouvement a pourcons\303\251quence que son propre Roi se trouve en \303\251chec. </span></p>\n"
"<p style=\" margin-top:14px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:600;\">\303\211chec et Mat</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Si un joueur est en \303\251chec et qu'il ne puisse effectuer de d\303\251placementpermettant de liberer son Roi de cet \303\251chec, alors il est dit</span><span style=\" font-size:8pt; font-style:italic;\">\303\251chec et mat</span><span st"
        "yle=\" font-size:8pt;\">, ou simplement mat. Le joueur qui est mat perd la partie, et son adversaire est d\303\251clar\303\251 vainqueur. </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Noter qu'il y a trois sortes de mouvement pour se sortir d'une positiond'\303\251chec: </span></p>\n"
"<ol style=\"-qt-list-indent: 1;\"><li style=\" font-size:8pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">D\303\251placer le Roi vers une case o\303\271 il ne sera plus en \303\251chec. </li>\n"
"<li style=\" font-size:8pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Prendre la pi\303\250ce responsable de la mise en \303\251chec. </li>\n"
"<li style=\" font-size:8pt;\" style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-bloc"
        "k-indent:0; text-indent:0px;\">(Ou dans le cas d'une mise en \303\251chec \"\303\240 distance\" par uneTour, un Fou ou une Dame): intercaler une pi\303\250ce entre la pi\303\250ce responsablede l'\303\251chec et le Roi. Ce type de d\303\251placement est sans effet sur une miseen \303\251chec par un Cavalier, celui-ci etant autoris\303\251 \303\240 sauter par dessus lespi\303\250ces adverses, pour se d\303\251placer ou prendre. </li></ol>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<hr />\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Ecrit par: Hans Bodlaender. Retrouvez la version compl\303\250te des r\303\250gles sur http://www.chessvariants.com/d.chess/echec.html. </span></p></body></html>", 0, QApplication::UnicodeUTF8));

    // Evenement de fermeture de la fenetre
    connect(btFermer, SIGNAL(clicked()), Regles, SLOT(close()));
    // Affichage de la fenetre
    Regles->show();
}

// Implementation de la fenetre A propos
void echiquier::on_menuApropos_activated()
{
        QMessageBox::information(this, "A propos", "<center><u>Jeu d'echec vers. 1.0</u><br>Projet de LP ACPI 2008-2009<br><br>crée avec enthousiasme par Louis Samson et Julien Monchany<br><br>[Nous tenons à signaler qu'aucun synophore n'a été maltraité durant ce projet]</center>");

}
