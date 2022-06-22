// Merge sort using divide & conquer paradigm
// Time Complexity O(nlogn)

#include <iostream>
using namespace std;

void merging_the_array(int arr[],int low, int mid, int high)
{
    int i,j,k;
    int n_1= mid-low+1; //size of first array
    int n_2= high-mid;  //size of second array

    //creating two temperary array left and right
    int left[n_1],right[n_2];

    // now copying the data into right and left temp subarray
    for(i=0; i<n_1; i++)
    {
        left[i]=arr[low+i];
    }

    for(j=0; j<n_1; j++)
    {
        right[j]=arr[mid+1+j];
    }

    i=0; // for first subarray index value
    j=0; // for second subarray index value
    k=low; // for merging subarray index value

    // comparing elements of left and right subarray for merging and storing them to main array
    while(i<n_1 && j< n_2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
        }
        else
        {
            arr[k]=right[j];
            j++;
        }
        k++;
    }

    // storing the remaining elements of left subarray
    while(i<n_1)
    {
        arr[k]=left[i];
        i++;
        k++;
    }

    // storing the remaining elements of right subarray
    while(j<n_2)
    {
        arr[k]=right[j];
        j++;
        k++;
    }
}

// merge_sort definition
void merge_sort(int arr[], int low, int high)
{
    if(low<high)
    {
        //dividing into 2 equal halves
        int mid= (low+high)/2;
        merge_sort(arr,low,mid); // recursive merge_sort call for left half
        merge_sort(arr,mid+1,high); // recursive merge_sort call for right half

        // merging and sorting left and right half
        merging_the_array(arr,low,mid,high);
    }
}

// Driver Code
int main()
{
    // taking input from user in array 
    int size;
    cout<<"Input the size of array\n";
    cin>>size;
    int arr[size];
    cout<<"Now input elements in array\n";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    // calling merge_sort function
    merge_sort(arr,0,size-1);// here we are passing array, low index, high index

    //printing output
    cout<<"\nAfter Sorting The array will look like \n";
    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
    return 0;
}
