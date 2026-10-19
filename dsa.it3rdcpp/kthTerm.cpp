#include <iostream>
using namespace std;

 int main(){
     int n, k;
     
     cout << "enter number of element:  ";
     cin >> n;
     
     int a[n];
     
     cout << "enter each element:  ";
     
     for(int i=0; i<n; i++){
         cin >> a[i];
         
     }
          cout << "enter k value: ";
           cin >> k;
           
           for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++)
            
            if (a[i] > a[j]){
                
                int temp = a[i];
                 a[i] = a[j];
                 a[j] = temp;
                 
                 
            }
           }
                 cout << "Kth smallest number = " << a[k - 1] << endl;
                 cout << "Kth largest number = " << a[n - k] << endl;

    return 0;
     
 }