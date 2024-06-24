/* 

1.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<i;
        }
        cout<<endl; 
    }

    return 0;
} 

*/

/*

3.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n+1-i; j++)
        {
            cout<<" ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout<<(char)(k+64);
            
        }
        cout<<endl;
    }
    
    return 0;
}  
*/

/* 

4.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    
    for (int i = 1; i <= n+1; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            if (i%2==0)
            {
                cout<<(char)(j+64);
            }
            else
            {
            cout<<j;
            }
            
        }
        cout<<endl;
    }
    return 0;
}   
*/

/* 

2.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        cout<<endl; 
    }

    return 0;
} 

*/

/* 

5.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl; 
    }
    for (int i = 1; i < n; i++)
    {
        for (int k = 1; k < n+1-i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
*/

/* 

6.

#include <iostream>
using namespace std;

int main() 
{
    int m;
    cout<<"Enter M : ";
    cin>>m;

    int n;
    cout<<"Enter N : ";
    cin>>n;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i==1 || i==m || j==1 || j==n)    cout<<"*";
            
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}
*/


/* 

7.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < n+1-i; k++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= n; j++)
        {
            cout<<"*";
        }
        cout<<endl; 
    }

    return 0;
} 

*/


/* 

8.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
    return 0;
}   
*/


/* 

9.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < n+1-i; k++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<char(j+64);
        }
        cout<<endl; 
    }

    return 0;
} 


*/


/* 

10.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
    return 0;
} 
*/


/* 

11.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < n+1-i; k++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl; 
    }
    for (int i = 1; i < n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout<<" ";
        }
        for (int k = 1; k < n+1-i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
} 
*/

