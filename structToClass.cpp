#include <cstdio>
#include <cstring>
#include <cstdlib>

struct People { // type definition
    int age; // member variable
    char name[10];

    void PrintPeople(){ //member function
        printf("%s : %i\n", name, age);
    }

    void SetAge(int newAge) {
        age = newAge;
    }
};


int main(){
    People* b;

    b = new People;
    b->age = 21;
    strcpy(b->name, "World");

    b->SetAge(b->age + 1);
    b->PrintPeople();
    delete b;

    return 0;
}