#include <iostream>
#include "Vector3D.h"

Vector3D::Vector3D() {}

Vector3D::~Vector3D(void) {}

Vector3D::Vector3D(const int &x, const int &y, const int &z){};

void Vector3D::PrintToScreen()
{
    std::cout << "vector(" << x_ << "," << y_ << "," << z_ << ")";
}

Vector3D Vector3D::operator+(Vector3D &v)
{
    Vector3D ret_v;
    ret_v.x_ = this->x_ + x_;
    ret_v.y_ = this->y_ + y_;
    ret_v.z_ = this->z_ + z_;
    return ret_v;
}

Vector3D Vector3D::operator-(Vector3D &v)
{
    Vector3D ret_v;
    ret_v.x_ = this->x_ - x_;
    ret_v.y_ = this->y_ - y_;
    ret_v.z_ = this->z_ - z_;
    return ret_v;
}