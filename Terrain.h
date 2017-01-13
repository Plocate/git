#ifndef TERRAIN_H
#define TERRAIN_H

#include "Case.h"

class Terrain : virtual public Case
{
    public:
        Terrain(int id_);
        virtual ~Terrain();
    protected:
    private:
};

#endif // TERRAIN_H
