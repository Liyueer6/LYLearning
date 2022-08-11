//���ã���ȡ��ά����ͼ�ε�������ܳ�
//�����������Ρ����Ρ�԰����Բ��������
//switch case ���� if
//define
//enum
//��װ
//�̳�
//��̬

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
        cout << "�����뼸��ͼ�Σ�1���Σ�2�����Σ�3Բ�Σ�4��Բ�Σ�5�����Σ����������������" << endl;
        cin >> X;

        switch (X)
        {
        case Rectangle1:
        {
            cout << "�����볤���εĳ���" << endl;
            cin >> length;
            cout << "�����볤���εĿ�" << endl;
            cin >> width;
#if Condition
            GeometricFigure *pRect = new Rectangle(length, width);
            //Rectangle rect(length, width);

            cout << "�����ε�����ǣ�" << pRect->GetArea() << endl;
            cout << "�����ε��ܳ��ǣ�" << pRect->GetPerimeter() << endl;
            delete pRect;
            pRect = nullptr;
#else
            pGF = new Rectangle(length, width);
#endif
            break;
        }
        case Square2:
        {
            cout << "�����������εı߳���" << endl;
            cin >> length;
#if Condition
            GeometricFigure *pSquare = new Square(length);
            cout << "�����ε�����ǣ�" << pSquare->GetArea() << endl;
            cout << "�����ε��ܳ��ǣ�" << pSquare->GetPerimeter() << endl;
            delete pSquare;
            pSquare = nullptr;
#else
            pGF = new Square(length);
#endif
            break;
        }
        case Circle3:
        {
            cout << "������Բ�εİ뾶��" << endl;
            cin >> radius;
#if Condition
            //Circle circle(radius);
            GeometricFigure *pCircle = new Circle(radius);
            cout << "Բ�ε�����ǣ�" << pCircle->GetArea() << endl;
            cout << "Բ�ε��ܳ��ǣ�" << pCircle->GetPerimeter() << endl;
            delete pCircle;
            pCircle = nullptr;
#else
            pGF = new Circle(radius);
#endif
            break;
        }
        case Oval4:
        {
            cout << "��������Բ�εĳ����᣺" << endl;
            cin >> length;
            cout << "��������Բ�εĶ̰��᣺" << endl;
            cin >> width;
#if Condition
            GeometricFigure *pOval = new Oval(length, width);
            //Rectangle rect(length, width);

            cout << "��Բ�ε�����ǣ�" << pOval->GetArea() << endl;
            cout << "��Բ�ε��ܳ��ǣ�" << pOval->GetPerimeter() << endl;
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
                cout << "�����������εı߳���a��b��c" << endl;
                cin >> a >> b >> c;
                result = MathUtils::CheckTriangle(a, b, c);

                if (result == false)
                {
                    cout << "������������������" << endl;
                }
            } while (result == false);
#if Condition
            GeometricFigure *Tri = new Triangle(a, b, c);
            cout << "�����ε��ܳ��ǣ�" << Tri->GetPerimeter() << endl;
            cout << "�����ε�����ǣ�" << Tri->GetArea() << endl;

            delete Tri;
            Tri = nullptr;
#else
            pGF = new Triangle(a, b, c);
#endif
            break;
        }

        default:
            cout << "��������" << endl;
            result = false;
            break;
        }

        cout << pGF->GetName() << "������ǣ�" << pGF->GetArea() << endl;
        cout << pGF->GetName() << "���ܳ��ǣ�" << pGF->GetPerimeter() << endl;
    } while (result);

    delete pGF;
    pGF = nullptr;

    return 0;
}