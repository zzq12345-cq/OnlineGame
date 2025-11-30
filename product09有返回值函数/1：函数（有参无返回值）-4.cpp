#include "iostream"
using namespace std;

/*
 *
问题描述
输入一个正整数n和一个字符c，利用函数输出n行由字符c组成的V字图案。
输入描述
一个正整数n和一个字符c
输出描述
n行由字符c组成的V字图案。每行最后一个字符c后面不要输出空格，直接换行。
样例输入
5 +
样例输出
+       +
 +     +
  +   +
   + +
    +

提示说明
函数的声明应该是void f(int n, char c);
 */

void f(int n, char c) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i; ++j) { // 输出前面c的空格
            cout << " ";
        }
        cout << c;
        for (int j = 1; j <= 2 * (n - i)- 1 ; ++j) {
            cout << " ";
        }
        if (i != n){
            cout << c;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    char c;
    cin >> n >> c;
    f(n, c);
    return 0;
}