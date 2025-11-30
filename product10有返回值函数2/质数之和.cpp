#include "iostream"
using namespace std;

/*
 * 6、输入两个整数a和b（保证a<=b），输出a到b之间质数之和。需要定义一个函数用于判定某个整数是否为质数，并在主函数中正确调用。不会定义和调用函数的代码，先扣一半分数。
 */

bool isPrime(int n){
    if (n < 2) return false;
    for (int i = 2; i * i <= n ; ++i) {
        if (n % i == 0) return false;
    } return true;
}

int main()
{
    int a, b,sum = 0;
    cin >> a >> b;
    for (int i = a; i <= b ; ++i) {
        if (isPrime(i)) sum += i;
    }
    cout << sum << endl;
    return 0;
}