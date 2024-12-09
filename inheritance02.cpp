#include <cstdio>

class KTrie{
public:
    float radius;
};

class KCar {
public:
    void Move(){}
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
    void Turbo(){ Move(); }
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
    KDriver*    pDriver = new KDriver();
    KSportCar   car;

    car.SetDriver(pDriver);
    car.Move();
    car.Turbo();

    delete pDriver;

    return 0;
}