#include <iostream>
using namespace std;
int main() {
    float cgpa, attendance,income;
    cout<<"CGPA (O.O-4.0) :";
    cin>>cgpa;
    cout<<"ATTENDANCE :";
    cin>>attendance;
    cout<<"INCOME :";
    cin>>income;
    
    if(cgpa>=3.5 && attendance>=80) {
      
      if(income<=50000)
     {   cout<<"100% scholarship";
     }
     
     else {
        cout<<"50% scholarship";
    }
}
    if (attendance<80) {
        cout<<"Not Eligible: Low Attendance"<<endl;
    if (cgpa<3.5){
        cout<<"Not Eligible: Low CGPA"<<endl;
    }}
        
return 0;
}