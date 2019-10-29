#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int b, zbroj;
	float prosjek;
	int A[10]={12, 15, 54, 52, 65, 75, 84, 69, 4, 20};
	for(b=0;b<10;b++){
		cout<<"A["<<b<<"]="<<A[b]<<" ";
		zbroj+=A[b];
	}
	cout<<endl;
	prosjek=zbroj/b;
	cout<<"Prosjecna vrijednost ovih brojeva je:"<<prosjek<<" ";
	return 0;
}
