#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c;
	for(a=5;a>=1;a--)
	{
			for(c=a; c<=4; c++)
			{
				printf(" ");
			}
		for(b=a;b>=1;b--)
		{
			if(b%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		
		}
		printf("\n");
	}
}