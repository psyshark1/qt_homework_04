#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->rb->setText("UpperRadioButton");
    ui->rb1->setText("LowerRadioButton");
    ui->cbb->addItems(QStringList{"Item1","Item2","Item3","item4"});
    ui->pb_toggle->setText("ToggleButton");
    ui->pb_toggle->setCheckable(true);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(10);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_toggle_toggled(bool checked)
{
    if(ui->progressBar->value() == ui->progressBar->maximum())
    {
        ui->progressBar->reset();
    }
    ui->progressBar->setValue(ui->progressBar->value() + 1);
}
