#ifndef UNITE_H
#define UNITE_H

#inclue "Entite.h"

class Unite : virtual public Entite
{
    public:
        Unite(Case position_, int prix_, int portee_,
          int faction_, int pa_, int pv_);
        virtual ~Unite();
        virtual bool deplacer(); //Peut être redéfinie : on peut imaginer une unité qui aurait un mouvemnt différent.
        virtual int attaquer(Case c); //virtuelle, peut-être redefinie
        virtual int action1() = 0; //virtuelle pure : doit être redefinie
        virtual int action2() = 0;
        virtual int action3() = 0;
    protected:
    private:
        Case position;
        int recompense;
        int portee;
        int pa;
};

#endif // UNITE_H
