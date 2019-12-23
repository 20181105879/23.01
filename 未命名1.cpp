#include <iostream>
using namespace std;
long s[100000];
long size=0;
long * insert(long *s,long t)
{
	long parent,i;
	i=size;
	parent=size/2;
	for( i=size;(t<s[i/2] && i>1);i=i/2)
	{
		parent=i/2;
		s[i]=s[parent];
	}
	s[i]=t;
//	for(i=0;i<size;i++)
//	{
//		cout<<s[i];
//	}
//	cout<<endl;
	return  s;
		
}
int main()
{
	
	s[0]=-10000000;
	long n,m,t;
	cin>>n>>m;
	for(long i=1;i<=n;i++)
	{
	   cin>>t;
	   size++;
	   insert(s,t);
	}
	long h;
	for(long i=0;i<m;i++)
	{
		cin>>h;
		cout<<s[h];
		for(h=h/2;h>0;h=h/2)
		{
			cout<<" "<<s[h];
		}
		cout<<endl;
		
		
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
 } 
