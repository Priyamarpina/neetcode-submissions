class MovingAverage {
public:
    MovingAverage(int size) {
        qSize=size;
        avg=0;
    }
    
    double next(int val) {
        int currSize=q.size();
        q.push(val);
        
        if(q.size()>qSize){
            int oldVal=q.front();
            q.pop();
            avg = (((avg*currSize)-oldVal)+val)/q.size();
        }else{
            avg = ((avg*currSize)+val)/q.size();
        }
        return avg;

    }
    queue<int> q;
    int qSize;
    double avg;
};

/**
 * Your MovingAverage object will be instantiated and called as such:
 * MovingAverage* obj = new MovingAverage(size);
 * double param_1 = obj->next(val);
 */
