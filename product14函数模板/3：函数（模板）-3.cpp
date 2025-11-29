#include "iostream"
using namespace std;
/*
 * 问题描述
写一个函数模板（function template），有三个类型相同的参数，返回值类型也与参数相同，函数功能是返回三个参数中较大的参数。
主函数中分别输入两组值，调用函数输出结果。
输入描述
一共有6个数字。
首先是三个浮点数a、b、c
然后是三个整数d、e、f
输出描述
先输出a、b、c的最大值，换行。
然后输出d、e、f的最大值，换行。
可能需要嵌套调用函数。
样例输入
1.5 2.5 3.5
3 2 1
样例输出
3.5
3
 */

template<typename T>
T max2(T x, T y) {
    return x > y ? x : y;
}

// 返回三个相同类型值中最大的一个（嵌套调用上面的函数）
template<typename T>
T max3(T x, T y, T z){
    return max2(max2(x,y),z);
}

int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    int d,e,f;
    cin >> d >> e >> f;
    cout << max3(a,b,c) << endl;
    cout << max3(d,e,f) << endl;
    return 0;
}