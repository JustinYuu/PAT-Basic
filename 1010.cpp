#include <iostream>
using namespace std;
int main(void)
{
    bool first = true;
    int coef,exp;
    while(cin>>coef>>exp)
    {
        if(exp*coef!=0)
        {
            if(first)
            {
                cout<<exp*coef<<" "<<exp-1;
                first = false;
            }
            else
            {
                cout<<" "<<exp*coef<<" "<<exp-1;
            }
        }
    }
    if(first == true)
        cout<<"0 0";
    return 0;
}
