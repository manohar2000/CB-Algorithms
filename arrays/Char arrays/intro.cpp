#include <iostream>
using namespace std;

int main()
{
    //ways to declare charecter array
    
    // 1. declaring the a constant char array of size 10
    char c1[10]; 
    
    // 2. declaring and initializing the array 
    char c2[] = {'a','b','c','d'}; //automatically takes the size
    
    //3. initializing the array with a few initial values
    char c3[10] = {'a','b','c'}; // rest all values are garbage or null
    cout<<c3<<endl;
    
    //4. correct way of initializing the char array. End it with '\0'
    char c4[] = {'a','b','c','\0'};
    
    
    
    int arr[3] = {1,2,3};
    cout<< arr << endl; //this will print the address
    
    
    char b[] = "hello";
    cout<< b <<endl; //this will print the array becuase of operator overloading 
    cout<< sizeof(b) <<endl; //char array always end with "/0", thus this will print 6 
    cout<< "------------------------------------------" << endl;
    // TAKING SENTECE or PARAGRAPH INPUT
    // cin only takes the first word and char array ends as soon it encounter "_"
    
    // we use cin.getline() for taking input of a line or paragraph
    cout<<"enter your line"<<endl;
    char s2[100];
    cin.getline(s2,100);
    cout<<s2<<endl;
    
    // by default cin.getline() stops taking whenever it encounters '/n'
    // we can specify our own delimiter
    cout<<"enter your para"<<endl;
    char s3[100];
    cin.getline(s3,100,'.');
    cout<<s3<<endl;
    
    return 0;
    
    
}