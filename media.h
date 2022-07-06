
#ifndef MEDIA_H
#define MEDIA_H
//#import <cstring>
#include <iostream>
using namespace std;

class Media{
  protected:
    //Protected so that all derived classes can access
    string Title;
    string Description;
  public:
    // Constructors
    Media();
    Media(string name, string about);

    // Title getters and setters
    string getTitle() const { return Title; };
    void setTitle(string name) { Title = name; };
    
    // Description getters and setters
    string getDescription() const { return Description; };
    void setDescription(string about) { Description = about; };

    virtual void Play();
    void Details();
};


#endif