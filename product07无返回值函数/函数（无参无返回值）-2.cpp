#include "iostream"
using namespace std;

/*
 * 问题描述
定义函数f，用于输出一行共4个#，然后在主函数中调用两次
输入描述
无
输出描述
两行，每行4个#，最后一行后面也要换行。
样例输入

样例输出
####
####
 */

void f()
{
    cout << "####" << endl;
}

int main()
{
    f();
    f();
    return 0;
}