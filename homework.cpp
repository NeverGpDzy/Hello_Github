#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//输入的数出现多少次
/*
int main()
{
	int  i=0;
	int num[10] = {0};
	int x;

	do {
		printf("put in your number:\n");
		num[i]++;
		scanf_s("%d", &i);
		
	} while (i != 100);

	num[0] -= 1;
	int a;
	for (a = 0; a <= 9; a++) {
		printf("%d的个数有%d个\n", a, num[a]);
	}


	
	printf("%d",count[2][1])


	return 0;
}
*/

//二维数组
/*
int main()
{

	int count[3][4] = {
		{7,6,5,4},
		{8,6,6,6},
		{3,3,3,7},
	};

	printf("%d\n", count[2][0]);

	int i, j, q;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++){
			printf("%d\n", count[i][j]);

		}


	}


	return 0;
}
*/

//乐程练习题：小明的心情
/*
int main()
{
	int a=0, b=0,i=0,end1=0,end2=8;

	do{
		i++;
	 //printf("输入\n")
	 scanf("%d %d", &a, &b);
	 if (a + b > end2 && a + b > 8) {
		 end1 = i;
		 end2 = a + b;
	 }
	} while (i < 7);

	printf("%d",end1);

	return 0;
}
*/

//乐程练习题，骑士拿了多少钱
/*
int main()
{
	int day = 0, money = 0,i = 0,k=1,a=0,r=1,s=0;
	//printf("请输入骑士收到钱的天数：\n");
	scanf_s("%d", &day);
		for (i = 1; i <= day; i++) {
			money += k;
			if (i == r) {
				k++;
				r = r + k;
			}
//错误思路
	//for (i = 1; i <= day; i+=k) {

	//	for (a = r ; a <= i; a++) {
	//		money += k;
	//	}
	//	r = r + k;
	//	k++;
//数据演示
	//1 2 3 4 5 6 7 8 9 10   i
 //   1 2 2 3 3 3 4 4 4 4      k
 //   1 3 3 6 6 6 10 10 10 10   r
 //    2     3          4

	}
	printf("%d", money);
	return 0;
}
*/

//捏球橡皮泥为正方形
/*
#include <math.h>
int main()
{
	double a, b ,c,d,k=3.14;
	scanf_s("%lf\n%lf", &a, &b);
	c = (4.0 / 3) * (k * pow(a/2, 3)) + (4.0 / 3) * (k * pow(b/2, 3));
	d = pow(c,1.0/3);
	printf("Side length of cube: %.2lf", d);

	return 0;
}
*/

//整除
/*
int main()
{
	int a,b=0;
	scanf_s("%d", &a);
	if (a % 3 == 0 && a % 5 == 0 && a % 7 == 0) {
		b = 1;
	}
	if (b) {
		printf("Yes");
	}else {
		printf("No");
	}

	return 0;
}
*/

//7.5 象限判断
/*
int main()
{
	float a, b;
	scanf_s("%f,%f", &a, &b);
	if (a > 0) {
		if (b > 0) {
			printf("quadrant 1");
		}
		else {
			printf("quadrant 4");
		}
	}
	else {
		if (b > 0) {
			printf("quadrant 2");
		}
		else {
			printf("quadrant 3");
		}
	}
	return 0;
}
*/

//7.6 输入正整数n打印菱形
/*
int main()
{
	int a, b,i;
	scanf_s("%d",&a);
	for (i = 1; i <= a; i++) {
		for (b = 1; b <= (a - i); b++)
			printf(" ");
		for (b = 1; b <= (2 * i - 1); b++)
			printf("*");
		for (b = 1; b <= (a - i); b++)
			printf(" ");
		printf("\n");
	}
	for (i = 1; i <= a-1 ; i++) {
		for (b = 1; b <= i; b++)
			printf(" ");
		for (b = 1; b <= (2*a-1-2*i); b++)
			printf("*");
		for (b = 1; b <= i; b++)
			printf(" ");
		if (i == a - 1) {
			break;
		}
		printf("\n");
	}
	return 0;
}
*/

//7.75求成绩的最大值
/*
int main()
{
	int a[7] = {0},i=1,k;
	scanf_s("%d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6]);
	k = a[0];
	do{
		if (a[i] >= k)
			k = a[i];
		i++;
	} while (i < 7);
	printf("选手最高得分：%d", k);

	return 0;
}
*/

//7.7哥德巴赫猜想
/*
int SU(int);
int main()
{
	int i,k,isPrime=1,s=0;
	int a[2500] = { 0 };
	for (i = 2; i < 10000; i++) {
		for (k = 2; k < i; k++) {
			if (i % k == 0) {
				isPrime = 0;
			}
		}
		if (isPrime == 1) {
			a[s] = i;
			s++;
		}
		isPrime = 1;
	}
	for (i = 0; i < 2500; i++) {
		printf("%d\t", a[i]);
	}

	int b,c;
	scanf_s("%d", &b);

	for (i = 0; i < 2500; i++) {
		if (i != 0) {
			c = b - a[i];
			if (c > 0 && a[i] <= c) {
				if (SU(c)) {
					printf("%d+%d\n", a[i], c);
				}
			}
		}
	}
	return 0;
}

int SU(int k)
{
	int i,isPrime=1;
	for (i = 2; i < k; i++) {
		if (k % i == 0) {
			isPrime = 0;
		}
	}
	return isPrime;
}
*/

//7.9求一定范围内的素数
/*
int main()
{
	int m,n ;
	scanf_s("%d %d", &m, &n);


	int i, k, isPrime = 1, s = 0, total=0;
	int a[25] = { 0 };
	for (i = m; i <= n; i++) {
		for (k = 2; k < i; k++) {
			if (i % k == 0) {
				isPrime = 0;
			}
		}
		if (isPrime == 1) {
			a[s] = i;
			s++;
		}
		isPrime = 1;
	}
	for (i = 0; i < 25; i++) {
		if (a[i] > 0) {
			total += a[i];
		}
	}
	printf("%d", total);
	return 0;
}
*/

//嵌套循环
/*
int main()
{
	int a,i,k,total=0;
	scanf_s("%d", &a);
	for (i = 1; i <= a; i++) {
		for (k = 1; k <= i; k++) {
			total += k;
		}
	}
	printf("sum=%d", total);
	return 0;
}
*/

//报数后转
/*
int main()
{
	int a, b, c, d,i;
	scanf_s("%d", &a);
	int k[1000] = { 0 };
	for (i = 1; i <= a; i++) {
		if (i % 3 == 0) {
			if (k[i] == 0)
				k[i] = 1;
			else
				k[i] = 0;
		}
	}
	for (i = 1; i <= a; i++) {
		if (i % 4 == 0) {
			if (k[i] == 0)
				k[i] = 1;
			else
				k[i] = 0;
		}
	}
	for (i = 1; i <= a; i++) {
		if (i % 5 == 0) {
			if (k[i] == 0)
				k[i] = 1;
			else
				k[i] = 0;
		}
	}
	int num = 0, p[1000] = { 0 };
	for (i = 1; i <= a; i++) {
		if (k[i] == 0) {
			num++;
			p[num] = i;
		}
	}
	for (i = 1; i <= num - 1; i++) {
		printf("%d ", p[i]);
	}
	printf("%d", p[num]);
	return 0;
}
*/

//2024年元旦是星期几
/*
int main()
{
	int i,k=1;
	int a[] = { 0,1,2,3,4,5,6 };
	for (i = 1; i <= 365 * 400 + 97; i++) {
		k++;
		if (k > 6) {
			k -= 7;
		}
	}
	printf("%d", a[k]);
	return 0;
}
*/

//华氏度转换
/*
int main()
{
	float a, b;
	scanf_s("%f", &a);
	b = a * 1.8 + 32;
	printf("华氏温度值为：%.2f", b);

	return 0;
}
*/

