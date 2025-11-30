#include "iostream"
using namespace std;
/*
 * 问题描述
双11是某猫的重大活动日，也是著名的大光棍节。某知名单身学长想要知道，距离下一个双11还有多少天？（闰年判定方法见“HINT”）
输入描述
        一个正整数n，表示有n组案例。
每组案例由三个正整数y、m、d组成，表示当天是y年m月d日。（确保是一个合法的日期，y<=4000，而且不会是某年的11月11日）
输出描述
        针对每组案例，输出一个整数，表示y年m月d日距离下一个双11的天数。
每组案例输出完都要换行。
样例输入
2
2018 11 10
2018 11 12
样例输出
1
364
提示说明
        闰年判断规则：如果年份是整百的，那么必须要能被400整除才算闰年；不是整百的年份只要能被4整除就算闰年。
 */
bool isLeapYear(int year){
    return (year % 4 == 0 && year % 100 != 0 || (year % 400 == 0 && year % 3200 != 0));
}

int getDays(int y ,int m){
    static int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (m == 2 && isLeapYear(y)) return 29;
    return days[m];
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int y,m,d;
        cin >> y >> m >> d;
        int count = 0;
        while (m != 11 || d != 11){
            count ++;
            d++;
            int daysInMonth = getDays(y,m);
            if (d > daysInMonth){
                d = 1;
                m++;

                if (m > 12){
                    m = 1;
                    y++;
            }
            }
        }
        cout << count << endl;
    }
    return 0;
}