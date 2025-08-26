#include <stdio.h>
int main()
{
	int a=0;
	int b=0;
	for(;;)
	{
		scanf("%d %d",&a,&b);
		if(a>0 && b<10)
		{
			break;
		}
	}
	printf("%d",a+b);
}
