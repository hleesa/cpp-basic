#include <cstdio>

class KBase{
public:
    void Initialize() {}
    void Finalize() {}
    virtual ~KBase(){
        printf("~KBase()\n");
//        DoTest2(); // 생성자, 파괴자에서 의미있는 함수 호출 X
    }
    void Test1(){
        printf("KBase::Test1()\n");
         /*virtual*/Test2();
    }

    virtual void Test2() = 0; // pure virtual function
//    {
//        printf("KBase::Test2()\n");
//    }
    void DoTest2(){ // template method pattern
        Test2();
    }
}; // class KBase

class KDerived : public KBase{
public:
    virtual ~KDerived(){
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

//    KBase* pBase = new KBase;
    KBase* pDerived = new KDerived; // subtype principle

    pDerived->DoTest2(); // late binding

    delete pDerived;
}