#include <cstdio>
#include <cstring>
#include <cstdlib>

struct People { // type definition
    int age; // member variable
    char name[10];

    void PrintPeople(People* this_){ //member function
        printf("%s : %i\n", this_->name, this_->age);
    }

    void SetAge( People* this_, int newAge) {
        this_->age = newAge;
    }
};


int main(){
    People* b;

    b = new People;
    b->age = 21;
    strcpy(b->name, "World");

    b->SetAge(b, b->age + 1);
    b->PrintPeople(b);
    delete b;

    return 0;
}