#include "iostream"
using namespace std;
/*
 * 问题描述
从前有个数学函数f(x)，功能是计算x的因数的个数，例如f(8)=4。（因为8的因数有1、2、4、8）
后来有人觉得算一次f函数不过瘾，又嵌套了一层，于是变成了f(f(x))，那么f(f(8))=f(4)=3。
随后，就有了更多层的嵌套函数f。人们发现这样写太费事了，于是把嵌套层数当成了f函数的第二个参数，例如f(f(8))写成了f(8,2)，f(9)写成了f(9,1)。
现在，需要计算f(a,b)=?
输入描述
一个正整数n，表示有n组案例。（1 <= n <= 100）
每组案例由两个正整数a、b组成。(a<=1e9，b<=1e9）
输出描述
针对每组案例，输出一个整数，表示f(a,b)的值。
每组案例输出完都要换行。
样例输入
2
8 1
8 2
样例输出
4
3
 */

// 判断因数
long long f(long long x){
    int count = 0;
    for (long long  i = 1; i * i <= x ; ++i) {
        if (x % i == 0){
            // i 是一个因数

            // 如果x / i 不等于 i，那么 x / i 也是一个因数
            if (i * i != x){
                count += 2;
            }
        }
        if (i * i == x) {
            count += 1;
        }
    }
    return count;
}
int main(){
    int n;
    cin >> n;
    while (n--){
        long long a,b;
        cin >> a >> b;
        if (a == 1){
            cout << 1 << endl;
        } else {
            for (int i = 1; i <= b ; ++i) {
                if (a == 2) break;
                a = f(a);
            }
            cout << a << endl;
        }
    }
    return 0;
}
