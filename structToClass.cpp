#include <cstdio>
#include <cstring>

struct People {
    int age;
    char name[10];
};

People a;

void PrintPeople(People a){
    printf("%s : %i\n", a.name, a.age);
}

int main(){

    a.age = 20;
    strcpy(a.name, "Hello");

    People b;
    b.age = 21;
    strcpy(b.name, "World");

    PrintPeople(a);
    PrintPeople(b);

    return 0;
}