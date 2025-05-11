#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
    	int h1,m1,h2,m2,cn1;
    	while(n--)
    	{
    		cin>>h1>>m1>>h2>>m2>>cn1;
			 
    		if(m2-m1<0)
    		{
    			m2+=60;
			}
			
			if(m2-m1>=cn1) 
			{
				cout<<"Yes"<<endl;
			}
			else
			{
				cout<<"No"<<endl;
			}
		}
    }
}
