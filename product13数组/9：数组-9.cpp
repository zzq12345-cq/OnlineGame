#include "iostream"
using namespace std;
/*
 *
问题描述
求一堆整数的最大值、最小值、平均值
输入描述
一个正整数n，然后是n个整数
输出描述
这n个数的最大值、最小值、平均值（四舍五入到整数），中间各用一个空格间隔，最后一个数后不要有空格或者换行
样例输入
3
2 3 15
样例输出
15 2 7
 */
int main(){
    int n;
    cin >> n;
    int a[n];

    // 读取n个整数到数组中
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // 初始化最大和最小值
    int max = a[0];
    int min = a[0];
    double sum = 0;

    //遍历数组 更新最大和最小值 总和
    for (int i = 0; i < n; ++i){
        sum += a[i];
    }
    for (int i = 0; i < n; ++i){
        if (a [i] > max) max = a[i];
        if (a [i] < min) min = a[i];
    }

    int avg = sum / n + 0.5;

    cout << max << " " << min << " " << avg;
    return 0;
}