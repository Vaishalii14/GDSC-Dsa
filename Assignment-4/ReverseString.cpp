class Solution {
public:
    void reverseString(vector<char>& s) {
        int temp;
        int k;
        int n=s.size()-1;
        if(n%2!=0){
            k=(n/2)+1;
        }
        else{
            k=n/2;
        }
        for(int i=0;i<k;i++){
            temp=s[n-i];
            s[n-i]=s[i];
            s[i]=temp;

        }


    }
};

