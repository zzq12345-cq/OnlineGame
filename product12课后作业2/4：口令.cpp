#include "iostream"
using namespace std;
/*
 * 问题描述
根据输入的年月日信息，如果是圣诞节或者平安夜（12月25日和12月24日），那么输出Merry Christmas；如果是新年（1月1日），那么输出Happy New Year xxxx，其中xxxx要用输入的年份代替；如果是其他日期，那么输出Hello World。
输入描述
一个正整数n，表示案例的数量。
每组案例由3个正整数y、m、d组成，分别代表年、月、日，并且保证该日期是合法存在的。
输出描述
针对每组案例，根据【描述】的要求输出相对应的字符串。
每组案例输出完都要换行。
样例输入
3
2020 1 1
2019 12 24
2019 12 31
样例输出
Happy New Year 2020
Merry Christmas
Hello World
 */

int main(){
    int n;
    cin >> n;
    while (n--)
    {
        int y, m, d;
        cin >> y >> m >> d;
        if (m == 12 && (d == 25 || d == 24)){
            cout << "Merry Christmas" << endl;
        } else if (m == 1 && d == 1){
            cout << "Happy New Year" << " " << y << endl;
        } else {
            cout << "Hello World" << endl;
        }
    }
    return 0;
}
