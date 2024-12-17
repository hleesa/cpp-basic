#include <cstdio>
#include <iostream>

//void endl(){
//    printf("\n");
//}
//
//class ostream{
//public:
//    const ostream& operator<<(int i) const {
//        printf("%i", i);
//        return *this;
//    }
//
//    const ostream& operator<<(float f) const {
//        printf("%g", f);
//        return *this;
//    }
//
//    const ostream& operator<<(const char* s) const {
//        printf("%s", s);
//        return *this;
//    }
//
//    const ostream& operator<<(void (* manipulator)()) const {
//        manipulator();
//        return *this;
//    }
//};
//
//ostream cout;

int main() {

    int i = 3;
    float f = 4.1;
//    cout.operator<<(i).operator<<(f).operator<<("hello"); // explicit call
//    ((cout << i) << f) << "hello";
//    cout << i << " " << f << " " << "hello" << endl;

    std::cout << i << " " << f << " " << "hello" << std::endl;

    return 0;
}