#include <iostream>
//#include <cstring>
#include "media.h"
#include "movie.h"
#include "tv.h"


using namespace std;
/*
TODO List

set call for all members
Implement function for Task 3.1.C
*/

void playShow(Media& show) { //Accepts show as parameter and calls Details and Play functions
    show.Details();
    show.Play();
}

int main() {
    bool cont = true;
    int option;
    char choice;
    while (cont == true) {
        cout << "Press 1 for instance of Show" << endl; //Options menu
        cout << "Press 2 for instance of Movie" << endl;
        cout << "Press 3 for instance of TV show" << endl;
        cout << "Press 4 for instance of Movie declared as a Show" << endl;
        cout << "Press 5 for instance of TV show declared as a Show" << endl;
        cin >> option;

        if (option == 1) {
            Media inst;
            // cout << "Enter Title: " << endl;
            // string T;
            // cin.ignore();
            // getline(cin,T);
            // inst.setTitle(T);
            // cout << "Enter Description: " << endl;
            // string D;
            // getline(cin,D);
            // inst.setDescription(D);
            // cout << endl;
            inst.setTitle("Random Show");
            inst.setDescription("A show of some sort");
            playShow(inst);
        }
        else if (option == 2) {
            Movie inst;
            // cout << "Enter Title: " << endl;
            // string T;
            // cin.ignore();
            // getline(cin,T);
            // inst.setTitle(T);
            // cout << "Enter Description: " << endl;
            // string D;
            // getline(cin,D);
            // inst.setDescription(D);
            // cout << "Enter Lead Actor: " << endl;
            // string L;
            // getline(cin,L);
            // inst.setLeadActor(L);
            // cout << endl;
            inst.setTitle("Some Movie");
            inst.setDescription("Best Movie Ever");
            inst.setLeadActor("Dwayne 'The Rock' Johnson ");
            playShow(inst);
        }
        else if (option == 3) {
            Tv inst;
            // cout << "Enter Title: " << endl;
            // string T;
            // cin.ignore();
            // getline(cin,T);
            // inst.setTitle(T);
            // cout << "Enter Description: " << endl;
            // string D;
            // getline(cin,D);
            // inst.setDescription(D);
            // cout << endl;
            inst.setTitle("SpongeBob");
            inst.setDescription("Sponge that lives in a pineapple under the sea");

            playShow(inst);
        }
        else if (option == 4) {
            Media* inst = new Movie;
            // cout << "Enter Title: " << endl;
            // string T;
            // cin.ignore();
            // getline(cin,T);
            // inst->setTitle(T);
            // cout << "Enter Description: " << endl;
            // string D;
            // getline(cin,D);
            // inst->setDescription(D);
            // cout << endl;
            inst->setTitle("Random movie");
            inst->setDescription("Greatest movie of all time");
            inst->Details();
            inst->Play();
        }
        else if (option == 5) {
            Media* inst = new Tv;
            //       cout << "Enter Title: " << endl;
            //       string T;
            //       cin.ignore();
            //       getline(cin,T);
            //       inst->setTitle(T);
            //       cout << "Enter Description: " << endl;
            //       string D;
            //       getline(cin,D);
            //       inst->setDescription(D);
            //       cout << endl;
            inst->setTitle("Best TV Show ever");
            inst->setDescription("Really the best TV show ever");
            inst->Details();
            inst->Play();
        }
        else {
            cout << "Invalid input, try again" << endl;
            cin >> option;
        }




        cout << "Do you wish to continue" << endl << "Y for Yes or any other character for No" << endl;
        cin >> choice;
        if (choice == 'Y' || choice == 'y') {
            cont = true;
        }
        else {
            cont = false;
        }
    }
    return 0;

    void displayInfo(Tv);
}