#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtHelloWorld.h"
#include "ViewWidget.h"

class QtHelloWorld : public QMainWindow
{
	Q_OBJECT

public:
	QtHelloWorld(QWidget *parent = Q_NULLPTR);
	~QtHelloWorld();

private:
	Ui::QtHelloWorldClass ui;

	QAction* about_action_;
	QAction* line_action_;
	QAction* rect_action_;
	QAction* ellipse_action_;
	QAction* polygon_action_;
	QAction* delete_action_;

	QMenu* title_menu_;
	QToolBar* main_toolbar_;

	ViewWidget* view_widget_;

	void CreateButtons();
	void About();
	void Line();
	void Rect();
	void Ellipse();
	void Polygon();
	void Delete();
};
