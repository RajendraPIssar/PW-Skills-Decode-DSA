/* 

1. Print all the odd numbers from 1 to 100.

2. Print all numbers from 1 to 100 that are divisible by 3

3. Print the table of ‘n’. Here ‘n’ is an integer which the user will input.

4. Display this AP - 4,7,10,13,16.. upto ‘n’ terms.

5. Display this GP - 3,12,48,.. upto ‘n’ terms.

6. Write a program to print all the ASCII values and their equivalent characters
of 26 alphabets using a while loop. 

*/

/* 
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    
    for (int i = 1; i<n; i++)
    {
        if (i%2!=0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
} 
*/

/* 
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    
    for (int i = 1; i < n; i++)
    {
        if (i%3==0)
        {
            cout<<i<<endl;
        }
    }
    
    return 0;
} 
*/

/* 
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    
    for (int i = 1; i<=n; i++)
    {
        cout<<i*n<<endl;
    }
    
    return 0;
} 

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
        int AP = 4+(i-1)*3;
        cout<<AP<<endl;
    }
    
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    
    for (int i = 0; i <= n; i++)
    {
        int GP = 3 * pow(4, i);
        cout << GP << endl;
    }
    
    return 0;
}

#include <iostream>
using namespace std;
int main() {

    int ascii_value = 'a';

    while (ascii_value <= 'z') 
    {
        cout<< ascii_value << " " << char(ascii_value) << endl;
        ascii_value++;
    }

    return 0;
}


*/

