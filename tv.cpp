#include "tv.h"

void Tv::Play(){
  int season;
  int episode;

  int seasons = 4;
  int episodes = 6;

  cout << "Enter a season: " << endl;
  cin >> season;

  cout << "Enter an episode: " << endl;
  cin >> episode;

  //TODO: output requested episode and season information

  /*for(int i = 0; i < seasons; ++i){     // 4 seasons per show
    for(int k = 0; k < episodes; ++k){     //6 episodes per season
      if(season == i && episode == k){
        cout << "Now playing: " << show1[i-1][k-1] << " of season " << season << endl;
      }
    }
  }*/
  cout << "Now playing: " << show1[season-1][episode-1] << " of season " << season << endl; 
};

void Tv::Details(){
        cout << "Title: " << Title << endl;
        cout << "Description: " << Description << endl;
}