//四舍五入
/*
int main()
{
	float a, b;
	int c;
	scanf_s("%f", &a);

	b = a - (int)a;
	if (b >= 0.5) {
		c = (int)a + 1;
	}
	else {
		c = (int)a;
	}
	printf("%d", c);

	return 0;
}
*/

//7.62停车场收费问题
/*
int main()
{
	int a, b;
	scanf_s("%d", &a);
	if (a <= 1)
		b = 0;
	else if (a <= 8)
		b = 10 * a;
	else if (a > 8)
		b = 80 + 15 * (a - 8);

	if (b >= 200) {
		b = 200;
	}
	printf("%d", b);
	return 0;
}
*/

//7.64求分段函数
/*
int main()
{
	float a, b;
	scanf_s("%f", &a);
	if (a == 0)
		b = 0;
	else
		b = 1 / a;
	printf("f(%.1f) = %.1f", a, b);
	return 0;
}
*/

//硬币找钱问题
/*
int main()
{
	int s=0;
	int i=0, k[3]={ 0 }, r = 0;
	int a[3][7] = { 0 },c[3][7] = { 0 };
	double b[3] = { 0 };

	scanf_s("%d\n", &s);
	for (r = 0; r < 3; r++) {
		for (i = 5; i >=0; i--) {
			scanf_s("%d ", &a[r][i]);
		}
		scanf_s("%lf ", &b[r]);


		if (b[r] >= 2) {
			while (a[r][0] != 0 && b[r] >= 2) {

				c[r][0]++;
				a[r][0]--;
				b[r] -= 2;
			}
		}
		if (b[r] >= 1) {
			while (a[r][1] != 0 && b[r] >= 1) {

				c[r][1]++;
				a[r][1]--;
				b[r] -= 1;
			}
		}
		if (b[r] >= 0.5) {
			while (a[r][2] != 0 && b[r]>=0.5) {

				c[r][2]++;
				a[r][2]--;
				b[r] -= 0.5;
			}
		}
		if (b[r] >= 0.2) {
			while (a[r][3] != 0 && b[r] >= 0.2) {

				c[r][3]++;
				a[r][3]--;
				b[r] -= 0.2;
			}
		}
		if (b[r] >= 0.1) {
			while (a[r][4] != 0 && b[r] >= 0.1) {

				c[r][4]++;
				a[r][4]--;
				b[r] -= 0.1;
			}
		}
		if (b[r] >= 0.05) {
			while (a[r][5] != 0 && b[r] >= 0.05) {

				c[r][5]++;
				a[r][5]--;
				b[r] -= 0.05;
			}
		}
		
		if (b[r] == 0) {
			for (i = 0; i < 6; i++) {
				k[r] += c[r][i];
			}
		}	continue;

		if(b[r] > 0.05) {
			a[r][6] = 1;
		}
		
	}

	for (i = 0; i < 2; i++) {
		if (a[i][6] != 1)
			printf("%d\n", k[i]);
		else
			printf("impossible\n");
	}

	if (a[2][6] != 1)
		printf("%d", k[2]);
	else
		printf("impossible");

	
	return 0;
}
*/

//7.11输出数列的前n项和
/*
int main()
{
	int n, b=1, c, d;
	double a=0;
	scanf_s("%d", &n);
	for (c = 0; c < n; c++) {
		if (c == 0) {
			b = 1;
		}
		else {
			for (d = 1; d <= c; d++) {
				b *= d;
			}
		}
		a += 1.0 / b;
		b = 1;
	}
	printf("%lf",a);

	return 0;
}
*/

//7.12求水仙花的数量
/*
#include <math.h>
int absorb(int);
int main()
{
	int m, n,i;
	scanf_s("%d %d", &m, &n);
	if (n > 999 || m > n || m<100) {
		printf("error");
	}
	else {
		for (i = m; i <= n; i++) {
			if (i == absorb(i)) {
				printf("%d ", i);
			}
		}
	}


	return 0;
}

int absorb(int k)
{
	int a[4] = { 0 };
	a[0] = k / 100;
	a[1] = (k-a[0]*100) / 10;
	a[2] = (k - a[0] * 100-a[1]*10);
	k = pow(a[0], 3) + pow(a[1], 3) + pow(a[2], 3);
	return k;
}
*/

//7.13求因数之和
/*
int main()
{
	int k[100] = { 0 };
	int a, b=0, c=0,i;
	scanf_s("%d", &a);
	for (i = 1; i < a; i++) {
		if (a % i == 0) {
			k[b] = i;
			b++;
		}
	}
	
	for (i = 0; i < 100; i++) {
		if (k[i] != 0) {
			c += k[i];
		}
	}
	printf("%d", c);

	return 0;
}
*/

//7.14将n进行质因数分解
/*
int ifPrime(int i);
void bubble_sort(int arr[], int len);
int main()
{
	int s[250] = { 0 }, p[100] = { 0 }, x[100] = {0};
	int i, k, a=0, b = 0, c = 0,end=1, isPrime = 1 ;
	int m = 0;
	scanf_s("%d", &a);

	//取质因数
	for (i = 2; i < a; i++) {
		if (a % i == 0) {
			if (ifPrime(i)) {
				p[m] = i;
				m++;
			}
			c = 1;
		}
	}

	//因数分解
	int u=0;
	i = 0;
	if (c) {
		while (end != a && i<m) {
				end *= p[i];
			if (end > a) {
				end /= p[i];
				break;
			}
			x[u] = p[i];
			u++;
			if (i == m-1) {
				i -= (m-1);
				continue;
			}
			i++;	
		}
	}
	else {
		printf("error");
	}

	//打印结果
	int o[100] = { 0 };
	int len = sizeof(x) / sizeof(x[0]);
	bubble_sort(x, len);
	for (u = 0; u < 100; u++) {
		if (x[u] != 0) {
			printf("%d ", x[u]);
		}
	}
	return 0;
}

//判断因数是不是质数
int ifPrime(int i)
{
	int isPrime = 1,k,b=0;
	
		for (k = 2; k < i; k++) {
			if (i % k == 0) {
				isPrime = 0;
				break;
			}
		}
		return isPrime;
}

//冒泡排序
void bubble_sort(int arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
*/

//冒泡排序法
/*
void bubble_happy(int arr[])
{
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len - 1; i ++) {
		for (int k = 0; k < len - 1 - i; k++) {
			if (arr[k + 1] < arr[k]) {
				int tem = arr[k];
				arr[k] = arr[k+1];
				arr[k+1] = tem;
			}
		}
	}
}
*/

//利率计算+四舍五入
/*
#include<math.h>
int yue(float a);
int main()
{
	int money, year;
	float rate,interest;
	scanf("%d %d %f", &money, &year,&rate);
	interest = money * pow((rate + 1), year) - money;
	printf("interest = %d", yue(interest));


	return 0;
}
int yue(float a)
{
	float  b;
	int c;
	b = a - (int)a;
	if (b >= 0.5) {
		c = (int)a + 1;
	}
	else {
		c = (int)a;
	}

	return c;
}
*/

//英尺转换
/*
int main()
{
	int foot, inch,k;
	float a, b, c;
	scanf("%f", &a);
	b = (a / 100) / 0.3048;
	foot = (int)b;
	inch = (int)((b - foot) * 12);
	printf("%d %d", foot, inch);


	return 0;
}
*/

//阶乘
/*
int main()
{
	int n, c, d;
	long long int b = 1;
	scanf("%d", &n);
	if (n == 0) {
		b = 1;
	}
	else {
		for (d = 1; d <= n; d++) {
			b *= d;
		}
	}

	printf("%lld", b);

	return 0;
}
*/

