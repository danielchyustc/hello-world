#pragma once

#include <QPainter>

class CLine
{
public:
	CLine();
	CLine(int start_point_x, int start_point_y, int end_point_x, int end_point_y)
	{
		start_point_x_ = start_point_x;
		start_point_y_ = start_point_y;
		end_point_x_ = end_point_x;
		end_point_y_ = end_point_y;
	}
	~CLine();

	void	Draw(QPainter &paint)
	{
		paint.drawLine(start_point_x_, start_point_y_, end_point_x_, end_point_y_);
	}

private:
	int start_point_x_;
	int start_point_y_;
	int end_point_x_;
	int end_point_y_;
};

