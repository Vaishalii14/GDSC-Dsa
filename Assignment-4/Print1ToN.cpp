class Solution
{
public:
    void printTillN(int N)
    {/*
        if(N==0){
        cout<<"\n";
        return;
    }
    if(N>=1){
        cout<<N<<" ";
     printTillN(N-1);
    }
    */

       if(N==0){
       return;
   }
   printTillN(N-1);
   cout<<N<<" ";

    }
};