//最大公因数
/*
void bubble_happy(int arr[]);
void yinshu(int a, int arr[]);
int main()
{
	int m[250] = { 0 }, n[250] = { 0 }, s[250] = {0};
	int a, b,c=0;
	scanf("%d %d", &a, &b);
	yinshu(a, m);

	yinshu(b, n);
	for (int i = 0; i < 250; i++) {
		for (int k = 0; k < 250; k++) {
			if (m[i] != 0 && n[k] != 0) {
				if (m[i] == n[k]) {

					s[c] = n[k];
					c++;
				}
			}
		}
	}
	bubble_happy(s);
	printf("%d", s[0]);

	return 0;
}

void yinshu(int a, int arr[])
{
	int b = 0;
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			arr[b] = i;
			b++;
		}
	}
}
void bubble_happy(int arr[])
{
	int len = 250;
	for (int i = 0; i < len - 1; i++) {
		for (int k = 0; k < len - 1 - i; k++) {
			if (arr[k + 1] > arr[k]) {
				int tem = arr[k+1];
				arr[k] = arr[k+1];
				arr[k+1] = tem;
			}
		}
	}
}
*/

//百分制成绩转等级制
/*
int main()
{
	int a;
	scanf("%d", &a);

	if (0 <= a&&a <= 100) {

		if (100 >= a&&a >= 90)
			printf("A");
		else if (80 <= a&&a <90 )
			printf("B");
		else if (80 > a&&a >= 60)
			printf("C");
		else
			printf("D");
		
	}else {
		printf("ERROR");
	}
	
	return 0;
}
*/

//判断是不是水仙花(提取三位数上的每一位)
/*
#include <math.h>
int absorb(int);
int main()
{
	int m, n, i;
	scanf_s("%d", &m);
	if (m > 999 || m < 100) {
		printf("Invalid Value");
	}
	else {
		
			if (m == absorb(m)) {
				printf("Yes");
			}
			else {
				printf("No");
			}
	}
	return 0;
}

int absorb(int k)
{
	int a[4] = { 0 };
	a[0] = k / 100;
	a[1] = (k - a[0] * 100) / 10;
	a[2] = (k - a[0] * 100 - a[1] * 10);
	k = pow(a[0], 3) + pow(a[1], 3) + pow(a[2], 3);
	return k;
	
}
*/

//超速罚款题目
/*
int yue(float a);
int main()
{
	int a, b,d;
	float c,k;
	char v[] = "%.";
	scanf("%d %d", &a, &b);
	if (a <= b) {
		printf("OK");
	}
	else {
		k = (float)b;
		c = (a - b) / k * 100.0;
		d = yue(c);
		if(d<10)
			printf("OK");
		else if(d>=10 && d<50)
			printf("Exceed %d%s Ticket 200",d,v);
		else if(d>=50)
			printf("Exceed %d%s License Revoked", d,v);
	}

	return 0;
}


int yue(float a)
{
	float  b;
	int c;
	b = a - (int)a;
	if (b >= 0.5) {
		c = (int)a + 1;
	}
	else {
		c = (int)a;
	}

	return c;
}
*/

//三个正除数
/*
int main()
{
	int a, b=0;
	scanf("%d",&a);
	for (int i = 1; i <= a; i++) {
		if ((a % i) == 0) {
			b++;
		}
	}
	if (b == 3) {
		printf("True");
	}
	else {
		printf("False");
	}
		
	return 0;
}
*/

//求最大值及其下标
/*
void bubble_happy(int arr[], int n);
int main()
{
	int n, c;
	scanf("%d", &n);
	int a[250] = { 0 }, b[250] = { 0 };
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);

	}
	for (int i = 0; i < n; i++) {
		b[i] = a[i];
	}

	bubble_happy(b, n);
	for (int i = 0; i < n; i++) {
		if (a[i] == b[0]) {
			c = i;
			break;
		}
	}

	printf("%d %d", b[0], c);


	return 0;
}
void bubble_happy(int arr[], int n)
{
	int len = n;
	for (int i = 0; i < len - 1; i++) {
		for (int k = 0; k < len - 1 - i; k++) {
			if (arr[k] < arr[k + 1]) {
				int tem = arr[k + 1];
				arr[k + 1] = arr[k];
				arr[k] = tem;
			}
		}
	}
}
*/

//数组元素逆序（下方反转字符串那里有简便方法）
/*
int main()
{
	int n, c;
	scanf("%d", &n);
	int a[1000] = { 0 }, b[1000] = { 0 };
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	if (n % 2 == 0) {                          
		for (int i = 0; i <= n/ 2-1; i++) {
			int tem = a[i];
			a[i] = a[n - 1 - i];
			a[n-1-i] = tem;
		}
	}
	else {
		for (int i = 0; i <= (n - 1) / 2 - 1; i++) {
			int tem = a[i];
			a[i] = a[n - 1 - i];
			a[n - 1 - i] = tem;
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}


	return 0;
}
*/

// sin 函数和 log 函数计算
/*
#include<math.h>
int sgn(double);
int main()
{
	int k;
	double x,f;
	scanf("%lf", &x);
	if(x>0){
		f = 8 * sin(30 * x) - 10 * (log(x) / log(5));
		k = sgn(f);
		printf("%d", k);
		return 0;
	}
}

int sgn(double f)
{
	int answer = 2;
	if (f < 0)
		answer = -1;
	else if (f == 0)
		answer = 0;
	else
		answer = 1;

	return answer;
}
*/

//麦克劳林展开式+阶乘
/*
#include<math.h>
long long int jie(int n);
int main()
{
	int n = 1;
	double x = 0,a = 0;
	scanf("%lf", &x);
	for (n = 1; n <= 10; n++) {
		a += pow(-1, n - 1) * pow(x, 2 * n - 1) / jie(2*n -1);
	}
	printf("%.3lf", a);

	return 0;
}

long long int jie(int n)
{
	int c, d;
	long long int b = 1;
	if (n == 0) {
		b = 1;
	}
	else {
		for (d = 1; d <= n; d++) {
			b *= d;
		}
	}

	return b;
}
*/

//求一定范围内的完数有哪些
/*
int main()
{
	int n = 0, k = 0, a[1000][100] = { 0 }, s = 0, m[100] = {0},r=0,q=0,j=0;
	scanf("%d", &n);
	for (r = 6; r <= n; r++) {
		for (int i = 1; i < r; i++) {
			if (r % i == 0) {
				a[q][k] = i;
				k++;
			}
		}
		
		for (int p = 0; p <= k; p++) {
				s += a[q][p];
		}
		
		if (s == r) {
			m[j] = r;
			j++;
		}
		q++;
		k = 0;	
		s = 0;
	}

	for (int t = 0; t < j; t++) {
		printf("%d\n", m[t]);
	}
	return 0;
}
*/

//#求幂级数展开的部分和
/*
#include <stdlib.h>
#include <math.h>
long long int jie(int n);
int main()
{
	double x,a=0,b=0;
	scanf("%lf", &x);
	for (int i = 0; i < 10000; i++) {
			b = pow(x, i) / jie(i);
			a += b;
		if (fabs(b) < 0.00001) {
			break;
		}
	}
	printf("%.4lf", a);
	return 0;
}

long long int jie(int n)
{
	int c, d;
	long long int b = 1;
	if (n == 0) {
		b = 1;
	}
	else {
		for (d = 1; d <= n; d++) {
			b *= d;
		}
	}

	return b;
}
*/

//截止日期
/*
#include<math.h>
int main()
{
	//a:次数 n是要求运行天数,d是需要运行天数
	long long int a = 0, n[100] = { 0 }, total = 0, x = 1, answer[100] = { 0 };
	long long int d[100] = { 0 };
	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		scanf("%d %d",&n[i],&d[i]);

		if (n[i] < d[i]) {
			for (int k = 1; k < n[i]; k++) {
				double o = d[i] * 1.0 / (k + 1);
				total = k + ceil(o);
				if (total <= n[i]) {
					answer[i] = 1;
					break;
				}
			}
		}
		else {
			answer[i] = 1;
		}
	}
	for (int i = 0; i < a; i++) {
		if (answer[i]==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	
	return 0;
}
*/

