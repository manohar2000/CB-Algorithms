#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

/*
Given a list of n strings, each consisting of digits and spaces, the
number of spaces is the same for each, the goal is to implement a variation
of sort command. None of the strings contains consecutive spaces.
Also, no string starts wiht a space not ends with it. Spaces are used to 
divide string into columns, which can be used as keys in comparisions.

The program has to support the required parameters:
key: integer denoting the column used as a key in comparision. The left-most is denoted by 1
reversed : boolean variable indicating whether to reverse the result of comparision

comparision type can either be lexicographic or numeric
*/


string tokenatK(string str, int key)
{
    // char array of an string is given (char *)str.c_str()
    char *s = strtok((char *)str.c_str()," ");
    int i = 1;
    while(i<key)
    {
        s = strtok(NULL," ");
        i++;
    }
    return (string)s;
}

int convertToInt(string s)
{
    int ans=0;
    int p=1;
    for(int i=s.length();i>=0;i--)
    {
        ans+= ((s[i] - '0')*p) ;
        p*=10;
    }
    return ans;
}

bool numericalCompare(pair<string, string> s1,pair<string,string> s2)
{
    if(convertToInt(s1.second)>convertToInt(s2.second))
    {
        return s1>s2;
    }
    else
    {
        return s2>s1;
    }
}

bool lexicoCompare(pair<string, string> s1,pair<string,string> s2)
{
    if(s1.second>s2.second)
    {
        return s1>s2;
    }
    else
    {
        return s2>s1;
    }
}

int main()
{
    int n;
    cin>>n;
    cin.get();
    
    string s[1000];
    for(int i=0;i<n;i++)
    {
        getline(cin,s[i]);
    }
    
    int key;
    string reversal,ordering;
    cin>>key>>reversal>>ordering;
    
    pair <string, string> strPair[100];
    
    for(int i=0;i<n;i++)
    {
        strPair[i].first = s[i];
        strPair[i].second = tokenatK(s[i],key);
    }
    
    
    if(ordering=="numeric")
    {
        sort(strPair,strPair+n,numericalCompare);
    }
    
    else
    {
        sort(strPair,strPair+n,lexicoCompare);
    }
    
    
    if(reversal=="True")
    {
        for(int i=n-1;i>=0;i--)
        {
            cout<<strPair[i].first<<endl;
        }
    }
    else
    {
        for(int i=0;i<=n-1;i++)
        {
            cout<<strPair[i].first<<endl;
        }
    }
    
    return 0;
}