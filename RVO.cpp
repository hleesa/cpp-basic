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
    explicit KPeople(const char* name_){
        age = 0;
        strcpy(name, name_);
        printf("constructor( char* )\n");
    }
//private:
    KPeople(const KPeople& rhs){ // copy constructor
        age = rhs.age;
        strcpy(name, rhs.name);
        printf("copy constructor()\n");
    }
    KPeople& operator=(const KPeople& rhs) {
        printf("assign operator()\n");
        if (this != &rhs){
            age = rhs.age;
            strcpy(name, rhs.name);
        }
        return *this;
    }
public:
    ~KPeople() {
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

KPeople GetPeople(){
    KPeople t;
    return t;
//    return KPeople("H"); // RVO
}

int main(){
    KPeople t;
    t = GetPeople();
//    Test(KPeople("I"));
    return 0;
}