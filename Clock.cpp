#include<bits/stdc++.h> // use for using windows applications........
#include<Windows.h>
using namespace std;

int main()
{
	int h,m,s,a=0,err=0;
    while(err==0)
    {
    	cout<<"Enter hour : ";
    	cin>>h;
    	cout<<"Enter minute : ";
    	cin>>m;
    	cout<<"Enter Seconds : ";
    	cin>>s;
    	if(h<24&&m<60&&s<60)
    		err++;
    	else
    		system("cls");
    }
    while(a==0)
    {
    	system("cls");// clear the output screen...
    	cout<<h<<":"<<m<<":"<<s<<"\n";
        Sleep(1000);
    	s++;
    	if(s>59)
    	{
    		s=0;
    		m++;
    	}
    	if(m>59)
    	{
    		m=0;
    		h++;
    	}
    	if(h>24)
    		h=0;
    }
    return 0;
}