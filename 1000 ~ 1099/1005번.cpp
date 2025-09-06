#include <stdio.h>
int main()
{
	int T=0;
	int N=0;
	int K=0;
	int a=1;
	int k=1;
	int k1=0;
	int g=0;
	int ans=0;
	int rt=0;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
		scanf("%d %d",&N,&K);
		int kk[T][N];
		rt=K*2;
		int cn[rt];
		int nn[K];
		int n=0;
		for(int j=0;j<K;j++)
		{
			scanf("%d",&kk[i][j]);
			// i번쨰 케이스의 j번째 건물 건설 시간 
		}
		for(int k=0;k<rt;k+=2)
		{
			scanf("%d %d",&cn[k],&cn[k+1]); 
		}	
		scanf("%d",&ans);
		//--------------------------------------------------------------- 입력 끝 
		// 관계 정리  
		int qw[K][K];
		for(int o=0;o<K;o++)
		{
			for(int u=0;u<2*K;u+=2)
			{
				for(int r=k;r<=a;r++) // 1 |||  2, 3 ||| 4 5 6 ||| 7  ||| 8 
				{
					if(cn[u]<cn[u+1])
					{
						if(cn[u]==r)
						{
							qw[o][g]=cn[u+1]; // 0번째 순서들의 값
							printf("\n%d\n",qw[o][g]); 
							k1+=1;
							g+=1;
						}	
					}
					else if(cn[u]>cn[u+1])
					{
						if(cn[u+1]==r)
						{
							qw[o][g]=cn[u];
							printf("\n%d\n",qw[o][g]); 
							k1+=1;
							g+=1;
							
						}
					}
					// k1=3  
				}	// 1+ 2 => 3
			}
			if(n==0)
			{
				nn[n]=k1;
				n+=1;
				k=k+1;
				a=a+k1;
				k1=0;
				g=0; 	
			}
			else
			{
				nn[n]=k1;
				k=k+nn[n-1];
				a=a+k1;
				n+=1;
				k1=0;
				g=0; 
			}
			printf("\n");
		}
		// 0번쨰에 1이 연결된 숫자들 개수 나옴 ->  
		for(int j=0;j<K;j++)
		{
			for(int k=0;k<nn[j];k++)
			{
				printf("%d번째 숫자들\n",j+1);
				printf("%d\n",qw[j][k]);
			}
			printf("\n");
		}
		
		
	} 
	
}
