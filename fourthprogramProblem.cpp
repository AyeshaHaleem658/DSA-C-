#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"++++++++++++++++++++++++  FLIGHT STATUS CHECKER  +++++++++++++++++++++++++++++++\n";
    int flightType;
    string airlineName;
    cout<<"ENTER FLIGHT TYPE [PLEASE PRESS 1 FOR INTERNATIONAL FLIGHTS AND PRESS 2 FOR DOMESTIC FLIGHTS] : ";
    cin>>flightType;
    cin.ignore();
    switch(flightType)
    {
        case 1 : 
        cout<<"INTERNATIONAL FLIGHTS\n";
        cout<<"ENTER AIRLINE NAME  : \n AVAILABLE INTERNATIONAL FLIGHTS \n a. AIR ARABIA \n b. ETIHAD AIRWAYS \n c. EMIRATES \n d. QATAR AIRWAYS \n e. AIR BLUE \n f. SHAHEEN AIR \n ----------------------------------------- \n  : ";
        getline(cin,airlineName);
        if(!airlineName.empty())
        {
            cout<<"ENTERED AIR LINE : "<<airlineName<<endl;
            if(airlineName=="AIR ARABIA"){
                cout<<"AIRLINE NAME : AIR ARABIA |  AIRLINE ID :  AA-675 \nARRIVAL FROM ISLAMABAD AT : 20:34  |  DEPARTURE AT ABU DHABI AT : 03:34 \nBOARDING CLOSED! "<<endl;
            }
            if(airlineName=="ETIHAD AIRWAYS"){
                cout<<"AIRLINE NAME : ETIHAD AIRWAYS |  AIRLINE ID :  EA-455 \nARRIVAL FROM ABU DHABI AT : 23:24  |  DEPARTURE AT SHARJAH AT : 03:24 \nBOARDING PENDING! "<<endl;
            }
            if(airlineName=="EMIRATES"){
                cout<<"AIRLINE NAME : EMIRATES |  AIRLINE ID :  EM-285 \nARRIVAL FROM SHARJAH AT : 03:45  |  DEPARTURE AT LONDON AT : 23:34 \nBOARDING STARTED! "<<endl;
            }
            if(airlineName=="QATAR AIRWAYS"){
                cout<<"AIRLINE NAME : QATAR AIRWAYS |  AIRLINE ID :  QA-090 \nARRIVAL FROM LAHORE AT : 04:34  |  DEPARTURE AT QATAR AT : 09:34 \nBOARDING PENDING! "<<endl;
            }
            if(airlineName=="AIR BLUE"){
                cout<<"AIRLINE NAME : AIR BLUE |  AIRLINE ID :  AB-236 \nARRIVAL FROM ISLAMABAD AT : 20:34  |  DEPARTURE AT ABU DHABI AT : 03:34 \nBOARDING STARTED! "<<endl;
            }
            if(airlineName=="SHAHEEN AIR"){
                cout<<"AIRLINE NAME : SHAHEEN AIR |  AIRLINE ID :  SA-675 \nARRIVAL FROM LONDON AT : 01:34  |  DEPARTURE AT ISLAMABAD AT : 23:34 \nBOARDING CLOSED! "<<endl;
            }
        }

        break;

        case 2 : 
        cout<<"DOMESTIC FLIGHTS\n";
        cout<<"ENTER AIRLINE NAME  \n  : AVAILABLE DOMESTIC FLIGHTS \n a. AIR ARABIA \n b. ETIHAD  \n c. PIA \n d. SHAHEEN AIR \n e. AIR BLUE  \n ----------------------------------------- \n  : ";
        getline(cin,airlineName);
        if(!airlineName.empty())
        {
            cout<<"ENTERED AIR LINE : "<<airlineName<<endl;
            if(airlineName=="AIR ARABIA"){
                cout<<"AIRLINE NAME : AIR ARABIA |  AIRLINE ID :  AA-675 \nARRIVAL FROM ISLAMABAD AT : 20:34  |  DEPARTURE AT KARACHI AT : 03:34 \nBOARDING CLOSED! "<<endl;
            }
            if(airlineName=="ETIHAD AIRWAYS"){
                cout<<"AIRLINE NAME : ETIHAD AIRWAYS |  AIRLINE ID :  EA-455 \nARRIVAL FROM KARACHI AT : 23:24  |  DEPARTURE AT LAHORE AT : 03:24 \nBOARDING PENDING! "<<endl;
            }
            if(airlineName=="EMIRATES"){
                cout<<"AIRLINE NAME : EMIRATES |  AIRLINE ID :  EM-285 \nARRIVAL FROM PESHAWAR AT : 03:45  |  DEPARTURE AT LAHORE AT : 23:34 \nBOARDING STARTED! "<<endl;
            }
            if(airlineName=="SHAHEEN AIR"){
                cout<<"AIRLINE NAME : SHAHEEN AIR |  AIRLINE ID :  QA-090 \nARRIVAL FROM LAHORE AT : 04:34  |  DEPARTURE AT KARACHI AT : 09:34 \nBOARDING PENDING! "<<endl;
            }
            if(airlineName=="AIR BLUE"){
                cout<<"AIRLINE NAME : AIR BLUE |  AIRLINE ID :  AB-236 \nARRIVAL FROM QUETTA AT : 20:34  |  DEPARTURE AT KARACHI AT : 03:34 \nBOARDING STARTED! "<<endl;
            }}
        break;

        default: 
        cout<<"SORRY!";

    }

    return 0;
}