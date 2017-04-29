
#include <iostream>
#include <cassert>
using namespace std;


class stackclass
{
	public : 
	  
	  stackclass(int stacksize);
	  
	  
	  void initializestack();
	  void push(int newitem);
	  void pop();
	  int top() const;
	  bool isEmptystack() const;
	  bool isFullstack()  const;
	  
	   
	   
	  private:
	  	
	  	int maxstacks;
	  	int stacktop;
	  	int *list;
	  	
	
	
};

 void stackclass::initializestack(){
	  	stacktop = 0;    
	  	
	  }
	  
 void stackclass::push(int newitem){
	  	
	  	
	  	if(!isFullstack()){
	  		
	  		
	  		list[stacktop] = newitem;
	  		stacktop++;
		  }
	  	else{
	  		
	  		cout << "reached full capacity, cannont add to stack" <<endl;
		  }
}


bool stackclass::isEmptystack() const{
	
	
	return (stacktop == 0);
	
	
	
}
void stackclass:: pop(){
	
	if (!isEmptystack()){
		
		stacktop--;
		
	}
	else
	cout << "stack is empty, cannot remove" << endl;
	   
	   
	
	
}
bool stackclass:: isFullstack() const{
	
	
	return (stacktop == maxstacks);
	
	
	
}
stackclass::stackclass(int stacksize){
	
	if (stacksize <= 0){
		
		
		
		cout <<"creating new stack array" <<endl;
		
		maxstacks = 100;
		stacktop = 0;
		list = new int [maxstacks];
		
		
	}
	else {
		
		maxstacks = stacksize;
		
		stacktop = 0;
		
		list = new int [maxstacks];
	}
	
	
	
	
	
}
int stackclass:: top () const {


assert(stacktop != 0);

return list[stacktop - 1];



}
	
	
	
	
	



