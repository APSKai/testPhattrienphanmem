#include <iostream>
#include "includes/Vector3D.cpp"

int main()
{
    Vector3D v1(0, 0, 1);
    Vector3D v2(1, 0, 0);
    Vector3D res = v1 + v2;
    res.PrintToScreen();

    return 0;
}