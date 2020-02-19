#pragma once

#include <QWidget>
#include "ui_ViewWidget.h"
#include "CLine.h"
#include <QMouseEvent>
#include <vector>

using namespace std;

class ViewWidget : public QWidget
{
	Q_OBJECT

public:
	ViewWidget(QWidget *parent = Q_NULLPTR);
	~ViewWidget();

	void	mousePressEvent(QMouseEvent* event);
	void	mouseMoveEvent(QMouseEvent* event);
	void	mouseReleaseEvent(QMouseEvent* event);
	void	paintEvent(QPaintEvent*);

private:
	Ui::ViewWidget ui;

	vector<CLine*>  line_array_;
	
	bool draw_status_;
	QPoint start_point_;
	QPoint end_point_;
};
