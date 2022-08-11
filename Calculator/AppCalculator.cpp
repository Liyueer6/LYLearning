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

            pGF = new Rectangle(length, width);

            break;
        }
        case Square2:
        {
            cout << "�����������εı߳���" << endl;
            cin >> length;

            pGF = new Square(length);

            break;
        }
        case Circle3:
        {
            cout << "������Բ�εİ뾶��" << endl;
            cin >> radius;

            pGF = new Circle(radius);

            break;
        }
        case Oval4:
        {
            cout << "��������Բ�εĳ����᣺" << endl;
            cin >> length;
            cout << "��������Բ�εĶ̰��᣺" << endl;
            cin >> width;

            pGF = new Circle(radius);

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

            pGF = new Triangle(a, b, c);

            break;
        }
        default:
        {
            cout << "��������" << endl;
            result = false;
            break;
        }
        }

        if (result)
        {
            cout << pGF->GetName() << "������ǣ�" << pGF->GetArea() << endl;
            cout << pGF->GetName() << "���ܳ��ǣ�" << pGF->GetPerimeter() << endl;
            cout << endl;
        }

    } while (result);

    delete pGF;
    pGF = nullptr;

    return 0;
}