#include <cstdio>
#include <cstring>

struct People { // type definition
    int age; // member variable
    char name[10];
};

void PrintPeople(People a){
    printf("%s : %i\n", a.name, a.age);
}

int main(){

    People a;
    People b;

    a.age = 20;
    strcpy(a.name, "Hello");
    char* cp = (char*) &a;
    printf("%c\n", cp[5]);

    b.age = 21;
    strcpy(b.name, "World");

    PrintPeople(a);

    return 0;
}