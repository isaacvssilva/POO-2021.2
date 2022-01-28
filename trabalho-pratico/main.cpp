/*
Autores:
    Isaac Vinícius - 500935
    Mellyssa Alves - 495589
    Francisco Pedro - 501039
*/
#include "header/Midia.h"
#include "header/CD.h"
#include "header/DVD.h"
#include <bits/stdc++.h>

using namespace std;

//funcao para comparar data de lancamento de CD
bool compareLancamentoCD(const CD &date1, const CD &date2){
    if(date1.getLancamento() < date2.getLancamento()){
        return true;
    }
    return false;
}

//funcao para comparar data de lancamento de DVD
bool compareLancamentoDVD(const DVD &date1, const DVD &date2){
    if(date1.getLancamento() < date2.getLancamento()){
        return true;
    }
    return false;
}

//funcao para comparar data de lancamento das Midias
bool compareLancamentoMidia(const Midia &date1, const Midia &date2){
    if(date1.getLancamento() < date2.getLancamento()){
        return true;
    }
    return false;
}

//funcao para ordenar as Midias por Faixa
bool ordemFaixaMidia(const Midia &faixa1, const Midia &faixa2){
    if(faixa1.getFaixa() < faixa2.getFaixa()){
        return true;
    }
    return false;
}

