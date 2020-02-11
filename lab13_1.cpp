#include <iostream>
#include <string>
using namespace std;

int position;
template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	
//Write your code here.
 for(int i=1;i<N;i++){

	 for(int p=0;p<N;p++){
		if(p==i) 
		cout<<"["<<d[p]<<"]"<<" ";
		else
		cout<<d[p]<<" "; 
	 }cout<<"=>";

	 for(int j=i;j>0;j--){
		 if (d[j]>d[j-1]){
		  swap(d,j,j-1);
		  position=j-1;}
		 else
		 {
			 if(j==i)
			 position=i;
		 }
		  
	 }

	 for(int p=0;p<N;p++){
		if(p==position) 
		cout<<"["<<d[p]<<"]"<<" ";
		else
		cout<<d[p]<<" "; 
	 }cout<<"\n";
	 
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
