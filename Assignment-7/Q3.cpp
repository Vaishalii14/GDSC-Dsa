void MyQueue:: push(int x)
{
        QueueNode *temp;
        temp= new QueueNode(x);
        if(front==NULL){
            front=rear=temp;
        }
        else{
        rear->next=temp;
        rear=temp;
        }
}


//Function to pop front element from the queue.
int MyQueue :: pop()
{
        // Your Code
        int ans;
        if(front==NULL){
            return -1;
        }
        else{
        QueueNode*temp=front;
         ans=front->data;
        front=front->next;
        delete temp;
        }
        return ans;
}

