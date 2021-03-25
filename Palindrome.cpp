#include<stdio.h>
#include<math.h>
int main(){
	int ent,limit=0,temp,re=0,check=0,ans=0;
	int parin[7]={0};
	int i,l,k,p;
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
					if(temp!=0)
					{
						limit++;
					}
				}
				for(l=0;l<=limit/2;l++)
				{
					re=parin[l];
					parin[l]=parin[limit];
					parin[limit]=re;
				}
				for(k=0,p=1;k<=limit&&p<=limit+1;k++,p++)
				{
					check=check+pow(parin[p],p);
					
				}
				if(i==check)
				{
					ans++;
				}
				check=0;
			}
			ans=ans+9;
			printf("%d",ans);
		}
	}
	return 0;
}
