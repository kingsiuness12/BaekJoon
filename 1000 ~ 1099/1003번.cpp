#include <stdio.h>
int a1=0;
int a2=0;
int fibonacci(int n) {
    if (n == 0) {
        a1+=1;
    } else if (n == 1) {
        a2+=1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);// 1 0 1   // 6-> 5    4 //  5
    }
}
int main()
{
	int t=0; 
	for(;;)
	{
		scanf("%d",&t);
		if(t>0 && t<=40)
		{
			break;
		}
	}
	int a[t];
	for(int i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<t;j++)
	{
		fibonacci(a[j]);
		printf("%d %d\n",a1,a2);
		a1=0;
		a2=0;
	}
}
