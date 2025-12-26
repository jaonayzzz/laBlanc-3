#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    string X;
    cout << "Press Enter 3 times to reveal your future.\n";
    for(int i=0;i<3;i++){
        cin.get();
    }
    int x =rand()%9;
    if(x==0){X="A";}
    else if(x==1){X="B+";}
    else if(x==2){X="B";}
    else if(x==3){X="C+";}
    else if(x==4){X="C";}
    else if(x==5){X="D+";}
    else if(x==6){X="D";}
    else if(x==7){X="F";}
    else{X="W";}
    cout << "You will get "<<X<<" in this 261102.";
    return 0;

}