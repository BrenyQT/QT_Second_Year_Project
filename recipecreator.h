#ifndef RECIPECREATOR_H
#define RECIPECREATOR_H

#include <QDialog>

namespace Ui {
class recipeCreator;
}

class recipeCreator : public QDialog
{
    Q_OBJECT

public:
    explicit recipeCreator(QWidget *parent = nullptr);
    ~recipeCreator();

signals:
    void sendData(QString);

private:
    Ui::recipeCreator *ui;
    void createFoodObject();

private slots:

    void on_pushButton_MainMenu_clicked();
    void on_pushButton_Finish_clicked();

    void on_horizontalSlider_Calories_sliderMoved(int position);

signals:
    void sendToList(QString );
};


#endif // RECIPECREATOR_H
