#include <stdio.h>
#include <iostream>

using namespace std;

// 定义类型
typedef int cint;

enum color {
    read,
    green,
    blue,
};

void test_1();
void test_2();


int main() {
    test_1();
    test_2();

    return 0;
}

void test_1() {
    // def
    int a, b;
    int c;
    float f;
    printf("a: %d,b: %d \n", a, b);

    // init
    a = 10;
    b = 20;
    c = a + b;
    cout << c << endl;

    f = 70/3.0;
    cout << f << endl;
}

#define ME_NAME "dollarkillerx";

void test_2() {
    cout << ME_NAME ;
}