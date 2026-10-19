#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid+1;
    int k = 0;
    
    int temp[100];
    
    while (i <= mid && j <= high)
    {
        if ( arr[i] < arr[j] )
        {
            temp[k] = arr[i];
            i++;
        }
        
        else 
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    
    while ( i <= mid )
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    
    while ( j <= high )
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    
    for ( int i = low, k = 0; i <= high; i++, k++)
    {
        arr[i] = temp[k];
    }
};

    void mergeSort ( int arr[], int low, int high)
    {
        if ( low < high)
        {
            int mid = ( low + high )/2;
            
            mergeSort ( arr, low , mid);
            mergeSort ( arr, mid+1, high);
            
            merge ( arr, low, mid, high);
        }
    };
    
    int main()
    {
        int n;
        cout << "enter the total number of array: " << " ";
        cin >> n;
        
        int arr[n];
        
        cout << "enter each element: " << " ";
        for ( int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        int low = 0;
        int high = n-1;
        
        mergeSort ( arr, low, high);
        
        cout << "the sorted array: " << " " << endl;
        for ( int i = 0; i < n; i++)
        {
            cout << arr[i] << endl;
        }
        
    }