#include <iostream>
using namespace std;

int main()
{
    int n, key, pos = -1;
    
    cout << "enter the size of array:  " << endl;

    cin >> n;
    
    int arr[n];
    
    cout << "enter each element value:  " << endl;

    for (int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    // finding the key element 
    
    cout << "Enter the element to search: ";
    cin >> key;
    
    for(int i=0; i<n; i++)
    {
        if( arr[i] == key)
        {
            pos = i;
            break;
    }
    }
    
    if(pos != -1)
    {
        cout << "the element is found at index:  " << pos << endl;
        
    }
        else
        {
        
        cout << "invalid key " << endl;
        
    }
    
    return 0;
}