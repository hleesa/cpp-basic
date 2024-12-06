#include <cstdio>

int g_age = 48;

class KTest{
public:
    KTest() : age(g_age) { // member initializer list
        hp = 0.0f;
    }
//    KTest Print(int i){
//    KTest& Print(int i){
    KTest& Print (int i){
        printf("%i", i);
        return *this;
    }
    KTest& Print (float i){ // overloading
        printf("%g", i);
        return *this;
    }
    KTest& Print (const char* msg){ // overloading
        printf(msg);
        return *this;
    }
private:
    int& age;
    float hp;
};

void Test(const int& i){ // read only
    // i += 1;
}

int main(){

    int i = 1;
    KTest t;
    t.Print(i).Print(" ").Print(3.1f).Print(" ").Print("Hello\n");

//    int& j; // 불가
//    j = i; // 불가
    int& j = i;
    j += 1;
    printf("%i\n", i);

    int k = 3;
    Test(3); // 상수 표현식 전달 가능, r-value reference
    Test(k); // 주소가 있는 펴현식, l-value reference

    return 0;
}