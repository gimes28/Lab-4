#include "movie.h"

using namespace std;

void Movie::Play(){
  cout << "Lead Actor: " << leadActor << endl;
}

void Movie::Details(){
  cout << "Title: " << Title << endl;
  cout << "Description: " << Description << endl;
}