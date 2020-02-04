// using dyanamic programmingg technique 

#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
unordered_map<string,int> m;

int llps(string s,int low,int high)
{
    if(low>high)
        return 0;
    if(low == high) // only one character
        return 1;
        
    string key = to_string(low) + "|" + to_string(high);
    
    if(m.find(key)==m.end())
    {
        if(s[low]==s[high])
            m[key]=llps(s,low+1,high-1)+2;
        else
            m[key]=max(llps(s,low,high-1),llps(s,low+1,high));
            
    }
    
    return m[key];
}

int main()
 {  int count;
    cin>>count;
	while(count--){
	    string str;
	    cin>>str;
	    unordered_map<string,int> m;
	    cout<<llps(str,0,str.length()-1);//legnth of longest palindrome function
	}
	return 0;
}

