#include <iostream>

class Hayvan {
public:
    // Sanal iþlev tanýmlanýyor.
    virtual void konus() {
        std::cout << "Hayvan konuþuyor!" << std::endl;
    }
};

class Kedi : public Hayvan {
public:
    // Üst sýnýftaki sanal iþlev eziliyor.
    void konus() override {
        std::cout << "Miyav!" << std::endl;
    }
};

class Kopek : public Hayvan {
public:
    // Üst sýnýftaki sanal iþlev eziliyor.
    void konus() override {
        std::cout << "Hav hav!" << std::endl;
    }
};

int main() {
    Hayvan* hayvan;

    Kedi kedi;
    Kopek kopek;

    // Hayvan iþaretçisi, Kedi nesnesini gösteriyor.
    hayvan = &kedi;
    hayvan->konus();  // Çýktý: "Miyav!"

    // Hayvan iþaretçisi, Köpek nesnesini gösteriyor.
    hayvan = &kopek;
    hayvan->konus();  // Çýktý: "Hav hav!"

    return 0;
}
