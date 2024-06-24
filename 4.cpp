/* 

1.
Write a program to count the minimum number of notes in a given amount using the switch statement. Input 1: 510
Output1 : notes of “500” = 1 and notes of “10” = 1


2.
Predict the output:
    #include<iostream>
    using namespace std;
    int main( ) {
        int a = 5, b, c ;
        b = a = 15 ;
        c = a < 15 ;
        cout << "a = " << a << ", b = " << b << " , c = "<< c ;
return 0; }

3.
Predict the output:
    #include<iostream>
    using namespace std;
    int main() {
        int x = 3 ;
        float y = 3.0 ;
        if (x == y)
        cout <<"x and y are equal"  ;
        else
        cout << "x and y are not equal"  ;
        return 0;
}
4. 
pedict the output:
       
    #include<iostream>
    using namespace std;
    int main(){
        int test = 0;
        cout << "First character " << '1' << endl;
        cout << "Second character " << (test ? 3 : '1') << endl;
        return 0;
}

5.
predict the output:
    #include <iostream>
    using namespace std;
    int main(){
        int a = 18; int b = 12;
        bool t = (a > 20 && b < 15)? true : false;
        cout <<"Value of t: " << t ;
        return 0;
}

6.
predict the output:
 #include <iostream>
 using namespace std;
 int main() {
   int number = -4;
   char result;
   result = number > 0 ? 'P' : 'N';
   cout << result << endl;
   return 0;
} 

*/


/* 

1. 

#include <iostream>
using namespace std;
int main()
{
    int amount;
    int note2000, note500, note200, note100, note50, note20, note10, note5, note2, note1;
    
    note2000 = note500 = note200 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;

    cout<<"Enter Amount : ";
    cin>>amount;

    if(amount >= 2000)
    {
        note2000 = amount/2000;
        amount -= note2000 * 2000;
    }
    if(amount >= 500)
    {
        note500 = amount/500;
        amount -= note500 * 500;
    }
    if(amount >= 200)
    {
        note200 = amount/200;
        amount -= note200 * 200;
    }
    if(amount >= 100)
    {
        note100 = amount/100;
        amount -= note100 * 100;
    }
    if(amount >= 50)
    {
        note50 = amount/50;
        amount -= note50 * 50;
    }
    if(amount >= 20)
    {
        note20 = amount/20;
        amount -= note20 * 20;
    }
    if(amount >= 10)
    {
        note10 = amount/10;
        amount -= note10 * 10;
    }
    if(amount >= 5)
    {
        note5 = amount/5;
        amount -= note5 * 5;
    }
    if(amount >= 2)
    {
        note2 = amount /2;
        amount -= note2 * 2;
    }
    if(amount >= 1)
    {
        note1 = amount;
    }

    cout<<"Number of notes of 2000 : "<<note2000<<endl;
    cout<<"Number of notes of 500 : "<<note500<<endl;
    cout<<"Number of notes of 200 : "<<note200<<endl;
    cout<<"Number of notes of 100 : "<<note100<<endl;
    cout<<"Number of notes of 50 : "<<note50<<endl;
    cout<<"Number of notes of 20 : "<<note20<<endl;
    cout<<"Number of notes of 10 : "<<note10<<endl;
    cout<<"Number of notes of 5 : "<<note5<<endl;
    cout<<"Number of notes of 2 : "<<note2<<endl;
    cout<<"Number of notes of 1 : "<<note1<<endl;

    return 0;
} 


#include <iostream>
using namespace std;
int main()
{
    int amount;
    int note2000, note500, note200, note100, note50, note20, note10, note5, note2, note1;
    
    note2000 = note500 = note200 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;

    cout<<"Enter Amount : ";
    cin>>amount;

    switch (amount>=2000)
    {
        case 1:
            note2000 = amount/2000;
            amount %= 2000;
        break;
    }
   
    switch (amount>=500)
    {
        case 1:
            note500 = amount/500;
            amount %= 500;
        break;
    }

    switch (amount>=200)
    {
        case 1:
            note200 = amount/200;
            amount %= 200;
        break;
    }

    switch (amount>=100)
    {
        case 1:
            note100 = amount/100;
            amount %= 100;
        break;
    }

    switch (amount>=50)
    {
        case 1:
            note50 = amount/50;
            amount %= 50;
        break;
    }

    switch (amount>=20)
    {
        case 1:
            note20 = amount/20;
            amount %= 20;
        break;
    }

    switch (amount>=10)
    {
        case 1:
            note10 = amount/10;
            amount %= 10;
        break;
    }

    switch (amount>=1)
    {
        case 1:
            note1 = amount;
        break;
    }


    cout<<"Number of notes of 2000 : "<<note2000<<endl;
    cout<<"Number of notes of 500 : "<<note500<<endl;
    cout<<"Number of notes of 200 : "<<note200<<endl;
    cout<<"Number of notes of 100 : "<<note100<<endl;
    cout<<"Number of notes of 50 : "<<note50<<endl;
    cout<<"Number of notes of 20 : "<<note20<<endl;
    cout<<"Number of notes of 10 : "<<note10<<endl;
    cout<<"Number of notes of 5 : "<<note5<<endl;
    cout<<"Number of notes of 2 : "<<note2<<endl;
    cout<<"Number of notes of 1 : "<<note1<<endl;

    return 0;
} 


2. 15 15 0

3. x and y are equal.

4. 

First character 1
Second character 49

5.

Value of t: 0

6. N
*/

