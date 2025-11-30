#include "iostream"
using namespace std;
/*
 * 问题描述
定义一个函数f，有2个double类型的参数a和b，函数返回长为a宽为b的长方形的周长。主函数中输入2个double型的数字x和y，调用f函数，输出f(x,y)的结果。
输入描述
2个double类型数字x和y
输出描述
以x为长，y为宽的长方形周长
样例输入
4  3
样例输出
14
 */

double f(double a,double b)
{
    return (a + b)* 2;
}

int main()
{
    double x,y;
    cin >> x >> y;
    cout << f(x,y) << endl;
    return 0;
}
