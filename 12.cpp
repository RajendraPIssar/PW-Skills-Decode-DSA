/* 

1. Count the number of elements strictly greater than x.


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int x;
    cout << "Target : ";
    cin >> x;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i < n; ++i) 
    {
        if (arr[i] > x )
        {
            count++;
        }
        
    }

    cout << count;

    return 0;
}



2. WAP to find the largest three elements in the array.


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
    int thirdLargest = INT_MIN;

    for (int i=0; i<n; i++) 
    {
        if (arr[i] > largest) 
        {
            thirdLargest = secondLargest;
            secondLargest = largest;
            largest = arr[i];
        } 
        else if (arr[i] > secondLargest && arr[i] != largest) 
        {
            secondLargest = arr[i];
        }
        else if (arr[i] > thirdLargest && arr[i] != largest && arr[i] != secondLargest) 
        {
            thirdLargest = arr[i];
        }
    }

    cout<<"Largest Element : "<<largest<<endl<<"Second Largest Element : "<<secondLargest<<endl<<"Third Largest Element : "<<thirdLargest;
    
    return 0;
}



3. Check if the given array is sorted or not.


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

    bool sorted = true;

    for (int i = 0; i < n-1; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted)
        cout << "Sorted" << endl;
    else
        cout << "Not Sorted" << endl;

    return 0;
}



4. Find the difference between the sum of elements at even indices to the sum of elements at odd indices.


#include <iostream>
using namespace std;

int main() 
{

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int sumEvenIndices = 0;  
    int sumOddIndices = 0;   

    for (int i = 0; i < n; i++) 
    {
        if (i % 2 == 0) 
            sumEvenIndices += arr[i];
        
        else
            sumOddIndices += arr[i];
    }

    int difference = sumEvenIndices - sumOddIndices;
    cout << "Difference between sum of elements at even indices and odd indices: " << difference << endl;

    return 0;
}



5. Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.


#include <iostream>
using namespace std;

int main() 
{

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) 
    {
        if (i % 2 == 0) 
            arr[i]+=10;
        
        else
            arr[i]*=2;

        cout<<arr[i]<<" ";
    }

    return 0;
}



6. Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.


#include <iostream>
using namespace std;

int main() 
{

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    int uniqueNumber = 0;
        
    for (int i = 0; i < n; i++) 
    {
        uniqueNumber ^= arr[i];
    }

        cout<<uniqueNumber<<" ";

    return 0;
}



7. If an array arr contains n elements, then check if the given array is a palindrome or not.



#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int size) 
{
    for (int i = 0; i < size / 2; ++i) 
    {
        if (arr[i] != arr[size - 1 - i]) 
            return false;
    }
    return true;
}

int main() 
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];  
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    if (isPalindrome(arr, n)) 
        cout << "The array is a palindrome." << endl;
    else 
        cout << "The array is not a palindrome." << endl;
    

    return 0;
}


8. Find the error.

 double getAverage(int arr[], int size);
 int main () {
 int balance[5] = {1000, 2, 3, 17, 50};
 double avg;
 avg = getAverage( balance[0], 5 ) ;  <--- Error avg = getAverage(balance, 5);
 cout << "Average value is: " << avg << endl;
 return 0;
 }

*/


