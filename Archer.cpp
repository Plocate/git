#include "Archer.h"


Archer::Archer(Case position_, int faction_) :
    Unite(position, CaracteristiqueJeu.prixArcher(), 3,
    faction_, CaracteristiqueJeu.paArcher(), int CaracteristiqueJeu.pvArcher())
{
    //ctor
}

Archer::~Archer()
{
    //dtor
}
