# Useful references
1. Code for converting a char to int : <br />
int convertToInt(string s) <br />
{ <br />
    int ans=0; <br />
    int p=1; <br />
    for(int i=s.length();i>=0;i--) <br />
    { <br />
        ans+= ((s[i] - "0")*p) ; <br />
        p*=10; <br />
    }<br />
}<br />
