#include <stdio.h>

int main()
{
 	int x1=0,y1=0;	// 출발점 
 	int x2=0,y2=0;	// 도착점 
 	int n_t=0;		// 테스트 횟수  
	int n_p=0;		// 행성계 개수  
	int a=0;        // 출발점 도착점이 한 원안에 있을때 출발점을 포함한 원 개수 새는 변수 
	int b=0;		// 이하 동문						도착점										    
	int o=0;        // 출발 도착점 한점에 있는지 확인 변수         
 	scanf("%d",&n_t);  // 2
 	int ii[n_t];       // 각 테스트의 진입/이탈 횟수 저장용 
 	int q=0;
 	int xx1=0;
	int xx2=0;
	int yy1=0;
	int yy2=0;
	int nn=0;
 	for(int h=0;h<n_t;h++) // 테스트 횟수 / 행성계 개수 /  x,y, 반지름 
 	{
 		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
 		scanf("%d",&n_p); // 7
 		int kk[n_p][3]; // 7 - 3   
	 	for(int i=0;i<n_p;i++)
	 	{
	 		scanf("%d %d %d",&kk[i][0],&kk[i][1],&kk[i][2]);
	 	}
	///////////////////////////  입력 
	 	for(int i=0;i<n_p;i++)
	 	{
	 		xx1=kk[i][0]-kk[i][2]; // x - 반지름 
			xx2=kk[i][0]+kk[i][2]; // x + 반지름 
			yy1=kk[i][1]-kk[i][2]; // y - 반지름 
			yy2=kk[i][1]+kk[i][2]; // y + 반지름 
			if(y1>yy1 && y1<yy2 && x1>xx1 && x1<xx2)
			{	
				if(y2>yy1 && y2<yy2 && x2>xx1 && x2<xx2) // 출발점 도착점 둘다 한 원 안에 있는가 ?
				{
					o=1; // 케이스 1 

				}
			} 	
		}
		if(o==1)
		{
				for(int k=0;k<n_p;k++)
				{
					xx1=kk[k][0]-kk[k][2];  
					xx2=kk[k][0]+kk[k][2];  
					yy1=kk[k][1]-kk[k][2];  
					yy2=kk[k][1]+kk[k][2];
					if(y1>yy1 && y1<yy2 && x1>xx1 && x1<xx2) 
					{
						// 출발점 포함한 원 세기 
						a+=1;
					}	
					if(y2>yy1 && y2<yy2 && x2>xx1 && x2<xx2)
					{
						// 도착점 포함한 원 세기 
						b+=1;
					}
				}
				if(a>b)
				{
					ii[q]=a-b;	
					q++;
					a=0;
					b=0;
				}
				else if(a<b)
				{
					ii[q]=b-a;
					q++;
					a=0;
					b=0;
				}
		}
		else
		{
				for(int k=0;k<n_p;k++)
				{
					xx1=kk[k][0]-kk[k][2];  
					xx2=kk[k][0]+kk[k][2];  
					yy1=kk[k][1]-kk[k][2];  
					yy2=kk[k][1]+kk[k][2];
					if(y1>yy1 && y1<yy2 && x1>xx1 && x1<xx2) 
					{
						// 출발점 포함한 원 세기 
						a+=1;
					}	
					if(y2>yy1 && y2<yy2 && x2>xx1 && x2<xx2)
					{
						// 도착점 포함한 원 세기 
						b+=1;
					}
				}
				ii[q]=a+b;
				q++;
				a=0;
				b=0;
		}
	}
	for(int i=0;i<n_t;i++)
	{
		printf("%d\n",ii[i]);
	}
}	


	
	
	

	
	
	
	
	
	
	
	
	
	
	

