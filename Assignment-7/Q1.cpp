void QueueStack :: push(int x)
{
        // Your Code
        if(q1.empty() and q2.empty()){
    q1.push(x);
    }
    else if(q2.empty()){
        q1.push(x);
    }
    else{
        q2.push(x);
    }
}

//Function to pop an element from stack using two queues.
int QueueStack :: pop()
{
        // Your Code
        int num;
        if(q1.empty() and q2 .empty()){
            return -1;
        }
        else if(q1.empty()){
            while(q2.size()>1){
                q1.push(q2.front());
                q2.pop();
            }
            num=q2.front();
            q2.pop();
        }
        else{
            while(q1.size()>1){
                q2.push(q1.front());
                q1.pop();
            }
             num=q1.front();
            q1.pop();

        }
        return num;
}

