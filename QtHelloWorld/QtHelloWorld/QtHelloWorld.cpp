#include "QtHelloWorld.h"
#include <qmessagebox.h>

QtHelloWorld::QtHelloWorld(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	CreateButtons();
}

QtHelloWorld::~QtHelloWorld()
{

}

void	QtHelloWorld::CreateButtons()
{
	about_action_ = new QAction(tr("&About"), this);
	connect(about_action_, &QAction::triggered, this, &QtHelloWorld::About);

	line_action_ = new QAction(tr("&Line"), this);
	connect(line_action_, &QAction::triggered, this, &QtHelloWorld::Line);

	rect_action_ = new QAction(tr("&Rectangle"), this);
	connect(rect_action_, &QAction::triggered, this, &QtHelloWorld::Rect);

	ellipse_action_ = new QAction(tr("&Ellipse"), this);
	connect(ellipse_action_, &QAction::triggered, this, &QtHelloWorld::Ellipse);

	polygon_action_ = new QAction(tr("&Polygon"), this);
	connect(polygon_action_, &QAction::triggered, this, &QtHelloWorld::Polygon);

	delete_action_ = new QAction(tr("&Delete"), this);
	connect(delete_action_, &QAction::triggered, this, &QtHelloWorld::Delete);

	title_menu_ = menuBar()->addMenu(tr("&Figure Tool"));

	view_widget_ = new ViewWidget();
	setCentralWidget(view_widget_);

	main_toolbar_ = addToolBar(tr("&Main"));
	main_toolbar_->addAction(about_action_);
	main_toolbar_->addAction(line_action_);
	main_toolbar_->addAction(rect_action_);
	main_toolbar_->addAction(ellipse_action_);
	main_toolbar_->addAction(polygon_action_);
	main_toolbar_->addAction(delete_action_);
}

void	QtHelloWorld::About()
{
	QMessageBox::about(this, tr("About"), tr("Well done! Go ahead."));
}

void	QtHelloWorld::Line()
{
	QMessageBox::about(this, tr("Line"), tr("Well done! Go ahead."));
}

void	QtHelloWorld::Rect()
{
	QMessageBox::about(this, tr("Rect"), tr("Well done! Go ahead."));
}

void	QtHelloWorld::Ellipse()
{
	QMessageBox::about(this, tr("Ellipse"), tr("Well done! Go ahead."));
}

void	QtHelloWorld::Polygon()
{
	QMessageBox::about(this, tr("Polygon"), tr("Well done! Go ahead."));
}

void	QtHelloWorld::Delete()
{
	QMessageBox::about(this, tr("Delete"), tr("Well done! Go ahead."));
}