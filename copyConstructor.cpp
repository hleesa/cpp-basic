#include <cstdio>
#include <cstring>
#include <cstdlib>

class KPeople {
public:
    int age;
     char name[12];

    KPeople(){ // default constructor
        age = 0;
        name[0] = 0;
        printf("constructor()\n");
    }
    explicit KPeople(const char* name_){ // overloading
        age = 0;
        strcpy(name, name_);
        printf("constructor( char* )\n");
    }
    KPeople(const KPeople& rhs){ // copy constructor
        age = rhs.age;
        strcpy(name, rhs.name);
        printf("copy constructor()\n");
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

void Test(KPeople p){
    p.PrintPeople();
}

int main(){
    KPeople p("A");
    KPeople temp = p; // copy constructor
    Test( temp); // copy constructor

    return 0;
}