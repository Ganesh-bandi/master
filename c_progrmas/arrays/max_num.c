#include<stdio.h>
int main()
{
	int a[]={1,33,44,5,66,777,43};
	int n=sizeof(a)/sizeof(a[0]);
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("%d ",max);
	return 0;
}

