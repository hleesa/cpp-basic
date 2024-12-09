#include <cstdio>

class KTrie{
public:
    float radius;
};

class KCar {
public:
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
    }
    ~KSportCar(){
        delete wing;
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
////    car.KCar::Move();
//    car.Move();
//    KCar        car2;
//    car2.Move();

//    KSportCar* pCar = new KSportCar;
    KCar* pCar = new KSportCar;
    pCar->Move();
    delete pCar;
}