//queue follows FIFO and first in first out .
// #include <queue>
// std ::queue<int> q;
//q.push(1); enqueues 1 into the queue
// q.pop(); Dequeue the front element from the queue 
// int frontelement = q.front();  //retrives the front element without removing it 


 /*enqueue(x)	Inserts an element x at the end of the queue.
dequeue()	Removes the front element from the queue.
front()	Returns the first element without removing it.
rear()	Returns the last element without removing it. / always element add at end 
isEmpty()	Checks if the queue is empty.
size()	Returns the number of elements in the queue.


we used 2 pointers in queue , front : element expect krna h 
rear is used to add element .

front initial = 0 
and rear initial = 0 
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;  // Declare a queue

    q.push(10); // Enqueue
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl; // 10
    cout << "Rear: " << q.back() << endl;  // 30

    q.pop(); // Dequeue (removes 10)

    cout << "Front after pop: " << q.front() << endl; // 20

    cout << "Size of queue: " << q.size() << endl; // 2

    return 0;
}


// intial rear and front is 0 ;
//push the element 
/*

Push(X){
 //PUSH TO ADD ELEMENT AT REAR END 
 Arr[rear] = X;
 rear ++;


}

Pop(){ // pop se front me pop hota 
int x = front 
front ++ increment 

return arr[x]; 
}
front == rear ;
this means no element between  rear  and front
 return -1 ;


*/ 



