#include<iostream>
using namespace std;
void selectionSort(int a[],int n){
	for (int i=0;i<n-1;i++){
		int smallNumberIndex=i;
		for (int j=i+1;j<n;j++){
			if(a[j]<a[smallNumberIndex]){
				smallNumberIndex=j;
			}
		}
		int temp=a[i];
		a[i]=a[smallNumberIndex];
		a[smallNumberIndex]=temp;
	}
}

int main()
{
     int n;
   cout<<"Enter the number of elements"<<endl;
   cin>>n;
   int a[n];
    cout<<"Enter "<<n<<" elements"<<endl;
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   selectionSort(a,n);
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }
    return 0;
}
