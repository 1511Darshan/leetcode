class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
       //map liya
        map<long long,long long>mp;
        int n=tasks.size();
        long long ans=0;
        //traverse kiya tasks ko
        for(int i=0;i<n;i++)
        {
            //agar map me nhi h toh direct answer increse karo by 1
            //or next kaha jayga wo map me store kar lo
            if(mp.find(tasks[i])==mp.end())
            {
                mp[tasks[i]]=1+space+ans;
                ans++;
            }
            //agar kaam ho gya pahle hi toh map me jaha position h 
            //wahi daalo agara wo position bhar gya h toh kahi bhi 
            //daalo
            else
            {
                //bhara nhi h toh usi jagah pe daal
                if(mp[tasks[i]]>=ans)
                {
                    ans=mp[tasks[i]];
                }
                //bhar gya h toh kahi bhi daal or next dekh le kaha 
                //daalega
                mp[tasks[i]]=1+space+ans;
                ans++;
            }
        }
        return ans;
    }
};