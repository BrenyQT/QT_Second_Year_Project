#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QListWidget>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_createRecipe_clicked();

    void on_actionQUIT_triggered();

    void on_pushButton_2_clicked();

    void addElementToList(QString input);

    void addToList(QString);
private:


    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
