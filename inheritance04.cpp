#include <cstdio>

class KTrie{
public:
    float radius;
};

class KCar {
public:
    KCar(){
        printf("KCar::KCar()\n");
    }
    ~KCar(){
        printf("KCar::~KCar()\n");
    }
    void Move(){
        printf("KCar::Move()\n");
    }
private:
    KTrie trie[4];

};

class KWing{
public:
};

class KDriver{
public:
};

class KSportCar : public KCar {
public:
    KSportCar() : wing(nullptr), driver(nullptr) {
        printf("KSportCar::KSportCar()\n");
    }
    ~KSportCar(){
        delete wing;
        printf("KSportCar::~KSportCar()\n");
    };
    void Move(){ // override
        KCar::Move();
        printf("KSportCar::Move()\n");
    }
    void Turbo(){ }
    void SetDriver(KDriver* pDriver){
        driver = pDriver;
    }
    void CreateAccessories(){
        wing = new KWing;
    }
private:
    KWing*      wing; // aggregation
    KDriver*    driver; // association
};

int main(){
//    KSportCar   car;
//    car.Move();
//    KCar        car2;
//    car2.Move();

//    KSportCar* pCar = new KSportCar;
    KCar* pCar = new KSportCar;
    pCar->Move();
    delete pCar;
}