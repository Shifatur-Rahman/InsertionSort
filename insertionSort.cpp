#include <iostream>
using namespace std;
int main(){

int data[6] = {5,8,6,1,7,9};
int n=6, j, i, temp;

for(i=0; i<n; i++){
	j=i;

	while(j>0 && data[j-1]>data[j]){
		     temp = data[j];
		     data[j] = data[j-1];
		     data[j-1] = temp;
		     j--;
		     cout<<"j = "<<j<<endl;

	}

}

for(i=0; i<n; i++){
	cout<<data[i]<<endl;
}

}
