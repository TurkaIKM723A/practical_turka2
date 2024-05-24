#include <iostream>
#include <string>

using namespace std;

class Student {

private:

    string name;
    int age;
    double averageGrade;

public:

    Student(const string& n, int a, double g) {

        setName(n);
        setAge(a);
        setAverageGrade(g);
    }

    void setName(const string& n) {

        name = n;
    }

    void setAge(int a) {

        if (a >= 0) {

            age = a;
        }

        else {

            throw invalid_argument("�i� �� ���� ���� ����������.");
        }
    }

    void setAverageGrade(double g) {

        if (g >= 0.0 && g <= 100.0) {

            averageGrade = g;
        }

        else {

            throw invalid_argument("������i� ��� �� ���� � �i������i �i� 0 �� 100.");
        }
    }

    string getName() const {

        return name;
    }

    int getAge() const {

        return age;
    }

    double getAverageGrade() const {

        return averageGrade;
    }

    void displayInfo() const {

        cout << "I�'�: " << name << '\n';
        cout << "�i�: " << age << '\n';
        cout << "������i� ���: " << averageGrade << '\n';
    }
};

int main() {

    setlocale(LC_CTYPE, "ukr");

    Student student("I��� I�����", 20, 85.5);

    student.displayInfo();
    cout << '\n';

    return 0;
} 



