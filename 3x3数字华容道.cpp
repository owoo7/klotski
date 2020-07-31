#include<iostream>
using namespace std;
int main()
{	
	int numx = 2,numy = 2,finnum = 0;
	char ans;
	int test[3] [3] =
	{	
		{8,3,5}, 
	    {4,6,1},
		{2,7,0}	
	};
	cout<<"You can use key:w a s d to control the game.w for up,a for left,d for right and s for down.zero is impty and you can use it to restore those numbers into right positions."<<"\n";
	for(int x = 0;x < 3;x++)
	{
		for(int y = 0;y < 3;y++)
			cout<<"\t"<<test[x][y]<<"\t";
		cout<<"\n\n\n";
	};
	do
	{
		cin>>ans;
		switch(ans)
		{
			case 'w': 
			{
				if(numx != 2)
				{
					int i = test[numx + 1][numy];
					test[numx + 1][numy] = 0;
					test[numx][numy] = i;
					numx++;
				}
				else
				{
					cout<<"Sorry,this operation cannot be performed in this situation."<<"\n";
				};
				break;
			};
			case 's':
			{
				if(numx != 0)
				{
					int i = test[numx - 1][numy];
					test[numx - 1][numy] = 0;
					test[numx][numy] = i;
					numx = numx - 1;
				}
				else
				{
					cout<<"Sorry,this operation cannot be performed in this situation."<<"\n";
				};
				break;
			};
			case 'a':
			{
				if(numy != 2)
				{
					int i = test[numx][numy + 1];
					test[numx][numy + 1] = 0;
					test[numx][numy] = i;
					numy++;
				}
				else
				{
					cout<<"Sorry,this operation cannot be performed in this situation."<<"\n";
				};
				break;
			};
			case 'd':
			{
				if(numy != 0)
				{
					int i = test[numx][numy - 1];
					test[numx][numy - 1] = 0;
					test[numx][numy] = i;
					numy = numy - 1;
				}
				else
				{
					cout<<"Sorry,this operation cannot be performed in this situation."<<"\n";
				};
				break;
			};			   
		};
		for(int x = 0;x < 3;x++)
		{
			for(int y = 0;y < 3;y++)
				cout<<"\t"<<test[x][y]<<"\t";
			cout<<"\n\n\n";
		};
		if(test[2][2] == 0)
			if(test[0][0] == 1 && test[0][1] == 2 && test[0][2] == 3 && test[1][0] == 4 && test[1][1] == 5 && test[1][2] == 6 &&test[2][0] == 7 && test[2][1] == 8)
				finnum = 1;
	}
	while(finnum == 0);
	cout<<"You won,congratulations!";
	return 0;
}
