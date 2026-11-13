class Logger {
public:
    Logger() {
        
    }
    
    bool shouldPrintMessage(int timestamp, string message) {
      //  cout<<mp[message]<<" "<<message<<" "<<timestamp<<endl;
        if(mp.find(message)!=mp.end() && mp[message]>timestamp){
            return false;
        }
        mp[message]=timestamp+10;
        return true;
    }
    unordered_map<string,int> mp;
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */
