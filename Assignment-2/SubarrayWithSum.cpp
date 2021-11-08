class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
       int cs=0;
       int start=0,end=n-1;
        for(int i=0;i<n;i++){
            cs=cs+arr[i];
            if(cs==s){
                return {start+1,end+1};

            }

            else if(cs>s){
                start++;

            }
            else if(cs<s){
                end--;
            }

        }
        return {-1};
    }
};
