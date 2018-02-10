/********************************************************************************
** Form generated from reading ui file 'echiquier.ui'
**
** Created: Thu 15. Jan 16:17:19 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ECHIQUIER_H
#define UI_ECHIQUIER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_echiquier
{
public:
    QAction *menuNvpartie;
    QAction *menuImprimer;
    QAction *menuQuitter;
    QAction *menuRegles;
    QAction *menuApropos;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *m_quitter;
    QComboBox *pa_ligne;
    QComboBox *pa_col;
    QComboBox *pv_ligne;
    QComboBox *pv_col;
    QLabel *label;
    QLabel *label_2;
    QListWidget *ListeMessages;
    QLabel *label_3;
    QPushButton *btDeplacer;
    QWidget *layoutWidget;
    QGridLayout *Layoutprincipal;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_12;
    QLabel *A8;
    QLabel *B8;
    QLabel *C8;
    QLabel *D8;
    QLabel *E8;
    QLabel *F8;
    QLabel *G8;
    QLabel *H8;
    QLabel *label_13;
    QLabel *A7;
    QLabel *B7;
    QLabel *C7;
    QLabel *D7;
    QLabel *E7;
    QLabel *F7;
    QLabel *G7;
    QLabel *H7;
    QLabel *label_14;
    QLabel *A6;
    QLabel *B6;
    QLabel *C6;
    QLabel *D6;
    QLabel *E6;
    QLabel *F6;
    QLabel *G6;
    QLabel *H6;
    QLabel *label_15;
    QLabel *A5;
    QLabel *B5;
    QLabel *C5;
    QLabel *D5;
    QLabel *E5;
    QLabel *F5;
    QLabel *G5;
    QLabel *H5;
    QLabel *label_16;
    QLabel *A4;
    QLabel *B4;
    QLabel *C4;
    QLabel *D4;
    QLabel *E4;
    QLabel *F4;
    QLabel *G4;
    QLabel *H4;
    QLabel *label_17;
    QLabel *A3;
    QLabel *B3;
    QLabel *C3;
    QLabel *D3;
    QLabel *E3;
    QLabel *F3;
    QLabel *G3;
    QLabel *H3;
    QLabel *label_18;
    QLabel *A2;
    QLabel *B2;
    QLabel *C2;
    QLabel *D2;
    QLabel *E2;
    QLabel *F2;
    QLabel *G2;
    QLabel *H2;
    QLabel *label_19;
    QLabel *B1;
    QLabel *C1;
    QLabel *D1;
    QLabel *E1;
    QLabel *F1;
    QLabel *G1;
    QLabel *H1;
    QLabel *A1;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuAide;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *echiquier)
    {
    if (echiquier->objectName().isEmpty())
        echiquier->setObjectName(QString::fromUtf8("echiquier"));
    echiquier->setWindowModality(Qt::NonModal);
    echiquier->resize(1000, 720);
    QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(echiquier->sizePolicy().hasHeightForWidth());
    echiquier->setSizePolicy(sizePolicy);
    echiquier->setMinimumSize(QSize(955, 700));
    echiquier->setMaximumSize(QSize(1200, 1000));
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/Images/cavalierblanc.png")), QIcon::Normal, QIcon::Off);
    echiquier->setWindowIcon(icon);
    menuNvpartie = new QAction(echiquier);
    menuNvpartie->setObjectName(QString::fromUtf8("menuNvpartie"));
    menuImprimer = new QAction(echiquier);
    menuImprimer->setObjectName(QString::fromUtf8("menuImprimer"));
    menuQuitter = new QAction(echiquier);
    menuQuitter->setObjectName(QString::fromUtf8("menuQuitter"));
    menuRegles = new QAction(echiquier);
    menuRegles->setObjectName(QString::fromUtf8("menuRegles"));
    menuApropos = new QAction(echiquier);
    menuApropos->setObjectName(QString::fromUtf8("menuApropos"));
    centralwidget = new QWidget(echiquier);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    groupBox = new QGroupBox(centralwidget);
    groupBox->setObjectName(QString::fromUtf8("groupBox"));
    groupBox->setGeometry(QRect(700, 10, 261, 631));
    m_quitter = new QPushButton(groupBox);
    m_quitter->setObjectName(QString::fromUtf8("m_quitter"));
    m_quitter->setGeometry(QRect(120, 570, 131, 51));
    m_quitter->setCursor(QCursor(Qt::PointingHandCursor));
    pa_ligne = new QComboBox(groupBox);
    pa_ligne->setObjectName(QString::fromUtf8("pa_ligne"));
    pa_ligne->setGeometry(QRect(30, 60, 41, 22));
    pa_ligne->setCursor(QCursor(Qt::PointingHandCursor));
    pa_col = new QComboBox(groupBox);
    pa_col->setObjectName(QString::fromUtf8("pa_col"));
    pa_col->setGeometry(QRect(80, 60, 41, 22));
    pa_col->setCursor(QCursor(Qt::PointingHandCursor));
    pv_ligne = new QComboBox(groupBox);
    pv_ligne->setObjectName(QString::fromUtf8("pv_ligne"));
    pv_ligne->setGeometry(QRect(30, 120, 41, 22));
    pv_ligne->setCursor(QCursor(Qt::PointingHandCursor));
    pv_col = new QComboBox(groupBox);
    pv_col->setObjectName(QString::fromUtf8("pv_col"));
    pv_col->setGeometry(QRect(80, 120, 41, 22));
    pv_col->setCursor(QCursor(Qt::PointingHandCursor));
    label = new QLabel(groupBox);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(20, 30, 121, 16));
    label_2 = new QLabel(groupBox);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(20, 100, 121, 16));
    ListeMessages = new QListWidget(groupBox);
    ListeMessages->setObjectName(QString::fromUtf8("ListeMessages"));
    ListeMessages->setGeometry(QRect(20, 220, 221, 341));
    label_3 = new QLabel(groupBox);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(30, 190, 81, 16));
    btDeplacer = new QPushButton(groupBox);
    btDeplacer->setObjectName(QString::fromUtf8("btDeplacer"));
    btDeplacer->setGeometry(QRect(150, 150, 75, 23));
    btDeplacer->setCursor(QCursor(Qt::PointingHandCursor));
    layoutWidget = new QWidget(centralwidget);
    layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
    layoutWidget->setGeometry(QRect(0, 0, 681, 651));
    Layoutprincipal = new QGridLayout(layoutWidget);
    Layoutprincipal->setSpacing(0);
    Layoutprincipal->setObjectName(QString::fromUtf8("Layoutprincipal"));
    Layoutprincipal->setContentsMargins(0, 1, 0, 1);
    label_4 = new QLabel(layoutWidget);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    QFont font;
    font.setPointSize(15);
    font.setBold(true);
    font.setWeight(75);
    label_4->setFont(font);
    label_4->setTextFormat(Qt::AutoText);
    label_4->setAlignment(Qt::AlignCenter);

    Layoutprincipal->addWidget(label_4, 0, 1, 1, 1);

    label_5 = new QLabel(layoutWidget);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setFont(font);
    label_5->setTextFormat(Qt::AutoText);
    label_5->setAlignment(Qt::AlignCenter);

    Layoutprincipal->addWidget(label_5, 0, 2, 1, 1);

    label_11 = new QLabel(layoutWidget);
    label_11->setObjectName(QString::fromUtf8("label_11"));
    label_11->setFont(font);
    label_11->setTextFormat(Qt::AutoText);
    label_11->setAlignment(Qt::AlignCenter);

    Layoutprincipal->addWidget(label_11, 0, 3, 1, 1);

    label_10 = new QLabel(layoutWidget);
    label_10->setObjectName(QString::fromUtf8("label_10"));
    label_10->setFont(font);
    label_10->setTextFormat(Qt::AutoText);
    label_10->setAlignment(Qt::AlignCenter);

    Layoutprincipal->addWidget(label_10, 0, 4, 1, 1);

    label_9 = new QLabel(layoutWidget);
    label_9->setObjectName(QString::fromUtf8("label_9"));
    label_9->setFont(font);
    label_9->setTextFormat(Qt::AutoText);
    label_9->setAlignment(Qt::AlignCenter);

    Layoutprincipal->addWidget(label_9, 0, 5, 1, 1);

    label_6 = new QLabel(layoutWidget);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setFont(font);
    label_6->setTextFormat(Qt::AutoText);
    label_6->setAlignment(Qt::AlignCenter);

    Layoutprincipal->addWidget(label_6, 0, 6, 1, 1);

    label_8 = new QLabel(layoutWidget);
    label_8->setObjectName(QString::fromUtf8("label_8"));
    label_8->setFont(font);
    label_8->setTextFormat(Qt::AutoText);
    label_8->setAlignment(Qt::AlignCenter);

    Layoutprincipal->addWidget(label_8, 0, 7, 1, 1);

    label_7 = new QLabel(layoutWidget);
    label_7->setObjectName(QString::fromUtf8("label_7"));
    label_7->setFont(font);
    label_7->setTextFormat(Qt::AutoText);
    label_7->setAlignment(Qt::AlignCenter);

    Layoutprincipal->addWidget(label_7, 0, 8, 1, 1);

    label_12 = new QLabel(layoutWidget);
    label_12->setObjectName(QString::fromUtf8("label_12"));
    label_12->setFont(font);
    label_12->setTextFormat(Qt::AutoText);
    label_12->setAlignment(Qt::AlignCenter);

    Layoutprincipal->addWidget(label_12, 1, 0, 1, 1);

    A8 = new QLabel(layoutWidget);
    A8->setObjectName(QString::fromUtf8("A8"));
    QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
    sizePolicy1.setHorizontalStretch(0);
    sizePolicy1.setVerticalStretch(0);
    sizePolicy1.setHeightForWidth(A8->sizePolicy().hasHeightForWidth());
    A8->setSizePolicy(sizePolicy1);
    A8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
    A8->setFrameShape(QFrame::StyledPanel);
    A8->setLineWidth(2);
    A8->setScaledContents(true);

    Layoutprincipal->addWidget(A8, 1, 1, 1, 1);

    B8 = new QLabel(layoutWidget);
    B8->setObjectName(QString::fromUtf8("B8"));
    sizePolicy1.setHeightForWidth(B8->sizePolicy().hasHeightForWidth());
    B8->setSizePolicy(sizePolicy1);
    B8->setFrameShape(QFrame::StyledPanel);
    B8->setScaledContents(true);

    Layoutprincipal->addWidget(B8, 1, 2, 1, 1);

    C8 = new QLabel(layoutWidget);
    C8->setObjectName(QString::fromUtf8("C8"));
    sizePolicy1.setHeightForWidth(C8->sizePolicy().hasHeightForWidth());
    C8->setSizePolicy(sizePolicy1);
    C8->setFrameShape(QFrame::StyledPanel);
    C8->setScaledContents(true);

    Layoutprincipal->addWidget(C8, 1, 3, 1, 1);

    D8 = new QLabel(layoutWidget);
    D8->setObjectName(QString::fromUtf8("D8"));
    sizePolicy1.setHeightForWidth(D8->sizePolicy().hasHeightForWidth());
    D8->setSizePolicy(sizePolicy1);
    D8->setFrameShape(QFrame::StyledPanel);
    D8->setScaledContents(true);

    Layoutprincipal->addWidget(D8, 1, 4, 1, 1);

    E8 = new QLabel(layoutWidget);
    E8->setObjectName(QString::fromUtf8("E8"));
    sizePolicy1.setHeightForWidth(E8->sizePolicy().hasHeightForWidth());
    E8->setSizePolicy(sizePolicy1);
    E8->setFrameShape(QFrame::StyledPanel);
    E8->setScaledContents(true);

    Layoutprincipal->addWidget(E8, 1, 5, 1, 1);

    F8 = new QLabel(layoutWidget);
    F8->setObjectName(QString::fromUtf8("F8"));
    sizePolicy1.setHeightForWidth(F8->sizePolicy().hasHeightForWidth());
    F8->setSizePolicy(sizePolicy1);
    F8->setFrameShape(QFrame::StyledPanel);
    F8->setScaledContents(true);

    Layoutprincipal->addWidget(F8, 1, 6, 1, 1);

    G8 = new QLabel(layoutWidget);
    G8->setObjectName(QString::fromUtf8("G8"));
    sizePolicy1.setHeightForWidth(G8->sizePolicy().hasHeightForWidth());
    G8->setSizePolicy(sizePolicy1);
    G8->setFrameShape(QFrame::StyledPanel);
    G8->setScaledContents(true);

    Layoutprincipal->addWidget(G8, 1, 7, 1, 1);

    H8 = new QLabel(layoutWidget);
    H8->setObjectName(QString::fromUtf8("H8"));
    sizePolicy1.setHeightForWidth(H8->sizePolicy().hasHeightForWidth());
    H8->setSizePolicy(sizePolicy1);
    H8->setFrameShape(QFrame::StyledPanel);
    H8->setScaledContents(true);

    Layoutprincipal->addWidget(H8, 1, 8, 1, 1);

    label_13 = new QLabel(layoutWidget);
    label_13->setObjectName(QString::fromUtf8("label_13"));
    label_13->setFont(font);
    label_13->setTextFormat(Qt::AutoText);
    label_13->setAlignment(Qt::AlignCenter);

    Layoutprincipal->addWidget(label_13, 2, 0, 1, 1);

    A7 = new QLabel(layoutWidget);
    A7->setObjectName(QString::fromUtf8("A7"));
    sizePolicy1.setHeightForWidth(A7->sizePolicy().hasHeightForWidth());
    A7->setSizePolicy(sizePolicy1);
    A7->setFrameShape(QFrame::StyledPanel);
    A7->setScaledContents(true);

    Layoutprincipal->addWidget(A7, 2, 1, 1, 1);

    B7 = new QLabel(layoutWidget);
    B7->setObjectName(QString::fromUtf8("B7"));
    sizePolicy1.setHeightForWidth(B7->sizePolicy().hasHeightForWidth());
    B7->setSizePolicy(sizePolicy1);
    B7->setFrameShape(QFrame::StyledPanel);
    B7->setScaledContents(true);

    Layoutprincipal->addWidget(B7, 2, 2, 1, 1);

    C7 = new QLabel(layoutWidget);
    C7->setObjectName(QString::fromUtf8("C7"));
    sizePolicy1.setHeightForWidth(C7->sizePolicy().hasHeightForWidth());
    C7->setSizePolicy(sizePolicy1);
    C7->setFrameShape(QFrame::StyledPanel);
    C7->setScaledContents(true);

    Layoutprincipal->addWidget(C7, 2, 3, 1, 1);

    D7 = new QLabel(layoutWidget);
    D7->setObjectName(QString::fromUtf8("D7"));
    sizePolicy1.setHeightForWidth(D7->sizePolicy().hasHeightForWidth());
    D7->setSizePolicy(sizePolicy1);
    D7->setFrameShape(QFrame::StyledPanel);
    D7->setScaledContents(true);

    Layoutprincipal->addWidget(D7, 2, 4, 1, 1);

    E7 = new QLabel(layoutWidget);
    E7->setObjectName(QString::fromUtf8("E7"));
    sizePolicy1.setHeightForWidth(E7->sizePolicy().hasHeightForWidth());
    E7->setSizePolicy(sizePolicy1);
    E7->setFrameShape(QFrame::StyledPanel);
    E7->setScaledContents(true);

    Layoutprincipal->addWidget(E7, 2, 5, 1, 1);

    F7 = new QLabel(layoutWidget);
    F7->setObjectName(QString::fromUtf8("F7"));
    sizePolicy1.setHeightForWidth(F7->sizePolicy().hasHeightForWidth());
    F7->setSizePolicy(sizePolicy1);
    F7->setFrameShape(QFrame::StyledPanel);
    F7->setScaledContents(true);

    Layoutprincipal->addWidget(F7, 2, 6, 1, 1);

    G7 = new QLabel(layoutWidget);
    G7->setObjectName(QString::fromUtf8("G7"));
    sizePolicy1.setHeightForWidth(G7->sizePolicy().hasHeightForWidth());
    G7->setSizePolicy(sizePolicy1);
    G7->setFrameShape(QFrame::StyledPanel);
    G7->setScaledContents(true);

    Layoutprincipal->addWidget(G7, 2, 7, 1, 1);

    H7 = new QLabel(layoutWidget);
    H7->setObjectName(QString::fromUtf8("H7"));
    sizePolicy1.setHeightForWidth(H7->sizePolicy().hasHeightForWidth());
    H7->setSizePolicy(sizePolicy1);
    H7->setFrameShape(QFrame::StyledPanel);
    H7->setScaledContents(true);

    Layoutprincipal->addWidget(H7, 2, 8, 1, 1);

    label_14 = new QLabel(layoutWidget);
    label_14->setObjectName(QString::fromUtf8("label_14"));
    label_14->setFont(font);
    label_14->setTextFormat(Qt::AutoText);
    label_14->setAlignment(Qt::AlignCenter);

    Layoutprincipal->addWidget(label_14, 3, 0, 1, 1);

    A6 = new QLabel(layoutWidget);
    A6->setObjectName(QString::fromUtf8("A6"));
    sizePolicy1.setHeightForWidth(A6->sizePolicy().hasHeightForWidth());
    A6->setSizePolicy(sizePolicy1);
    A6->setFrameShape(QFrame::StyledPanel);
    A6->setScaledContents(true);

    Layoutprincipal->addWidget(A6, 3, 1, 1, 1);

    B6 = new QLabel(layoutWidget);
    B6->setObjectName(QString::fromUtf8("B6"));
    sizePolicy1.setHeightForWidth(B6->sizePolicy().hasHeightForWidth());
    B6->setSizePolicy(sizePolicy1);
    B6->setFrameShape(QFrame::StyledPanel);
    B6->setScaledContents(true);

    Layoutprincipal->addWidget(B6, 3, 2, 1, 1);

    C6 = new QLabel(layoutWidget);
    C6->setObjectName(QString::fromUtf8("C6"));
    sizePolicy1.setHeightForWidth(C6->sizePolicy().hasHeightForWidth());
    C6->setSizePolicy(sizePolicy1);
    C6->setFrameShape(QFrame::StyledPanel);
    C6->setScaledContents(true);

    Layoutprincipal->addWidget(C6, 3, 3, 1, 1);

    D6 = new QLabel(layoutWidget);
    D6->setObjectName(QString::fromUtf8("D6"));
    sizePolicy1.setHeightForWidth(D6->sizePolicy().hasHeightForWidth());
    D6->setSizePolicy(sizePolicy1);
    D6->setFrameShape(QFrame::StyledPanel);
    D6->setScaledContents(true);

    Layoutprincipal->addWidget(D6, 3, 4, 1, 1);

    E6 = new QLabel(layoutWidget);
    E6->setObjectName(QString::fromUtf8("E6"));
    sizePolicy1.setHeightForWidth(E6->sizePolicy().hasHeightForWidth());
    E6->setSizePolicy(sizePolicy1);
    E6->setFrameShape(QFrame::StyledPanel);
    E6->setScaledContents(true);

    Layoutprincipal->addWidget(E6, 3, 5, 1, 1);

    F6 = new QLabel(layoutWidget);
    F6->setObjectName(QString::fromUtf8("F6"));
    sizePolicy1.setHeightForWidth(F6->sizePolicy().hasHeightForWidth());
    F6->setSizePolicy(sizePolicy1);
    F6->setFrameShape(QFrame::StyledPanel);
    F6->setScaledContents(true);

    Layoutprincipal->addWidget(F6, 3, 6, 1, 1);

    G6 = new QLabel(layoutWidget);
    G6->setObjectName(QString::fromUtf8("G6"));
    sizePolicy1.setHeightForWidth(G6->sizePolicy().hasHeightForWidth());
    G6->setSizePolicy(sizePolicy1);
    G6->setFrameShape(QFrame::StyledPanel);
    G6->setScaledContents(true);

    Layoutprincipal->addWidget(G6, 3, 7, 1, 1);

    H6 = new QLabel(layoutWidget);
    H6->setObjectName(QString::fromUtf8("H6"));
    sizePolicy1.setHeightForWidth(H6->sizePolicy().hasHeightForWidth());
    H6->setSizePolicy(sizePolicy1);
    H6->setFrameShape(QFrame::StyledPanel);
    H6->setScaledContents(true);

    Layoutprincipal->addWidget(H6, 3, 8, 1, 1);

    label_15 = new QLabel(layoutWidget);
    label_15->setObjectName(QString::fromUtf8("label_15"));
    label_15->setFont(font);
    label_15->setTextFormat(Qt::AutoText);
    label_15->setAlignment(Qt::AlignCenter);

    Layoutprincipal->addWidget(label_15, 4, 0, 1, 1);

    A5 = new QLabel(layoutWidget);
    A5->setObjectName(QString::fromUtf8("A5"));
    sizePolicy1.setHeightForWidth(A5->sizePolicy().hasHeightForWidth());
    A5->setSizePolicy(sizePolicy1);
    A5->setFrameShape(QFrame::StyledPanel);
    A5->setScaledContents(true);

    Layoutprincipal->addWidget(A5, 4, 1, 1, 1);

    B5 = new QLabel(layoutWidget);
    B5->setObjectName(QString::fromUtf8("B5"));
    sizePolicy1.setHeightForWidth(B5->sizePolicy().hasHeightForWidth());
    B5->setSizePolicy(sizePolicy1);
    B5->setFrameShape(QFrame::StyledPanel);
    B5->setScaledContents(true);

    Layoutprincipal->addWidget(B5, 4, 2, 1, 1);

    C5 = new QLabel(layoutWidget);
    C5->setObjectName(QString::fromUtf8("C5"));
    sizePolicy1.setHeightForWidth(C5->sizePolicy().hasHeightForWidth());
    C5->setSizePolicy(sizePolicy1);
    C5->setFrameShape(QFrame::StyledPanel);
    C5->setScaledContents(true);

    Layoutprincipal->addWidget(C5, 4, 3, 1, 1);

    D5 = new QLabel(layoutWidget);
    D5->setObjectName(QString::fromUtf8("D5"));
    sizePolicy1.setHeightForWidth(D5->sizePolicy().hasHeightForWidth());
    D5->setSizePolicy(sizePolicy1);
    D5->setFrameShape(QFrame::StyledPanel);
    D5->setScaledContents(true);

    Layoutprincipal->addWidget(D5, 4, 4, 1, 1);

    E5 = new QLabel(layoutWidget);
    E5->setObjectName(QString::fromUtf8("E5"));
    sizePolicy1.setHeightForWidth(E5->sizePolicy().hasHeightForWidth());
    E5->setSizePolicy(sizePolicy1);
    E5->setFrameShape(QFrame::StyledPanel);
    E5->setScaledContents(true);

    Layoutprincipal->addWidget(E5, 4, 5, 1, 1);

    F5 = new QLabel(layoutWidget);
    F5->setObjectName(QString::fromUtf8("F5"));
    sizePolicy1.setHeightForWidth(F5->sizePolicy().hasHeightForWidth());
    F5->setSizePolicy(sizePolicy1);
    F5->setFrameShape(QFrame::StyledPanel);
    F5->setScaledContents(true);

    Layoutprincipal->addWidget(F5, 4, 6, 1, 1);

    G5 = new QLabel(layoutWidget);
    G5->setObjectName(QString::fromUtf8("G5"));
    sizePolicy1.setHeightForWidth(G5->sizePolicy().hasHeightForWidth());
    G5->setSizePolicy(sizePolicy1);
    G5->setFrameShape(QFrame::StyledPanel);
    G5->setScaledContents(true);

    Layoutprincipal->addWidget(G5, 4, 7, 1, 1);

    H5 = new QLabel(layoutWidget);
    H5->setObjectName(QString::fromUtf8("H5"));
    sizePolicy1.setHeightForWidth(H5->sizePolicy().hasHeightForWidth());
    H5->setSizePolicy(sizePolicy1);
    H5->setFrameShape(QFrame::StyledPanel);
    H5->setScaledContents(true);

    Layoutprincipal->addWidget(H5, 4, 8, 1, 1);

    label_16 = new QLabel(layoutWidget);
    label_16->setObjectName(QString::fromUtf8("label_16"));
    label_16->setFont(font);
    label_16->setTextFormat(Qt::AutoText);
    label_16->setAlignment(Qt::AlignCenter);

    Layoutprincipal->addWidget(label_16, 5, 0, 1, 1);

    A4 = new QLabel(layoutWidget);
    A4->setObjectName(QString::fromUtf8("A4"));
    sizePolicy1.setHeightForWidth(A4->sizePolicy().hasHeightForWidth());
    A4->setSizePolicy(sizePolicy1);
    A4->setFrameShape(QFrame::StyledPanel);
    A4->setScaledContents(true);

    Layoutprincipal->addWidget(A4, 5, 1, 1, 1);

    B4 = new QLabel(layoutWidget);
    B4->setObjectName(QString::fromUtf8("B4"));
    sizePolicy1.setHeightForWidth(B4->sizePolicy().hasHeightForWidth());
    B4->setSizePolicy(sizePolicy1);
    B4->setFrameShape(QFrame::StyledPanel);
    B4->setScaledContents(true);

    Layoutprincipal->addWidget(B4, 5, 2, 1, 1);

    C4 = new QLabel(layoutWidget);
    C4->setObjectName(QString::fromUtf8("C4"));
    sizePolicy1.setHeightForWidth(C4->sizePolicy().hasHeightForWidth());
    C4->setSizePolicy(sizePolicy1);
    C4->setFrameShape(QFrame::StyledPanel);
    C4->setScaledContents(true);

    Layoutprincipal->addWidget(C4, 5, 3, 1, 1);

    D4 = new QLabel(layoutWidget);
    D4->setObjectName(QString::fromUtf8("D4"));
    sizePolicy1.setHeightForWidth(D4->sizePolicy().hasHeightForWidth());
    D4->setSizePolicy(sizePolicy1);
    D4->setFrameShape(QFrame::StyledPanel);
    D4->setScaledContents(true);

    Layoutprincipal->addWidget(D4, 5, 4, 1, 1);

    E4 = new QLabel(layoutWidget);
    E4->setObjectName(QString::fromUtf8("E4"));
    sizePolicy1.setHeightForWidth(E4->sizePolicy().hasHeightForWidth());
    E4->setSizePolicy(sizePolicy1);
    E4->setFrameShape(QFrame::StyledPanel);
    E4->setScaledContents(true);

    Layoutprincipal->addWidget(E4, 5, 5, 1, 1);

    F4 = new QLabel(layoutWidget);
    F4->setObjectName(QString::fromUtf8("F4"));
    sizePolicy1.setHeightForWidth(F4->sizePolicy().hasHeightForWidth());
    F4->setSizePolicy(sizePolicy1);
    F4->setFrameShape(QFrame::StyledPanel);
    F4->setScaledContents(true);

    Layoutprincipal->addWidget(F4, 5, 6, 1, 1);

    G4 = new QLabel(layoutWidget);
    G4->setObjectName(QString::fromUtf8("G4"));
    sizePolicy1.setHeightForWidth(G4->sizePolicy().hasHeightForWidth());
    G4->setSizePolicy(sizePolicy1);
    G4->setFrameShape(QFrame::StyledPanel);
    G4->setScaledContents(true);

    Layoutprincipal->addWidget(G4, 5, 7, 1, 1);

    H4 = new QLabel(layoutWidget);
    H4->setObjectName(QString::fromUtf8("H4"));
    sizePolicy1.setHeightForWidth(H4->sizePolicy().hasHeightForWidth());
    H4->setSizePolicy(sizePolicy1);
    H4->setFrameShape(QFrame::StyledPanel);
    H4->setScaledContents(true);

    Layoutprincipal->addWidget(H4, 5, 8, 1, 1);

    label_17 = new QLabel(layoutWidget);
    label_17->setObjectName(QString::fromUtf8("label_17"));
    label_17->setFont(font);
    label_17->setTextFormat(Qt::AutoText);
    label_17->setAlignment(Qt::AlignCenter);

    Layoutprincipal->addWidget(label_17, 6, 0, 1, 1);

    A3 = new QLabel(layoutWidget);
    A3->setObjectName(QString::fromUtf8("A3"));
    sizePolicy1.setHeightForWidth(A3->sizePolicy().hasHeightForWidth());
    A3->setSizePolicy(sizePolicy1);
    A3->setFrameShape(QFrame::StyledPanel);
    A3->setScaledContents(true);

    Layoutprincipal->addWidget(A3, 6, 1, 1, 1);

    B3 = new QLabel(layoutWidget);
    B3->setObjectName(QString::fromUtf8("B3"));
    sizePolicy1.setHeightForWidth(B3->sizePolicy().hasHeightForWidth());
    B3->setSizePolicy(sizePolicy1);
    B3->setFrameShape(QFrame::StyledPanel);
    B3->setScaledContents(true);

    Layoutprincipal->addWidget(B3, 6, 2, 1, 1);

    C3 = new QLabel(layoutWidget);
    C3->setObjectName(QString::fromUtf8("C3"));
    sizePolicy1.setHeightForWidth(C3->sizePolicy().hasHeightForWidth());
    C3->setSizePolicy(sizePolicy1);
    C3->setFrameShape(QFrame::StyledPanel);
    C3->setScaledContents(true);

    Layoutprincipal->addWidget(C3, 6, 3, 1, 1);

    D3 = new QLabel(layoutWidget);
    D3->setObjectName(QString::fromUtf8("D3"));
    sizePolicy1.setHeightForWidth(D3->sizePolicy().hasHeightForWidth());
    D3->setSizePolicy(sizePolicy1);
    D3->setFrameShape(QFrame::StyledPanel);
    D3->setTextFormat(Qt::PlainText);
    D3->setScaledContents(false);

    Layoutprincipal->addWidget(D3, 6, 4, 1, 1);

    E3 = new QLabel(layoutWidget);
    E3->setObjectName(QString::fromUtf8("E3"));
    sizePolicy1.setHeightForWidth(E3->sizePolicy().hasHeightForWidth());
    E3->setSizePolicy(sizePolicy1);
    E3->setFrameShape(QFrame::StyledPanel);
    E3->setScaledContents(true);

    Layoutprincipal->addWidget(E3, 6, 5, 1, 1);

    F3 = new QLabel(layoutWidget);
    F3->setObjectName(QString::fromUtf8("F3"));
    sizePolicy1.setHeightForWidth(F3->sizePolicy().hasHeightForWidth());
    F3->setSizePolicy(sizePolicy1);
    F3->setFrameShape(QFrame::StyledPanel);
    F3->setScaledContents(true);

    Layoutprincipal->addWidget(F3, 6, 6, 1, 1);

    G3 = new QLabel(layoutWidget);
    G3->setObjectName(QString::fromUtf8("G3"));
    sizePolicy1.setHeightForWidth(G3->sizePolicy().hasHeightForWidth());
    G3->setSizePolicy(sizePolicy1);
    G3->setFrameShape(QFrame::StyledPanel);
    G3->setScaledContents(true);

    Layoutprincipal->addWidget(G3, 6, 7, 1, 1);

    H3 = new QLabel(layoutWidget);
    H3->setObjectName(QString::fromUtf8("H3"));
    sizePolicy1.setHeightForWidth(H3->sizePolicy().hasHeightForWidth());
    H3->setSizePolicy(sizePolicy1);
    H3->setFrameShape(QFrame::StyledPanel);
    H3->setScaledContents(true);

    Layoutprincipal->addWidget(H3, 6, 8, 1, 1);

    label_18 = new QLabel(layoutWidget);
    label_18->setObjectName(QString::fromUtf8("label_18"));
    label_18->setFont(font);
    label_18->setTextFormat(Qt::AutoText);
    label_18->setAlignment(Qt::AlignCenter);

    Layoutprincipal->addWidget(label_18, 7, 0, 1, 1);

    A2 = new QLabel(layoutWidget);
    A2->setObjectName(QString::fromUtf8("A2"));
    sizePolicy1.setHeightForWidth(A2->sizePolicy().hasHeightForWidth());
    A2->setSizePolicy(sizePolicy1);
    A2->setFrameShape(QFrame::StyledPanel);
    A2->setScaledContents(true);

    Layoutprincipal->addWidget(A2, 7, 1, 1, 1);

    B2 = new QLabel(layoutWidget);
    B2->setObjectName(QString::fromUtf8("B2"));
    sizePolicy1.setHeightForWidth(B2->sizePolicy().hasHeightForWidth());
    B2->setSizePolicy(sizePolicy1);
    B2->setFrameShape(QFrame::StyledPanel);
    B2->setScaledContents(true);

    Layoutprincipal->addWidget(B2, 7, 2, 1, 1);

    C2 = new QLabel(layoutWidget);
    C2->setObjectName(QString::fromUtf8("C2"));
    sizePolicy1.setHeightForWidth(C2->sizePolicy().hasHeightForWidth());
    C2->setSizePolicy(sizePolicy1);
    C2->setFrameShape(QFrame::StyledPanel);
    C2->setScaledContents(true);

    Layoutprincipal->addWidget(C2, 7, 3, 1, 1);

    D2 = new QLabel(layoutWidget);
    D2->setObjectName(QString::fromUtf8("D2"));
    sizePolicy1.setHeightForWidth(D2->sizePolicy().hasHeightForWidth());
    D2->setSizePolicy(sizePolicy1);
    D2->setFrameShape(QFrame::StyledPanel);
    D2->setScaledContents(true);

    Layoutprincipal->addWidget(D2, 7, 4, 1, 1);

    E2 = new QLabel(layoutWidget);
    E2->setObjectName(QString::fromUtf8("E2"));
    sizePolicy1.setHeightForWidth(E2->sizePolicy().hasHeightForWidth());
    E2->setSizePolicy(sizePolicy1);
    E2->setFrameShape(QFrame::StyledPanel);
    E2->setScaledContents(true);

    Layoutprincipal->addWidget(E2, 7, 5, 1, 1);

    F2 = new QLabel(layoutWidget);
    F2->setObjectName(QString::fromUtf8("F2"));
    sizePolicy1.setHeightForWidth(F2->sizePolicy().hasHeightForWidth());
    F2->setSizePolicy(sizePolicy1);
    F2->setFrameShape(QFrame::StyledPanel);
    F2->setScaledContents(true);

    Layoutprincipal->addWidget(F2, 7, 6, 1, 1);

    G2 = new QLabel(layoutWidget);
    G2->setObjectName(QString::fromUtf8("G2"));
    sizePolicy1.setHeightForWidth(G2->sizePolicy().hasHeightForWidth());
    G2->setSizePolicy(sizePolicy1);
    G2->setFrameShape(QFrame::StyledPanel);
    G2->setScaledContents(true);

    Layoutprincipal->addWidget(G2, 7, 7, 1, 1);

    H2 = new QLabel(layoutWidget);
    H2->setObjectName(QString::fromUtf8("H2"));
    sizePolicy1.setHeightForWidth(H2->sizePolicy().hasHeightForWidth());
    H2->setSizePolicy(sizePolicy1);
    H2->setFrameShape(QFrame::StyledPanel);
    H2->setScaledContents(true);

    Layoutprincipal->addWidget(H2, 7, 8, 1, 1);

    label_19 = new QLabel(layoutWidget);
    label_19->setObjectName(QString::fromUtf8("label_19"));
    label_19->setFont(font);
    label_19->setTextFormat(Qt::AutoText);
    label_19->setAlignment(Qt::AlignCenter);

    Layoutprincipal->addWidget(label_19, 8, 0, 1, 1);

    B1 = new QLabel(layoutWidget);
    B1->setObjectName(QString::fromUtf8("B1"));
    sizePolicy1.setHeightForWidth(B1->sizePolicy().hasHeightForWidth());
    B1->setSizePolicy(sizePolicy1);
    B1->setFrameShape(QFrame::StyledPanel);
    B1->setScaledContents(true);

    Layoutprincipal->addWidget(B1, 8, 2, 1, 1);

    C1 = new QLabel(layoutWidget);
    C1->setObjectName(QString::fromUtf8("C1"));
    sizePolicy1.setHeightForWidth(C1->sizePolicy().hasHeightForWidth());
    C1->setSizePolicy(sizePolicy1);
    C1->setFrameShape(QFrame::StyledPanel);
    C1->setScaledContents(true);

    Layoutprincipal->addWidget(C1, 8, 3, 1, 1);

    D1 = new QLabel(layoutWidget);
    D1->setObjectName(QString::fromUtf8("D1"));
    sizePolicy1.setHeightForWidth(D1->sizePolicy().hasHeightForWidth());
    D1->setSizePolicy(sizePolicy1);
    D1->setFrameShape(QFrame::StyledPanel);
    D1->setScaledContents(true);

    Layoutprincipal->addWidget(D1, 8, 4, 1, 1);

    E1 = new QLabel(layoutWidget);
    E1->setObjectName(QString::fromUtf8("E1"));
    sizePolicy1.setHeightForWidth(E1->sizePolicy().hasHeightForWidth());
    E1->setSizePolicy(sizePolicy1);
    E1->setFrameShape(QFrame::StyledPanel);
    E1->setScaledContents(true);

    Layoutprincipal->addWidget(E1, 8, 5, 1, 1);

    F1 = new QLabel(layoutWidget);
    F1->setObjectName(QString::fromUtf8("F1"));
    sizePolicy1.setHeightForWidth(F1->sizePolicy().hasHeightForWidth());
    F1->setSizePolicy(sizePolicy1);
    F1->setFrameShape(QFrame::StyledPanel);
    F1->setScaledContents(true);

    Layoutprincipal->addWidget(F1, 8, 6, 1, 1);

    G1 = new QLabel(layoutWidget);
    G1->setObjectName(QString::fromUtf8("G1"));
    sizePolicy1.setHeightForWidth(G1->sizePolicy().hasHeightForWidth());
    G1->setSizePolicy(sizePolicy1);
    G1->setFrameShape(QFrame::StyledPanel);
    G1->setScaledContents(true);

    Layoutprincipal->addWidget(G1, 8, 7, 1, 1);

    H1 = new QLabel(layoutWidget);
    H1->setObjectName(QString::fromUtf8("H1"));
    sizePolicy1.setHeightForWidth(H1->sizePolicy().hasHeightForWidth());
    H1->setSizePolicy(sizePolicy1);
    H1->setFrameShape(QFrame::StyledPanel);
    H1->setScaledContents(true);

    Layoutprincipal->addWidget(H1, 8, 8, 1, 1);

    A1 = new QLabel(layoutWidget);
    A1->setObjectName(QString::fromUtf8("A1"));
    sizePolicy1.setHeightForWidth(A1->sizePolicy().hasHeightForWidth());
    A1->setSizePolicy(sizePolicy1);
    A1->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0);"));
    A1->setFrameShape(QFrame::StyledPanel);
    A1->setScaledContents(true);

    Layoutprincipal->addWidget(A1, 8, 1, 1, 1);

    echiquier->setCentralWidget(centralwidget);
    menubar = new QMenuBar(echiquier);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 1000, 21));
    menuMenu = new QMenu(menubar);
    menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
    menuAide = new QMenu(menubar);
    menuAide->setObjectName(QString::fromUtf8("menuAide"));
    echiquier->setMenuBar(menubar);
    statusbar = new QStatusBar(echiquier);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    echiquier->setStatusBar(statusbar);

    menubar->addAction(menuMenu->menuAction());
    menubar->addAction(menuAide->menuAction());
    menuMenu->addAction(menuNvpartie);
    menuMenu->addSeparator();
    menuMenu->addAction(menuQuitter);
    menuAide->addAction(menuRegles);
    menuAide->addSeparator();
    menuAide->addAction(menuApropos);

    retranslateUi(echiquier);
    QObject::connect(menuQuitter, SIGNAL(activated()), echiquier, SLOT(close()));
    QObject::connect(m_quitter, SIGNAL(clicked()), echiquier, SLOT(close()));

    QMetaObject::connectSlotsByName(echiquier);
    } // setupUi

    void retranslateUi(QMainWindow *echiquier)
    {
    echiquier->setWindowTitle(QApplication::translate("echiquier", "Jeu d'\303\251checs", 0, QApplication::UnicodeUTF8));
    menuNvpartie->setText(QApplication::translate("echiquier", "Nouvelle Partie", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_STATUSTIP
    menuNvpartie->setStatusTip(QApplication::translate("echiquier", "D\303\251marre une nouvelle partie d'\303\251chec", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP

    menuNvpartie->setShortcut(QApplication::translate("echiquier", "F2", 0, QApplication::UnicodeUTF8));
    menuImprimer->setText(QApplication::translate("echiquier", "Imprimer...", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_STATUSTIP
    menuImprimer->setStatusTip(QApplication::translate("echiquier", "Imprime le plateau", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP

    menuImprimer->setShortcut(QApplication::translate("echiquier", "Ctrl+P", 0, QApplication::UnicodeUTF8));
    menuQuitter->setText(QApplication::translate("echiquier", "Quitter", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_STATUSTIP
    menuQuitter->setStatusTip(QApplication::translate("echiquier", "Quitte le jeu", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP


#ifndef QT_NO_WHATSTHIS
    menuQuitter->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS

    menuQuitter->setShortcut(QApplication::translate("echiquier", "Alt+Q", 0, QApplication::UnicodeUTF8));
    menuRegles->setText(QApplication::translate("echiquier", "R\303\250gles du jeu", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_STATUSTIP
    menuRegles->setStatusTip(QApplication::translate("echiquier", "Affiche les r\303\251gles du jeu", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP

    menuRegles->setShortcut(QApplication::translate("echiquier", "F1", 0, QApplication::UnicodeUTF8));
    menuApropos->setText(QApplication::translate("echiquier", "A propos du jeu d'\303\251checs", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_STATUSTIP
    menuApropos->setStatusTip(QApplication::translate("echiquier", "A propos du jeu d'echec...", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP

    groupBox->setTitle(QApplication::translate("echiquier", "Actions", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_STATUSTIP
    m_quitter->setStatusTip(QApplication::translate("echiquier", "Quitte le jeu", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP

    m_quitter->setText(QApplication::translate("echiquier", "Quitter", 0, QApplication::UnicodeUTF8));
    pa_ligne->clear();
    pa_ligne->insertItems(0, QStringList()
     << QApplication::translate("echiquier", "A", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "B", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "C", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "D", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "E", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "F", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "G", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "H", 0, QApplication::UnicodeUTF8)
    );
    pa_col->clear();
    pa_col->insertItems(0, QStringList()
     << QApplication::translate("echiquier", "1", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "2", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "3", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "4", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "5", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "6", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "7", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "8", 0, QApplication::UnicodeUTF8)
    );
    pv_ligne->clear();
    pv_ligne->insertItems(0, QStringList()
     << QApplication::translate("echiquier", "A", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "B", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "C", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "D", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "E", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "F", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "G", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "H", 0, QApplication::UnicodeUTF8)
    );
    pv_col->clear();
    pv_col->insertItems(0, QStringList()
     << QApplication::translate("echiquier", "1", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "2", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "3", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "4", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "5", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "6", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "7", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("echiquier", "8", 0, QApplication::UnicodeUTF8)
    );
    label->setText(QApplication::translate("echiquier", "Position actuelle :", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("echiquier", "Position voulue :", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("echiquier", "Messages :", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_STATUSTIP
    btDeplacer->setStatusTip(QApplication::translate("echiquier", "D\303\251placer la pi\303\250ce de la position actuelle vers la position voulue", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP

    btDeplacer->setText(QApplication::translate("echiquier", "D\303\251placer", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("echiquier", "A", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("echiquier", "B", 0, QApplication::UnicodeUTF8));
    label_11->setText(QApplication::translate("echiquier", "C", 0, QApplication::UnicodeUTF8));
    label_10->setText(QApplication::translate("echiquier", "D", 0, QApplication::UnicodeUTF8));
    label_9->setText(QApplication::translate("echiquier", "E", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("echiquier", "F", 0, QApplication::UnicodeUTF8));
    label_8->setText(QApplication::translate("echiquier", "G", 0, QApplication::UnicodeUTF8));
    label_7->setText(QApplication::translate("echiquier", "H", 0, QApplication::UnicodeUTF8));
    label_12->setText(QApplication::translate("echiquier", "8", 0, QApplication::UnicodeUTF8));
    A8->setText(QString());
    B8->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    B8->setText(QString());
    C8->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    C8->setText(QString());
    D8->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    D8->setText(QString());
    E8->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    E8->setText(QString());
    F8->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    F8->setText(QString());
    G8->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    G8->setText(QString());
    H8->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    H8->setText(QString());
    label_13->setText(QApplication::translate("echiquier", "7", 0, QApplication::UnicodeUTF8));
    A7->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    A7->setText(QString());
    B7->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    B7->setText(QString());
    C7->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    C7->setText(QString());
    D7->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    D7->setText(QString());
    E7->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    E7->setText(QString());
    F7->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    F7->setText(QString());
    G7->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    G7->setText(QString());
    H7->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    H7->setText(QString());
    label_14->setText(QApplication::translate("echiquier", "6", 0, QApplication::UnicodeUTF8));
    A6->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    A6->setText(QString());
    B6->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    B6->setText(QString());
    C6->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    C6->setText(QString());
    D6->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    D6->setText(QString());
    E6->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    E6->setText(QString());
    F6->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    F6->setText(QString());
    G6->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    G6->setText(QString());
    H6->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    H6->setText(QString());
    label_15->setText(QApplication::translate("echiquier", "5", 0, QApplication::UnicodeUTF8));
    A5->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    A5->setText(QString());
    B5->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    B5->setText(QString());
    C5->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    C5->setText(QString());
    D5->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    D5->setText(QString());
    E5->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    E5->setText(QString());
    F5->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    F5->setText(QString());
    G5->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    G5->setText(QString());
    H5->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    H5->setText(QString());
    label_16->setText(QApplication::translate("echiquier", "4", 0, QApplication::UnicodeUTF8));
    A4->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    A4->setText(QString());
    B4->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    B4->setText(QString());
    C4->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    C4->setText(QString());
    D4->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    D4->setText(QString());
    E4->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    E4->setText(QString());
    F4->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    F4->setText(QString());
    G4->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    G4->setText(QString());
    H4->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    H4->setText(QString());
    label_17->setText(QApplication::translate("echiquier", "3", 0, QApplication::UnicodeUTF8));
    A3->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    A3->setText(QString());
    B3->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    B3->setText(QString());
    C3->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    C3->setText(QString());
    D3->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    D3->setText(QString());
    E3->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    E3->setText(QString());
    F3->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    F3->setText(QString());
    G3->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    G3->setText(QString());
    H3->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    H3->setText(QString());
    label_18->setText(QApplication::translate("echiquier", "2", 0, QApplication::UnicodeUTF8));
    A2->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    A2->setText(QString());
    B2->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    B2->setText(QString());
    C2->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    C2->setText(QString());
    D2->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    D2->setText(QString());
    E2->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    E2->setText(QString());
    F2->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    F2->setText(QString());
    G2->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    G2->setText(QString());
    H2->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    H2->setText(QString());
    label_19->setText(QApplication::translate("echiquier", "1", 0, QApplication::UnicodeUTF8));
    B1->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    B1->setText(QString());
    C1->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    C1->setText(QString());
    D1->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    D1->setText(QString());
    E1->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    E1->setText(QString());
    F1->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    F1->setText(QString());
    G1->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(85, 0, 0);", 0, QApplication::UnicodeUTF8));
    G1->setText(QString());
    H1->setStyleSheet(QApplication::translate("echiquier", "background-color: rgb(255, 255, 255);", 0, QApplication::UnicodeUTF8));
    H1->setText(QString());
    A1->setText(QString());
    menuMenu->setTitle(QApplication::translate("echiquier", "Menu", 0, QApplication::UnicodeUTF8));
    menuAide->setTitle(QApplication::translate("echiquier", "Aide", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class echiquier: public Ui_echiquier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ECHIQUIER_H
