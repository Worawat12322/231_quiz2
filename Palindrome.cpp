#include<stdio.h>
#include<math.h>
int main(){
	int ent,limit=0,temp,re=0;
	int parin[1000000]={0};
	int i,l;
	scanf("%d",&ent);
	if(ent>=1&&ent<=1000000)
	{
		if(ent<10)
		{
			printf("%d",ent);
		}
		else if(ent==10)
		{
			printf("9");
		}
		else if(ent>10)
		{
			for(i=11;i<=ent;i++)
			{
				temp=i;
				while(temp!=0)
				{
					parin[limit]=temp%10;
					temp/=10;
					limit++;
				}
				for(l=0;l<=limit/2;l++)
				{
					re=parin[l];
					parin[l]=parin[]
				}
			}
		}
	}
	return 0;
}
