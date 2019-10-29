#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int a;
	int A[8]={0, 1, 2, 3, 4, 5, 6, 7};
	for(a=7;a>=0;a--){
		cout<<"A["<<a<<"]="<<A[a]<<" ";
	}
	return 0;
}
