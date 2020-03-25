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
bool isSafe(int box[N][N], int row, int col) {
	for (int i = 0; i < col; i++){
	//	cout<<box[row][i]<<endl;
		if (box[row][i]==1){
				//cout<<box[row][i]<<endl;
			return false;
		}
	}
	for (int i=row, j=col; i>=0 && j>=0; i--, j--){
	//	cout<<"row  "<<row<<" col  "<<col<<endl;
		if (box[i][j]){
			return false;	
			
		}
	}
	for (int i=row, j=col; j>=0 && i<N; i++, j--){
		if (box[i][j]){
			return false;
		}
	}
	return true;
}
bool Queen(int box[N][N], int col) {
	if (col >= N)
		return true;
	for (int i = 0; i < N; i++) { 
		if (isSafe(box, i, col) ) {
			box[i][col] = 1;
			if ( Queen(box, col + 1)) 
				return true;
			box[i][col] = 0;
      }
   }
   return false;
}
int main() {
	int box[N][N];
	for(int i = 0; i<N; i++){
		for(int j = 0; j<N; j++){
			box[i][j] = 0;
		}
	}
	if ( Queen(box, 0) == false ) {
	cout << "Can't Place Queen, No Solution!\n";
	}
	print(box);
}
