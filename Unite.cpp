#include "Unite.h"

Unite::Unite(position_, prix_, portee_, faction_, pa_, pv_) :
    position(position_), prix(prix_), portee(portee_), pa(pa_), Entite(pv_, faction_)
{
    //ctor
}

Unite::~Unite()
{
    //dtor
}

bool Unite::deplacer(){
    if(faction == 1){
        if(position.getSuivant.estFranchissable && unite.suivant.estVide())
        {

        }
    }

}


