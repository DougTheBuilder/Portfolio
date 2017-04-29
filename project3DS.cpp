#include <iostream>
#include <cstdlib>

using namespace std;
#include "stackclass.h"
void PointEditor1(int &score1, stackclass & box1);
void PointEditor2(int &score2, stackclass & box1);
int main(){
	
	stackclass box1(100);
	string player1;
	string player2;
    int	count = 0;
	int random;
	int score1 = 0;
	int score2 = 0;
	int cont = NULL;
	cout << "Welcome to Card Kings !!"
	     << " Player 1, what is your name ?";
          cin >> player1;
          
          cout << "Player 2, what is your name ?";
          cin >> player2;
          
          cout << " Generating Deck ";
          
          while(count != 100){
          	
          	random = rand () % 11;
          	
          	box1.push(random);
          	
          	
          	
          	count++;
		  }
	
	cout <<" GAME START !";
	while(score1 < 100 && score2 < 100){
		
		if(box1.isEmptystack()){
		   cout << " List empty, generating new deck !"	;
			count = 0;
			while(count != 100){
          	
          	random = rand () % 11;
          	
          	box1.push(random);
          	
          	
          	
          	count++;
		  }
		}
		
		cout << "Player one ! your turn !";
		PointEditor1(score1,box1);
		cout << "turn ended";
		
		
		cout <<"Player two ! your turn !";
		PointEditor2(score2, box1);
		cout << "current score " << player1 << score1 << player2 << score2;
		cout << "continue ?, type 1 to exit";
		cin >> cont;
		if	(cont == 1){
			
			break;
		}
	}
	
	
	
	
	
}
void PointEditor1(int &score1, stackclass &box1 ){
	
	
	if( box1.top() == 0){
		
		score1 -= 10;
		box1.pop();
		
		
		
		
	}else if (box1.top() == 1){
		
		
		score1 += 1;
		box1.pop();
		PointEditor1(score1, box1 );
		
	}else if (box1.top() == 2){
		
		score1+= 2;
		box1.pop();
	     box1.push(rand () % 11);
		
		
	}else if (box1.top() == 3){
		
		score1+= 3;
		box1.pop();
		
		
	}else if (box1.top() == 4){
		
		score1+= 4;
		box1.pop();
		
	}else if (box1.top() == 5){
		
		score1+= 5;
		box1.pop();
		
	}else if (box1.top() == 6){
		
		score1+= 6;
		box1.pop();
		
	}else if (box1.top() == 7){
		
		score1+= 7;
		box1.pop();
		
	}else if (box1.top() == 8){
		
		score1+= 8;
		box1.pop();
		
	}else if (box1.top() == 9){
		
		score1+= 9;
		box1.pop();
		
	}else if (box1.top() == 10){
		
		score1+= 10;
		box1.pop();
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
void PointEditor2(int &score2, stackclass & box1){
	
		if( box1.top() == 0){
		
		score2 -= 10;
		box1.pop();
		
		
		
		
	}else if (box1.top() == 1){
		
		
		score2 += 1;
		box1.pop();
		PointEditor1(score2, box1 );
		
	}else if (box1.top() == 2){
		
		score2+= 2;
		box1.pop();
	     box1.push(rand () % 11);
		
		
	}else if (box1.top() == 3){
		
		score2+= 3;
		box1.pop();
		
		
	}else if (box1.top() == 4){
		
		score2+= 4;
		box1.pop();
		
	}else if (box1.top() == 5){
		
		score2+= 5;
		box1.pop();
		
	}else if (box1.top() == 6){
		
		score2+= 6;
		box1.pop();
		
	}else if (box1.top() == 7){
		
		score2+= 7;
		box1.pop();
		
	}else if (box1.top() == 8){
		
		score2+= 8;
		box1.pop();
		
	}else if (box1.top() == 9){
		
		score2+= 9;
		box1.pop();
		
	}else if (box1.top() == 10){
		
		score2+= 10;
		box1.pop();
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
