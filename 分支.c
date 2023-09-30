#include<stdio.h>
int main()
{
	
	//简化了，但是没完全简化
	int day = 0;
	scanf("%d", &day);
	switch (day) {
	case 1:
		printf("monday\n");
		break;
	case 2:
		printf("tuesday\n");
		break;
	case 3:
		printf("wednesday\n");
		break;
	case 4:
		printf("thursday\n");
		break;
	case 5:
		printf("friday\n");
		break;
	default:
		printf("别问，问就是休息");
		break;
	}
	
	return 0;
}
