#include<iostream>
#include<cmath>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    int m,n;
    cin>>m>>n;
    int **arr = new int*[m];
    for(int row =0;row<m;row++) {
        arr[row] = new int[n];
    }
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>arr[i][j];
        }
    } 
    int k=0,l=0;
    while(k<m && l<n) {
        for(int i=k;i<m;i++) {
            cout<<arr[i][l]<<", ";
        }
        l++;
        for(int i=l;i<n;i++) {
            cout<<arr[m-1][i]<<", ";
        }
        m--;
        if(k<m) {
            for(int i=m-1;i>=k;i--) {
                cout<<arr[i][n-1]<<", ";
            }
            n--;
        }
        if(l<n){
            for(int i=n-1;i>=l;i--) {
                cout<<arr[k][i]<<", ";
            }
            k++;
        }
    }

    cout<<"END";
	return 0;

}