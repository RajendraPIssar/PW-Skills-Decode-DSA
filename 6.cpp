/* 


1.

Predict the output
 #include <bits/stdc++.h>
 using namespace std;
 int main() {
    while ('1' < '2')
    cout << "In while loop" << endl;
}

Infinite Loop.

2.

Predict the output
#include <bits/stdc++.h>
using namespace std;
int main( ) {
   int t = 10;
   while (t /= 2) 
    {
       cout << "Hello" << endl;
    } 
}

Hello
Hello
Hello

3.

Predict the output
#include <bits/stdc++.h>
using namespace std;
int main( ) {
   for (int x = 1; x * x <= 10; x++)
   cout << "In for loop" << endl;
}

In for loop
In for loop
In for loop

4.

Predict the output
#include <bits/stdc++.h>
using namespace std;
int main( ) {
   int x = 10, y = 0 ;
   while ( x >= y ) 
   {
        x-- ;
        y++ ;
        cout<< x<<""<< y <<endl;
    } 
}

9 1
8 2
7 3
6 4
5 5

5.

WAP to print the sum of all the even digits of a given number.
  Sample Input : 4556
  Output: 10


#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int sum = 0;
    
    for (int i = 1; i <= n; i++)
    {
        int digit = n%10;
        if (digit%2==0)
        {
            sum = sum + digit;
        }
        n/=10;
    }
    cout<<sum;
    
    return 0;
} 

6.

WAP to print the sum of a given number and its reverse.
  Sample Input : 12
  Sample Output : 33 [12+21]


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int original_number = n;
    int reverse_number = 0;

    while (n > 0) {
        int digit = n % 10;
        reverse_number = reverse_number * 10 + digit;
        n /= 10;
    }

    int sum = original_number + reverse_number;

    cout << "The sum of " << original_number << " and its reverse " << reverse_number << " is " << sum << endl;

    return 0;
}

7. 

Print the factorials of first ‘n’ numbers
  Sample Input : 10
  Output :
  1
  2
  6
  24
  120
  720
  5040
  40320
  362880
  3628800

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout<<fact<<endl;
    
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) 
    {
        int fact = 1; 
        for (int j = 1; j <= i; j++) 
        {
            fact *= j; 
        }
        cout << fact << endl; 
    }

    return 0;
}

8.

Print first ‘n’ fibonacci numbers.
  Sample Input : 10
  Output : 1 1 2 3 5 8 13 21 34 55
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;

    int sum = 0;
    int a = 1;
    int b = 1;
    cout<<a<<" "<<b;

    for(int i =3; i<=n; i++)
    {
        sum = a+b;
        cout<<" "<<sum;
        a=b;
        b=sum;
    }
    
    
    return 0;
}


9.

Write a program to print out all Armstrong numbers between 1 and 500. 
If the sum of cubes of each digit of the number is equal to the number itself, 
then the number is called an Armstrong number. 
For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
   Output :
   1
   153
   370
   371
   407

#include <iostream>
using namespace std;

int main() 
{
    cout << "Armstrong numbers between 1 and 500 are:" << endl;

    for (int num = 1; num <= 500; num++) {
        int sum = 0;
        int temp = num;

        while (temp > 0) {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if (sum == num) {
            cout << num << endl;
        }
    }

    return 0;
}

*/

