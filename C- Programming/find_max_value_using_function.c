#include <stdio.h>
max(int [],int);
int main()
{
	int a[]={10,5,45,12,19};
	int n=5,m;
	m=max(a,n);
	printf("\nMAXIMUM NUMBER IS %d",m);
	return 0;
}
max(int x[],int k)
{
	int t,i;
	t=x[0];
	for(i=1;i<k;i++)
        {
		if(x[i]>t)
			t=x[i];
	}
	return(t);
}
