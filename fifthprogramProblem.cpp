#include<iostream>  //library used for i/o operations
#include<string>   //library used for string
using namespace std;
int main(){
    cout<<"QUIZ GAME\n";  
    string questions[]={     //array used for storing questions
        "Q#1 : WHAT IS FULL FORM OF AI ? ",
        "Q#2 : WHY WE USE SOFTWARES ? ",
        "Q#3 : WHAT IS THE HIEGHT OF SUPERCOMPUTER ? "
    };
    string options[]={   //array used for storing options
        "A : ARTIFICIAL INTELLIGENCE\n B : AERONOMIC INDEX\n ",
        "A : TO GENERATE HUMAN BIENGS\n B : TO USE TECHNOLOGY\n ",
        "A : 2 TO 2.5m\n B : 4 TO 4.5m\n ",
    };
    char correctAnswers[]={'A','B','A'};   //array used for storing correct answers
    int totalQuestions = sizeof(questions) / sizeof(questions[0]);  
    int score = 0;
    char userGuess;
    for(int i = 0 ; i < totalQuestions ; i++){    //for loop to loop through questions and options
        cout<<questions[i]<<endl;
        cout<<options[i]<<endl;
        cout<<"ENTER ANSWER [ALPHABETS ONLY!]: "; 
        cin>>userGuess;
        userGuess=toupper(userGuess);   //converts lowercase to uppercase
        if(userGuess==correctAnswers[i]){  
            cout<<"CONGRATS"<<endl;
            score++;
        }else{
            cout<<"OOPS ! WRONG ANSWER , CORRECT IS : "<<correctAnswers[i]<<endl;
        }
    }
    cout<<" "<<endl;
    cout<<"RESULT"<<endl;
    cout<<"QUIZ RESULT : "<<score<<" OUT OF "<<totalQuestions<<"\n";
    cout<<"PERCENTAGE : "<<(float)score/totalQuestions*100<<" % "<<endl;

    return 0 ; 

}