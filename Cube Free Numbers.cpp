#include<stdin.h>
int main(){
	int ent,chk,count=0;
	int i,l;
	scanf("%d",&ent);
	if(ent>=1&&ent<=1000000)
	{
		for(i=2;i<ent&&count!=3;i++)
		{
			count=0;
			chk = ent;
			for(l=1;l<4;l++)
			{
				if(chk%i==0)
				{
					count++;
					chk/i;
				}
			}
		}
		if(count==3)
		{
			printf("Not Cube Free");
		}
		else printf("%d",ent);
	}
	return 0;
}
