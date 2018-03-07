#include<iostream>

using namespace std;

int stk[6]={0,0,0,0,0,0}; 
int top=-1;
int main(){
	int map[6][6]={
		{0,0,1,1,0,0},
		{0,0,0,1,1,0},
		{0,0,0,1,0,1},
		{0,0,0,0,0,1},
		{0,0,0,0,0,1},
		{0,0,0,0,0,0}
	};
	int visited[6]={0,0,0,0,0,0};
	int degree[6]={0,0,0,0,0,0};
	int j,cnt=0;
	

		for(int i=0; i<6; i++){
			for(int j=0; j<6; j++){
				degree[i]+=map[j][i];
			}
		}
	while(1){
		for(int i=0; i<6; i++){
			if(visited[i]==0 && degree[i]==0){
				stk[++top]=i;
			}
		}
		if(top!=-1){
			j=stk[top--];
			visited[j]=1;
			cnt++;
			for(int i=0; i<6; i++){
				if(map[j][i]==1)
					degree[i]--;
			}
			cout << j << endl;
		}
		if(cnt==6)
			break;
	}
	return 0;
}