int main(){

    CD cd5(2, 3.0f, true, "David-Guetta", "7 - CD", {"Battle", "Flames"}, 2018, "internacional", {"eletronica"});
    CD cd1(4, 2.0f, true, "Ariana-Grande", "Positions - CD", {"positions", "Obvious"}, 2020, "internacional", {"pop"});
    CD cd3(2, 3.0f, true, "David-Guetta", "Guetta Blaster - CD", {"Money", "Stay"}, 2004, "internacional", {"eletronica"});
    CD cd2(3, 3.0f, true, "Imagine-Dragons", "Origins (Deluxe) - CD", {"Natural", "Zero"}, 2018, "internacional", {"indie"});
    CD cd4(5, 3.0f, true, "David-Guetta", "Pop Life - CD", {"Love Is Gone", "Delirius"}, 2007, "internacional", {"eletronica"});

    DVD dvd1({"mp4"}, {"16x9"}, "legenda-01", "Ariana-Grande", "Positions - DVD", {"positions", "Obvious"}, 2021, "internacional", {"pop"});
    DVD dvd4({"mp4"}, {"16x9"}, "legenda-04", "Imagine-Dragons", "Origins (Deluxe) - DVD", {"Natural", "Zero"}, 2018, "internacional", {"indie"});
    DVD dvd5({"mp4"}, {"16x9"}, "legenda-05", "Imagine-Dragons", "Mercury - DVD", {"My Life", "Giantes"}, 2021, "internacional", {"indie"});
    DVD dvd2({"mp4"}, {"16x9"}, "legenda-02", "Ariana-Grande", "Sweetener - DVD", {"Sweetener", "Successful"}, 2018, "internacional", {"pop"});
    DVD dvd3({"mp4"}, {"16x9"}, "legenda-03", "David-Guetta", "Pop Life - DVD", {"Love Is Gone", "Delirius"}, 2007, "internacional", {"eletronica"});

    //criando container para cada classe
    vector <CD> cds{cd1, cd2, cd3, cd4, cd5};
    vector <DVD> dvds{dvd1, dvd2, dvd3, dvd4, dvd5};
    vector <Midia> midias{cd1, cd2, cd3, cd4, cd5, dvd1, dvd2, dvd3, dvd4, dvd5};

    string artista;
    int ano = 0;
    int op = 0;

    //menu simples interativo
    cout << "Escolha uma opção:" << endl;
    cout << "1. Exibir o nome de todos os CDs de um artista." << endl;
    cout << "2. Exibir o nome de todos os DVDs de um artista." << endl;
    cout << "3. Exibir o nome de todas as Midias de um artista." << endl;
    cout << "4. Exibir todas as Midias a partir do ano informado." << endl;
    cout << "5. Exibir Midias em comum e independentes de um artista a partir do titulo do CD e do DVD informado (INCOMPLETO)." << endl;
    cout << "6. Exibir todas as Midias, separand CDs de DVDs a partir do genero informado (INCOMPLETO)." << endl;
    cout << "7. Exibir todas os generos sem repeticao (INCOMPLETO)." << endl;

    cin >> op;

    if(op == 1){
        cout << "Artistas Disponives:" << endl;
        cout << "David-Guetta, Ariana-Grande, Imagine-Dragons" << endl;
        cout << endl;
        cout << "informe o nome do artista:" << endl;
        cin >> artista;
        cout << endl;

        //ordenando com a funcao sort, os elementos de CD e fazendo comparacao do lancamento
        sort(cds.begin(), cds.end(), &compareLancamentoCD);
        auto it = cds.begin();

        //enquanto o iterador nao estiver no final do vector, faca a operacao
        while(it != cds.end()){
            if(artista == it->getArtista()){ //comparando a string informada com o objeto da classe

                //variavel auxiliar para retornar apenas o nome do cd e o ano
                string auxTitulo = it->getTitutlo();
                int auxAno = it->getLancamento();
                
                cout << "titulo: " << auxTitulo << endl;
                cout << "ano: " << auxAno << endl;
                cout << "============" << endl;
            }
            it++;
        }
    }else if(op == 2){
        cout << "Artistas Disponives:" << endl;
        cout << "David-Guetta, Ariana-Grande, Imagine-Dragons" << endl;
        cout << endl;
        cout << "informe o nome do artista:" << endl;
        cin >> artista;
        cout << endl;

       //ordenando com a funcao sort, os elementos de DVD e fazendo comparacao do lancamento
        sort(dvds.begin(), dvds.end(), &compareLancamentoDVD);
        auto it = dvds.begin();

        //enquanto o iterador nao estiver no final do vector, faca a operacao
        while(it != dvds.end()){
            if(artista == it->getArtista()){//comparando a string informada com o objeto da classe

                //variavel auxiliar para retornar apenas o nome do DVD e o ano
                string auxTitulo = it->getTitutlo();
                int auxAno = it->getLancamento();
                
                cout << "titulo: " << auxTitulo << endl;
                cout << "ano: " << auxAno << endl;
                cout << "============" << endl;
            }
            it++;
        }
    }else if(op == 3){
        cout << "Artistas Disponives:" << endl;
        cout << "David-Guetta, Ariana-Grande, Imagine-Dragons" << endl;
        cout << endl;
        cout << "Informe o nome do artista:" << endl;
        cin >> artista;
        cout << endl;

        //ordenando com a funcao sort, os elementos de Midia e fazendo comparacao do lancamento
        sort(midias.begin(), midias.end(), compareLancamentoMidia);
        auto it = midias.begin();

        //enquanto o iterador nao estiver no final do vector, faca a operacao
        while(it != midias.end()){
            if(artista == it->getArtista()){//comparando a string informada com o objeto da classe

                //variavel auxiliar para retornar apenas o nome das Midias e o ano
                string auxTitulo = it->getTitutlo();
                int auxAno = it->getLancamento();
                cout << "titulo: " << auxTitulo << endl;
                cout << "ano: " << auxAno << endl;
                cout << "============" << endl;
            }
            it++;
        }
    }else if(op == 4){
        cout << "Anos de lanamentos Disponives:" << endl;
        cout << "2004, 2007, 2018, 2020, 2021" << endl;
        cout << endl;
        cout << "informe o ano:" << endl;
        cin >> ano;
        cout << endl;

        //ordenando os elementos e fazendo comparacao alfabetica de faixas
        sort(midias.begin(), midias.end(), &ordemFaixaMidia);
        auto it = midias.begin();

        //enquanto o iterador nao estiver no final do vector, faca a operacao
        while(it != midias.end()){

            if(ano == it->getLancamento()){//comparando o int informado com o objeto da classe
                it->print();
                cout << "==============================" << endl;
            }
            it++;
        }
    }else if(op == 5){
        cout << "Opção 5 Incompleta" << endl;
    }else if(op == 6){
        cout << "Opção 6 Incompleta" << endl;
    }else if(op == 7){
        cout << "Opção 7 Incompleta" << endl;
    }else{
        cout << "Inválido" << endl;
    }
    return 0;
}