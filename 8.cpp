/* 

Q1. 

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    
    for (int i = 1; i <=n; i++)
    {
        for (int k= 1; k <=n+1-i; k++)
        {
            cout<<" ";
        }
        for (int j= 1; j <=2*i-1; j++)
        {
            cout<<j;
        }
        cout<<endl;  
    }    
    return 0;
} 

*/

/* 

Q2. 

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    
    for (int i = 1; i <=n; i++)
    {
        for (int k= 1; k <=n+1-i; k++)
        {
            cout<<" ";
        }
        for (int j= 1; j <=2*i-1; j++)
        {
            cout<<(char)(j+64);
        }
        cout<<endl;  
    }    
    return 0;
} 

*/

/* 

Q3.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    
    for (int i = 1; i <=n; i++)
    {
        for (int k= 1; k <=n+1-i; k++)
        {
            cout<<" ";
        }
        for (int j= i; j >=1; j--)
        {
            cout<<(char)(j+64);
        }
        for (int j= 2; j <=i; j++)
        {
            cout<<(char)(j+64);
        }
        cout<<endl;  
    }    
    return 0;
} 

*/

/*

Q4.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    for (int i=1; i<=2*n-1; i++)
    {
        cout<<(char)(i+64);;
    }
    
    cout<<endl;

    int m=n-1;
    int nsp=1;

    for (int i=1; i<=m; i++)
    {
        int a=1;
        for (int j=1; j<=m+1-i; j++)
        {
            cout<<(char)(a+64);
            a++;
        }
        for (int k=1; k<=nsp; k++)
        {
            cout<<" ";
            a++;
        }
        nsp+=2;

        for (int l=1; l<=m+1-i; l++)
        {
            cout<<(char)(a+64);
            a++;
        }
        cout<<endl;
    }
    return 0;
} 

*/

/* 

Q5.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    for (int i=1; i<=n; i++)
    {
        cout<<i;
    }
    for (int i=n-1; i>=1; i--)
    {
        cout<<i;
    }
    
    cout<<endl;

    int m=n-1;
    int nsp=1;

    for (int i=1; i<=m; i++)
    {
        int a=1;
        for (int j=1; j<=m+1-i; j++)
        {
            cout<<a;
            a++;
        }
        for (int k=1; k<=nsp; k++)
        {
            cout<<" ";
            a++;
        }
        nsp+=2;

        for (int l=1; l<=m+1-i; l++)
        {
            cout<<2*n-a;
            a++;
        }
        cout<<endl;
    }
    return 0;
} 


*/

/* 

Q6.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (i==j)   cout<<"*";
            else    cout<<" ";
        }

        for (int j=1; j<=n; j++)
        {
            if (i+j==n)   cout<<"*";
            else    cout<<" ";
        }
        cout<<endl;
    }
    return 0;
} 
*/

/* 

Q7.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (i+j==n+1)   cout<<"*";
            else    cout<<" ";
        }

        for (int j=1; j<=n-1; j++)
        {
            if (j==i-1)   cout<<"*";
            else    cout<<" ";
        }
        cout<<endl;
    }
    n--;

    for (int i=1; i<=n; i++)
    {
        cout<<" ";
        for (int j=1; j<=n; j++)
        {
            if (i==j)   cout<<"*";
            else    cout<<" ";
        }

        for (int j=1; j<=n-1; j++)
        {
            if (i+j==n)   cout<<"*";
            else    cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}  
*/

/* 

Q8.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (i+j==n+1)   cout<<i;
            else    cout<<" ";
        }

        for (int j=1; j<=n-1; j++)
        {
            if (j==i-1)   cout<<i;
            else    cout<<" ";
        }
        cout<<endl;
    }
} 
*/


/* 

Q9.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (i+j==n+1 || i==n || j==n)   cout<<"*";
            else    cout<<" ";
        }

        for (int j=1; j<=n-1; j++)
        {
            if (j==i-1 || i==n)   cout<<"*";
            else    cout<<" ";
        }
        cout<<endl;
    }
    n--;

    for (int i=1; i<=n; i++)
    {
        cout<<" ";
        for (int j=1; j<=n; j++)
        {
            if (i==j || j==n)   cout<<"*";
            else    cout<<" ";
        }

        for (int j=1; j<=n-1; j++)
        {
            if (i+j==n)   cout<<"*";
            else    cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}   
*/


/* 

Q10.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    int m = n-1;
    int nsp = 2*m-1;

    for (int i=1; i<=m; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout<<"*";
        }

        for (int j=1; j<=nsp; j++)
        {
            cout<<" ";
        }
        nsp-=2;
        for (int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }


    for (int i=1; i<=2*n-1; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for (int i=1; i<=2*n-1; i++)
    {
        cout<<"*";
    }
    cout<<endl;

    
    nsp = 1;


    for (int i=1; i<=m; i++)
    {
        for (int j=1; j<=m+1-i; j++)
        {
            cout<<"*";
        }

        for (int j=1; j<=nsp; j++)
        {
            cout<<" ";
        }
        nsp+=2;
        for (int j=1; j<=m+1-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}    
*/ 

/* 

Q11.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    for (int i=1; i<=2*n-1; i++)
    {
        cout<<"*";
    }
    cout<<endl;


    int m = n-1;
    int nsp = 1;


    for (int i=1; i<=m-1; i++)
    {
        for (int j=1; j<=m+1-i; j++)
        {
            cout<<"*";
        }

        for (int j=1; j<=nsp; j++)
        {
            cout<<" ";
        }
        nsp+=2;
        for (int j=1; j<=m+1-i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    nsp = 2*m-1;

    for (int i=1; i<=m; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout<<"*";
        }

        for (int j=1; j<=nsp; j++)
        {
            cout<<" ";
        }
        nsp-=2;
        for (int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for (int i=1; i<=2*n-1; i++)
    {
        cout<<"*";
    }
    cout<<endl;



    return 0;
}    
*/