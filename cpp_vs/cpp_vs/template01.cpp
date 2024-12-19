#include <stdio.h>

//#define DATA_TYPE float

template<typename DATA_TYPE>
DATA_TYPE GetMax(DATA_TYPE a, DATA_TYPE b) {
	//printf("%s\n", __FUNCSIG__); // signatrue
	printf("%s\n", __FUNCDNAME__); // decorated name
	return a > b ? a : b;
}

//int GetMax(int a, int b) {
//	//printf("%s\n", __FUNCSIG__); // signatrue
//	printf("%s\n", __FUNCDNAME__); // decorated name
//	return a > b ? a : b;
//}
//
//float GetMax(float a, float b) { // ovweloading
//	printf("%s\n", __FUNCSIG__); // signatrue
//	printf("%s\n", __FUNCDNAME__); // decorated name
//	return a > b ? a : b;
//}



int main() {
	int i = 2;
	int j = 3;
	GetMax<int>(i, i);
	GetMax<float>(2.1f, 3.1f);
	return 0;
}
