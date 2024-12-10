#include <cstdio>

class KBase{
public:
    ~KBase(){
        printf("~KBase()\n");
    }
    void Test1(){
        printf("KBase::Test1()\n");
    }
    virtual void Test2(){
        printf("KBase::Test2()\n");
    }
}; // class KBase

class KDerived : public KBase{
public:
    ~KDerived(){
        printf("~KDerived()\n");
    }

    virtual void Test2() override {
        printf("KDerived::Test2()\n");
    }
    void Test3(){
        printf("KDerived::Test3()\n");
    }
}; // class KDerived

int main(){
//    KBase       base;
//    KDerived    derived;
//
//    base.Test2();
//    derived.Test2();

    KBase* pBase = new KBase;
    KBase* pDerived = new KDerived; // subtype principle
//    KDerived* pDerived2 = new KBase(); // unsafe down casting

//    pBase->Test2();
    pDerived->Test2(); // late binding

//    delete pBase;
    delete pDerived;

}