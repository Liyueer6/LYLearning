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

#define Condition 0

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
#if Condition
            GeometricFigure *pRect = new Rectangle(length, width);
            //Rectangle rect(length, width);

            cout << "长方形的面积是：" << pRect->GetArea() << endl;
            cout << "长方形的周长是：" << pRect->GetPerimeter() << endl;
            delete pRect;
            pRect = nullptr;
#else
            pGF = new Rectangle(length, width);
#endif
            break;
        }
        case Square2:
        {
            cout << "请输入正方形的边长：" << endl;
            cin >> length;
#if Condition
            GeometricFigure *pSquare = new Square(length);
            cout << "正方形的面积是：" << pSquare->GetArea() << endl;
            cout << "正方形的周长是：" << pSquare->GetPerimeter() << endl;
            delete pSquare;
            pSquare = nullptr;
#else
            pGF = new Square(length);
#endif
            break;
        }
        case Circle3:
        {
            cout << "请输入圆形的半径：" << endl;
            cin >> radius;
#if Condition
            //Circle circle(radius);
            GeometricFigure *pCircle = new Circle(radius);
            cout << "圆形的面积是：" << pCircle->GetArea() << endl;
            cout << "圆形的周长是：" << pCircle->GetPerimeter() << endl;
            delete pCircle;
            pCircle = nullptr;
#else
            pGF = new Circle(radius);
#endif
            break;
        }
        case Oval4:
        {
            cout << "请输入椭圆形的长半轴：" << endl;
            cin >> length;
            cout << "请输入椭圆形的短半轴：" << endl;
            cin >> width;
#if Condition
            GeometricFigure *pOval = new Oval(length, width);
            //Rectangle rect(length, width);

            cout << "椭圆形的面积是：" << pOval->GetArea() << endl;
            cout << "椭圆形的周长是：" << pOval->GetPerimeter() << endl;
            delete pOval;
            pOval = nullptr;
#else
            pGF = new Circle(radius);
#endif
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
#if Condition
            GeometricFigure *Tri = new Triangle(a, b, c);
            cout << "三角形的周长是：" << Tri->GetPerimeter() << endl;
            cout << "三角形的面积是：" << Tri->GetArea() << endl;

            delete Tri;
            Tri = nullptr;
#else
            pGF = new Triangle(a, b, c);
#endif
            break;
        }

        default:
            cout << "结束运行" << endl;
            result = false;
            break;
        }

        cout << pGF->GetName() << "的面积是：" << pGF->GetArea() << endl;
        cout << pGF->GetName() << "的周长是：" << pGF->GetPerimeter() << endl;
    } while (result);

    delete pGF;
    pGF = nullptr;

    return 0;
}