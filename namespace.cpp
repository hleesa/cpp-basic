#include <cstdio>
#include <utility>

int i = 1; // global namespace

namespace dsu{
    int i = 2;
    int j = 3;

    class KTest{
    public:
        void Print(){
            j += 1;
            printf("%i\n", ::i);
            printf("%i\n", dsu::i);
        }
        static int GetInt(){
            return i;
        }
    public:
        static const int i = 4;
    };

    class KDerived : public KTest {
    public:
        using KTest::Print;
        void Print(int i ) { // overloading
            printf("KDerived::Print()\n");
        }
//        void Print(int i ) { // override
//            printf("KDerived::Print()\n");
//        }

    };
}

namespace dsu{
    int k = 5;
//    int i = 0;
}

using namespace dsu;
//using namespace std;

int main(){
//    printf("%i\n", ::i);
//    printf("%i\n", dsu::i);
//    printf("%i\n", dsu::KTest::i);
//    printf("%i\n", dsu::j );

    printf("%i\n", j);
    printf("%i\n", ::i);
    printf("%i\n", dsu::i);

    dsu::KDerived d;
    d.Print();
    d.Print(3);

    int a = 2;
    int b = 3;
//    swap(a, b);
    std::swap(a, b);
    printf("%i, %i\n", a, b);

    return 0;
}