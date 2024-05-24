#include <iostream>

using namespace std;

class File {

protected:

    string name;
    int size;

public:

    File(const string& n, int s) : name(n), size(s) {}

    void displayInfo() const {

        cout << "�����: " << name << '\n';
        cout << "����i�: " << size << " KB" << '\n';
    }

    void readData() const {

        cout << "������ ���i � ����� " << name << '\n';
    }

    void writeData() const {

        cout << "�������� ���i � ���� " << name << '\n';
    }
};

class TextFile : public File {

private:

    string content;

public:

    TextFile(const string& n, int s, const string& c) : File(n, s), content(c) {}

    void displayInfo() const {

        File::displayInfo();

        cout << "��� �����: ��������� ����" << '\n';
    }

    void readData() const {

        cout << "������� �������i ���i � ����� " << name << '\n';
    }

    void writeData() const {

        cout << "�������� �������i ���i � ���� " << name << '\n';
    }
};

class Image : public File {

private:

    int width;
    int height;

public:

    Image(const string& n, int s, int w, int h) : File(n, s), width(w), height(h) {}

    void displayInfo() const {

        File::displayInfo();

        cout << "��� �����: ����������" << '\n';
        cout << "����i��: " << width << "x" << height << '\n';
    }

    void readData() const {

        cout << "������� ���i ���������� � ����� " << name << '\n';
    }

    void writeData() const {

        cout << "�������� ���i ���������� � ���� " << name << '\n';
    }
};

class Video : public File {

private:

    int duration;

public:

    Video(const string& n, int s, int d) : File(n, s), duration(d) {}

    void displayInfo() const {

        File::displayInfo();

        cout << "��� �����: �i���" << '\n';
        cout << "������i���: " << duration << " ������" << '\n';
    }

    void readData() const {

        cout << "������� ���i �i��� � ����� " << name << '\n';
    }

    void writeData() const {

        cout << "�������� ���i �i��� � ���� " << name << '\n';
    }
};

int main() {

    setlocale(LC_CTYPE, "ukr");

    TextFile textFile("document.txt", 1024, "�� ��������� ����");

    Image imageFile("photo.jpg", 2048, 800, 600);

    Video videoFile("movie.mp4", 4096, 120);

    cout << "I�������i� ��� ��������� ����: " << '\n';
    textFile.displayInfo();
    cout << '\n';

    cout << "I�������i� ��� ����������: " << '\n';
    imageFile.displayInfo();
    cout << '\n';

    cout << "I�������i� ��� �i���: " << '\n';
    videoFile.displayInfo();
    cout << '\n';

    textFile.readData();
    imageFile.readData();
    videoFile.readData();

    textFile.writeData();
    imageFile.writeData();
    videoFile.writeData();

    return 0;
} 
