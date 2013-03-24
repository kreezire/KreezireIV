#include "kreezireiv.h"
#include "ui_kreezireiv.h"
#include<QtGui>


KreezireIV::KreezireIV(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::KreezireIV)
{
    ui->setupUi(this);
    ui->lblImage->setBackgroundRole(QPalette::Base);
    ui->lblImage->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->lblImage->setScaledContents(true);
    scrollArea = new QScrollArea;
    scrollArea->setBackgroundRole(QPalette::Dark);
    scrollArea->setWidget(ui->lblImage);
    setCentralWidget(scrollArea);

}

KreezireIV::~KreezireIV()
{
    delete ui;
}



void KreezireIV::Imgscale(double factor)

{
   /* Q_ASSERT(ui->lblImage->pixmap());*/
    scaleFactor *= factor;
    ui->lblImage->resize(scaleFactor * ui->lblImage->pixmap()->size());


}


QLabel *tempImage;
void KreezireIV::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                          tr("Open File"), QDir::currentPath(),tr("Image Files (*.png *.jpg *.bmp *.gif *.tiff)"));
    Filename=fileName;
    QFileInfo fileInfo(fileName);
    QDir path = fileInfo.absoluteDir();

    QDir dir(path);

    QFileInfoList fiList( dir.entryInfoList( QDir::Files, QDir::Name ) );
    foreach( const QFileInfo & fi, fiList ) {
    list << fi.absoluteFilePath();
    }
          if (!fileName.isEmpty()) {
              QImage image(fileName);
              if (image.isNull()) {
                  QMessageBox::information(this, tr("Image Viewer"),
                                           tr("Cannot load %1.").arg(fileName));
                  return;
              }
              ui->lblImage->setPixmap(QPixmap::fromImage(image));
               scaleFactor = 1.0;


          }
          tempImage=ui->lblImage;
}

void KreezireIV::on_actionPrevious_triggered()
{    if(Filename.isNull())
    {
        QMessageBox::information(this,tr("Error"),tr("Open a file first"));
        return;
    }

    QString s1;
        int t=0,q=0;
        foreach(QString s2, list)
        {

            if(!s2.compare(s2, Filename))
            {
                t=1;
            }
            if(t==1)
            {

                break;
            }
            s1=s2;
            q=1;

        }
        if(!q)
        {
            foreach(Filename,list);
           }
         else
            Filename=s1;
            QImage image(Filename);


            ui->lblImage->setPixmap(QPixmap::fromImage(image));
             tempImage=ui->lblImage;

}

void KreezireIV::on_actionZoomOut_triggered()
{
    if(Filename.isNull())
       {
           QMessageBox::information(this,tr("Error"),tr("Open a file first"));
           return;
       }
        Imgscale(0.8);

}

void KreezireIV::on_actionActualSize_triggered()
{    if(Filename.isNull())
    {
        QMessageBox::information(this,tr("Error"),tr("Open a file first"));
        return;
    }
    Q_ASSERT(ui->lblImage->pixmap());
    scaleFactor = 1.0;
    ui->lblImage->resize(scaleFactor * tempImage->pixmap()->size());
}

void KreezireIV::on_actionZoomIn_triggered()
{
    if(Filename.isNull())
       {
           QMessageBox::information(this,tr("Error"),tr("Open a file first"));
           return;
       }
         Imgscale(1.25);

}

void KreezireIV::on_actionNext_triggered()
{
    if(Filename.isNull())
       {
           QMessageBox::information(this,tr("Error"),tr("Open a file first"));
           return;
       }
    int i=0;
        int t=0,d=0;
        QString s1;
        foreach(QString s, list)
        {
            if(i==0)
            {
                s1=s;
            }

            if(t==1)
            {
                d=1;
                Filename=s;
                break;
            }
            if(!s.compare(s, Filename))
            {
                t=1;
            }
            i++;
        }
        if(d==0)
        {
            Filename=s1;
        }
            QImage image(Filename);


            ui->lblImage->setPixmap(QPixmap::fromImage(image));
            tempImage=ui->lblImage;



}

void KreezireIV::on_actionAbout_triggered()
{
        QMessageBox::about(this, tr("About KreezireIV"),
                     tr("<p>The <b>KreezireIV</b> is an image viewer developed for study purpose.<br /><br >Developer: VIPUL AGGARWAL<br /><br />For contact:<br />E-mail ID: vipul_agg@yahoo.com</p>"));

}

