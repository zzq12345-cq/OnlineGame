#include "iostream"
using namespace std;
/*
 *
问题描述
有一个长方体形状的水缸，长a米，宽b米，高c米。水缸初始状态没有水，有一根流速为每秒d立方米的水管，从水缸上方向水缸灌水。水缸底部有个洞，以每秒e立方米的速度向外排水。经过了g秒以后，水缸水位的高度是多少米？（如果不是整数，那么保留至整数）
输入描述
一个正整数n，表示n组案例。
每组案例由6个正整数a、b、c、d、e、g组成。
输出描述
针对每组案例，输出一个整数，表示g秒以后水缸水位的高度（如果不是整数，那么保留至整数）。
每组案例输出完都要换行。
样例输入
1
10 10 10 12 3 70
样例输出
6
 */
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        double a, b, c, d, e, g;
        cin >> a >> b >> c >> d >> e >> g;

        // 1.排水 > 灌水
        if (d <= e){
            cout << 0 << endl; // 水缸永远是空的
        } else {
            // 2.水在增加
            // 计算净增加体积
            double totalvalue = (d - e) * g;

            // 计算底面积
            double base = a * b;

            // 计算高度
            double h = totalvalue / base;

            // 检查是否溢出
            if (h > c){
                h = c;
            }
            cout << ( int) h << endl;
        }
    }
    return 0;
}
