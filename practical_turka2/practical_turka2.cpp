#include <iostream>

using namespace std;

class ElectronicDevice {

private:

    string name;
    double screenSize;

public:

    ElectronicDevice(const string& n, double s) {

        setName(n);
        setScreenSize(s);
    }

    void setName(const string& n) {

        name = n;
    }

    void setScreenSize(double s) {

        if (s > 0) {

            screenSize = s;
        }

        else {

            throw invalid_argument("Розмiр екрану має бути додатнiм числом.");
        }
    }

    string getName() const {

        return name;
    }

    double getScreenSize() const {

        return screenSize;
    }

    virtual void displayInfo() const {

        cout << "Назва: " << name << '\n';
        cout << "Розмiр екрану: " << screenSize << " дюймiв" << '\n';
    }
};

class Smartphone : public ElectronicDevice {

private:

    string operatingSystem;

public:

    Smartphone(const string& n, double s, const string& os) : ElectronicDevice(n, s) {

        setOperatingSystem(os);
    }

    void setOperatingSystem(const string& os) {

        operatingSystem = os;
    }

    string getOperatingSystem() const {

        return operatingSystem;
    }

    void displayInfo() const override {

        ElectronicDevice::displayInfo();

        cout << "Операцiйна система: " << operatingSystem << '\n';
    }
};

class Tablet : public ElectronicDevice {

private:

    string operatingSystem;

public:

    Tablet(const string& n, double s, const string& os) : ElectronicDevice(n, s) {

        setOperatingSystem(os);
    }

    void setOperatingSystem(const string& os) {

        operatingSystem = os;
    }

    string getOperatingSystem() const {

        return operatingSystem;
    }

    void displayInfo() const override {

        ElectronicDevice::displayInfo();

        cout << "Операцiйна система: " << operatingSystem << '\n';
    }
};

class Laptop : public ElectronicDevice {

private:

    string operatingSystem;

public:

    Laptop(const string& n, double s, const string& os) : ElectronicDevice(n, s) {

        setOperatingSystem(os);
    }

    void setOperatingSystem(const string& os) {

        operatingSystem = os;
    }

    string getOperatingSystem() const {

        return operatingSystem;
    }

    void displayInfo() const override {

        ElectronicDevice::displayInfo();

        cout << "Операцiйна система: " << operatingSystem << '\n';
    }
};

int main() {

    setlocale(LC_CTYPE, "ukr");

    Smartphone smartphone("iPhone 13", 6.1, "iOS");

    Tablet tablet("iPad Air", 10.9, "iPadOS");

    Laptop laptop("MacBook Pro", 13.3, "macOS");

    cout << "Смартфон: " << '\n';
    smartphone.displayInfo();
    cout << '\n';

    cout << "Планшет: " << '\n';
    tablet.displayInfo();
    cout << '\n';

    cout << "Ноутбук: " << '\n';
    laptop.displayInfo();

    return 0;
} 




