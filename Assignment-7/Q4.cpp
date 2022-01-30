class Solution{
    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        // Your code here
        q.push(k);
    }

    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        // Your code here
        int count=0;
        int n=q.size();
        int temp;
        for(int i=0;i<n;i++){
            temp=q.front();
            if(q.front()==k){
                count++;
            }
            q.pop();
            q.push(temp);
        }
        if(count!=0){
        return count;
        }
        else{
            return -1;
        }
    }

};
