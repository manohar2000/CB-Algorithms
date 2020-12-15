#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s0; //string declaration
    string s1("Hello"); //string declaration and intialization
    string s2 = "Hello World";
    
    // copying a string
    string s3(s2);
    string s4 = s3;
    
    s2 = "Bye World"; // copying with the above creates a new copy
    
    //converting char array into string type
    char a[] = {'a','b','c','d'};
    string s5(a);
    
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;
    
    //to check if string is empty
    if(s0.empty()){
        cout<<"s0 is an empty string"<<endl;
    }
    
    //append
    
    s0.append("I hate c++");
    cout<<s0<<endl;
    
    s0+= " and love python";
    cout<<s0<<endl;
    
    // length of string
    cout<<s0.length()<<endl;
    s0.clear(); //used to clear a string
    cout<<s0.length()<<endl;
    
    // Comparing two string - 
    s0 = "Apple";
    s1 = "Mango";
    
    cout<<s0.compare(s1)<<endl; //compares lexicographically 
    // return 0 if same else <0 or >0
    
    if(s1>s0)
    {
        cout<<"s1 string is bigger"<<endl;
    }
    else if(s0>s1)
    {
        cout<<"s0 string is bigger"<<endl;
    }
    
    else
    {
        cout<<"string are of equal length";
    }
    
    // Find Substring
    
    string s = "I want a peaceful sleep";
    int idx = s.find("peaceful");
    cout<<idx<<endl;
    
    //Removing a word from a string
    string word = "peaceful";
    int len = word.length();
    cout<<s<<endl;
    s.erase(idx,len+1);
    cout<<s<<endl;
    
    
    // iterating over a string
    for(int i=0;i<s1.length();i++)
    {
        cout<<s1[i]<<",";
    }
    cout<<endl;
    
    // iterator "it" is a pointer variable. Auto automatically the data type
    for(auto it=s1.begin();it!=s1.end();it++)
    {
        cout<<(*it)<<",";
    }
    cout<<endl;
    
    // the auto variable in this case if of type string::iterator and the above can be writtena as
    for(string::iterator it=s1.begin();it!=s1.end();it++)
    {
        cout<<(*it)<<",";
    }
    cout<<endl;
    
    
    for(auto c:s1)
    {
        cout<<c<<",";
    }
    
    
    return 0;
}