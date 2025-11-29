#include "iostream"
using namespace std;
/*
 * 问题描述
写一个函数模板（function template），要求能返回任意相同类型的两个数字的相减结果。
主函数中分别输入两组值，调用函数输出结果。

输入描述
一共有4个数字。
首先是两个浮点数a、b
然后是两个整数c、d
输出描述
先输出a-b的值，换行。
然后输出c-d的值，换行。
样例输入
3.5 2.3
3 1
样例输出
1.2
2
 */

template<typename T>
T sub(T x,T y){
    return x - y;
}
int main()
{
    double a,b;
    int c,d;
    cin>>a>>b;
    cin >> c>>d;
    cout << sub(a,b) << endl;
    cout << sub(c,d) << endl;
    return 0;
}