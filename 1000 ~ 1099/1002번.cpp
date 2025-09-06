#include <stdio.h>
int main()
{
	int n_t=0;
	int x1=0;
	int y1=0;
	int r1=0;
	int x2=0;
	int y2=0;
	int r2=0;
	int qw=0;
	int ux=0;
	int uy=0;
	int ku=0;
	int jk=0;
	int d_s=0;
	int n=0;
	int n1=0; 
	int q1=0;
	int q2=0;
	int q3=0;
	int q4=0;
	int a=0;
	scanf("%d",&n_t); 
	int m1_x[n_t][100];
	int m1_y[n_t][100];
	int m2_x[n_t][100];
	int m2_y[n_t][100];
	int kk[n_t][6]; // 각 케이스들의 좌표, 거리 값  
	for(int i=0;i<n_t;i++)
	{
		scanf("%d %d %d %d %d %d",&kk[i][0], &kk[i][1], &kk[i][2], &kk[i][3], &kk[i][4], &kk[i][5]);
	}
	for(int i=0;i<n_t;i++)
	{
		d_s=kk[i][2]*kk[i][2];
		// 거리 계산을 위해 최대 빗변,높이 구하기 
		for(int j=1;j<100;j++)
		{
			int k=0;
			k=j*j;
			if(k>=d_s)
			{
				jk=j;
				
			}
		} 	
		// 13 -> 12 5
		//  l  
		// 빗변에 길이에 따라 나올수 있는 가로/높이 구하기                    
			for(int l=jk;l>0;l--) // 13 -> 12 -> 11 
			{
				for(int u=1;u<l;u++)
				{
					ux=l*l;
					uy=u*u;
					ku=ux+uy;
					if(ku==d_s)
					{
						m1_x[i][n]=kk[i][0]+l; // 좌표 x값에서 구한 가로/높이 나올수 있는것들 배열에 넣기  
						m1_x[i][n+1]=kk[i][0]+l;
						m1_x[i][n+2]=kk[i][0]-l;
						m1_x[i][n+3]=kk[i][0]-l;
						m1_x[i][n+4]=kk[i][0]+u;
						m1_x[i][n+5]=kk[i][0]+u;
						m1_x[i][n+6]=kk[i][0]-u;
						m1_x[i][n+7]=kk[i][0]-u;
						// ------------------------------
						m1_y[i][n]=kk[i][1]-u;   
						m1_y[i][n+1]=kk[i][1]+u;
						m1_y[i][n+2]=kk[i][1]-u;
						m1_y[i][n+3]=kk[i][1]+u;
						m1_y[i][n+4]=kk[i][1]-l;
						m1_y[i][n+5]=kk[i][1]+l;
						m1_y[i][n+6]=kk[i][1]-l;
						m1_y[i][n+7]=kk[i][1]+l;
						n+=8;
						// 32 
					}
				}	
			}
		d_s=kk[i][5]*kk[i][5];
		for(int j=1;j<100;j++)
		{
			int k=0;
			k=j*j;
			if(k>=d_s)
			{
				jk=j;
			}
		} 	
		//  l                       u 
			for(int l=jk;l>0;l--) // 13 -> 12 -> 11 
			{
				for(int u=1;u<l;u++)
				{
					ux=l*l;
					uy=u*u;
					ku=ux+uy;
					if(ku==d_s)
					{
						m2_x[i][n1]=kk[i][3]+l; // 좌표 x값에서 구한 가로/높이 나올수 있는것들 배열에 넣기  
						m2_x[i][n1+1]=kk[i][3]+l;
						m2_x[i][n1+2]=kk[i][3]-l;
						m2_x[i][n1+3]=kk[i][3]-l;
						m2_x[i][n1+4]=kk[i][3]+u;
						m2_x[i][n1+5]=kk[i][3]+u;
						m2_x[i][n1+6]=kk[i][3]-u;
						m2_x[i][n1+7]=kk[i][3]-u;
						// ------------------------------
						m2_y[i][n1]=kk[i][4]-u;   
						m2_y[i][n1+1]=kk[i][4]+u;
						m2_y[i][n1+2]=kk[i][4]-u;
						m2_y[i][n1+3]=kk[i][4]+u;
						m2_y[i][n1+4]=kk[i][4]-l;
						m2_y[i][n1+5]=kk[i][4]+l;
						m2_y[i][n1+6]=kk[i][4]-l;
						m2_y[i][n1+7]=kk[i][4]+l;
						n1+=8;
						// 32 
					}
				}	
			}
			for(int q=0;q<n;q++)
			{
				q1=m1_x[i][q];
				q2=m1_y[i][q];
				for(int w=0;w<n1;w++)
				{
					q3=m2_x[i][w];
					q4=m2_y[i][w];
					if(q1==q3 && q2==q4)
					{
						a+=1;
					}
				}	
			}
			printf("%d\n",a);
			a=0;	
		}
		
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

