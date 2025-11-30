#include "iostream"
using namespace std;

/*
 * 问题描述
利用函数输出8行，每行4个#
输入描述
无
输出描述
8行，每行4个#。最后一行后也要换行。
样例输入

样例输出
####
####
####
####
####
####
####
####

 */

void print()
{
    for (int i = 0; i < 8; ++i) {
        cout << "#" << "#" << "#" << "#" << endl;
    }
}

int main()
{
    print();
    return 0;
}