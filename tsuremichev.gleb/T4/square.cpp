#include "square.h"


Square::Square(Point lowerLeft, double side)
: leftBottom_(lowerLeft), side_ (side) {}

double Square::getArea() const
{
  return (side_ * side_);

}

Point Square::getCenter() const
{
  Point centre;
  double cx = leftBottom_.x_ + (side_ / 2.0);
  double cy = leftBottom_.y_ + (side_ / 2.0);
  centre.x_ = cx;
  centre.y_ = cy;
  return centre;
}

void Square::move(double dx, double dy)
{
  leftBottom_.x_ += dx;
  leftBottom_.y_ += dy;

}

void Square::scale(double koef)
{
  // Point center = getCenter();
/*
  double halfHeight = (rightTop_.y_ - leftBottom_.y_) * koef / 2.0;
  double halfWidth = (rightTop_.x_ - leftBottom_.x_) * koef / 2.0;

  rightTop_.x_ = center.x_ + halfWidth;
  rightTop_.y_ = center.y_ + halfHeight;

  leftBottom_.x_ = center.x_ - halfWidth;
  leftBottom_.y_ = center.y_ - halfHeight;*/
  leftBottom_.x_ -= side_ / koef;
  leftBottom_.y_ -= side_ / koef;
  side_ *= koef;
}

std::string Square::getName() const
{
  return "SQUARE";
}
