#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	QImage img(":/icons/debug.png");
	qDebug() << img.isNull(); // true
}

MainWindow::~MainWindow()
{
	delete ui;
}
