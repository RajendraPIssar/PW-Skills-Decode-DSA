/*

1. Count the number of triplets whose sum is equal to the given value x. 


#include <iostream>
using namespace std;

int main() 
{

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int x;
    cout << "Target : ";
    cin >> x;


    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    int count = 0;

    for (int i = 0; i < n; i++) 
    {
        for (int j = i+1; j < n; j++) 
        {
            for (int k = i+2; k < n; k++) 
            {
                if (arr[i]+arr[j]+arr[k] == x)
                {
                    count++;
                }
                
            }
        }
    }

    cout<<count;

    return 0;
}



2. Find the factorial of a large number.


#include <iostream>
#include <vector>
using namespace std;

int go(vector<int> &a, int val, int size) 
{
    int carry = 0;
    for (int i = 0; i < size; i++) 
    {
        int product = a[i] * val + carry;
        a[i] = product % 10; 
        carry = product / 10;
    }
    while (carry) 
    {
        a[size] = carry % 10;
        carry /= 10;
        size++;  
    }
    return size;
}

int main() 
{
    int n;
    cin >> n;

    vector<int> a(500, 0); 
    int size = 1; 

    a[0] = 1;

    for (int i = 2; i <= n; i++) 
    {
        size = go(a, i, size); 
    }

    for (int i = size - 1; i >= 0; i--) 
    {
        cout << a[i]; 
    }
  
}



3. Find the first non-repeating element in the array.



#include <iostream>
#include <vector>
using namespace std;

int freq(vector<int> &a) {
    
    vector<int> frequency(100001, 0); 
    for (int i = 0; i < a.size(); i++) {
        frequency[a[i]]++;
    }


    for (int i = 0; i < a.size(); i++) {
        if (frequency[a[i]] == 1) {
            return a[i];
        }
    }

    return -1; 
}


int main() 
{
    vector<int> arr;

    int n;
    cout<<"Enter Array Size : ";
    cin>>n;

    cout<<"Enter Array Elements : ";
    for (int i = 0; i <n; i++)
    {
        int q;
        cin>>q;
        arr.push_back(q);
    }
    cout<<endl;

    int result = freq(arr);

    if (result != -1)   cout << "First non-repeating element: " << result <<endl;
    else    cout << "No non-repeating element found." <<endl;
    

    return 0;
}




4. Check if an array is a subset of another.



#include <iostream>
#include <vector>
using namespace std;

bool isSubset(vector<int>& arr1, vector<int>& arr2) {

    vector<int> sorted_arr1 = arr1;
    vector<int> sorted_arr2 = arr2;

    sort(sorted_arr1.begin(), sorted_arr1.end());
    sort(sorted_arr2.begin(), sorted_arr2.end());
    
    int i = 0; 
    int j = 0; 
    
    while (i < sorted_arr1.size() && j < sorted_arr2.size()) 
    {
        if (sorted_arr1[i] < sorted_arr2[j])    return false; 

        else if (sorted_arr1[i] == sorted_arr2[j])  i++; 
        
        j++;
    }
    

    return (i == sorted_arr1.size());
}

int main() {
    
    int n;
    cin>>n;
    vector<int> arr1(n);
    for (int i=0; i<n; i++) 
    {
        cin>>arr1[i];
    }

    int m;
    cin>>m;
    vector<int> arr2(m);
    for (int i=0; i<m; i++) 
    {
        cin>>arr2[i];
    }
    
    
    
    if (isSubset(arr1, arr2))   cout << "arr1 is a subset of arr2\n";
    else    cout << "arr1 is not a subset of arr2\n";

    
    return 0;
    
} 


5. Move all the zeros to the end of the array. 



#include <iostream>
#include <vector>

using namespace std;

void moveZerosToEnd(vector<int>& nums) {
    int right = 0; 
  
    for (int left = 0; left < nums.size(); ++left) 
    {
        if (nums[left] != 0) 
        {
            swap(nums[left], nums[right]);
            right++;
        }
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> nums(n);
    for (int i=0; i<n; i++) {
        cin>>nums[i];
    }
    

    moveZerosToEnd(nums);

    for (int i=0; i<n; i++) {
        cout<<nums[i]<<" ";
    }
    cout << endl;
    
    return 0;
}
 


*/








