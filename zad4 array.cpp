#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int i, n;
	int A[100];
	cout<<"Upisite koliko varijabla ce imati niz (max 100)";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<" Upisite varijablu u "<<i<<" polju: ";
		cin>>A[i];
		if(A[i]%2!=0){
			cout<<"A["<<i<<"]="<<A[i]<<endl;
		}
	}
	return 0;
}
