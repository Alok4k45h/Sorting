// Insertion Sort

#include <iostream>
using namespace std;

// here we are inserting key leftmost sorted array to its correct position
// array will be sorted from leftmost to rightmost
void insertion_sort(int arr[],int n)
{
    int key,i,j;
    // here loop will start from i=1 because first element will considered always sorted 
    for(i=1; i<n; i++)
    {
        key=arr[i];
        j=i-1;
        // loop will traverse from leftward direction from j=i-1 to j>=0
        while(j>=0 && key < arr[j])
        {
            // shifting one place right ward to make place to insert the key at correct place
            arr[j+1]=arr[j];
            j--;
        }
        // finally inserting the key to its correct place in leftmost sub-array
        arr[j+1]=key;
    }
}


//Driver Code
int main() {
    cout<< "enter the no. you want to input\n";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Now input the number in your array\n";
    
    //reading input from user
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    // calling bubble_sort function
    insertion_sort(arr,n);
    
    // printing the sorted array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
