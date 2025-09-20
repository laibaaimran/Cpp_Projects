#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdlib>
using namespace std;

class Rule{
public:
Rule(){
cout<<"************************  WELCOME USERS  *************************************"<<endl;
cout<<"*****************************LETS PLAY *************************"<<endl;
cout<<"********************** ROCK->PAPER->SCISSORS GAME *******************"<<endl;

cout<<"RULES"<<endl;
cout<<"Type 1 for ROCK \n";
cout<< "Type  2 for PAPER\n"; 
cout<<"Type 3 for SCISSORS \n";
cout<<"Please choose a number."<<endl;

}


};
 void getUserInput(){

int userNumber;
userNumber=1,2,3;
cin>>userNumber;

srand(time(0));
int random_number=rand()%3+1;

//1 is for paper 

if(random_number==userNumber){
    cout<<"Game Draw Between User and Computer.Computer chose same number as User that is "<<userNumber<<endl;
    
}else if(random_number==1&&userNumber==2){
    cout<<"User Wins.Computer chose "<<random_number<<endl;//computer->ROCK User->PAPER -->user wins
}else if(random_number==1&&userNumber==3){
cout<<"Computer Wins.Computer chose "<<random_number<<endl;//computer->ROCK User->SCISSORS
}else if(random_number==2&&userNumber==1){
    cout<<"Computer Wins.Computer chose "<<random_number<<endl;//computer->Paper  User->Rock
}else if(random_number==2&&userNumber==3){
    cout<<"User Wins. Computer chose "<<random_number<<endl;//computer->Paper User->Scissor 
}else if(random_number==3&&userNumber==1){
    cout<<"User Wins.Computer chose"<<random_number<<endl;//computer->Scissors User->Rock
}else if (random_number==3&&userNumber==2){
    cout<<"Computer Wins. Computer chose "<<random_number<<endl;//computer->Scissors User->Paper 
}else{
    cout<<"Invalid Number.Please choose number between (1-3)"<<endl;
}

//rock beats scissor
//paper beats rock
//scissors beats paper



}

int main(){
    
    Rule();
    getUserInput();

    return 0;
}



//ROCK PAPER SCISSOR GAME 
//cout message for user WELCOME THE GAME
//Instructions message 
//conditionals-->1.Paper->Paper, Rock->Rock,Scissor->Scissor --->tie 
// computerMove==userMove 

               //2.Paper(u)->Rock(c)-->Com wins      / Rock(u)-->Paper(c)-->user wins
    //---->.  usermove==2&&comMove==1-->com wins
               //3.Paper(u)->Scissor(c)-->com wins.  / Scissor (u)-->Paper(c)-->user wins
               //4.Scissor(u)-->Rock(c)-->com wins   / Rock(u)-->scissor(c)->user 
//user input for answer //input from user
//computer generator answer //random number btw 1-3

