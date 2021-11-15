class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {   map<char,int> freq;
        int max=0;
        char ch;
       for(int i=0;str[i]!='\0';i++){
           freq[str[i]]++;
       }
       for(auto x:freq){
           if(x.second>max){
               max=x.second;
               ch=x.first;
           }
       }
       return ch;
    }


};
