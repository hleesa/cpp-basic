#include <cstdio>

#define REF
#define IN
#define OUT

//void Swap(int a, int b){ // call by value
void Swap(int& a, int& b){ // call by l-value reference
    int t = a;
    a = b;
    b = t;
}

int& AccessInt(){
//    int i = 1;
    static int i = 1 ;
    printf("%i\n", i);
    return i;
}

class KTest{
public:
//    KTest Print(int i){
//    KTest& Print(int i){
    KTest& operator() (int i){
        printf("%i", i);
        return *this;
    }
    KTest& operator() (float i){ // overloading
        printf("%g", i);
        return *this;
    }
    KTest& operator()  (const char* msg){ // overloading
        printf(msg);
        return *this;
    }
private:
    int age = 0;
};

int main(){

    int a = 2;
    int b = 3;
    &a;

    Swap( IN OUT a, IN OUT b);
    printf("%i %i\n", a, b);

    AccessInt() = 3;
    AccessInt();

    KTest t;
//    t.Print(a);
//    t.Print(3.1f);
//    t.Print("Hello");
//    t.Print(a).Print(" ").Print(3.1f).Print(" ").Print("Hello");
//    t.operator() (a).operator()(" ").operator()(3.1f).operator()(" ").operator()("Hello");
    t(a)(" ")(3.1f)(" ")("Hello");

    return 0;
}