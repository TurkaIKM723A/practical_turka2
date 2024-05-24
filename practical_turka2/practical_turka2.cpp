#include <iostream>

using namespace std;

class File {

protected:

    string name;
    int size;

public:

    File(const string& n, int s) : name(n), size(s) {}

    void displayInfo() const {

        cout << "Назва: " << name << '\n';
        cout << "Розмiр: " << size << " KB" << '\n';
    }

    void readData() const {

        cout << "Зчитую данi з файлу " << name << '\n';
    }

    void writeData() const {

        cout << "Записуємо данi у файл " << name << '\n';
    }
};

class TextFile : public File {

private:

    string content;

public:

    TextFile(const string& n, int s, const string& c) : File(n, s), content(c) {}

    void displayInfo() const {

        File::displayInfo();

        cout << "Тип файлу: Текстовий файл" << '\n';
    }

    void readData() const {

        cout << "Зчитуємо текстовi данi з файлу " << name << '\n';
    }

    void writeData() const {

        cout << "Записуємо текстовi данi у файл " << name << '\n';
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

        cout << "Тип файлу: Зображення" << '\n';
        cout << "Розмiри: " << width << "x" << height << '\n';
    }

    void readData() const {

        cout << "Зчитуємо данi зображення з файлу " << name << '\n';
    }

    void writeData() const {

        cout << "Записуємо данi зображення у файл " << name << '\n';
    }
};

class Video : public File {

private:

    int duration;

public:

    Video(const string& n, int s, int d) : File(n, s), duration(d) {}

    void displayInfo() const {

        File::displayInfo();

        cout << "Тип файлу: Вiдео" << '\n';
        cout << "Тривалiсть: " << duration << " хвилин" << '\n';
    }

    void readData() const {

        cout << "Зчитуємо данi вiдео з файлу " << name << '\n';
    }

    void writeData() const {

        cout << "Записуємо данi вiдео у файл " << name << '\n';
    }
};

int main() {

    setlocale(LC_CTYPE, "ukr");

    TextFile textFile("document.txt", 1024, "Це текстовий файл");

    Image imageFile("photo.jpg", 2048, 800, 600);

    Video videoFile("movie.mp4", 4096, 120);

    cout << "Iнформацiя про текстовий файл: " << '\n';
    textFile.displayInfo();
    cout << '\n';

    cout << "Iнформацiя про зображення: " << '\n';
    imageFile.displayInfo();
    cout << '\n';

    cout << "Iнформацiя про вiдео: " << '\n';
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
