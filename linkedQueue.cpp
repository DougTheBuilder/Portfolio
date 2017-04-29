#include <iostream>
#include <cassert>

using namespace std;

struct node{
	
	int info;
	node*link;
	
	
};

class linkedQueue{
	
	
	public:
		
	bool isEmptyQueue() const;
	bool isFullQueue() const;
	void initializeQueue();
	int front() const;
	int back() const;
	void addQueue(const int & element);
	void deleteQueue();
	linkedQueue();
	
	private: 
	 
	 node *QueueFront;
	 node *QueueRear;
	
	
	
	
	
	
	
	
	
};


bool linkedQueue::isEmptyQueue() const{
	
	
	return (QueueFront == NULL);
	
	
}
bool linkedQueue::isFullQueue() const{


return false;

}
void linkedQueue::initializeQueue(){
	
	node *temp;
	
	while(QueueFront != NULL){
		
		temp = QueueFront;
		QueueFront = QueueFront-> link;
		delete temp;
		
		
		
		
	}
	
	QueueRear = NULL;
	
} 
