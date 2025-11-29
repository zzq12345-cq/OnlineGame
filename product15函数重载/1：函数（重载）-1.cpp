#include "iostream"
#include "cmath"
using namespace std;
/*
 * 问题描述
通过重载函数（overloaded function），实现计算两点之间的距离。
第一个重载接受4个int类型参数，把前两个参数看成一个点的坐标，后两个参数看成另一个点的坐标，函数返回两点之间的距离（浮点数）。
第二个重载接受4个double类型参数，把前两个参数看成一个点的坐标，后两个参数看成另一个点的坐标，函数返回两点之间的距离（浮点数）。
主函数中分别输入两组值，调用函数输出结果。
输入描述
一共有8个数字。
首先是四个浮点数a、b、c、d
然后是四个整数e、f、g、h
输出描述
先输出点(a,b)到点(c,d)的距离，换行。
然后输出点(e,f)到点(g,h)的距离，换行。
输出结果与标准答案相差0.001之内即可。
样例输入
1.5 3.5 5.5 7.5
3 4 5 6
样例输出
5.65685
2.82843
 */
#include "iostream"
using namespace std;

// 重载1： 4个int参数
double distance(int x1, int y1, int x2, int y2){
    double dx = x1 - x2;
    double dy = y1 - y2;
    return sqrt(dx * dx + dy * dy);
}

// 重载2: 4个double参数
double distance(double x1, double y1, double x2, double y2){
    double dx = x1 - x2;
    double dy = y1 - y2;
    return sqrt(dx * dx + dy * dy);
}

int main()
{
    double a, b, c, d;
    int e, f, g, h;
    cin >> a >> b >> c >> d;
    cin >> e >> f >> g >> h;
    cout << distance(a, b, c, d) << endl;
    cout << distance(e, f, g, h) << endl;
    return 0;
}