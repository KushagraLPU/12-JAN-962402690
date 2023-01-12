#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string s;
getline(cin,s);
char c[100];
int j=0; 
for(int i=0;s[i];i++)
 {

if( s[i]=='t'&& s[i+1]=='h'&& s[i+2]=='e')
i=i+3;
else
c[j++]=s[i]; 
}
c[j]='\0'; 
cout<<c; 
return 0;
}
