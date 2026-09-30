
#include<iostream>
using namespace std;
int main()
{
    int math, physics, chemistry, total;
    cout<<"Enter marks of Math, Physics and Chemistry: "; cin>>math>>physics>>chemistry;
 total=math+physics+chemistry;

    if(math>=60 && physics>=50 && chemistry>=50 && total>=180)
        cout<<"Eligible for Admission";
    else
        cout<<"Not Eligible for Admission";

    return 0;
}