#pragma once
#include <iostream>

class Vector3D
{
private:
    double x_;
    double y_;
    double z_;

public:
    Vector3D();
    ~Vector3D(void);
    Vector3D(const int &x, const int &y, const int &z);

    void PrintToScreen();
    Vector3D operator+(Vector3D &v);
    Vector3D operator-(Vector3D &v);
};