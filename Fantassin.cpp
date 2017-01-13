#include "Fantassin.h"

Fantassin::Fantassin(Case position_, int faction_) :
    Unite(position, CaracteristiqueJeu.prixFantassin(), 1,
          faction_, CaracteristiqueJeu.paFantassin(), int CaracteristiqueJeu.pvFantassin())
{
    aAttaque = false;
}

Fantassin::~Fantassin()
{
    //dtor
}

int Fantassin::action1()
{
    int issue = attaquer();
    if(issue != -1) //L'unité a pas pu attaquer
    {
        aAttaque = true;
        return issue;
    }
}

int Fantassin::action2()
{
    if(deplacer())
        return 1;
    else return false;
}

int Fantassin::action3(bool a1)
{
    if(aAttaque == true)
    {
        aAttaque = false;
        return -1;
    }
    else
    {
        int issue = attaquer();
        if (attaquer()==-1)
            return 0;
        else return issue;
    }
}
