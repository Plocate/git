#include "Catapulte.h"

Catapulte::Catapulte(Case position_, int faction_) :
    Unite(position, CaracteristiqueJeu.prixCatapulte(), 4,
    faction_, CaracteristiqueJeu.paCatapulte(), int CaracteristiqueJeu.pvCatapulte())
{
    //ctor
}

Catapulte::~Catapulte()
{
    //dtor
}
