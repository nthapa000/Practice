#include<iostream>
#include<set>

class SmallestInfiniteSet{
    public:
        std::set<int> infiniteSet;
        SmallestInfiniteSet(){
            for(int i=1;i<=1000;i++){
                infiniteSet.insert(i);
            }
        }
        int popSmallest(){
            std::set<int>::iterator itr;
            itr = infiniteSet.begin();
            infiniteSet.erase(itr);
            int smallest;
            return smallest;
        }
        void addBack(int num){
            infiniteSet.insert(num);
        }
};

// class SmallestInfiniteSet {
// public:
//     priority_queue<int, vector<int>, greater<int> >pq;
//     unordered_set<int>st;
//     SmallestInfiniteSet() {
//         int i=1;
//         while(i<=1000){
//             pq.push(i);
//             st.insert(i);
//             i++;
//         }
//     }
    
//     int popSmallest() {
//         int t=pq.top();
//         pq.pop();
//         st.erase(t);
//         return t;
//     }
    
//     void addBack(int num) {
//         if(st.find(num)==st.end()){
//             pq.push(num);
//             st.insert(num);
//         }
//         return;
//     }
// };


// class SmallestInfiniteSet {
// public:
//     int cur;
//     set<int> s;
//     SmallestInfiniteSet() {
//         cur=1;
//     }
    
//     int popSmallest() {
//         if(s.size()){
//             int res=*s.begin(); s.erase(res);
//             return res;
//         }else{
//             cur+=1;
//             return cur-1;
//         }
//     }
    
//     void addBack(int num) {
//         if(cur>num) s.insert(num);
//     }
// };