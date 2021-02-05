//
// Created by wangy on 2021/2/5.
//
#include <iostream>
using namespace std;

extern int count;

void write_extern(void)
{
    cout << "count is " << count << endl;
}