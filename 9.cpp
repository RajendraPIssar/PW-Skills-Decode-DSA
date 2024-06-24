/*

Q1 : 

Write a function to print squares of first n natural numbers, 
taking n as argument to the function.

#include <iostream>
using namespace std;

int square(int n)
{
    return n*n;
}


int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        cout<<square(i);
        cout<<endl;
    }
    
    
    return 0;
}

Q2 : 

Write a function that takes the radius of a circle as an argument and returns its area.

#include <iostream>
using namespace std;

float Area(float r)
{
    float area = 3.14*r*r;
    return area;
}


int main()
{
    int n;
    cout<<"Enter Radius : ";
    cin>>n;
     
    cout<<Area(n);

    return 0;
}

Q3: 
Given two numbers a and b, write a function to print all odd numbers between them.

#include <iostream>
using namespace std;

void Prime(int x,int y)
{
    if (x>y)
    {
        swap(x,y);
    }
    
    for (int i = x; i <= y; i++)
    {
        if (i%2!=0)
        {
            cout<<i<<endl;
        }
    }
    
}


int main()
{
    int a;
    cout<<"Enter a : ";
    cin>>a;

    int b;
    cout<<"Enter b : ";
    cin>>b;
     
    Prime(a,b);

    return 0;
}

Q4: 

Write a function to count the number of digits in a number and then print the square of this number. 

#include <iostream>
using namespace std;

int Digit(int x)
{
    int count = 0;
    int y = x;
    while (y>0)
    {

        int digit = y%10;
        count++;
        y/=10;
    }
    return count;
}

void printSquare(int x) 
{
    cout << "The square of " << x << " is " << (x * x) << endl;
}

int main()
{
    int a;
    cout<<"Enter a : ";
    cin>>a;


    
    int digitCount = Digit(a);
    cout << "The number of digits in " << number << " is " << digitCount << endl;


    // cout << "The number of digits in " << a << " is " << Digit(a) << endl;
    printSquare(a);

    return 0;
}

Q5: 

The minimum number of functions present in any C++ program is:
0
1
2 
Infinite

----> 1

Q6: 

State True and False:

1. A function may be called more than once from any other function. ----> True
2. It is necessary for a function to return some value. ----> False

Q7: 

Explore:
Can the same function name be used for different functions without any conflict?

#include <iostream>
using namespace std;


void print(int i) 
{
    cout << "Integer: " << i << endl;
}

void print(double d)
{
    cout << "Double: " << d << endl;
}


int main() 
{
    print(10);         
    print(10.5); 

    return 0;
}

*/

