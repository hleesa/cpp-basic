#include <cstdio>
#include <string>

//class string{
//
//    friend string operator+(const char* left, const string& right);
//
//public:
//    string (const char* s = nullptr){
//        if (s == nullptr) {
//            buffer[0] = NULL;
//        }
//        else {
//            strcpy(buffer, s);
//        }
//    }
//
//    const char* c_str() const{
//        return buffer;
//    }
////    string operator+(const char* right, int i){ // 안됨
//    string operator+(const char* right){ // operator overloading
//        string temp = *this;
//        strcat(temp.buffer, right);
//        return temp;
//    }
//
//    string& operator=(const string& rhs) {
//        memcpy(buffer, rhs.buffer, sizeof(buffer));
//        return *this;
//    }
//
//private:
//    char buffer[100];
//};
//
////string operator+(const char* left, const string& right, int i){ // 안됨
//string operator+(const char* left, const string& right){
//    string t = left;
//    strcat(t.buffer, right.buffer);
//    return t;
//}

int main(){
//    string s("hello");
   std::string s = "hello"; // implicit constructor (?)

//    s.operator+(" world").operator+("!\n"); // explicit call
    s = s + " world" + "!\n"; // implicit call
    printf("%s\n", s.c_str());

    std::string t;
    t = "hello" + s;
//    t.operator=(operator+("hello", s));
    printf("%s\n", t.c_str());

    return 0;
}