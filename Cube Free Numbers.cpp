#include<stdio.h>
int main(){
	int ent,chk,count=0,check=0,lob=0;
	int i,l,k;
	scanf("%d",&ent);
	if(ent>=1&&ent<=1000000)
	{
		if(ent>1)
		{
		for(k=2;k<=ent;k++)
		{
		
		for(i=2;i<=k;i++)
		{
			chk = k;
			for(l=1;l<4;l++)
			{
				if(chk>0)
				{
					if(chk%i==0)
					{
						count++;
						chk/=i;
					}
				}
			}
			if(k==ent&&count==3)
			{
				printf("Not Cube Free");
			 	return 0;
			}
			else if(count==3)
			{
				lob++;
				check++;
			}
			count=0;
		}
		}
		printf("%d",ent-lob);
		}
		else printf("1");
	}
	return 0;
}
