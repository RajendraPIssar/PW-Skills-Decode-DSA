/* 

1. 
Take 2 integers input and print the greatest of them
Input 1: a = 5 b = 7
Output 1: second number 7 is the largest.
Input 2: a = 12 b = 1
Output 2 : first number 12 is the largest.
Note : It is ensured that the two numbers will be different.

2. 
Given the radius of the circle, predict whether numerically the area of this circle is larger than the circumference or not.
Input 1: radius = 4
Output 1: Area is greater than circumference. 
Explanation: area = 3.14 * 4 * 4 = 50.24 unit Perimeter = 2 * 3.14 * 4 = 25.12 unit Therefore area > perimeter.

3.
Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. 
(Considering leap year occurs after every 4 years)
Input 1: 1976 Output: yes Input 2: 2003 Output: no

4.
Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.
Input 1: length = 5 breadth = 7
Output 1: Area is greater than perimeter.

5.
Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.
Input : side1 = 5 side2 = 4 side3 = 4 Output: This is an Isosceles triangle.

6.
If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring the least marks.
Input1:A=23,B=34,C =71 Output : ‘A’ has the least marks.

7.
Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
Input 1: 2 0
Output 1: the point lies on the x - axis.


8.
Given three points (x1, y1), (x2, y2) and
(x3, y3), write a program to check if all the three points fall on one straight line. Input1:x1 =1,y1=2,x2=2,y2=3,x3=3,y3=4
Output 1: All 3 points lie on the same line.

9.
Write a C++ program to input any character and check whether it is the alphabet, digit or special character.
Input 1: ch = ‘9’ Output 1: digit

10.
Predict the output of the below code:
     
 #include<iostream>
 using namespace std;
 int main() {
     int a = 500, b, c;
     if (a >= 400)
         b = 300;
     c = 200;
     cout << "value of b and c are respectively " << b << " and " << c;
return 0; }

*/


/* 

1.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter first number : ";
    cin>>n;

    int m;
    cout<<"Enter second number : ";
    cin>>m;

    if (n>m)
    {
        cout<<"First Number "<<n<<" is the largest.";
    }
    else
    {
        cout<<"Second Number "<<m<<" is the largest.";
    }
    
    return 0;
} 

2.

#include <iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter radius : ";
    cin>>r;
    
    int area = 2*3.14*r*r;
    int circumference = 2*3.14*r;

    if (area>circumference)
    {
        cout<<"Area is greater than circumference.";
    }
    else
    {
        cout<<"Circumference is greater than area.";
    }
    return 0;
}

3.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    
    if ((n%4==0 and n%100!=0) or (n%400==0))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    
    return 0;
}

4.

#include <iostream>
using namespace std;
int main()
{
    int l;
    cout<<"Enter lenght : ";
    cin>>l;
    
    int b;
    cout<<"Enter breadth : ";
    cin>>b;

    int area = l*b;
    int perimeter = 2*(l+b);

    if (area>perimeter)
    {
        cout<<"Area is greater than perimeter.";
    }
    else
    {
        cout<<"Perimeter is greater than area.";
    }

    return 0;
}

5.

#include <iostream>
using namespace std;
int main()
{
    int side1, side2, side3;
    cout<<"Enter Side 1 : "<<endl<<"Enter Side 2 : "<<endl<<"Enter Side 3 : "<<endl;
    cin>>side1>>side2>>side3;
    
    if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2)) 
    {  
        if (side1 == side2 && side2 == side3) 
        {
            cout << "This is an equilateral triangle." << endl;
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3) 
        {
            cout << "This is an isosceles triangle." << endl;
        }
        else {
            cout << "This is a scalene triangle." << endl;
        }
    } 
    else 
    {
        cout << "The lengths provided do not form a valid triangle." << endl;
    }

    return 0;
}

6.

#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter x,y,z : ";
    cin>>x>>y>>z;

    if (x<y)
    {
        if (x<z)
        {
            cout<<"‘A’ has the least marks. "<<x;
        }
        else
        {
            cout<<"‘C’ has the least marks. "<<z;
        }
    }
    else
    {
        if (y<z) 
        {
            cout << "‘B’ has the least marks." <<y;
        } 
        else 
        {
            cout << "‘C’ has the least marks. " <<z;
        }
    }
    return 0;
}

7.

#include <iostream>
using namespace std;

int main() 
{
    int x, y;

    cout << "Enter the x-coordinate: ";
    cin >> x;
    cout << "Enter the y-coordinate: ";
    cin >> y;

    if (x == 0 && y == 0) {
        cout<< "the point lies at the origin.";
    } else if (y == 0) {
        cout<< "the point lies on the x-axis.";
    } else if (x == 0) {
        cout<< "the point lies on the y-axis.";
    } else {
        cout<< "the point does not lie on the x-axis, y-axis, or at the origin.";
    }
    
    return 0;
}

8.

#include <iostream>
using namespace std;

int main() {
    int x1,x2,x3,y1,y2,y3;
    cout<<"Enter the numbers : ";
    cin>>x1>>x2>>x3>>y1>>y2>>y3;

    int area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    if(area==0) 
    {
        cout << "All 3 points lie on the same line." << endl;
    } 
    else 
    {
        cout << "Points do not lie on the same line." << endl;
    }

    return 0;
}

9.

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
    {
        cout << "Alphabet" << endl;
    }
    
    else if (ch >= '0' && ch <= '9') 
    {
        cout << "Digit" << endl;
    }
   
    else
    {
        cout << "Special Character" << endl;
    }

    return 0;
}

10.

300
200

*/





