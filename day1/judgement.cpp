//
// Created by wangy on 2021/2/5.
//

#include <iostream>

using namespace std;

void test_if();

void test_switch();

void test_in();

int main() {
    test_switch();
//    test_if();
    return 0;
}

void test_in() {
    string name;
    cin >> name;
    cout << name;
}

void test_if() {
    for (;;) {
        int a;
        cin >> a;
        if (a > 20) {
            cout << "> 20" << endl;
            break;
        }
        cout << "next: ";
    }
}

void test_switch() {
    for (;;) {
        int a;
        cin >> a;
        switch (a) {
            case 20:
                cout << "20" << endl;
                goto LOOP;
            default:
                cout << "next: " << endl;
        }
    }
    LOOP:
    return;
}