#include<iostream>
using namespace std;

main(){
string name;
float matric_marks;
float matric_per;
float fsc_marks;
float fsc_per;
float ecat_marks;
float ecat_per;
float aggregate;
float one;
float two;
float three;

cout << "enter your name:";
cin >> name;
cout << "enter your matric_marks:";
cin >> matric_marks;
cout << "enter your fsc_marks:";
cin >> fsc_marks;
cout <<"enter your ecat_marks:";
cin >> ecat_marks;
matric_per=(matric_marks/1100)*100;
fsc_per=(fsc_marks/550)*100;
ecat_per=(ecat_marks/400)*100;
one=(matric_per*10)/100;
two=(fsc_per*40)/100;
three=(ecat_per*50)/100;

aggregate=one+two+three;
cout << "aggregate is:" << aggregate << endl;

}


