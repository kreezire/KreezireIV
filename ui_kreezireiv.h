/********************************************************************************
** Form generated from reading UI file 'kreezireiv.ui'
**
** Created: Sat 8. Oct 16:53:15 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KREEZIREIV_H
#define UI_KREEZIREIV_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KreezireIV
{
public:
    QAction *actionOpen;
    QAction *actionQuit;
    QAction *actionPrevious;
    QAction *actionZoomOut;
    QAction *actionActualSize;
    QAction *actionZoomIn;
    QAction *actionNext;
    QAction *actionAbout;
    QWidget *centralWidget;
    QLabel *lblImage;
    QMenuBar *menuBar;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *KreezireIV)
    {
        if (KreezireIV->objectName().isEmpty())
            KreezireIV->setObjectName(QString::fromUtf8("KreezireIV"));
        KreezireIV->resize(478, 423);
        actionOpen = new QAction(KreezireIV);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionQuit = new QAction(KreezireIV);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/images/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon1);
        actionPrevious = new QAction(KreezireIV);
        actionPrevious->setObjectName(QString::fromUtf8("actionPrevious"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/images/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrevious->setIcon(icon2);
        actionZoomOut = new QAction(KreezireIV);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/images/minus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomOut->setIcon(icon3);
        actionActualSize = new QAction(KreezireIV);
        actionActualSize->setObjectName(QString::fromUtf8("actionActualSize"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/images/fit to window.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionActualSize->setIcon(icon4);
        actionZoomIn = new QAction(KreezireIV);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/images/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomIn->setIcon(icon5);
        actionNext = new QAction(KreezireIV);
        actionNext->setObjectName(QString::fromUtf8("actionNext"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/images/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNext->setIcon(icon6);
        actionAbout = new QAction(KreezireIV);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/images/about.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon7);
        centralWidget = new QWidget(KreezireIV);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lblImage = new QLabel(centralWidget);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        lblImage->setGeometry(QRect(0, -30, 471, 371));
        KreezireIV->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(KreezireIV);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 478, 21));
        KreezireIV->setMenuBar(menuBar);
        statusBar = new QStatusBar(KreezireIV);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        KreezireIV->setStatusBar(statusBar);
        mainToolBar = new QToolBar(KreezireIV);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        KreezireIV->addToolBar(Qt::BottomToolBarArea, mainToolBar);

        mainToolBar->addSeparator();
        mainToolBar->addAction(actionOpen);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionActualSize);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionPrevious);
        mainToolBar->addAction(actionZoomOut);
        mainToolBar->addAction(actionQuit);
        mainToolBar->addAction(actionZoomIn);
        mainToolBar->addAction(actionNext);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAbout);

        retranslateUi(KreezireIV);
        QObject::connect(actionQuit, SIGNAL(triggered()), KreezireIV, SLOT(close()));

        QMetaObject::connectSlotsByName(KreezireIV);
    } // setupUi

    void retranslateUi(QMainWindow *KreezireIV)
    {
        KreezireIV->setWindowTitle(QApplication::translate("KreezireIV", "KreezireIV", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("KreezireIV", "Open", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("KreezireIV", "Open (Ctrl+0)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOpen->setShortcut(QApplication::translate("KreezireIV", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("KreezireIV", "Quit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionQuit->setToolTip(QApplication::translate("KreezireIV", "Quit (Ctrl+Q)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionQuit->setShortcut(QApplication::translate("KreezireIV", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionPrevious->setText(QApplication::translate("KreezireIV", "Previous", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPrevious->setToolTip(QApplication::translate("KreezireIV", "Previous (Ctrl+Left)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPrevious->setShortcut(QApplication::translate("KreezireIV", "Ctrl+Left", 0, QApplication::UnicodeUTF8));
        actionZoomOut->setText(QApplication::translate("KreezireIV", "ZoomOut", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionZoomOut->setToolTip(QApplication::translate("KreezireIV", "Zoom Ou (Ctrl+-)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionZoomOut->setShortcut(QApplication::translate("KreezireIV", "Ctrl+-", 0, QApplication::UnicodeUTF8));
        actionActualSize->setText(QApplication::translate("KreezireIV", "ActualSize", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionActualSize->setToolTip(QApplication::translate("KreezireIV", "Actual Size (Ctrl+0)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionActualSize->setShortcut(QApplication::translate("KreezireIV", "Ctrl+0", 0, QApplication::UnicodeUTF8));
        actionZoomIn->setText(QApplication::translate("KreezireIV", "ZoomIn", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionZoomIn->setToolTip(QApplication::translate("KreezireIV", "Zoom In (Ctrl++)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionZoomIn->setShortcut(QApplication::translate("KreezireIV", "Ctrl++", 0, QApplication::UnicodeUTF8));
        actionNext->setText(QApplication::translate("KreezireIV", "Next", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNext->setToolTip(QApplication::translate("KreezireIV", "Next (Ctrl+Right)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionNext->setShortcut(QApplication::translate("KreezireIV", "Ctrl+Right", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("KreezireIV", "About", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("KreezireIV", "About / Help (F1)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAbout->setShortcut(QApplication::translate("KreezireIV", "F1", 0, QApplication::UnicodeUTF8));
        lblImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class KreezireIV: public Ui_KreezireIV {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KREEZIREIV_H
