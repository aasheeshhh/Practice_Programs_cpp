//11 june 2025

#include <iostream>
#include<ctime> 

int main(){
    srand(time(0));

	int player;
	int computer = (rand() % 10)+1;
	int tries = 0;


   do{
   	std::cout<<"Select a random number between 1 to 10"<<'\n';
	std::cin>>player;
	tries++;

	if(std::cin.fail()) {
    std::cout << "Please enter a valid number" << '\n';
    std::cin.clear();              // clear the error flag
    std::cin.ignore(1000, '\n');   // discard the invalid input
    continue;                      // go to next iteration of loop
    }

    if(player<computer){
    	std::cout<<"higher"<<'\n';
    	
    }
    else if(player>computer){
		std::cout<<"lower"<<'\n';
		
	}
    else if(player == computer){
		std::cout<<"You won"<<'\n';
		std::cout<<"You choose "<<player<<'\n';
		std::cout<<"computer choose "<<computer<<'\n';
		std::cout<<"Your win in "<<tries<<" chances"<<'\n';
		break;
	}
	if(tries == 5){
		std::cout<<"You loose"<<'\n';
		std::cout<<"Out of chances"<<'\n';
		std::cout<<"computer choose "<<computer<<'\n';
		break;
	}


    }while(player!=computer);
    
	return 0;
}
