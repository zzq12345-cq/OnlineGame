#include "iostream"
using namespace std;
/*
 *
问题描述
数学上，质数是指在大于1的自然数中，除了1和它本身以外不再有其他因数的自然数。质因数是指能整除给定正整数的质数。
若一个整数有m个不同的质因数，那么称该整数为m-满意数。例如126=2*3*3*7，有三个不同的质数（2、3、7），所以126被称为3-满意数。
计算从1到a中有多少个m-满意数。
输入描述
一个正整数n，表示案例的数量（n<=10)
每组案例由两个正整数a和m组成，含义见【描述】。（a<=1000000, m<=7)
输出描述
针对每组案例，输出一个正整数，表示从1到a中有多少个m-满意数。
样例输入
1
20 2
样例输出
7
提示说明
1到20之间，是2-满意数的数字是：6、10、12、14、15，18、20共7个。
 */
int Number(int n){
    if (n <= 1) return 0;
    int count = 0;

// 从2开始尝试
    for (int i = 2; (long long) i * i <=  n ; ++i) {
        if (n % i == 0){
            count++;
            while (n % i == 0){
                n /= i;
            }
        }
    }
    if (n > 1){
        count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    while (n--){
        int a,m;
        cin >> a >> m;
        int totalcount = 0;

        for (int i = 1; i <= a ; ++i) {
            int count = Number(i);
            if (count == m){
                totalcount++;
            }
        }
        cout << totalcount << endl;
    }
    return 0;
}