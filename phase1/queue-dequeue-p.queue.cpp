//queue
#include<queue>

queue<data_type>queue_name;//declear a queue

queue_name.push(var);//pushes var to the end of of the queue
queue_name.pop();//pops the first element of the queue
queue_name.front();//returns the first element in the queue
queue_name.back();//returns the last element in the queue
queue_name.size();//returns the size of the queue
queue_name.empty();//returns either the queue is empty(1) or not(0)

//dequeue
#include<deque>

dequeue<data_type>dequeue_name(dequeue_size);//declear a deque

deque_name[i]//access the element in the position i
  
deque_name.push_back(var);//pushes var to the end of of the deque
deque_name.push_front(var);//pushes var to the start of of the deque
deque_name.pop_front();//pops the first element of the deque
deque_name.pop_back();//pops the last element of the deque
deque_name.size();//returns the size of the deque
deque_name.empty();//returns either the deque is empty(1) or not(0)
deque_name.clear();//erases all elements in the deque

//priority queue
#include<queue>

priority_queue<data_type>priority_q_name;//declear a priority queue descendingly
priority_queue<data_type, vector<data_type>, greater<data_type>>priority_q_name;//declear a priority queue ascendingly // all three fata types must be the same

priority_q_name.push(var);//pushes var to its place in the priority queue
priority_q_name.pop();//pops the first element of the priority queue
priority_q_name.top();//returns the first element in the priority queue
priority_q_name.size();//returns the size of the priority queue
priority_q_name.empty();//returns either the priority queue is empty(1) or not(0)

