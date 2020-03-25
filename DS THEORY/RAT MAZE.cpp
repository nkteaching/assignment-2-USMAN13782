#include<iostream>
using namespace std;
#define N 5
void print(int box[N][N]) {
	for (int i = 0; i < N; i++) {
    	for (int j = 0; j < N; j++){
			cout << box[i][j] << " ";
		}
		cout << endl;
	}
}
bool Path(int box[N][N],int row,int col,int sol[N][N]) {
    if(box[0][0] == 0|| box[N-1][N-1] == 0){
        return false;
    }
	cout<<"row = "<<row<<"   col  ="<<col<<endl;    
     if(box[row][col] == 0){
     //	cout<<box[0][5]<<endl;
    	cout<<"abc  "<<endl;
        return false;
    }
	else if(row == N-1 && col == N-1){
		cout<<"final   "<<endl;
        sol[row][col] = 1;
        
        return true;
    }
//    else if(row >= N || col >= N){
//    	
//        return false;
//    }
    else{
        sol[row][col] = 1;
        if(Path(box,row,col+1,sol)){
        	 cout<<"CHECKED  col= "<<col<<endl;
            return true;
        }
       	cout<<"second   " <<endl;
        if(Path(box,row+1,col,sol)){
        	cout<<"enter in row if  "<<endl;
            return true;
        }
        cout<<"row  ="<<row<<endl;
        sol[row][col] = 0;
        return false;
    }
}
int main() {
	int box[N][N] = {   {1,1,1,1,1},
                        {0,1,0,0,0},
                        {1,1,1,0,1},
                        {0,0,1,1,0},
                        {1,0,1,1,1}
                    };
    int sol[N][N] = {   {0,0,0,0,0},
                        {0,0,0,0,0},
                        {0,0,0,0,0},
                        {0,0,0,0,0},
                        {0,0,0,0,0}
                    };
    print(box);
	if ( Path(box, 0,0,sol) == false ) {
	cout << "Can't Place Queen, No Solution!\n";
	}
    cout << endl;
	print(sol);
}
