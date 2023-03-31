#include <iostream>

class Hayvan {
public:
    // Sanal i�lev tan�mlan�yor.
    virtual void konus() {
        std::cout << "Hayvan konu�uyor!" << std::endl;
    }
};

class Kedi : public Hayvan {
public:
    // �st s�n�ftaki sanal i�lev eziliyor.
    void konus() override {
        std::cout << "Miyav!" << std::endl;
    }
};

class Kopek : public Hayvan {
public:
    // �st s�n�ftaki sanal i�lev eziliyor.
    void konus() override {
        std::cout << "Hav hav!" << std::endl;
    }
};

int main() {
    Hayvan* hayvan;

    Kedi kedi;
    Kopek kopek;

    // Hayvan i�aret�isi, Kedi nesnesini g�steriyor.
    hayvan = &kedi;
    hayvan->konus();  // ��kt�: "Miyav!"

    // Hayvan i�aret�isi, K�pek nesnesini g�steriyor.
    hayvan = &kopek;
    hayvan->konus();  // ��kt�: "Hav hav!"

    return 0;
}
