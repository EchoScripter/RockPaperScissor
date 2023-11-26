#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void gamelogic(int n,string s)
{
    string name=s;
    int point1=0;
    int point2=0;

    srand((unsigned int) time(NULL));
    for(int i=1;i<=n;i++)
    {
    
    int number = (rand() % 3)+1; 

        cout<<"Round "<<i<<endl<<endl;
        char guess;
        cout<<"You chose(R/r/S/s/P/p): ";
        cin>>guess;

        if(guess=='R' || guess=='r' || guess=='S' || guess=='s' || guess=='P' || guess=='p'){
            if(number==1)
            {
                if(guess=='r' || guess=='R')
                {
                    cout<<"You chose Rock"<<endl<<endl;
                    cout<<"I Chose Rock"<<endl;
                    cout<<"so No point"<<endl<<endl<<endl;
                }
                else if(guess=='p' || guess=='P')
                {
                    cout<<"You chose Paper"<<endl;
                    cout<<"I Chose Rock"<<endl;
                    cout<<"so You get a point"<<endl<<endl<<endl;
                    point1++;
                }
                else
                {
                    cout<<"You chose Scissors"<<endl;
                    cout<<"I Chose Rock"<<endl;
                    cout<<"so I get a point"<<endl<<endl<<endl;
                    point2++;
                }
                    cout<<"I have "<<point2<<" points after round "<<i<<endl<<endl;
                    cout<<"You have "<<point1<<" points after round "<<i<<endl<<endl<<endl;               
            }
            else if(number==3)
            {
                
                if(guess=='p' || guess=='P')
                {
                    cout<<"You chose Paper"<<endl;
                    cout<<"I Chose Paper"<<endl;
                    cout<<"No point"<<endl<<endl<<endl;
                }
                else if(guess=='s' || guess=='S')
                {
                    cout<<"You chose Scissors"<<endl;
                    cout<<"I Chose Paper"<<endl;
                    cout<<"You get a point"<<endl<<endl<<endl;
                    point1++;
                }
                else
                {
                    cout<<"You chose Rock"<<endl;
                    cout<<"I Chose Paper"<<endl;
                    cout<<"so I get a point"<<endl<<endl<<endl;
                    point2++;
        
                }
                    cout<<"I have "<<point2<<" points after round "<<i<<endl<<endl;
                    cout<<"You have "<<point1<<" points after round "<<i<<endl<<endl<<endl;
            }

            else
            {
                if(guess=='s' || guess=='S')
                {
                    cout<<"You chose Scissors"<<endl;
                    cout<<"I Chose Scissors"<<endl;
                    cout<<"so No point"<<endl<<endl<<endl;
                }
                else if(guess=='r' || guess=='R')
                {
                    cout<<"You chose Rock"<<endl;
                    cout<<"I Chose Scissors"<<endl;
                    cout<<"so You get a point"<<endl<<endl<<endl;
                    point1++;
                }
                else
                {
                    cout<<"You chose Paper"<<endl;
                    cout<<"I Chose Scissors"<<endl;
                    cout<<"so I get a point"<<endl<<endl<<endl;
                    point2++;
                }
                    cout<<"I have "<<point2<<" points after round "<<i<<endl<<endl;
                    cout<<"You have "<<point1<<" points after round "<<i<<endl<<endl<<endl;
            }
        }
            else{
                cout<<"Invalid Character so i getting the point for this round"<<endl;
                point2++;
            }     
    } 

    if(point2>point1)
    {
        cout<<"I WON!!!"<<endl;
        cout<<name<<" You Are a NOOB!!!"<<endl<<endl<<endl;
    }
    else if(point1>point2)
    {
        cout<<name<<" You WON!!!"<<endl;
        cout<<"You Got Lucky this time"<<endl<<endl<<endl;
    }
    else 
    {
        cout<<"We could not deciede it this time"<<endl<<endl;
        cout<<"Would you like to play again"<<endl<<endl<<endl;
    }
    cout<<"To play again input Y/y or N/n to end this now"<<endl;
}
int main()
{
    string name;
    cout<<"PLAYER NAME: ";
    getline(cin, name);
    int n=5;

    cout<<endl<<"It will be a 5 round game"<<endl<<endl;
    cout<<"R/r for Rock"<<endl;
    cout<<"P/p for paper"<<endl;
    cout<<"S/s for Scissors"<<endl<<endl<<endl;


    gamelogic(n,name);

 
    while(true)
    {
        char c;
        cin>>c;
           
            if(c == 'Y' || c == 'y')
            {
                gamelogic(n,name);
            }
            else
            {
                cout<<"The moon is beautiful,isn't it?";
                break;
            }
    }
}


     
