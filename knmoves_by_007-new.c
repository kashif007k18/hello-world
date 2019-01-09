#include <stdio.h>
int main()
{
	int t,a,b;
	scanf("%d",&t);

	int arr [5][5]={{0,3,2,3,2},{3,4,1,2,3},{2,1,4,3,2},{3,2,3,2,3},{2,3,2,3,4}};
		
		for(int i=1;i<=t;i++)
		{
			int c=0,mvs=0;
			scanf("%d%d",&a,&b);
			
			while((a-1)>4 || (b-1)>4)
			{
				if(a>=b)
				{
					if(b==1)
					{
						b+=1;
						a-=2;
						c++;
					}
					else
					{
						a-=2;
						b-=1;
						c++;
					}
				}
				else
				{
					if(a==1)
					{
						a+=1;
						b-=2;
						c++;
					}
					else
					{
						b-=2;
						a-=1;
						c++;
					}
				}
				}//while
			
			    mvs=c+arr[a-1][b-1];
				printf("%d\n",mvs);
			}//for
	return 0;
}
//Hey there....i'm here ..
    
