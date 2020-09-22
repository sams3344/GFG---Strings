// C++ program to check if a string is two time 
// rotation of another string. 
#include<bits/stdc++.h> 
using namespace std; 

// Function to check if string2 is obtained by 
// string 1 
bool isRotated(string str1, string str2) 
{ 
	if (str1.length() != str2.length()) 
		return false; 

	string clock_rot = ""; 
	string anticlock_rot = ""; 
	int len = str2.length(); 

	// Initialize string as anti-clockwise rotation 
	anticlock_rot = anticlock_rot + 
					str2.substr(len-2, 2) + 
					str2.substr(0, len-2) ; 

	// Initialize string as clock wise rotation 
	clock_rot = clock_rot + 
				str2.substr(2) + 
				str2.substr(0, 2) ; 

	// check if any of them is equal to string1 
	return (str1.compare(clock_rot) == 0 || 
			str1.compare(anticlock_rot) == 0); 
} 

// Driver code 
int main() 
{   int T;
    cin >> T;
    
    while(T--){
	string x, y;
	cin >> x >> y;

	isRotated(x, y) ? cout << "1" : cout << "0" ; 
	cout << endl;
    }
	return 0; 
} 

/* EXPLANATION

1- There can be only two cases:
    a) Clockwise rotated
    b) Anti-clockwise rotated

2- If clockwise rotated that means elements
   are shifted in right.
   So, check if a substring[2.... len-1] of 
   string2 when concatenated with substring[0,1]
   of string2 is equal to string1. Then, return true.
   
     ex- amazon split as, amaz+on="on+amaz"    (on is put from end, at the start, ie cw)
   check sub[2,len-1] ie a,az + sub[0,1] ie on   = amazon ...yes
   
   ex- onamaz, so amaz+on = amazon = s1....true

3- Else, check if it is rotated anti-clockwise 
   that means elements are shifted to left.
   So, check if concatenation of substring[len-2, len-1]
   with substring[0....len-3] makes it equals to
   string1. Then return true.
   
    ex - amazon: split as, am+azon="azon+am"  (am is put at end from start to end)
   check sub[len-2, len-1] ie am + subs[0....len-3]  ie azon   = amazon ...yes

   ex - s2=azonam, so am+azon=amazon = s1 ...true

4- Else, return false.

*/
