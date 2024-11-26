#include <cstdio>
#include <cstring>

struct People { // type definition
    int age; // member variable
    char name[10];
};

void PrintPeople(People* a){
    printf("%s : %i\n", (*a).name, (*a).age);
}

void SetAge( People* a, int newAge) {
    (*a).age = newAge;
}

int main(){

    People a;
    People b;

    a.age = 20;
    strcpy(a.name, "Hello");

    b.age = 21;
    strcpy(b.name, "World");

    char* cp = (char*) &a;
    printf("%c\n", cp[5]);

    SetAge(&a, a.age + 1);
    PrintPeople(&a);

    return 0;
}