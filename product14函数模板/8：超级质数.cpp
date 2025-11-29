#include "iostream"
using namespace std;
/*
 *
问题描述
一个六位正整数m，把m从中间切开，分成两个三位数a和b（例如123456从中间切开，分成了123和456）。
如果m、a、b都是质数，则称m是超级质数。
现在需要验证，x到y之间（包含x和y）有多少个这样的超级质数？（x<=y，且x和y都是六位数）
输入描述
一个正整数n，表示有n组案例。
每组案例由两个六位正整数x和y组成。（x<=y）
输出描述
针对每组案例，输出一个整数，表示x到y之间（包含x和y）超级质数的数量。
每组案例输出完都要换行。
样例输入
1
100000 999999
样例输出
3223
 */
bool isPrime(int a){
    if (a < 2) return false;
    for (int i = 2; i * i <= a; ++i) {
        if (a % i == 0) return false;
    } return true;
}

int main()
{
    int n;
    cin >> n;
    while (n--){
        int x, y;
        cin >> x >> y;
        int count = 0;
        for (int i = x; i <= y ; ++i) {
            if (isPrime(i) && isPrime(i / 1000) && isPrime(i % 1000)){
                count ++;
            }
        }
        cout << count << endl;
    }
    return 0;
}