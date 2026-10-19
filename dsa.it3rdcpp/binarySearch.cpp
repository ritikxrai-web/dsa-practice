#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    
    int key, low = 0, high = 4;
    int pos = -1;
    
    key = 2;
    
    while (low <= high)
    {
        int mid = (low+high)/2;
        
        if (arr[mid] == key)
        { 
             pos = mid;
             break;
           
        }
        
        else if 
        
            (arr[mid] < key)
            {
                low = mid+1;
            }
        
        
        else 
        {
            high = mid-1;
        }
    }
    
    
    
    if (pos != -1)
    {
        cout << "the element found at index" << pos << endl;
    }
    
    else 
    { 
        cout << "invalid value" << endl;
}
return 0;
}
