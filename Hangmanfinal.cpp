#include<iostream>
#include<string>
#include<cstring>

#include<stdlib.h>
#include"windows.h"
using namespace std;

class hangman
{
    public:
    string ist;
    int i;
    char inp;
    int k;
    int j;
    char us;
    string s1,s2,gsd;
    int a;
    int x;
    int wc,tc;
    hangman()
    {
        ist="noname";
        i=0;
        j=0;
        a=0;
    }

    void getstr()
    {
        cout<<"enter a word:";
        cin>>ist;
        gsd=string(ist.length(),'_');
    }

    void hang()
    {
        
        k=ist.length();
        cout<<endl<<k<<endl;
        gsd=string(k,'_');
        int chances=8;
        tc=0,wc=0;
        tc=8+k;
        for(int t=0;t<tc;t++)
        {
            if(gsd==ist||wc==8)
            {
                break;
            }
            cout<<"enter a charecter:";
            cin>>inp;
            bool mtc=false;
            for(i=0;i<k;i++)
            {
                if (ist[i] == inp && gsd[i] == '_') {
                gsd[i] = inp;
                mtc = true;
            }
            
        }
        if(mtc)
            {
                cout<<"correct!"<<endl<<gsd<<endl;
            }
            else
            {
                wc++;
                cout<<"wrong!"<<endl;
                cout<<"remaining chances:"<<8-wc<<endl;
            }
        }
        
        if (gsd==ist)
        {
            cout<<"winner!!"<<endl;
        }
        else
        {
            cout<<"try again!"<<endl;
        }
    }
    
    void repbl()
    {
        for(int x=0;x<k;x++)
        {
            if(ist[x]==inp)
            {
                cout<<inp;
            }
            else
            {
                cout<<"_";
            }
            
        }
        cout<<endl;


    
    }
};

// void gotoxy(int w,int q)
//     {
//         COORD coord;
//         coord.X=w;
//         coord.Y=q;
//         SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
//     }

main()
{
    hangman h1;
    h1.getstr();
    // h1.blanks();
    system("cls");
    h1.hang();
    // h1.repbl();
    return 0;
}