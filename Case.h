#ifndef CASE_H
#define CASE_H

#include "Unite.h"

class Carte
{
public :
protected :
private :
	Case *premier, *dernier;
};

class Case
{
    public:
        Case();
        virtual ~Case();

        bool estVide();
        virtual void recevoirDegats(int degats);
    protected:
    private:
        Case *suivant, *precedant;
        Unite* sonUnite;
};

#endif // CASE_H
