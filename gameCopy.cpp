#include <iostream>
#include <ctime>
#include <string.h>
#include<cstdlib>	

using namespace std;
int main (){
	int category,tries;
	char animalLetter,inputs[30],random_word[30];
	char Letter;
    string again;
    bool inWord;

	srand(time(0));
	char animals[15][15]={"hen", "pig", "elephant", "tiger", "ant", "rabbit", "antelope", "ape", "hippopotamus", "donkey", "baboon", "goat", "cow"};
	char teams[15][20]={"realmadrid","liverpool","manchestercity","manchesterunited","mousampton","everton","juventus","mukura","apr","rayon","barcelona"};
	char districts[15][20]={"nyarugenge","kicukiro","gasabo","nyagatare","bugesera","rwamagana","rusizi","rubavu","nyamasheke","ruhango","nyanza","kirehe","kayonza"};
	retry:
	cout<<"HELLO WELCOME TO THE GUESS GAME"<<endl;
	cout<<"###############################"<<endl;
	cout<<endl;
	
	cout<<" THE CATEGORIES"<<endl;
	cout<<"1.Names of animals"<<endl;
	cout<<"2.Names of teams"<<endl;
	cout<<"3.Names of districts"<<endl;
	cout<<"CHOOSE THE CATEGORY: ";
	cin>>category;

	cout<<endl;
	int rnd_number=rand()%15;
	
	ChooseCategory:
	tries=10;
	switch(category){
		case 1:
			strcpy(random_word,animals[rnd_number]);
			  goto GetUserInputs;
		  break;
		case 2: 
		  	strcpy(random_word,teams[rnd_number]);
			  goto GetUserInputs;
		  break;
		  
		case 3: 
		  	strcpy(random_word,districts[rnd_number]);
			  goto GetUserInputs;
		  break;	
		default:
			cout<<"please select among the options";
			exit(0);
				
	}
	
	GetUserInputs:
			for(int i=0;i < strlen(random_word);i++){
				inputs[i]='_';
			}
			cout<<endl;
	InputLetter:
		if(strcmp(random_word,inputs)==0){	
			cout<<"\nYou have passed the word was "<<random_word;
			exit(1);
		}
          if(tries==0){
            cout << "You trials are over and you loose!!! "<<endl;
            cout<<"The word was "<<random_word<<endl;
            cout<<" Do you want to Restart the game : "<<endl ;
            cin>>again;
            if(again=="yes"){
            	goto retry;
			}
			else{
				exit(1);
			}
          }
          
          cout<<endl;
          
          cout << "Enter a character you guessed: "<<endl;
          cin >> Letter;
          
          inWord = false;
          
		  for (int a=0;a<strlen(random_word);a++){
		  	if(Letter == random_word[a]){
		  		inWord = true;
		  		inputs[a]=Letter;
			}  
		  }
		  
			if(inWord){
				cout<<"In progress"<<endl;
			}
			else{
				tries--;
				cout<<"You are left with "<<tries<<"trials"<<endl;
			}
		  cout << inputs;
          
        goto InputLetter;
        
        return 0;
}
