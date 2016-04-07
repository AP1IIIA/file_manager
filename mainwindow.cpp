#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->model = new QFileSystemModel(this);
    this->model->setRootPath("/");
    ui->listView->setModel(this->model);
    ui->treeView->setModel(this->model);
    ui->centralWidget->setLayout(ui->gridLayout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_listView_doubleClicked(const QModelIndex &index)
{
    ui->listView->setRootIndex(index);
}
