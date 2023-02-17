#include<stdio.h>
 main()
{
	int i,l,n,sum;
	scanf("%d%d",&n,&l);
	i=1;
	while(i<=l)
	{
		sum=n*i;
		printf("%dx%d=%d\n",n,i,sum);
		i++;
	}
}
