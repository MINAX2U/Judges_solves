#include<iostream>
int main(){
	std::string s;
	std::cin>>s;
	int a=0;
	for(int i=0;s[i];i++)
	a+=(s[i]-'0')*((i%2)-(i%2==0));
	std::cout<<a*(!(a<0)-(a<0))<<'\n';
}