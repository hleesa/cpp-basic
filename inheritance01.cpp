#include <cstdio>

class KTest {
public: // access modifier, private, protected and public
    void A() { B(); }
    void SetAge(int age_) { // writer
        age = age_;
    }
    int GetAge(){ // reader
        return age;
    }
protected:
    int P(){}
private:
    void B() { C(); }
    void C() {}
private:
    int age; // encapsulation
};

// inheritance
// KTest 2 == derived class
//class KTest2 : private KTest{ // base class
class KTest2 : public KTest{ // base class
public:
    void D(){ P(); };
//    void D(){ P(); B(); };
private:
    int hp;
};

int main(){
    KTest t;
    t.A();
//    t.B(); // can't access private function
//    t.age;
    t.SetAge(20);

    KTest2 t2;
    t2.A();
    t2.D();
//    t2.P();

    return 0;
}