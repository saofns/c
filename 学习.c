#include<stdio.h>
int main()
{
	int a;
	printf("请输入数字\n");
	scanf("%d",&a);
	if(a%2 == 0)
		printf("偶数\n");
	else
		printf("奇数\n");
	return 0;
}
