#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
	int M, N, R;
	cin>>M>>N>>R;
	int **mat = new int*[M];
	for(int i = 0; i < M; i++) {
		mat[i] = new int[N];
		for(int j = 0; j < N; j++) {
			cin>>mat[i][j];
		}
	}

	int numRings = min(M,N)/2;
	for(int i = 0; i < numRings; i++) {

		int numRot = R%(2*(M + N - 4*i) - 4);
		for(int rot = 0; rot < numRot; rot++) {
			//top row
			for(int j = i; j < N-i-1; j++) {
				int tmp = mat[i][j];
				mat[i][j] = mat[i][j+1];
				mat[i][j+1] = tmp;
			}
			// Rotate right column
			for(int j = i; j < M-i-1; j++) {
				int tmp = mat[j][N-i-1];
				mat[j][N-i-1] = mat[j+1][N-i-1];
				mat[j+1][N-i-1] = tmp;
			}
			// Rotate bottom row
			for(int j = N-i-1; j > i; j--) {
				int tmp = mat[M-i-1][j];
				mat[M-i-1][j] = mat[M-i-1][j-1];
				mat[M-i-1][j-1] = tmp;
			}
			// Rotate left column
			for(int j = M-i-1; j > i+1; j--) {
				int tmp = mat[j][i];
				mat[j][i] = mat[j-1][i];
				mat[j-1][i] = tmp;
			}
		}
	}
	// Output final matrix
	for(int i = 0; i < M; i++) {
		for(int j = 0; j < N; j++) {
			cout<<mat[i][j]<<" ";
		}
		cout<<"\n";
	}
    return 0;
}
