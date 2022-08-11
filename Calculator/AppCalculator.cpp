//作用：求取二维几何图形的面积和周长
//包含：正方形、矩形、园、椭圆、三角形
//switch case 或者 if
//define
//enum
//封装
//继承
//多态

//vector map
//sort
//static_cast dynamic_cast const_cast
#include <iostream>
#include "Enum.h"
#include "GeometeicFigure.h"
#include "MathUtils.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Oval.h"
#include "Triangle.h"

using namespace std;

int main() {
    int X;
    double length;
    double width;
    double radius;
    double a, b, c;
    bool result = true;

    GeometricFigure *pGF = nullptr;
    do {
        cout << "请输入几何图形：1矩形，2正方形，3圆形，4椭圆形，5三角形，其它输入结束运行" << endl;
        cin >> X;

        switch (X)
        {
        case Rectangle1:
        {
            cout << "请输入长方形的长：" << endl;
            cin >> length;
            cout << "请输入长方形的宽：" << endl;
            cin >> width;

            pGF = new Rectangle(length, width);

            break;
        }
        case Square2:
        {
            cout << "请输入正方形的边长：" << endl;
            cin >> length;

            pGF = new Square(length);

            break;
        }
        case Circle3:
        {
            cout << "请输入圆形的半径：" << endl;
            cin >> radius;

            pGF = new Circle(radius);

            break;
        }
        case Oval4:
        {
            cout << "请输入椭圆形的长半轴：" << endl;
            cin >> length;
            cout << "请输入椭圆形的短半轴：" << endl;
            cin >> width;

            pGF = new Circle(radius);

            break;
        }
        case Triangle5:
        {
            bool result = true;
            do {
                cout << "请输入三角形的边长：a，b，c" << endl;
                cin >> a >> b >> c;
                result = MathUtils::CheckTriangle(a, b, c);

                if (result == false)
                {
                    cout << "输入有误请重新输入" << endl;
                }
            } while (result == false);

            pGF = new Triangle(a, b, c);

            break;
        }
        default:
        {
            cout << "结束运行" << endl;
            result = false;
            break;
        }
        }

        if (result)
        {
            cout << pGF->GetName() << "的面积是：" << pGF->GetArea() << endl;
            cout << pGF->GetName() << "的周长是：" << pGF->GetPerimeter() << endl;
            cout << endl;
        }

    } while (result);

    delete pGF;
    pGF = nullptr;

    return 0;
}