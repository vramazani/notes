#include<vector>
#include<exception>
#include<iostream>
#include<cstring>
using namespace std;

int main_orig(){
	return 0;
}
const int SIZE = 1000;

int f0(int a[]){
	cout<<__LINE__<<" "<<&(a[0])<<endl;
	cout<<__LINE__<<" "<<&a<<endl;
	cout<<__LINE__<<" "<<a<<endl;
	for(int i = 0; i<SIZE; i++)
		a[i] = i;
}

int f1(int (&a)[SIZE]){
	cout<<__LINE__<<" "<<&a<<endl;
}

int f2(int* const a){
	cout<<__LINE__<<" "<<a<<endl;
	cout<<__LINE__<<" "<<&a<<endl;
}


int main(){
	int a[SIZE]={};
	//for(int i = 0; i<SIZE; i++)
		//cout<<a[i]<<" ";
	cout<<endl;
	cout<<__LINE__<<" "<<&a<<endl;
	f0(a);
	//for(int i = 0; i<SIZE; i++)
		//cout<<a[i]<<" ";
	cout<<endl;
	f1(a);
	f2(a);
	
	return 0;
}

//int fun(int ptr[]) 
//int fun(int (* ptr) [6]  )
//int fun(int (&ptr) [6] )
//int fun(int * ptr, int size)
//int fun(int (&ptr)[6], int size)
//int fun(int (&ptr)[6])
int fun(int * const ptr, int size)
{ 
	ptr[0] = 5;
	cout<<"*ptr "<<*ptr<<endl;
	//cout<<"sizeof(ptr): "<<sizeof(ptr)<<endl;
	return 0; 
} 
// Driver code 
int main_func() 
{ 
   int arr[] = {10, 20, 30, 40, 50, 60}; 
   fun(arr, 6);
   cout<<"arr[0]: "<<arr[0]<<endl;
   return 0; 
} 

int sizeof_arr_vs_ptr(){
	float arr[] = {10, 20, 30, 40, 50, 60};
	float *ptr = arr;
	printf("Size of arr[] %ld\n", sizeof(arr));
	printf("Size of ptr %ld\n", sizeof(ptr));
	double* d_ptr;
	cout<<sizeof(d_ptr);
	return 0;

}
int vector_and_except(){

	vector<int> a;
	a.reserve(100);
	a.push_back(0);
	cout<<a[101]<<endl;
	try {
		cout<<a.at(50)<<endl;
	}
	catch(exception& e) {
		cout<<e.what()<<endl;
	}
	cout<<a.capacity()<<endl;
	return 0;

}

int array_bound(){

	int a[5];
	cout<<a[5]<<endl;
	return 0;

}

int const_pointer(){
	int * const b = new int[10] {};
	//b = new int[2];
	//int const * const b = new const int[10] {};
	cout<<b[0]<<endl;
	return 0;

}
int func(){
	const int k=3;
	int a[k];
	
	cout<<sizeof(a)<<" size"<< sizeof(a[0])<<endl;
	memset(a, 0, sizeof(a));

	std::fill(std::begin(a), std::end(a), 5);
	for (int i=0; i<k; i++) {
		cout<<a[i]<<endl;
	}

	int a1[6] = { 10, 20, 30, 40 };
	for (int i=0; i<6; i++) {
		cout<<a1[i]<<"\t";
	}
	cout<<endl;

	return 0;
}

