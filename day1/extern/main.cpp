//
// Created by wangy on 2021/2/5.
//
#include <iostream>

int count;
extern void write_extern();

int main() {
    count = 5;

    write_extern();
}

// g++ main.cpp  support.cpp