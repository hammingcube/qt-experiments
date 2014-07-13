#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    this->ui->label_2->setText(this->ui->textEdit->toPlainText());
}

void Widget::on_label_2_objectNameChanged(const QString &objectName)
{

}