////////////第一孤单
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, digit, i, j;
	int digits[10] = {0};
	printf("请输入一个正整数：");
	scanf("%d", &n);
	while (n > 0) {
		digit = n % 10;
		digits[digit]++;
		n /= 10;
	}
	for (i = 0; i < 10; i++) {
		if (digits[i] == 1) {
			printf("target:%d\n", i);
			return 0;
		}
	}
	printf("target:-1\n");
	return 0;
}
*/

//第一孤单
/*
int main()
{
	char a[5];
	int b[20] = { 0 };

	scanf("%s",&a);
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			if (i != k && a[i] == a[k]) {
				b[i] = 1;
				break;
			}
			else {
				b[i] = 2;
			}
				
		}
	}
	for (int i = 0; i < 20; i++) {
		if (b[i] == 2) {
			printf("target:%s", a[i]);
			break;
		}
		b[i] = 0;
	}
	int s=0;
	for (int i = 0; i < 20; i++) {
		s += b[i];
	}
	if (s == 0) {
		printf("target:-1");
	}
	return 0;
}
*/

//绝对不臭的数+质因数
/*
int ifPrime(int i);
int main()
{
	
		int p[100]={0}, a = 2, m = 0,i=0,q=0;
		int k = 0, s[100] = { 0 }, r = 0;
		scanf("%d", &r);
		if (r > 0 && r < 100) {
			for (a = 2; a <= 1000; a++) {
				for (int i = 2; i <= a; i++) {      //取因数
					if (a % i == 0) {
						if (ifPrime(i)) {
							p[m] = i;
							m++;
						}                    //取到a的质因数
					}
				}
				int is = 0;
				for (q = 0; q < 100; q++) {
					if(p[q]!=0){
						if (p[q] == 2 || p[q] == 3 || p[q] == 7) {
							is = 1;
						}
						else {
							is = 0;
							break;
						}
					}                         
				}
				if (is) {
					s[k] = a;
					k++;                       //将符合条件的数写入数组
				}

				m = 0;
				i=0;
				q = 0;
				for (int j = 0; j < 100; j++) {
					p[j] = 0;
				}
			}
			s[0] = 2;
			printf("%d", s[r-1]);
		}
		else {
			printf("Fatal error!");
		}
	return 0;
}

//判断是不是质数
int ifPrime(int i)
{
	int isPrime = 1, k, b = 0;

	for (k = 2; k < i; k++) {
		if (i % k == 0) {
			isPrime = 0;
			break;
		}
	}
	return isPrime;
}
*/

//ABC 26进制转换（字母转数）（读入字符串，字符串长度，'A'相加减）
/*
#include <string.h>

//int main() {
//	char columnTitle[10];
//	int i, n, result = 0;
//	printf("请输入一个由大写英文字母组成的字符串：");
//	scanf("%s", columnTitle);
//	n = strlen(columnTitle);
//	for (i = 0; i < n; i++) {
//		result = result * 26 + (columnTitle[i] - 'A' + 1);
//	}
//	printf("该列名称对应的列序号为：%d\n", result);
//	return 0;
//}


int main()
{
	char a[100];
	int c, len,result=0;
	scanf("%s", a);
	len = strlen(a);
	for (int i = 0; i < len; i++) {
		result = result * 26 + (a[i] - 'A' + 1);
	}
	printf("%d", result);

	return 0;
}
*/

//输入一个整数，求每一位上的数字，和整数的长度
/*
#include <stdlib.h>
#include<math.h>
int intlen(int k);
void weishangshuzi(int k, int len, int arr[]);
int main()
{
	int a, b;
	int arr[100] = { 0 };
	scanf("%d", &a);

	b = intlen(a);
	weishangshuzi(a,b,arr);  //求每一位上的数字
	for (int i = 0; i < b; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n%d",b);

	return 0;
}

//求整数有多少位
//使用求位数的函数前要加 #include <stdlib.h>
int intlen(int k)
{

	int i = 0;
	k = abs(k);
	if (k >0) {
		while (k > 0) {
			k /= 10;
			i++;	
		}
	}
	else if (k == 0) {
		i = 1;
	}
	return i;
	
}

//求每一位上的数字
//使用求每一位上的数字的函数是要加上#include<math.h>
void weishangshuzi(int k, int len, int arr[]) {
	int w = 0, m = 0,s=0;
	for(int i = len - 1; i >= 1; i--) {
		w = (k - m) / pow(10,i);
		arr[s] = w;
		s++;
		m += w * pow(10,i);
	}
	arr[s] = k % 10;
}
*/

//ABC 26进制转换（数转字母）（反转字符串）
/*

                         //AI的答案
#include <stdlib.h>
void convertToTitle(int columnNumber, char* result) {
	int i = 0;
	while (columnNumber > 0) {
		columnNumber--;
		result[i++] = 'A' + columnNumber % 26;
		columnNumber /= 26;
	}
	result[i] = '\0';
	                                       // 反转字符串
	for (int j = 0; j < i / 2; j++) {
		char temp = result[j];
		result[j] = result[i - j - 1];
		result[i - j - 1] = temp;
	}
}

int main() {
	int columnNumber;
	char result[100];
	//printf("请输入一个整数：");
	scanf("%d", &columnNumber);
	convertToTitle(columnNumber, result);
	printf("%s", result);
	return 0;
}


//#include<stdio.h>
void zhuanhuan(int a, char arr[]);
int main()
{
	
	int a, b, c;
	char arr[300];
	scanf("%d", &a);
	zhuanhuan(a, arr);
	printf("%s", arr);
	return 0;
}
void zhuanhuan(int a, char arr[])
{
	int i = 0;
	while (a > 0) {
		a--;
		arr[i++] = 'A' + a % 26;
		a /= 26;
	}
	arr[i] = '\0';

	for (int k = 0; k < i/2; k++) {
		char tem = arr[k];
		arr[k] = arr[i-1-k];
		arr[i - 1 - k] = tem;
	}


}
*/

//说反话
//AI 正确程序
/*
#include <string.h>
void reverse(char* start, char* end) {
	char temp;
	while (start < end) {
		temp = *start;
		*start++ = *end;
		*end-- = temp;
	}
}

int main() {
	char sentence[81], * start = sentence, * end;

	printf("Enter a sentence: ");
	fgets(sentence, sizeof(sentence), stdin);
	sentence[strlen(sentence) - 1] = '\0';  // Remove newline character

	// Reverse the whole sentence
	reverse(sentence, sentence + strlen(sentence) - 1);

	// Reverse each word
	end = start;
	while (*end != '\0') {
		if (*end == ' ' || *(end + 1) == '\0') {
			if (*(end + 1) == '\0') end++;
			reverse(start, end - 1);
			start = end + 1;
		}
		end++;
	}

	printf("Reversed sentence: %s\n", sentence);

	return 0;
}
*/



//fgets函数的使用（从输入流读取字符串fgets函数）

//char *fgets(char *str, int n, FILE *stream);
//str处输入要储存字符串的数组
//n是字符串最大长度（实际能存n-1个字符）
//FILE *stream是指向输入流的指针，如stdin（标准输入）
/*

int main() {
	char str[100];
	printf("Enter a string: ");
	fgets(str, 100, stdin);
	printf("You entered: %s", str);
	return 0;
}


*/



//读取字符串中一段字符+反转+替换换行符strcspn函数

//strcspn(arr2, "\n");
//strcspn（）函数括号内分别是要
// 查询的数组和在数组中要查询的字符串
//结果是要查新的字符串前有多少个字符
//结果为整数
/*
#include<string.h>
int main()
{
	char arr1[100], arr2[100];
	int a=0, b=0, c=0,d=0,k=0;
	fgets(arr1, 99, stdin);
	b = strlen(arr1);
	//读取名字
	for (int i = 0; i < b; i++) {
		if (arr1[i] == ',') {
			for ( k = i; k < b - 1; k++) {
				arr2[c++] = arr1[k + 1];
			}
			break;
		}
	}


	//寻找arr2中占位符的位置
	arr2[strcspn(arr2, "\n")]='\0';


	//反转字符串
	a = strlen(arr2);
	for (int i = 0; i < a / 2; i++) {
		char temp = arr2[i];
		arr2[i] = arr2[a - 1 - i];
		arr2[a - 1 - i] = temp;
	}
	printf("i am %s", arr2);
	return 0;
}
*/

