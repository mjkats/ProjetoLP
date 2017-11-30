/*
 *@file filme.h
 */

#ifndef FILME_H
#define FILME_H

#include "../headers/video.h"
#include <iostream>


class Filme : Video
{
  public:
    Filme(string new_nome,
      string new_descricao,
      string new_duracao,
      string new_data_lancamento,
      vector<string> new_categoria, 
      string diretor,
      vector<string> elenco);

    /*
    *@brief Função sobrecarregada para mostrar este objeto
    */
    void printVideo();

    void setVideo(string new_nome,
		      string new_descricao,
		      string new_duracao,
		      string new_data_lancamento,
		      vector<string> new_categoria, 
		      string diretor,
		      vector<string> elenco);
    
    void setDiretor(string new_diretor);
    void setElenco(vector<string> new_elenco);
    
    /*
    *@brief função para mostrar o elenco
    */
    void showElenco(); 
    string writeFilme();

  private:
    string diretor;
    vector<string> elenco;
};

#endif