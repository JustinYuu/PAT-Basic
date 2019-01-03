#include <iostream>
#include <vector>
#include <string>
using namespace std;
void f(string A,int B,size_t index,int carry,vector<int> &resultVec)
{
    int current ;
    if(index!=A.size())
    {
        current = A[index]-'0'+ carry ;
        if( (index!=0) || (current/B !=0) )resultVec.push_back(current/B);
        f(A,B,index+1,(current%B)*10,resultVec);
    }
    else
        resultVec.push_back(carry/10);
}
int main()
{
    string A;
    int B;
    cin>>A>>B;
    if(A.size()==1 && (A[0]-'0')<B)
        cout<<"0"<<" "<<A;
    else{
        vector<int> resultVec;
        f(A,B,0,0,resultVec);
        for(size_t i=0;i<resultVec.size()-1;i++)
            cout<<resultVec[i];
        cout<<" "<<resultVec[resultVec.size()-1];
    }
    return 0;
}
