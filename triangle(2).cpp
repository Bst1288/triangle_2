#include<iostream>
using namespace std;

void triangle(int num){
	int s,x,y;
		for(x = 1; x <= num; x++){
			for(s = x; s < num; s++){
				cout << " ";
		}
	for(y = 1; y <= (2 * x - 1); y++){
		cout << "*";
	}
	cout << endl;
	}
}

int main(){
	int n;
	cout << "Enter number : ";
	cin >> n;
	triangle(n);
	return 0;
}
