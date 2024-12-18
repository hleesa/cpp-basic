#include <cstdio>

int buffer[1024] = {0,};

class KTest{
public:
    KTest(){
        printf("KTest()\n");
    }
    ~KTest(){
        printf("~KTest()\n");
    }
    void* operator new (unsigned long size){
        printf("operator new(), size = %i\n", size);
        return buffer;
    }
    void* operator new (unsigned long size, const char* msg, int ivalue ){
        printf("operator new( const char*, int), size = %i, %s, %i\n", size, msg, ivalue);
        return buffer;
    }
    void operator delete (void* p) {
        printf("operator delete(), p = %p\n", p);
    }
    void* operator new[] (unsigned long size){
        printf("operator new[](), size = %i\n", size);
        return buffer;
    }
    void operator delete[] (void* p) {
        printf("operator delete[](), p = %p\n", p);
    }
private:
    int i = 3;
};

void PrintBuffer(){
    for (int value: buffer) {
        if (value == 0) {
            continue;
        }
        printf("%i, ", value);
    }
    printf("\n");
}

int main(){
    KTest* p;
    p = new("hello", 4)KTest;
//    p = new KTest[5];
//    p = (KTest*)operator new(sizeof(KTest));
//    p->KTest::KTest();

    PrintBuffer();

    delete  p;
//    delete[]  p;
//    p->KTest::~KTest();
//    operator delete(p);

    return 0;
}