#include <cstdio>
#include <cstring>
#include <cstdlib>

struct People { // type definition
    int age; // member variable
    char name[10];
};

void PrintPeople(People* a){
    printf("%s : %i\n", a->name, a->age);
}

void SetAge( People* a, int newAge) {
    a->age = newAge;
}

int main(){
    People* b;

    b = (People*) malloc(sizeof(People));
    b->age = 21;
    strcpy(b->name, "World");

    SetAge(b, b->age + 1);
    PrintPeople(b);
    free(b);

    return 0;
}