#include<iostream>
using namespace std;
int main()
{int a,b,c,d;
cout<<"enter the four integers";
cin>>a>>b>>c>>d;
if(a>b && a>c && a>d)
{cout<<"a is max";
}
else if(b>a && b>c && b>d)
{cout<<"b is max";
}
else if(c>a&&c>b&&c>d)
{cout<<"c is max";
}
else
{cout<<"d is max";
}
if(b>a&&a>c&&a>d)
{cout<<"a is 2nd max";
}
else if(a>b&&b>c&& b>d)
{cout<<"b is 2nd max";
}
else if(a>c&&c>b&&c>d)
{cout<<"c is 2nd max";
}
else if(a>d&&d>b&&d>c)
{cout<<"d is 2nd max";
}
}

