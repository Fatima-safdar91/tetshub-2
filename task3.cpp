#include<iostream>

using namespace std;

main()
{

 float megabytes;
 
float result;


cout << "Enter mbs : "; 

cin >> megabytes ;

result=1024*1024*8*megabytes; 

cout << " Total bytes are : " ; 

cout << result;

}