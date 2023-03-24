#ifndef RECIPE_H
#define RECIPE_H

#include <QDialog>

namespace Ui {
class recipe;
}

class recipe : public QDialog
{
    Q_OBJECT

public:
    explicit recipe(QWidget *parent = nullptr);
    ~recipe();

private slots:
    void on_pushButton_clicked();

private:
    Ui::recipe *ui;
};

#endif // RECIPE_H
