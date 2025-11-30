#include "iostream"
using namespace std;
/*
 *
问题描述
利用函数输出n行，奇数行是5个*，偶数行是5个#
输入描述
一个正整数n
输出描述
n行，奇数行是5个*，偶数行是5个#
样例输入
3
样例输出
*****
#####
*****
提示说明
  最后一行后也要换行
 */
void print(int n){
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0){
            cout << "*****" << endl;
        } else {
            cout << "#####" << endl;
        }
    }
    cout << endl;
    return;
}

int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}