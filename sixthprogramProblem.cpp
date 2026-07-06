#include<iostream> //handles i/o operations
#include <limits>  //handles garbage stuff in code buffer when user enters something ,most probably the entered command stick with prevoius command, to avoid this we need this
#include<string>  //handles string
using namespace std;
//global arrays that are declared outside the main() , because the functions we made gonna use these arrays, if these arrays were declared inside main() unnecessary encaplusation found out and we can't manipulate these arrays 
string sadSongs[]={"AARZU" , "SOCHTA HUN", "TABAH HOGAYE" };
string weddingSongs[]={"BAARI BARSI" , "LONDON THUMAKDA", "GENDA PHOOL" };
string koreanSongs[]={"YAD" , "UNDER THE INFLUENCE", "BASS DA DA DA" };
int count = 0; //we must need a counter that used to measure the capabilty or filled up capacity of an array, yups i took only one counter for all three arrays , you can take multiple counters for multiple arrays that can result unnecessary lengthy code 
//function to play a music, for playing a single or multiple music we need single method to iterate through the array by whether taking input from the user or matching
void playMusic(){
    string enteredSong;
    cout<<"ENTER THE SONG YOU WANT TO LISTEN TO FEEL EMOTIONS : ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clear up the buffer when enter is pressed. enter is in term of coding is "\n" so code clears out buffer when it detects \n
    getline(cin,enteredSong);
    for(int i = 0;i<3;i++){
    if(enteredSong==sadSongs[i] || enteredSong==weddingSongs[i] ||enteredSong==koreanSongs[i]){  //compare the music user commanded through the arrays if it exists?
        cout<<"MUSIC PLAYED!"<<endl;
        return;
    }
    }
    cout<<"SORRY! THERE IS NOTHING TO MATCH\n";
}
void pauseMusic(){
    cout<<"MUSIC STOPPED!\n";
}
void nextMusic(){
    string nextSong;
    cout<<"ENTER THE NEXT SONG YOU WANT TO LISTEN TO FEEL EMOTIONS : ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin,nextSong);
    for(int i = 0;i<3;i++){
    if(nextSong==sadSongs[i] || nextSong==weddingSongs[i] ||nextSong==koreanSongs[i]){
        cout<<"MUSIC PLAYED!"<<endl;
        count++;
        return;
}
    }
    cout<<"SORRY! THERE IS NOTHING TO MATCH\n";
}
void previousMusic(){
    string currentMusic;
    cout<<"ENTER CURRENT MUSIC : ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin,currentMusic);
    for(int i = 0;i<3;i++){
        if(currentMusic==sadSongs[i] || currentMusic==weddingSongs[i] ||currentMusic==koreanSongs[i]){
            count--;
            playMusic();
        }
    }
}
int main(){
    int choice = 0;
    cout<<"SELECT OPERATION TO BE PERFORM : "<<endl;
    cout<<"1. PLAY \n";
    cout<<"2. PAUSE \n";
    cout<<"3. NEXT \n";
    cout<<"4. PREVIOUS \n";
    cout<<"5. EXIT \n";
    cout<<"AVAILABLE CATEGORY => "<<endl;
    cout<<"SAD            : AARZU       , SOCHTA HUN         , TABAH HOGAYE" <<endl;
    cout<<"WEDDING VIDE   : BAARI BARSI , LONDON THUMAKDA    , GENDA PHOOL"<<endl;
    cout<<"MOOD TO DANCE? : YAD         , UNDER THE INFLUENCE, BASS DA DA DA"<<endl;
    while(choice!=5){
        if (!(cin >> choice)) {
            cout << "ENTER NUMERIC VALUE ONLY!.\n\n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.clear();
            continue;
        }
        switch(choice){
            case 1 : playMusic();
            break;
            case 2 : pauseMusic();
            break;
            case 3 : nextMusic();
            break;
            case 4 : previousMusic();
            break;
            case 5: cout<<"PROGRAM IS EXITING ! ";
            break;
            default : cout<<"INVALID INPUT!";
        }

    }
    return 0;
}