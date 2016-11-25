#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
bool leap (int year) {
return (((year%4==0) && (year%100 != 0)) || (year%400==0));
}
int main()
{
    int d,m,y,nd=0,index;
    cout << "Day : "; cin>>d;
    cout <<"\nMonth : "; cin>>m;
    cout <<"\nYear : "; cin>>y;
    string days[]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
   for (int i=1900;i<y;i++) {
        if (leap(i)) nd+=366; else nd+=365;
    }
    for (int i=1;i<m;i++) {
       if (i==2)  { if (leap(y)) nd+=29; else nd+=28; }
       else if (i<8) { if (i%2==1) nd+=31; else nd+=30; }
       else if (i>=8) { if (i%2==0) nd+=31; else nd+=30; }
    }
    nd+=d;
    index=((nd+1)%7);
    cout << days[index];
    return 0;
}
