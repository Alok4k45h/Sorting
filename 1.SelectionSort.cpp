// selection sort

#include <iostream>
using namespace std;

// Swap function
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

// selection sort will select the minimum element of right side of index i and bring it to position i 
// array will get sorted till position i after every iteration 
void selectionSort(int arr[], int n){
    int min_index;
    for(int i=0;i<n-1;i++)
    {
        min_index=i;
        // loop for selecting the minimum element index which is less than min_index element
        for(int j=i;j<n-1;j++)
        {
            if(arr[min_index]>arr[j])
            {
                min_index=j;
            }
        }
        // swap arr[i] and arr[min_index]
        swap(arr[i],arr[min_index]);
    }
}

int main() {
    cout<< "enter the no. you want to input\n";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Now input the number in your array\n";
    
    //reading input from user
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // calling selectionSort function
    selectionSort(arr,n);
    
    // printing the sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
