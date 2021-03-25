#include<stdio.h>
int main(){
	int ent,chk,count=0;
	int i,l;
	scanf("%d",&ent);
	if(ent>=1&&ent<=1000000)
	{
		for(i=1;i<=ent&&count!=3;i++)
		{
			chk = ent;
			for(l=1;l<4&&chk!=0;l++)
			{
				if(chk>0)
				{
					if(chk%i==0)
					{
						count++;
						chk/i;
					}
				}
				else break;
			}
			count=0;
		}
		if(count==3)
		{
			printf("Not Cube Free");
		}
		else printf("%d",ent);
	}
	return 0;
}
