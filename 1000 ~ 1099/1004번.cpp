#include <stdio.h>

int main()
{
 	int x1=0,y1=0;	// ����� 
 	int x2=0,y2=0;	// ������ 
 	int n_t=0;		// �׽�Ʈ Ƚ��  
	int n_p=0;		// �༺�� ����  
	int a=0;        // ����� �������� �� ���ȿ� ������ ������� ������ �� ���� ���� ���� 
	int b=0;		// ���� ����						������										    
	int o=0;        // ��� ������ ������ �ִ��� Ȯ�� ����         
 	scanf("%d",&n_t);  // 2
 	int ii[n_t];       // �� �׽�Ʈ�� ����/��Ż Ƚ�� ����� 
 	int q=0;
 	int xx1=0;
	int xx2=0;
	int yy1=0;
	int yy2=0;
	int nn=0;
 	for(int h=0;h<n_t;h++) // �׽�Ʈ Ƚ�� / �༺�� ���� /  x,y, ������ 
 	{
 		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
 		scanf("%d",&n_p); // 7
 		int kk[n_p][3]; // 7 - 3   
	 	for(int i=0;i<n_p;i++)
	 	{
	 		scanf("%d %d %d",&kk[i][0],&kk[i][1],&kk[i][2]);
	 	}
	///////////////////////////  �Է� 
	 	for(int i=0;i<n_p;i++)
	 	{
	 		xx1=kk[i][0]-kk[i][2]; // x - ������ 
			xx2=kk[i][0]+kk[i][2]; // x + ������ 
			yy1=kk[i][1]-kk[i][2]; // y - ������ 
			yy2=kk[i][1]+kk[i][2]; // y + ������ 
			if(y1>yy1 && y1<yy2 && x1>xx1 && x1<xx2)
			{	
				if(y2>yy1 && y2<yy2 && x2>xx1 && x2<xx2) // ����� ������ �Ѵ� �� �� �ȿ� �ִ°� ?
				{
					o=1; // ���̽� 1 

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
						// ����� ������ �� ���� 
						a+=1;
					}	
					if(y2>yy1 && y2<yy2 && x2>xx1 && x2<xx2)
					{
						// ������ ������ �� ���� 
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
						// ����� ������ �� ���� 
						a+=1;
					}	
					if(y2>yy1 && y2<yy2 && x2>xx1 && x2<xx2)
					{
						// ������ ������ �� ���� 
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


	
	
	

	
	
	
	
	
	
	
	
	
	
	

