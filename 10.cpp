/* 

Q1 : Write a program to find the product of two numbers using pointers.

#include <iostream>
using namespace std;

int product(int &x, int &y) 
{
    int Product = x*y;
    return Product; 
}

int main()
{
    int a,b;

    cout<<"Enter number a : ";
    cin>>a;

    cout<<"Enter number b : ";
    cin>>b;


    cout<<product(a,b)<<endl;
    cout<<a<<" "<<b;
    
    return 0;
}

Q2: 
int *p, q;
p is a pointer and q is an integer. <---- Right
p and q both are pointers.
P and q both are integers. 
Syntax is incorrect.

Q3: Find the output of the following code snippet.
 int a = 10, b = 20;
 int *ptr = &a;
 b = *ptr + 1;
 ptr = &b;
 cout << *ptr << ‘ ‘ << a << ‘ ‘ << b;

11 11 10 
10 10 10 
11 10 11 <---- Right
10 11 10

Q4: Find the output of the following code snippet.
 int a = 15, b = 20;
 int *ptr = &a;
 int *ptr2 = &b;
 *ptr = *ptr2;

ptr now points to b.
ptr2 now points to a. 
a gets value of b. <---- Right
b gets value of a.

Q5: Is the following program snippet correct?
                
 int a = 10, b = 20;
 int *ptr;
 *ptr = 5; 

----> No, it's wrong.
*/

