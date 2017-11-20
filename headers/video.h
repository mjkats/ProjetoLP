#ifndef VIDEO_H
#define VIDEO_H

#include <string>
#include <vector>
#include "categoria.h"
#include "date.h"

using namespace std;

class Video{
    protected:
        int id;
        string nome;
        vector<Categoria> categoria;
        string duracao;
        string descricao;
        Date data_lancamento;

    public:  
        Video();

        int getId();
        string getNome();
        string getDuracao();

        void setId(int new_id);
        void setNome(string new_nome);
        void setDuracao(string new_duracao);

        virtual void printVideo();
        virtual Video getVideo();
};

#endif