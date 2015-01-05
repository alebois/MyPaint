#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPicture>
#include "opencv\highgui.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    fileDialogLoad = new QFileDialog();
    fileDialogSave = new QFileDialog();
    connect(ui->actionLoad, SIGNAL(triggered()), fileDialogLoad, SLOT(show()));
    connect(fileDialogLoad, SIGNAL(fileSelected(QString)),this, SLOT(setFenetrePicture(QString)));
    connect(ui->actionSave, SIGNAL(triggered()), fileDialogSave, SLOT(show()));
    connect(fileDialogSave, SIGNAL(fileSelected(QString)),this, SLOT(savePicture(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete fileDialogLoad;
    delete fileDialogSave;

}

void MainWindow::setFenetrePicture(QString name){

    QPixmap pixmap;
    QImage qImg;
    qImg.load(name);
    bool res = pixmap.convertFromImage( qImg );
    QSize pixSize = ui->label->size();
    pixmap.scaled(pixSize);
    ui->label->setScaledContents( true );
    ui->label->setPixmap( pixmap );
    //Mat image;

}

void MainWindow::savePicture(QString name){

    const QPixmap* pixmap = ui->label->pixmap();
    pixmap->save( name );


}
