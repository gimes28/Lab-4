#ifndef TV_H
#define TV_H
#include "media.h"

class Tv : public Media{
  private:
    string show1[4][6] = {          // initializes the shows seasons and episodes
      {"1st Episode", "2nd Episode", "3rd Episode", "4th Episode", "5th Episode", "6th Episode"},
      {"1st Episode", "2nd Episode", "3rd Episode", "4th Episode", "5th Episode", "6th Episode"}, 
      {"1st Episode", "2nd Episode", "3rd Episode", "4th Episode", "5th Episode", "6th Episode"}, 
      {"1st Episode", "2nd Episode", "3rd Episode", "4th Episode", "5th Episode", "6th Episode"}
      };
  public:
    Tv() : Media(){
      
    }
    virtual void Play();    // Virtual function from Media
    void Details();
};
#endif