//说反话+字符串整体倒置+单个单词倒置
/*
#include<string.h>
int main()
{
	char arr1[1000];
	int len1, b;
	
	fgets(arr1, 999, stdin);
	arr1[strcspn(arr1, "\n")] = '\0';
	len1 = strlen(arr1);

	//字符串整体倒置
	for (int i = 0; i < len1 / 2; i++) {
		char tem = arr1[i];
		arr1[i] = arr1[len1 - 1 - i];
		arr1[len1 - 1 - i] = tem;
	}

	//单个单词倒置
	int k = 0, s = 0, u = 0,c=0;
	for (int i = 0; i <= len1; i++) {
		if (arr1[i] == ' ' || arr1[i]=='\0') {
			
			for (k = c; k < c+(i +1- c) / 2; k++) {
				char tem = arr1[k];
				arr1[k] = arr1[i-1-u];
				arr1[i-1-u] = tem;
				u++;
			}
			u = 0;
			c = i + 1;
		}
	}
	printf("%s", arr1);

	return 0;
}
*/

//圆盘打字机问题
/*
#include<string.h>
#include<math.h>
int main()
{
	int b=0, c=0,answer=0;
	char a[100],d[]="a";
	scanf("%s", a);
	b = strlen(a);
	for (int i = 0; i < b; i++) {
		c = d[0] - a[i];
		c = abs(c);
		if (c < 13) {
			answer += (c+1);
		}
		else {
			answer += (26 - c + 1);
		}
		d[0] = a[i];
	}
	printf("%d", answer);
	return 0;
}
*/

//约瑟夫环问题
/*
int judge(int arr[], int n);
int main()
{
	int n=0,m=0, b=0, c=0;
	int people[1000] = { 0 }; 
	scanf("%d %d", &n,&m);
	for (int i = 0; i < n; i++) {
		people[i] = 1;
	}
	int k = 1;
	while (judge(people,n)) {
		if (people[b] != 0  ) {
			if (k == m) {
				people[b] = 0;
				k -= m-1;
				continue;
			}
		}
		else if(people[b]==0) {
			k -= 1;
		}
		k++;
		if (b == n - 1) {
			b -= n - 1;
			continue;
		}
		b++;
	}

	for (int i = 0; i < n; i++) {
		if (people[i] == 1) {
			printf("%d", i + 1);
		}
	}

	return 0;
}
int judge(int arr[],int n) {
	int k = 1,c=0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == 1) {
			c++;
		}
	}
	if (c == 1) {
		k = 0;
	}
	return k;
}
*/

//文字替换
/*
#include<stdio.h>
#include<string.h>
void fuxie(char arr1, char arr2);
int main()
{
	char arr[1000];
	char arr2[1000];
	char arr3[1000];
	memset(arr3, '\0', sizeof(arr3));
	memset(arr2, '\0', sizeof(arr2));
	memset(arr, '\0', sizeof(arr));
	strcpy(arr2, "parallel");
	int a = 0,b=0;
	scanf("%s", arr);
	b = strlen(arr);
	do {
		a = strcspn(arr, "并行");//读取并行前面有几个字符
		strncpy(arr3, arr, a);//将并行前面的字符复制到另一个数组
		strcat(arr3, arr2);//将目标字符写入
		//将后段写入
		fuxie(arr, arr3);


	} while (a != b);

	printf("%s", arr);
	
	
	return 0;
}
void fuxie(char arr1[1000], char arr2[1000])
{
	//arr1是原数组
	int a=0, b=0, c=0,d=0;
	c = strcspn(arr1, "并行");
	a = strlen(arr1);
	b = strlen(arr2);
	for (int i = c + 2; i < a; i ++ ) {
		arr2[b++] = arr1[i];
	}
	d = strlen(arr2);
	for (int i = 0; i < d; i++) {
		arr1[i] = arr2[i];
	}
	memset(arr2, '\0', sizeof(arr2));
}
*/
/*
#include <stdio.h>
#include <string.h>

void fuxie(char arr1[], char arr2[],int*p);

int main()
{
	char arr[1000];
	char arr2[1000];
	char arr3[1000];
	
	memset(arr3, '\0', sizeof(arr3));
	memset(arr2, '\0', sizeof(arr2));
	memset(arr, '\0', sizeof(arr));
	strcpy(arr2, "parallel");
	int a = 0, b = 0,k=0;
	int* p = &a;
	scanf("%s", arr);
	b = strlen(arr);
	for (int i = 0; i < 10;i++) {
		a = strcspn(arr, "并行");//读取并行前面有几个字符
		b = strlen(arr);
		if (a ==b ) {
			break;
		}
		strncpy(arr3, arr, a);//将并行前面的字符复制到另一个数组
		strcat(arr3, arr2);//将目标字符写入
		fuxie(arr, arr3,p);
	}

	printf("%s", arr);

	return 0;
}

void fuxie(char arr1[], char arr2[],int*p)
{
	
	//arr1是原数组
	int a = 0, b = 0, c = 0;
	c = strcspn(arr1, "并行");
	a = strlen(arr1);
	b = strlen(arr2);
 	for (int i = c + 4; i < a; i++) {
		arr2[b++] = arr1[i];
	}
 	for (int i = 0; i < b; i++) {
		arr1[i] = arr2[i];
	}
	memset(arr2, '\0', sizeof(arr2));
	//*p = strlen(arr1);
}
*/


//点在三角形内吗
// 两点之间距离公式函数
//三角形面积公式(海伦公式)
////用三个点求三角形面积

/*
//三角形面积公式(海伦公式)（输入三边边长）
double area(double a,double b,double c) {
	double  s, area;
	s = (a + b + c) / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	//printf("%f", area);
	return area;
}

//两点之间距离公式（输入两个点的横纵坐标）
double distance(double x1, double y1, double x2, double y2) {
	double dist;
	dist = sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));
	return dist;
}

//用三个点求三角形面积
double area(double x1, double y1, double x2, double y2, double x3, double y3) {
	return fabs(x1 * y2 + x2 * y3 + x3 * y1 - x1 * y3 - x2 * y1 - x3 * y2) / 2.0;
}
*/



//数组中的数排列顺序
/*
#include<math.h>
void bubble(int arr[], int n);
int main()
{
	int total=0,num=0;
	int a[100] = { 0 }, b[100] = { 0 }, u = 0, c[100] = {0};
	scanf("%d", &total);
	for (int i = 0; i < total; i++) {
		scanf("%d", &a[i]);
	}
	scanf("%d", &num);
	
	bubble(a, total);
	for (int i = 0; i < num; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}

void bubble(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int k = 0; k < n - 1; k++) {
			if (arr[k] > arr[k + 1]) {
				int tem = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = tem;
			}
		}
	}
}
*/

//凯瑟加密
/*
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int  n = 0, len = 0;
	char arr[1000];
	fgets(arr, 1000, stdin);
	arr[strcspn(arr, "\n")] = '\0';
	scanf("%d", &n);
	while (n > 26) {
		n -= 26;
	}
	while (n < -26) {
		n += 26;
	}
	len = strlen(arr);
	for (int i = 0; i < len; i++ ) {
		if (arr[i] != ' ') {
			if (isupper(arr[i]) == 0) {   //找小写
				if (arr[i] - 'a' + n < 0) {   //向前超位
					arr[i] += 26 + n;
					
				}
				//else if (arr[i] - 'a' + n >= 26) {   //向后超位
				//	//arr[i] += n - 26;
				//	arr[i] = 'a' + ((arr[i] - 'a' + n) % 26);
				//}
				else {
					//arr[i] += n;
					arr[i] = 'a' + ((arr[i] - 'a' + n) % 26);
				}
				
			}
			else {                       //找大写
				if (arr[i] - 'A' + n < 0) {   //向前超位
					arr[i] += 26 + n;
				}
				//else if (arr[i] - 'A' + n >= 26) {   //向后超位
				//	//arr[i] += n - 26;
				//	arr[i] = 'A' + ((arr[i] - 'A' + n) % 26);
				//}
				else {
					//arr[i] += n;
					arr[i] = 'A' + ((arr[i] - 'A' + n) % 26);
				}

			}

		}
	}
	printf("Encrypted message:%s", arr);
	return 0;
}
*/


