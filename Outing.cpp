#include <iostream>
#include <string>
using namespace std;
void instructions(){
    cout<<"THESE ARE THE INSTRUCTIONS \n Excuse all spelling errors 'IT WAS WRITTEN IN 30 mins ' \n ALL ANSWERS SHOULD BE ANSWERED CORRECTLY \n All name should start with a capital letter \n ==MODE OF SUBMISSION== \n Take a picture of the code and answers without deleting anything I would know \n'Forgive the old way of submission its too late yo create a serve ' \n ALL WOULD BE USED BY THE CODER 'Truly Yours' "<<endl;
};
struct love{
    string name;
    int time;
};

int main() {
    instructions();
    string BOYFRIEND;
    int date;
    int time;
string choice;
    cout<<"=====WELCOME TO YOUR SPECIAL CODE===== \n follow the ff instructions "<<endl;
    cout<<"ANSWER ALL QUESTION \n ALL ANSWER GOES DIRECTLY TO ME 'Michael'"<<endl;
love outing;
cout<<"ENTER YOUR NAME : "<<endl;
getline(cin,outing.name);

cout<<"WHAT IS THE NAME OF YOUR BOYFRIEND: "<<endl;
while (true) {
    getline(cin,BOYFRIEND);
    if (BOYFRIEND == "Michael Karel" || BOYFRIEND == "Michael") {
        cout<<"HE IS SO HAPPY \n YOU'VE GRADUATED TO THE NEXT QUESTION "<<endl;
        break;
    }
    cout<<"WOWWWW \n HE IS SO SPEECHLESS"<<endl;
    cout<<"YOU SURE, what is his name :"<<endl;
}
cout<<"HE WANTED TO KNOW WHETHER YOU WOULD GO TO THE MOVIE WITH HIM TO SEE THE SPIDERMAN MOVIE \n 'Not on the premiere day' \n Would you still want to go with him "<<endl;
cout<<" ANSWER WITH 'Yes' OR 'Noo' "<<endl;
while (true) {
    cin>>choice;
    if (choice == "yes" || choice == "Yes" || choice == "Yess") {
        cout<<"LETS CONTINUE"<<endl;
        break;
    }
    if (choice == "No" || choice == "no" || choice == "Noo") {
        cout<<" I AM NOT LEAVING YET WITHOUT A YES "<<endl;
        cout<<"Please answer 'Yes' to continue."<<endl;
        continue;
    }
    cout<<"Invalid answer. Please type 'Yes' or 'Noo'."<<endl;
}
cout<<"QUITE UNFORNATELY I WON'T BE ABLE TO GO ON THE PREMIERE DAY "<<endl;
cout<<"So WHICH DAY WOULD YOU BE FREE AND TIME "<<endl;
cout <<" Date "<<endl;
cin>> date;
cout<< date <<" August "<< 2026 <<endl;
cout<<"Time"<<endl;
cin>>time;
cout<<"Hour"<< time <<endl;

cout<< date <<"\t"<< time <<endl;
cout<<"SINCE YOU HAVE ANSWERED ALL THE QUESTIONS THE PROGRAMMER MUST \n 'A MUST '\n RECIEVE AN ANSWER \n \t\t\t ==THANK YOU =="<<endl;

cout<< "Name : "<< outing.name <<"\n"<< "Boyfriend: " <<BOYFRIEND <<"\n"<<" YOUR CHOICE WAS: "<<choice<<"\n"<<"DATE \t TIME"<<"\n" << date <<" August 2026"<<"\t"<<time<<"\n"<<"--THANK YOU FOR YOU INPUT--"<<endl;

    return 0;
}