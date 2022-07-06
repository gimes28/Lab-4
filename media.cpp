#include "media.h"

using namespace std;

Media::Media(){
  Title = "No Tv Show or Movie";
  Description = "No Description";
}

Media::Media(string name, string about){
  Title = name;
  Description = about;
}

void Media::Details(){
  cout << "Title: " << Title << endl;
  cout << "Description: " << Description << endl;
}

void Media::Play(){
  cout << "Playing Media" << endl;
}


