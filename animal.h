#ifndef ANIMAL.H
#define ANIMAL.H
#include <string>
using namespace std;

class animal {
    public:
        animal();
        animal(string n, int v); // creates an animal with name n and body volume v.
                                 // animals are allocated a unique ID on creation
        virtual string get_name() = 0;
        virtual void set_name(string an_name);
        int get_id();
        void set_id(int an_id);
        int get_volume();
        void set_volume(int an_volume);

    protected:    
        string name;            // the animal's name
        int animalID;           // the animal's unique ID
        int volume;             // the volume of the animal's body                         
};

#endif
