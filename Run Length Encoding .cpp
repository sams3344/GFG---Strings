// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

char *encode(char *src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		char str[10000];
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

char *encode(char *s)
{     
  //Your code here 
  int n = strlen(s);
  char *str = new char[10000];
  //string str;
  int j=0;
  
  for(int i=0; i < n; i++ ){
      int c = 1;
      
      while( s[i] == s[i+1]){
          c++; i++;
      }
      str[j++] = s[i] ;         //aaaabb...now i is pointing to last i
      str[j++] = (c + '0');
      //cout << s[i] << c;
  }   // i increments again...now i points to first 'b'
   str[j++]='\0';
  return str;
}
    //h1n1w1n1k1u1e1w1h1s1q1m1g1b2u1q1c1l1j2i1v1s1w1m1d1k1q1t1b1x1i1x1m1v1t1r2b1l1j1p1t1n1s1n1f1w1z1q1f1j1m1a1f1a1d1r2w1s1o1f1s1b1c1n1u1v1q1h1f2b1s1a1q1x1w1p1q1c1a1c1
//h1c1h1z1v1f1r1k1m1l1n1o1z1j1k1

 
