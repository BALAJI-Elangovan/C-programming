#include<bits/stdc++.h>
using namespace std;
// int main()
// {
//     pair<int, int> p1 = {1,3};//pair of integers
//     cout<<p1.first<<endl<<p1.second<<endl;
//     pair<int, pair<int, int>> p2 = {1,{1,2}};//pair inside anothre pair
//     cout<<p2.first<<endl<<p2.second.first<<endl;
//     //pair array
//     pair<int, int> p3[] = {{1,2}, {3,4}, {5,6}};
//     cout<<p3[0].second<<endl;

// }

//vectors (dynamic memory allocation)
// int main()
// {
//     vector<int> v;//vector<int>v(size,instance) eg:v(2,20) = {20,20}
//    v.push_back(1);//push_back  = push elements in the array;
//    v.emplace_back(2);//emplace_back = push elements in the array(optimsed one);
//     printf("%d",v[1]);
//     vector<int>v2(v);//copying the v array in v2 array;
// }

//iterators

// int main()
// {
//     vector<int>v;
//     v.push_back(1);
//     vector<int>::iterator itr = v.begin();
//     cout<<*itr<<endl;
// }

//auto keyword assigns datatype automatically
//it is also used to iterate automatically
// int main()
// {
//     vector<int> v(6,5);
//     auto it = v.begin();
//     for(auto it: v)
//     {
//         cout<<it <<" ";
//     }
// }

//erasing single elements
// int main()
// {
//     vector<int>arr={1,2,3,4,5,6};
    
//     auto it=arr.begin();
//     arr.erase(arr.begin()+1);
//     for(auto it : arr)
//         cout<< it <<" ";
// }

//erasing multiple elements
// int main()
// {
//     vector<int>arr={1,2,3,4,5,6};
//     auto it = arr.begin();
//     arr.erase(arr.begin(),arr.begin()+3);//arr.erase(starting,ending);
//     for(auto it: arr)
//         cout<< it <<" ";
// }

//insertion function
// int main()
// {
//     vector<int>arr;
//    int itr,size=7;
//    cout<<"enter the elements :";
//    for(itr=0;itr<size;itr++)
//    {int value;
//     cin>>value;
//     arr.emplace_back(value);
//    }
//    arr.insert(arr.begin()+1,10);//inserting (position,element)
//    for(auto it: arr)
//     cout<< it <<" ";

// }

//list (in list it similar to vector the only differnce is in list we can add the element in the front)
// int main()
// {
//     list<int>ls;
//     ls = {1,2,3,4,5};
//     ls.push_front(10);
//     for(auto it:ls)
//         cout<< it <<" ";
// }
//deque is similar to list

// int main()
// {
//     deque<int>dq;
//     dq = {1,2,3,4,5};
//     dq.push_front(10);
//     for(auto it:dq)
//         cout<< it <<" ";
// }

//stack LIFO

// int main()
// {
//     stack<int>st;
//     st.emplace(1);
//     st.emplace(2);
//     st.emplace(3);
//     st.emplace(4);
//     st.emplace(5);
//     st.emplace(6); // emplace == push

//     cout<<st.top();
// }

//Queue
// int main()
// {
//     queue<int>q;
//     q.push(10);
//     q.push(2);
//     q.emplace(15);
//     while (!q.empty()) {
//         cout << q.front() << " ";
//         q.pop();
//     }
//     return 0;
// }

//priority queue
//priority wise arrange and print the elements (print the bigger elements first)

// int main()
// {
//     priority_queue<int>pq;
//     pq.push(10);
//     pq.push(20);
//     pq.emplace(30);
//     while(!pq.empty())
//        {
//         cout<<pq.top()<<" ";
//         pq.pop();
//        } 
// }

//set
//stores in sorted order and didnt store any duplicates

// int main()
// {
//     set<int>s;
//     s = {1,10,5,5,20,60,1,6,4,8};
//     for(auto it:s)
//         cout<< it<< " ";
// }

//lower_bound returns the index of first occurance of the element
//syntax: int lower_bound(start,end,ele)-start;
//upper_bound returns the index of last occurance of the element
//syntax: int upper_bound(start,end,ele)-start;

//multiset
//like set it also sort the elements but it will also store the all occurance of same elements

// int main()
// {
//     multiset<int>ms;
//     ms = {1,1,1,2,2,10,90,3,4,5};
//     for(auto it:ms)
//         cout<<it<<" ";
// }

//unordered_set (it will randomly store the value)
// it will not store the values in sorted order and upper and lower_bound functions are not work in this.
// int main()
// {
//     unordered_set<int>us;
//     us = {90,1,2,6,4,8,2,2,2,7};
//     for(auto it:us)cout<<it<<" ";
// }

//sort

// int main()
// {
//     vector<int>v;
//     v={19,4,7,6,12,8,6};
//     sort(v.begin(),v.end());
// for desending sort(v.begin(),v.end(),greater<int>);
//     for(auto it:v)
//         cout<<it<<" ";
// }

//max_element (to find the max element)
//it store the address of the max element

// int main()
// {
//     int a[] = {1,2,3,4,5,67};
//     int max = *max_element(begin(a),end(a));
//     cout<<max;
// }

//next_permutation (to find the next permutation)
// int main()
// {
//     string s = "123";
//     do{
//         cout<<s<<endl;
//     }
//     while(next_permutation(s.begin(),s.end()));
// }

//map it has keys and values the keys are always unique but the valus may be same
//syntax: map<key,value> map_name;the key cam be any datatype it stores in sorted order
//in multimap we can store duplicate keys and store in random order