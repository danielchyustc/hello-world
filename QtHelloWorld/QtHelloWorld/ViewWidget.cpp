#include "ViewWidget.h"
#include <QPainter>

ViewWidget::ViewWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	draw_status_ = false;
}

ViewWidget::~ViewWidget()
{
	for (size_t i = 0; i < line_array_.size(); i++)
	{
		if (line_array_[i])
		{
			delete line_array_[i];
			line_array_[i] = NULL;
		}
	}
}

void	ViewWidget::mousePressEvent(QMouseEvent* event)
{
	if (Qt::LeftButton == event->button())
	{
		draw_status_ = true;
		start_point_ = event->pos();
	}
}

void	ViewWidget::mouseMoveEvent(QMouseEvent* event)
{
	if (draw_status_)
	{
		end_point_ = event->pos();
	}
}

void	ViewWidget::mouseReleaseEvent(QMouseEvent* event)
{
	CLine* current_line_ = NULL;
	current_line_ = new CLine(start_point_.rx(), start_point_.ry(), end_point_.rx(), end_point_.ry());

	line_array_.push_back(current_line_);
	draw_status_ = false;
}

void	ViewWidget::paintEvent(QPaintEvent*)
{
	QPainter painter(this);
	painter.begin(this);
	for (size_t i = 0; i < line_array_.size(); i++)
	{
		line_array_[i]->Draw(painter);
	}
	painter.end();
	update();
}
