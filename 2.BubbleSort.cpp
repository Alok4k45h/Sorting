// Bubble sort

#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

// bubble_sort will bring largest element from the array to rightmost side after every iteration of i then again perform same operation for n-1 element
// here array get sorted from rightmost side(with largest to smallest) after every iteration of i
void bubble_sort(int arr[], int n){
    int swapped;
    for(int i=0;i<n;i++)
    {
        swapped=0;
        for(int j=0; j<n-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapped=1;
                swap(&arr[j],&arr[j+1]);
            }
        }
        n=n-1; // updating n value 
        
        //for best case when array are already sorted
        if(swapped==0)
        {
            break;
        }
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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // calling bubble_sort function
    bubble_sort(arr,n);
    
    // printing the sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
