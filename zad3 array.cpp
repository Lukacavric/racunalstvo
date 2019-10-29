#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int a, b, c=0;
	int A[8]={12, 14, 78, 56, 23, 54, 87, 42};
	for(a=0;a<8;a++){
		if(A[a]>c){
			b=A[a]-c;
			c=c+b;
		}
	}
	cout<<c;
	return 0;
}
