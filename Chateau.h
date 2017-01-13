#ifndef CHATEAU_H
#define CHATEAU_H

#include "Case.h"
#include "Entite.h"

class Chateau : virtual public Case, virtual public Entite
{
    public:
        Chateau(int id_, int pv_, int faction_);
        virtual ~Chateau();
    protected:
    private:
};

#endif // CHATEAU_H
