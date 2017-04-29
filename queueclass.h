#include <iostream>
#include <cassert>

using namespace std;

class queueclass{
	
	public: 
	 
	 bool isEmptyqueues() const;
	 
	 bool isFullqueues() const;
	 
	 void initializeQueues();
	 
	 int front() const;
	 
	 int back() const;
	 
	 void Addqueue(const int& queueElement);
	 
	 void deleteQueue();
	 
	 queues(int quesize = 100);
	 
	 
	 
	 private: 
	 
	 int maxqueueSIZE;
	 
	int count;
	 
	int queuefront;
	  
	int queuerear;
	  
	int *list;
	
};
bool queueclass::isEmptyqueues() const{


return (count == 0);


}
bool queueclass::isFullqueues() const{


return (count == maxqueueSIZE);


}
void queueclass::initializeQueues() {

queuefront = 0;

queuerear = maxqueueSIZE - 1;

count = 0;



}
 int queueclass::front() const{
 
 assert(!isEmptyqueues());
 return list[queuefront];
 
 
 }
 int queueclass::back() const{
 
 assert(!isEmptyqueues());
 return list[queuerear];
 
 
 }
void queueclass::Addqueue(const int& queueElement){
	
	
	
	if(!isFullqueues()){
		
		queuerear = (queuerear + 1) % maxqueueSIZE;
		
		count++;
		
		list[queuerear] = queueElement;
		
		
		
	} else
		
		cout << "cannot add to full queue";
	
	
	
}
void queueclass::deleteQueue(){
	
	
	if(!isEmptyqueues()){
		
		queuefront = (queuefront + 1) % maxqueueSIZE;
		
		count--;
		
		
		
		
		
	} else{
		
		cout << "cannot remove frome a empty queue";
	}
	
	
	
	
} 
 queueclass::queues(int quesize){
 	
 	if(quesize <= 0){
 		
 		cout <<"size of array must be positive ";
 		
 		cout <<"creating array size of 100";
 		
 		maxqueueSIZE = 100;
 		
	 }
 	  else {
 	  	
 	  	maxqueueSIZE = quesize;
 	  	queuefront = 0;
 	  	
 	  	queuerear = maxqueueSIZE - 1;
 	  	
 	  	count = 0;
 	  	
 	  	list = new int[maxqueueSIZE];
 	  	
 	  	
 	  	
	   }
 	
 	
 	
 	
 }