//百钱买百鸡问题（穷举方程条件筛选）
/*
int main()
{
	int money, x, y, z,count=0;
	scanf("%d", &money);
	for ( x = 0; x <= money /5; x++) {
		for (y = 0; y <= (money - 5 * x) / 3; y++) {
			z = (money - x - y);
			if (z % 3 == 0 && x * 5 + y * 3 + z/3 == money) {
				printf("%d,%d,%d\n", x, y, z);
				count++;
			}
		}
	}
	printf("Solution count: %d\n", count);

	return 0;
}
*/

//找电脑配件

//错误
/*
void bubble_happy(int arr[], int k);
int main()
{
	int num = 0,c=0,u=0,k=0;
	int a[100] = { 0 }, b[100][100] = { 0 }, m[100] = { 0 };
	
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < num; i++) {
		
		if (a[i] == a[i + 1] || i==num-1) {
			//长度1
			b[1][k++] = i - u;
			u = i;
			//起始位置0
			b[0][++c] = i + 1;
		}
	}

	for (int g = 0; g < k; g++) {
		 m[g]=b[1][g];
	}

	bubble_happy(m,k);

	int x[100] = { 0 };
	
	int t = 0;
	for (int g = 0; g < k; g++) {
		if (b[1][g] == m[0]) {
			for (int i =b[0][g] ; i < b[0][g] +b[1][g]; i++) {
				x[t++] = a[i];//取出连续最大的情况
			}
			break;
		}
	}

	int y[2][100] = { 0 }, v[100] = {0};
	u = 0;
	int r[100] = { 0 };

	for (int i = 0; i < t; i++) {
		for (int g = 0; g < t; g++) {
			if (x[i] == x[g] && i<g) {
				//y[0][u] = g - i;    //找起始位置0
				y[1][u] = g-1;       //终止位置1
				r[u]= y[1][u]- y[0][u]+1;//
				u ++ ;
				y[0][u] = i + 1;//下一个起始位置
				
				break;
			}
		}
	}

	for (int g = 0; g < u; g++) {
		v[g] = r[g];
	}

	bubble_happy(v, u);

	for (int g = 0; g < k; g++) {
		if (r[g] == v[0]) {
			printf("%d\n", r[g]);
			for (int i = y[0][g]; i <= y[1][g]; i++) {
				printf("%d ", x[i]);
			}
			break;
		}
	}



	return 0;
}
void bubble_happy(int arr[],int s)
{
	int len = s;
	for (int i = 0; i < len - 1; i++) {
		for (int k = 0; k < len - 1 - i; k++) {
			if (arr[k + 1] > arr[k]) {
				int tem = arr[k];
				arr[k] = arr[k+1];
				arr[k+1] = tem;
			}
		}
	}
}
*/

//滑动窗口                  //需研究
/*
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int arr[1000];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}                                  //读取数据

	int start = 0, end = 0, maxLen = 0, maxStart = 0;
	int hash[1001] = { 0 };

	while (end < n) {
		if (hash[arr[end]] == 0) {
			hash[arr[end]]++;
			end++;
			if (end - start > maxLen) {
				maxLen = end - start;
				maxStart = start;
			}
		}
		else {
			hash[arr[start]]--;
			start++;
		}
	}

	printf("%d\n", maxLen);
	for (int i = maxStart; i < maxStart + maxLen; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
*/


//进制转换                  //需研究
/*
#include <stdio.h>
#include<math.h>
void absorb(int k, int s, int a[]);
int countDigits(int n);
int zhuan(int a, int n);
int zhuanshi(int arr[], int b, int n);
int main() {
	//m是原来的进制，n是转换后的进制
	int m = 0, num = 0, arr[100], n = 0, s = 0, arr2[100] = { 0 }, arr3[100] = { 0 }, zhuan1 = 0, zhuan2 = 0;
	int* p = &s;        //arr2保存位数，arr3保存转换完的数
	scanf("%d", &m);    //输入数组里数的进制
	scanf("%d", &num);  //输入有几组数据
	for (int i = 0; i < num; i++) {    //输入数据
		scanf("%d", &arr[i]);
	}
	scanf("%d", &n);     //输入要转换到的进制


	for (int i = 0; i < num; i++) {
		s = countDigits(arr[i]);
		absorb(arr[i], s, arr2);          //提取每一位的数（要提取的数，位数，数组）
		zhuan1 = zhuanshi(arr2, m, s);     //转到10进制
		zhuan2 = zhuan(zhuan1, n);        //转到目标进制
		arr3[i] = zhuan2;                 //保存数
	}
	int count = 0;
	for (int i = 0; i < num; i++) {
		if (countDigits(arr3[i]) % 2 == 0) {    //判断是不是偶数位
			count++;
		}
	}
	printf("%d", count);

	return 0;
}
//（要提取的整数，整数的位数，保存的数组）
//从高位到低位提取
void absorb(int k, int s, int a[])    //提取每一位数
{
	for (int m = 0; m < s; m++) {
		a[m] = k / pow(10, s - 1);
		k -= a[m] * pow(10, --s);
		if (s == 0) {
			break;
		}
	}
}

int countDigits(int n)    //整数有几位
{
	int count = 0;        //除10到零为止
	while (n != 0) {
		n /= 10;
		++count;
	}
	return count;
}


//转10进制
//（每一位的数组，原数的进制，原数的位数）
//每一位上的数乘进制的（所在位-1）次幂，如在第四位就是进制的三次幂
int zhuanshi(int arr[], int b, int n)
{
	int a = 0;
	for (int i = 0; i < n; i++) {

		a += arr[i] * pow(b, n - i - 1);

	}
	return a;

}

//转k进制(转进制的数，进制)
//取余-除进制-取余-除进制直到除后得零为止
int zhuan(int a, int n)
{
	int arr[100] = { 0 };
	for (int i = 0; i < 100; i++) {
		arr[i] = a % n;
		a /= n;
		if (a == 0) {
			break;
		}
	}
	int k = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		k += arr[i] * pow(10, i);
	}
	return k;
}

*/

//跳数组                    //需研究
/*
#include <stdio.h>
#include <stdbool.h>

bool canJump(int* nums, int numsSize) {
	//请在下面填写你的答案
	bool answer = false;
	
	int s = 0, b = 0;

	for (int k = 0; k < nums[s]; k++) {
		for(int i=0;i<100;i++){
			if (b == numsSize - 1) {
				answer = true;
				break;
			}
			else if (b > numsSize - 1) {
				break;
			}
			b += nums[s] - k;
			s = b;
		}	
	}
	return answer;
}

int main() {
	int nums[100];
	int numsSize;

	//请输入nums的大小
	scanf("%d", &numsSize);

	//请输入nums数组的元素
	for (int i = 0; i < numsSize; i++) {
		scanf("%d", &nums[i]);
	}

	if (canJump(nums, numsSize)) {
		printf("花城杏子可以找到塔野薰\n");
	}
	else {
		printf("花城杏子无法找到塔野薰\n");
	}

	return 0;
}
*/

//排队打水
/*
#include<stdio.h>
void bubble(int arr[], int len);
int main()
{
	int m = 0, n = 0,s=1,k=0;
	int arr[100] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	bubble(arr, n);
	for (int i = 0; i < n-1; i++) {
		m += arr[i] * (n - 1 - i);
	}
	printf("%d", m);
	return 0;
}

void bubble(int arr[], int len)
{
	for (int i = 0; i < len - 1; i ++ ) {
		for (int k = 0; k < len - 1; k++) {
			if (arr[k] > arr[k + 1]) {
				int temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
		}
	}



}
*/

