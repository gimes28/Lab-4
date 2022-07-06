#ifndef MOVIE_H
#define MOVIE_H
#include "media.h" 
#include <cstring>

class Movie : public Media{
  private:
    string leadActor;
  public:
    Movie() : Media(){
      leadActor = "No Lead Actor";
    }
    //Getter and Setter for opening credits
    string getLeadActor() const { return leadActor; }
    void setLeadActor(string LA) { leadActor = LA; }
    //Overridden Play function from media.cpp
    virtual void Play();
    void Details();
};
#endif