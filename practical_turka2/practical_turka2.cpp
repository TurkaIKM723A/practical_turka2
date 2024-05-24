#include <iostream>
#include <cmath>

using namespace std;

class Triangle {

private:

    double side1;
    double side2;
    double side3;

    bool isValidTriangle(double a, double b, double c) const {

        return (a + b > c) && (a + c > b) && (b + c > a);
    }

public:

    Triangle(double a, double b, double c) {

        if (isValidTriangle(a, b, c)) {

            side1 = a;
            side2 = b;
            side3 = c;
        }

        else {

            throw invalid_argument("����������i ������� ��� ����������.");
        }
    }

    double getPerimeter() const {

        return side1 + side2 + side3;
    }

    double getArea() const {

        double s = getPerimeter() / 2;

        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    bool isRightTriangle() const {

        double a2 = side1 * side1;
        double b2 = side2 * side2;
        double c2 = side3 * side3;

        return (fabs(a2 + b2 - c2) < 1e-10) || (fabs(a2 + c2 - b2) < 1e-10) || (fabs(b2 + c2 - a2) < 1e-10);
    }

    double getSide1() const { return side1; }
    double getSide2() const { return side2; }
    double getSide3() const { return side3; }
};

int main() {

    setlocale(LC_CTYPE, "ukr");

    double a, b, c;

    cout << "����i�� ������� ����i� ����������:" << '\n';
    cout << "������� 1: ";
    cin >> a;
    cout << "������� 2: ";
    cin >> b;
    cout << "������� 3: ";
    cin >> c;

    try {

        Triangle t(a, b, c);

        cout << "��������: " << t.getPerimeter() << '\n';
        cout << "�����: " << t.getArea() << '\n';
        cout << "����������� ���������: " << (t.isRightTriangle() ? "���" : "ͳ") << '\n';
    }
    catch (const invalid_argument& e) {

        cerr << e.what() << '\n';
    }

    return 0;
}