//鸭文道歉
//fgets函数去\n (strcspn)
/*
#include<stdio.h>
#include<string.h>
void bubble(int arr[], int len);
int main()
{
	int n,len;
	char arr[10000] = { 0 };
	scanf("%d\n", &n);
	gets(arr);
	//fgets(arr, 999, stdin);
	len = strlen(arr);
	if(n==1){
		
		for (int i = 0; i < len; i++) {
			arr[i] = arr[i] + i + 3;
		}
		printf("%s", arr);
		
	}
	else if (n == 0) {
		for (int i = 0; i < len; i++) {
			arr[i] = arr[i] -i-3;
		}
		printf("%s", arr);
	}
	return 0;
}
*/

//排队打水
/*
#include<stdio.h>
void bubble(int arr[], int len);
int main()
{
	int n, arr[1000] = { 0 };
	double u = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	bubble(arr, n);
	int count = 1, arr2[100] = {0};
	for (int i = 0; i < n; i=i) {
		for (int k = 0; k < n; k++) {
			if (arr[i] == arr[k] && i<k ) {
				count++;
			}
		}
		arr2[i] = count;
		i += count;
		count = 1;
	}
	
	for (int i = 0; i < n; i++) {
		if (arr2[i] > n / 2.0) {
			printf("%d", arr[i]);
		}


	}
	return 0;
}
void bubble(int arr[], int len)
{
	for (int i = 0; i < len - 1; i++) {
		for (int k = 0; k < len - 1; k++) {
			if (arr[k] > arr[k + 1]) {
				int temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
		}
	}
}
*/

//劝退敬酒
/*
#include<stdio.h>
#include<string.h>
int main()
{
	int count = 1,count2=0,count3=0,m=1;
	char arr[21000],arr2[21000],t[2];
	memset(t, '\0', sizeof(t));
	memset(arr, '\0', sizeof(arr));
	memset(arr2, '\0', sizeof(arr2));
	fgets(arr, 2100, stdin);
	arr[strcspn(arr, "\n")] = '\0';
	int len = strlen(arr);
	for (int i = 0; i < len; i=i) {
		for (int k = 0; k < len; k++) {
			for (int j = 0; j < strlen(arr2); j++) {
				if (arr[i] == arr2[j]) {
					break;
				}
			}
			if (arr[i] == arr[k] && i < k && arr[i]!='a') {
				count++;
			}
			if (arr[i] == 'a') {
				count2++;
			}
			if (arr[i] != arr[k]) {
				break;
			}
		}
		if (count != 1) {
			count3++;
		}
		
		for (int j = 0; j < strlen(arr2); j++) {
			if (arr[i] == arr2[j]) {
				m = 0;
			}
		}
		if (arr[i] != 'a' && m==1) {
			t[0] = arr[i];
			strcat(arr2, t);
		}
		m = 1;
		i += count;
		count = 1;
		
	}


	for (int i = 0; i < count2+count3; i++) {
		strcat(arr2, "a");
	}
	printf("%s", arr2);
	return 0;
}
*/

 //转进制                 //需研究
/*
#include<stdio.h>
#include<math.h>
//int weishu(int k);
int zhuan(long long int k, int n);
int main()
{
	long long int a, answer;
	scanf("%lld", &a);
	answer = zhuan(a, 7);
	printf("%lld\n", answer);

	return 0;
}

//int weishu(int k)
//{
//	int count = 0;
//	while (k != 0) {
//		k /= 10;
//		count++;
//	}
//	return count;
//}

int zhuan(long long int k, int n)
{
	long long int base = 1;
	int arr[100] = { 0 };
	long long int answer = 0;
	int count = 0;
	while (k != 0) {
		arr[count++] = k % n;
		k /= n;
	}
	for (int i = 0; i < count; i++) {
		answer += arr[i] * base;
		base *= 10;
	}

	return answer;
}
*/
//AI答案
/*
#include <stdio.h>

void to_seven(int n) {
	if (n < 7) {
		printf("%d", n);
	} else {
		to_seven(n / 7);
		printf("%d", n % 7);
	}
}

int main() {
	int n;
	printf("请输入一个十进制整数：");
	scanf("%d", &n);
	printf("转化为7进制后的数字为：");
	to_seven(n);
	printf("\n");
	return 0;
}


*/


//开关灯
/*
#include<stdio.h>
int main()
{
	long long int n;
	scanf("%lld", &n);
	int arr[100000] = { 0 };
	for (long long int i = 2; i <= n; i++) {
		for (long long int k = i; k <= n; k += i) {
			if (arr[k] == 0) {
				arr[k] = 1;
			}
			else if (arr[k] == 1) {
				arr[k] = 0;
			}
				
		}
	}
	int count = 0;
	for (long long int i = 1; i <= n; i++) {
		if (arr[i] == 0) {
			count++;
		}
	}
	printf("%d\n", count);

	return 0;
}
*/


//斐波拉切字符串
/*
#include<stdio.h>
#include<string.h>
int main()
{
	int n, c;
	char arr[80][10000];
	scanf("%d %d", &n, &c);
	memset(arr, '\0', sizeof(arr));
	strcat(arr[0], "SWPUNB");
	strcat(arr[1], "LECSOFTWARELEAGUE!!!");
	char rr[100000];
	memset(rr, '\0', sizeof(rr));
	for (int i = 2; i <= n; i++) {
		strcat(rr, arr[i - 2]);
		strcat(rr, arr[i - 1]);
		strcat(arr[i], rr);
		memset(rr, '\0', sizeof(rr));
	}

	strcat(rr,arr[n]);
	char t[2];
	memset(t, '\0', sizeof(t));
	t[0] = rr[c];
	printf("%s", t);


	return 0;
}
*/

//乐程需要多少插排
/*
#include<stdio.h>
void bubble(int arr[], int len);
int main()
{
	int n = 0, l = 0, r = 0, x = 0;
	int s[10][3] = { 0 }, a[10][100] = { 0 }, total[100] = {0};
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &s[i][1], &s[i][2], &s[i][0]);
	}
	for (int i = 0; i < n; i++) {
		for (int k = s[i][1]; k <= s[i][2]; k++) {
			a[i][k] = s[i][0];
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int k =0; k < n; k++) {
			total[i] += a[k][i];
		}
	}
	int t = sizeof(total) / sizeof(total[0]);
	bubble(total, t);
	printf("%d", total[0]);
	return 0;
}

void bubble(int arr[], int len)
{
	for (int i = 0; i < len - 1; i++) {
		for (int k = 0; k < len - 1; k++) {
			if (arr[k] < arr[k + 1]) {
				int tem = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = tem;
			}
		}
	}
}
*/

//牛客-教课书般的亵渎
/*
#include<stdio.h>
int main()
{
	int n,judge1=0,judge2=0;
	int blood[10000] = {0};
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &blood[i]);
	}
	do{
		judge1 = 0;
		for (int i = 0; i < n; i++) {
			blood[i] -= 1;
		}
		for (int k = 0; k < n; k++) {
			if (blood[k] <= 0 && blood[k]>-1000) {
				judge1 = 1;
				blood[k] = -1001;
			}
		}
	} while (judge1 == 1);

	for (int i = 0; i < n; i++) {
		if (blood[i] > 0) {
			judge2 = 1;
		}
	}
	if (judge2) {
		printf("NO");
	}
	else {
		printf("YES");
	}

	return 0;
}
*/


