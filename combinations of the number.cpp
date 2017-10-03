#include<stdio.h>
int main()
{
	int a[100],i,n;
	scanf("%d %d",&a[1],&a[2]);
	scanf("%d",&n);
	for(i=3;i<n;i++)
	{
		if(i%2!=0)
		{
			a[i]=a[i/2]*10+a[1];
		}
		else
		a[i]=a[(i/2)-1]*10+a[2];
	}
	for(i=1;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
