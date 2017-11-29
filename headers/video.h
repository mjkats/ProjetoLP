#ifndef VIDEO_H
#define VIDEO_H

#include <string>
#include <vector>
#include "date.h"

using namespace std;

class Video{
    protected:
        string nome;
        vector<string> categoria;
        string duracao;
        string descricao;
        Date data_lancamento;

    public:  
        Video();

        Video(  string new_nome,
                string new_descricao,
                string new_duracao,
                Date new_data_lancamento,
                vector<string> new_categoria);

        string getNome();
        string getDuracao();
        string getDescricao();
        Date getDataLancamento();
        vector<string> getCategoria();

        void setNome(string new_nome);
        void setDuracao(string new_duracao);
        void setDescricao(string new_descricao);
        void setDataLancamento(Date new_data_lancamento);
        void setCategoria(vector<string> new_categoria);

        void printCategorias();
        virtual void printVideo();
        void setVideo();
};

#endif