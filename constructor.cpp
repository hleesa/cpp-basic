#include <cstdio>
#include <cstring>
#include <cstdlib>

class KPeople {
public:
    int age;
    char name[12];

    KPeople(){ // constructor
        age = 0;
        name[0] = 0;
        printf("constructor()\n");
    }

    ~KPeople() { // destructor
        // age = 0;
        printf("destructor()\n");
    }

    void PrintPeople(){
        printf("%s : %i\n", name, age);
    }
    void SetAge(int age_) {
        age = age_;
    }
    void SetName(const char* name_){
        strcpy(name, name_);
    }
};


int main(){
    KPeople* p;

//    p = static_cast<KPeople*>(operator new(sizeof(KPeople))); // new function
//    p->KPeople::KPeople();
    p = new KPeople; // new expression
    p->PrintPeople();

//    p->KPeople::~KPepole();
//    operator delete(p);
    delete p; // delete expression

    return 0;
}