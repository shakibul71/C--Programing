#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d,e,total,percentage;
    cin >>a>>b>>c>>d>>e;
    total=a+b+c+d+e;
    percentage=(total/500)*100;
    cout<< "Percentage = " <<percentage<< "%";
    return 0;
}