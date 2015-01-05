#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void setFenetrePicture( QString fileName );
    void savePicture( QString fileName );
private:
    Ui::MainWindow *ui;
    QFileDialog* fileDialogSave;
    QFileDialog* fileDialogLoad;

};

#endif // MAINWINDOW_H
