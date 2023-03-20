// IMPLEMENTATION OF BINARYS SEARCH ALGORITHM

#include<iostream>
using namespace std;

int binarySearch(int [], int, int, int);

// Binary search 
int binarySearch(int arr[], int low, int high, int key){
    

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] == key)
            return mid;
        
        if(key > arr[mid])
            low = mid + 1;

        else
            high = mid -1;
        
    }
    return -1;
}


int main()
{
    const int size = 6;
    int arr[size] = {1,4,5,7,9,12};
    int low = 0;
    int high = size - 1;
    int key;
    cout<<"Enter A Key To Be Searched: ";
    cin>>key;

    int result = binarySearch(arr, low, high, key);
    if( result == -1)
    {
        cout<<"Not found";
    }else{
        cout<<"Found at location "<<result;
    }

    return 0;
}