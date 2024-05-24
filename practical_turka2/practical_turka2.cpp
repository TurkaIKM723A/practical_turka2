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

            throw invalid_argument("Вiк не може бути негативним.");
        }
    }

    void setAverageGrade(double g) {

        if (g >= 0.0 && g <= 100.0) {

            averageGrade = g;
        }

        else {

            throw invalid_argument("Середнiй бал має бути в дiапазонi вiд 0 до 100.");
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

        cout << "Iм'я: " << name << '\n';
        cout << "Вiк: " << age << '\n';
        cout << "Середнiй бал: " << averageGrade << '\n';
    }
};

int main() {

    setlocale(LC_CTYPE, "ukr");

    Student student("Iван Iванко", 20, 85.5);

    student.displayInfo();
    cout << '\n';

    return 0;
} 



