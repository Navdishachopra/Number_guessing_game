#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
    srand((unsigned int) time(NULL));
    int number=rand()%100;
    int guess=0;
    do{
        cout<<"Guess the number between (1-100) = ";
        cin>>guess;
        if(guess>number)
            cout<<"Guess is too low"<<endl;
        
        else if(guess<number)
            cout<<"Guess is too high"<<endl;
            else
            cout<<"You WON ! Guess the correct number"<<endl;
        
     } while(guess!=number);
    
    

}
