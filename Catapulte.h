#ifndef CATAPULTE_H
#define CATAPULTE_H


#include "CaracteristiquesJeu.h"
#include "Unite.h"

class Catapulte : virtual public Unite
{
    public:
        Catapulte(Case position_, int faction_);
        virtual ~Catapulte();
    protected:
    private:
};

#endif // CATAPULTE_H
