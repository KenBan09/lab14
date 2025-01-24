#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	for( int k = 1; k < N ; k++){
		for( int j = k; j>0 ; j--){
		if(d[j-1]<= d[j] ){
			T temp = d[j];
			d[j] = d[j-1];  
			d[j-1]= temp;
		}
			
		

		} cout << "Pass " << k << ":";
		for( int n = 0 ; n < N ; n++){
			cout << d[n] << " ";
		}cout << endl;

	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
 