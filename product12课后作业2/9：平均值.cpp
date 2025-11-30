#include "iostream"
using namespace std;
/*
 * 问题描述
计算m个整数去掉一个最大值、去掉一个最小值后，剩余整数的平均值。
输入描述
一个正整数n，表示有n组案例。(n<=20)
每组案例先是一个正整数m，然后是m个整数。(3<=m<=100, 这m个整数的绝对值均不超过10000）
输出描述
针对每组案例，输出m个整数去掉一个最大值、去掉一个最小值后，剩余整数的平均值，需要保留结果的小数点部分。
每组案例输出完都要换行。
样例输入
2
4 1 3 5 7
6 2 2 3 4 6 7
样例输出
4
3.75
提示说明
第一组样例，去掉最小值1和最大值7，剩余2个数字是3和5，平均值是4。
第二组样例，去掉最小值2（只去掉一个2）和最大值7，剩余4个数字是2、3、4、6，平均值是3.75。
 */

int main()
{
    int n;
    cin >> n;
    while (n--){
        int m;
        cin >> m;
        int max = -10000;
        int min = 10000;
        double  totalsum = 0.0;
        for (int i = 0; i < m ; ++i) {
            int num;
            cin >> num;
            totalsum += num;
            if (num > max){
                max = num;
            }
            if (num < min){
                min = num;
            }
        }
        double avg = (totalsum - max - min) / (m - 2);
        cout << avg << endl;
        }
    return 0;
    }