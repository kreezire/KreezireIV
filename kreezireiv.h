#ifndef KREEZIREIV_H
#define KREEZIREIV_H

#include <QMainWindow>
class QAction;
 class QLabel;
 class QScrollArea;
 class QScrollBar;
namespace Ui {
    class KreezireIV;
}

class KreezireIV : public QMainWindow
{
    Q_OBJECT

public:
    explicit KreezireIV(QWidget *parent = 0);
    ~KreezireIV();


private slots:

    void on_actionOpen_triggered();

    void on_actionPrevious_triggered();

    void on_actionZoomOut_triggered();

    void on_actionActualSize_triggered();

    void on_actionZoomIn_triggered();

    void on_actionNext_triggered();

    void on_actionAbout_triggered();



private:

    Ui::KreezireIV *ui;
    void Imgscale(double factor);
    double scaleFactor;
    QString Filename;
    QStringList list;
    QScrollArea *scrollArea;
};

#endif // KREEZIREIV_H
