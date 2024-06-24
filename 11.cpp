/* 

1. Calculate the product of all the elements in the given array.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of elements in an array : ";
    cin>>n;
    int arr[n];
    int product = 1;

    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i=0;i<n; i++)
    {
        product = product*arr[i];
    }
    cout<<product;
    
    return 0;
}


2. Find the second largest element in the given Array in one pass.


#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of elements in an array : ";
    cin>>n;
    int arr[n];

    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i=0; i<n; i++) 
    {
        if (arr[i] > largest) 
        {
            secondLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secondLargest && arr[i] != largest) 
        {
            secondLargest = arr[i];
        }
    }

    cout<<secondLargest;
    
    return 0;
}


3. Find the minimum value out of all elements in the array.


#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of elements in an array : ";
    cin>>n;
    int arr[n];

    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    int smallest = INT_MAX;
   

    for (int i=0; i<n; i++) 
    {
        if (arr[i] < smallest) 
        {
            smallest = arr[i];
        } 
        
    }

    cout<<smallest;
    
    return 0;
}


4. Given an array, predict if the array contains duplicates or not.


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no. of elements in an array: ";
    cin >> n;

    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    bool hasDuplicates = false;
    
    for (int i = 0; i < n; ++i) 
    {
        for (int j = i + 1; j < n; ++j) 
        {
            if (arr[i] == arr[j]) 
            {
                hasDuplicates = true;
                break;
            }
        }

    }    

    if (hasDuplicates)
    {
        cout << "Contains Duplicates" << endl;
    }
    else
    {
        cout << "No Duplicates Found" << endl;
    }
    
    return 0;
}



5. WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int missing = 0;

    // XOR all numbers from 1 to n+1
    for (int i = 1; i <= n + 1; ++i) {
        missing ^= i;
    }

    // XOR all numbers in the array
    for (int i = 0; i < n; ++i) {
        missing ^= arr[i];
    }

    cout << "The missing number is: " << missing << endl;

    return 0;
}



6. Predict the output.

 int main()
 {
 int sub[50], i ;
 for ( i = 0 ; i <= 48 ; i++ ) ;
 {
 sub[i] = i ;
 cout<<sub[i]<<endl ;
 }
 return 0;
 }


 error
 

*/



#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int missing = 0;

    // XOR all numbers from 1 to n+1
    for (int i = 1; i <= n + 1; ++i) {
        missing ^= i;
    }

    // XOR all numbers in the array
    for (int i = 0; i < n; ++i) {
        missing ^= arr[i];
    }

    cout << "The missing number is: " << missing << endl;

    return 0;
}
