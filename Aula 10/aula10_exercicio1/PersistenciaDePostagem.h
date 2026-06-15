#ifndef PERSISTENCIA_DE_POSTAGEM_H
#define PERSISTENCIA_DE_POSTAGEM_H

#include <string>
#include "Postagem.h"

class PersistenciaDePostagem {
    private :
        string arquivo;

    public :
        PersistenciaDePostagem(string arquivo);
        ~PersistenciaDePostagem();

        void inserir(Postagem *p);
};

#endif