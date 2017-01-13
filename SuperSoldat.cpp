#include "SuperSoldat.h"

SuperSoldat::SuperSoldat(Case position_, int faction_) :
    Unite(position, CaracteristiqueJeu.prixFantassin(), 3,
    faction_, CaracteristiqueJeu.paFantassin(), int CaracteristiqueJeu.pvFantassin())
{
    //ctor
}

SuperSoldat::~SuperSoldat()
{
    //dtor
}
