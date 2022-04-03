#include "Vector3D.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

int main() {
    Vector3D l, r, t;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, y, z;
    cout << "x = ? "; cin >> x;
    cout << "y = ? "; cin >> y;
    cout << "z = ? "; cin >> z;
    l.SetX(x);
    l.SetY(y);
    l.SetZ(z);
    cout << l.ToString() << endl;
    cout << "x = ? "; cin >> x;
    cout << "y = ? "; cin >> y;
    cout << "z = ? "; cin >> z;
    r.SetX(x);
    r.SetY(y);
    r.SetZ(z);
    cout << r.ToString() << endl;

    int no;
    do {
        cout << "¬ибер≥ть д≥ю:" << endl;
        cout << "[1] - додаванн€ вектор≥в" << endl;
        cout << "[2] - в≥дн≥манн€ вектор≥в" << endl;
        cout << "[3] - скал€рний добуток вектор≥в" << endl;
        cout << "[0] - завершити виведенн€" << endl;
        cout << "¬вед≥ть значенн€: "; cin >> no;
        cout << endl;

        switch (no)
        {
        case 1:
            t = SumOfVectors(l, r);
            cout << "a + b = (" << t.GetX() << " , " << t.GetY() << " , " << t.GetZ() << ")";
            break;
        case 2:
            t = RiznOfVectors(l, r);
            cout << "a - b = (" << t.GetX() << " , " << t.GetY() << " , " << t.GetZ() << ")";
            break;
        case 3:
            cout << "a * b = " << DobOfVectors(l, r);
            break;
        }
        cout << endl;
    } while (no != 0);

}