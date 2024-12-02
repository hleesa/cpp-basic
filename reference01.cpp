#include <cstdio>

class KTest{
public:
    void Print() const { // declare this const
        printf("Age = %i\n", age);
    }
    void IncAge(){
        age += 1;
    }
private:
    int age = 20;
};

void Test(char* msg){
//    msg[0] = 'S';
    printf("%s\n", msg);
}

int main(){
    const float pi = 3.141592f;
//    pi = 3.5;
    Test("Hello");

    const KTest t;
//    t.IncAge();
    t.Print( );

    return 0;
}