//牛客-小镜的数学题
/*
#include <stdio.h>
#include<math.h>
long long int jisuan(long long int a, long long int b);
void absorb(long long int k, int s, int a[]);
int countDigits(long long int n);
long long int zhuan(int a, int n);
int zhuanshi(int arr[], int b, int n);
void dao(int arr[], int n);
int main() {
	long long int n = 0,end=1;
	long long int j;
	scanf("%lld", &n);
	end = n;
	j = 1;
	while (end != 0) {
		end = jisuan(end,n+j);
		if (end == 0)
			continue;
		j++;
	}
	printf("%lld", n + j);
	return 0;
}

long long int jisuan(long long int a, long long int b)
{
	int arr1[10000] = { 0 }, arr2[10000] = { 0 }, arr3[10000] = { 0 };
	long long int A, B;
	A = zhuan(a, 2);
	B = zhuan(b, 2);
	int r = countDigits(A);
	absorb(A,r, arr1);
	int t = countDigits(B);
	absorb(B, t, arr2);
	
	dao(arr1, r);
	dao(arr2, t);


	if (r >= t)
		t = r;
	else
		t = t;


	for (int i = 0; i < t; i++) {
		if (arr1[i] ==1 && arr2[i]==1) {
			arr3[i] = 1;
		}
		else {
			arr3[i] = 0;
		}
	}
	dao(arr3, t);
	long long int y=zhuanshi(arr3, 2, t);
	return y;

}


//（要提取的整数，整数的位数，保存的数组）
//从高位到低位提取
void absorb(long long int k, int s, int a[])    //提取每一位数
{
	for (int m = 0; m < 10000; m++) {
		a[m] = k / pow(10, s - 1);
		k -= a[m] * pow(10, --s);
		if (s == 0) {
			break;
		}
	}
}

int countDigits(long long int n)    //整数有几位
{
	int count = 0;        //除10到零为止
	while (n != 0) {
		n /= 10;
		++count;
	}
	return count;
}


//转10进制
//（每一位的数组，原数的进制，原数的位数）
//每一位上的数乘进制的（所在位-1）次幂，如在第四位就是进制的三次幂
int zhuanshi(int arr[], int b, int n)
{
	int a = 0;
	for (int i = 0; i < n; i++) {

		a += arr[i] * pow(b, n - i - 1);

	}
	return a;

}

//转k进制(转进制的数，进制)
//取余-除进制-取余-除进制直到除后得零为止
long long int zhuan(int a, int n)
{
	int arr[10000] = { 0 };
	for (int i = 0; i < 10000; i++) {
		arr[i] = a % n;
		a /= n;
		if (a == 0) {
			break;
		}
	}
	long long int k = 0;
	for (int i = 0; i < 100; i++) {
		k += arr[i] * pow(10, i);
	}
	return k;
}


//倒置整数数组
//(要倒置的数组，数组的长度)
void dao(int arr[], int n)
{
	for (int i = 0; i < n / 2; i++) {
		int tem = arr[i];
		arr[i] = arr[n - 1 - i];
		arr[n - 1 - i] = tem;
	}
}
*/


//求三个数的最大公约数和最小公倍数（函数）
/*
//最大公约数=前两个数的最大公约数与第三个数求最大公约数
//最小公倍数=前两个数的最小公倍数与第三个数求最小公倍数


#include <stdio.h>
int gongbeishu(int a, int b);
int gongyueshu(int a, int b);
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	//求最大公约数
	int yue1 = gongyueshu(a, b);
	int yue2 = gongyueshu(yue1, c);
	//求最小公倍数
	int bei1 = gongbeishu(a, b);
	int bei2 = gongbeishu(bei1, c);

	printf("最大公约数：%d\n",yue2);
	printf("最小公倍数：%d",bei2);


}
*/

/*
//求最大公约数(数a，数b)
//把A除以B，得到商和余数。
//如果余数是0，那么B就是最大公约数。
//如果余数不是0，那么用B除以这个余数，再次得到商和余数。
//重复这个过程，直到余数为0。此时的除数就是最大公约数。

int gongyueshu(int a, int b)
{
	int A, B;
	if (a >= b) {
		A = a; B = b;
	}
	else {
		A = b; B = a;
	}
	int yushu = B,answer=B,judge=1;
	judge = A % yushu;
	while (judge != 0) {
		yushu = judge;
		judge = B % yushu;
	}
	return yushu;
}
*/

/*
//最小公倍数（数a，数b，a,b的最大公约数）
//用两个数的乘积除以最大公约数，得到的结果就是最小公倍数

int gongbeishu(int a, int b)
{
	int yue = gongyueshu(a, b);
	int  answer = 0;
	answer = a * b / yue;
	return answer;
}
*/


//滑动窗口找最大最小值
/*
#include<stdio.h>

long long int arr[10000] = { 0 }, b[10000] = {0};
long long int answer[2][10000];

void bubble(long long int arr[], long long int len, long long int start);
int main()
{
	long long int n, k, start = 0, x = 0;
	scanf("%lld %lld", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &arr[i]);
	}
	while (start + k-1 < n) {
		for (int i = start; i < start + k; i++) {
			b[i] = arr[i];
		}
		bubble(b, k,start);
		answer[0][x] = b[start];
		answer[1][x] = b[start+k-1];
		x++;
		start++;
	}
	for (int i = 0; i < x; i++) {
		printf("%lld ", answer[0][i]);
	}
	printf("\n");
	for (int i = 0; i < x; i++) {
		printf("%lld ", answer[1][i]);
	}
	return 0;
}

void bubble(long long int arr1[], long long int len1,long long int start)
{
	for (int i = start; i < start+len1-1; i++) {
		for (int k = start; k < start+len1-1; k++) {
			if (arr1[k] > arr1[k + 1]) {
				int tem = arr1[k];
				arr1[k] = arr1[k + 1];
				arr1[k + 1] = tem;
			}
		}
	}
}

*/


//电脑配件（滑动窗口算法）
/*
#include<stdio.h>
int judge[10000] = { 0 };
int n, arr[1000] = { 0 };
int main()
{
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int start = 0, end = 0;
	int maxStart = 0, maxLen = 0;
	
	while (end != n ) {
		if (judge[arr[end]] == 0) {
			judge[arr[end]]++;
			end++;
			if (end - start > maxLen) {
				maxLen = end - start;
				maxStart = start;
			}
		}
		else {
			judge[arr[start]]--;
			start++;
		}
	}
	printf("%d\n", maxLen);
	for (int i = maxStart; i < maxStart + maxLen; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
*/


//键盘偏移
/*
#include<stdio.h>
#include<string.h>
char arr[] = "QWERTYUIOP[]%\ASDFGHJKL;'ZXCVBNM,./M<>?L:\"P{}!@#$%^&*()_+";
char arr2[1000000];
char arr3[1000000];
char t[2];
int i = 0;
char* p;
int main()
{
	
	memset(arr2, '\0', sizeof(arr2));
	memset(arr3, '\0', sizeof(arr3));
	memset(t, '\0', sizeof(t));
	gets_s(arr2, 1000000);
	for (i = 0; i < 1000000; i++) {
		if (arr2[i] == '\0')
			break;
		if (arr2[i] != ' ') {
			t[0] = arr2[i];
			
			p = &arr2[i];
			arr3[i] = arr[strcspn(arr, p)-1];
		}
		else {
			arr3[i] = ' ';
		}
	}
	printf("%s", arr3);

	return 0;
}
*/


/*
#include<stdio.h>
#include<math.h>
double lenth(double x1, double y1, double x2, double y2);
int main()
{
	double x[3], y[3];
	for (int i = 0; i < 3; i++) {
		scanf("%lf %lf", &x[i], &y[i]);
	}
	int len = lenth(x[0], y[0], x[1], y[1]);
	int judge = lenth(x[0], y[0], x[2], y[2]);
	if (judge < len)
		printf("yes");
	else
		printf("no");

	return 0;
}
double lenth(double x1, double y1, double x2, double y2)
{
	double p = pow((x1 - x2), 2) + pow((y1 - y2), 2);
	double x = sqrt(p);
	return x;
}

*/




#include<stdio.h>
#include<math.h>
int main()
{
	int a;
		int  is[10] = { 1,1 };
	
		for (a = 0; a < 8; a++) {
		is[a + 2] = (is[a + 1] + is[a]);
		printf("ls(%d)=%d\n", a, is[a]);
		}

	return 0;
}


































































