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

//funcao para ordenar as Midias por titulo
bool ordenaTitulo(const Midia &titulo1, const Midia &titulo2){
    if(titulo1.getTitutlo() < titulo2.getTitutlo()){
        return true;
    }
    return false;
}

pair<vector<string>, vector<string>> showFaixa(const CD &faixaCD, const DVD &faixaDVD){
    vector<string>auxCD;
    vector<string>auxDVD;

    map<string, string>guardaFaixaCD;
    map<string, string>guardaFaixaDVD;

    for(string i : faixaCD.getFaixa())
        guardaFaixaCD.insert({i, i});
    
    for(string i : faixaDVD.getFaixa())
        guardaFaixaDVD.insert({i, i});
    
    for(string i : faixaDVD.getFaixa()){
        if(guardaFaixaCD.find(i) == guardaFaixaCD.end()){
            auxDVD.push_back(i);

        }else{
            auxCD.push_back(i);
        }
    }
    auxDVD.push_back("-");

    for(string i : faixaCD.getFaixa()){
        if(guardaFaixaDVD.find(i) == guardaFaixaDVD.end()){
            auxDVD.push_back(i);
        }
    }
    
    pair<vector<string>, vector<string>>envia;
    envia.first = auxCD;
    envia.second = auxDVD;
    return envia;
}

pair<vector<string>, vector<string>> funcaoP(const vector<CD> &faixaCD, const vector<DVD> &faixaDVD, string tituloCD, string tituloDVD){
    CD cd1;
    DVD dvd1;

    for(CD cd : faixaCD){
        if(cd.getTitutlo() == tituloCD){
            cd1 = cd;
            break;
        }
    }

    for(DVD dvd : faixaDVD){
        if(dvd.getTitutlo() == tituloDVD){
            dvd1 = dvd;
            break;
        }
    }
    return showFaixa(cd1, dvd1);
}


//item F
pair<vector<CD>, vector<DVD>>showGenero(const string genero, vector<CD>&cd, vector<DVD>&dvd){
    vector<CD>auxCD;
    vector<DVD>auxDVD;

    for(CD i : cd)
        if(i.getGenero() == genero){
            auxCD.push_back(i);
        }
    
    for(DVD i : dvd)
        if(i.getGenero() == genero){
            auxDVD.push_back(i);
        }
    
    sort(auxCD.begin(), auxCD.end(), ordenaTitulo);
    sort(auxDVD.begin(), auxDVD.end(), ordenaTitulo);

    pair<vector<CD>, vector<DVD>> aux;
    aux.first = auxCD;
    aux.second = auxDVD;

    return aux;
}

//item G
vector<string> showKeyword(const vector<CD> &keyCD, const vector<DVD> &keyDVD){
    map<string,string> auxKey;
    vector<string> keyword;

    for(CD i : keyCD)
        for(string j : i.getKey()){
            auto it = auxKey.find(j);

            if(it == auxKey.end()){
                auxKey.insert({j,j});
                keyword.push_back(j);
            }
        }

    for(DVD i : keyDVD)
        for(string j : i.getKey()){
            auto it = auxKey.find(j);

            if(it == auxKey.end()){
                auxKey.insert({j,j});
                keyword.push_back(j);
            }
        }
    return keyword;
}

int main(){

    CD cd5(2, 3.0f, true, "David-Guetta", "7", {"Battle", "Flames"}, 2018, "eletronica", {"eletro-CD"});
    CD cd1(4, 2.0f, true, "Ariana-Grande", "Positions", {"positions", "Obvious"}, 2020, "pop", {"pop-CD"});
    CD cd3(2, 3.0f, true, "David-Guetta", "Guetta-Blaster", {"Money", "Stay"}, 2004, "eletronica", {"eletro-CD"});
    CD cd2(3, 3.0f, true, "Imagine-Dragons", "Origins", {"Natural", "Zero"}, 2018, "indie", {"indie-CD"});
    CD cd4(5, 3.0f, true, "David-Guetta", "Pop-Life", {"Love-Is-Gone", "Delirius"}, 2007, "eletronica", {"eletro-CD"});

    DVD dvd1({"mp4"}, {"16x9"}, "legenda-01", "Ariana-Grande", "Positions", {"positions", "teste1"}, 2021, "pop", {"pop-DVD"});
    DVD dvd4({"mp4"}, {"16x9"}, "legenda-04", "Imagine-Dragons", "Origins", {"Natural", "Zero"}, 2018, "indie", {"indie-DVD"});
    DVD dvd5({"mp4"}, {"16x9"}, "legenda-05", "Imagine-Dragons", "Mercury", {"My-Life", "Giantes"}, 2021, "indie", {"indie-DVD"});
    DVD dvd2({"mp4"}, {"16x9"}, "legenda-02", "Ariana-Grande", "Sweetener", {"Sweetener", "Successful"}, 2018, "pop", {"pop-DVD"});
    DVD dvd3({"mp4"}, {"16x9"}, "legenda-03", "David-Guetta", "Pop-Life", {"Love-Is-Gone", "Delirius"}, 2007, "eletronica", {"eletro-DVD"});

    //criando container para cada classe
    vector <CD> cds{cd1, cd2, cd3, cd4, cd5};
    vector <DVD> dvds{dvd1, dvd2, dvd3, dvd4, dvd5};
    vector <Midia> midias{cd1, cd2, cd3, cd4, cd5, dvd1, dvd2, dvd3, dvd4, dvd5};

    string artista, genero, tituloCD, tituloDVD;
    int ano = 0;
    int op = 0;
 

    //menu simples interativo
    cout << "Escolha uma opção:" << endl;
    cout << "1. Exibir o nome de todos os CDs de um artista." << endl;
    cout << "2. Exibir o nome de todos os DVDs de um artista." << endl;
    cout << "3. Exibir o nome de todas as Midias de um artista." << endl;
    cout << "4. Exibir todas as Midias a partir do ano informado." << endl;
    cout << "5. Exibir Midias em comum e independentes de um artista a partir do titulo do DVD e do CD informado." << endl;
    cout << "6. Exibir todas as Midias, separando CDs de DVDs a partir do genero informado." << endl;
    cout << "7. Exibir todas as keywords sem repeticao." << endl;

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
        cout << "Titulo disponiveis: " << endl;
        cout << "7, Positions, Guetta-Blaster, Origins, Pop-Life, Mercury, Sweetener" << endl;

        cin >> tituloCD >> tituloDVD;

        pair<vector<string>, vector<string>>questaoE = funcaoP(cds, dvds, tituloCD, tituloDVD);

        for(auto i : questaoE.first){
            cout << "Em comum: ";
            cout << i;
        }
        cout << endl;

        for(auto i : questaoE.second){
            cout << i << endl;
            
            if(i == "-"){
                cout << "Apenas em CD: ";
            }
        }
    
        cout << endl;

    }else if(op == 6){
        cout << "Generos Disponives:" << endl;
        cout << "eletronica, pop, indie" << endl;
        cout << "informe o genero:" << endl;
        cin >> genero;
        pair<vector<CD>, vector<DVD>> questaoE = showGenero(genero, cds, dvds);

        for(auto i : questaoE.first)
            cout << "CD: " << i.getTitutlo() << " ";
        cout << endl;
        cout << "=====================" << endl;
        
        for(auto i : questaoE.second)
            cout << "DVD: " << i.getTitutlo() << " ";
        cout << endl;
    
    }else if(op == 7){
        vector<string> keyword = showKeyword(cds, dvds);

        for(auto i : keyword)
            cout << i << " ";
        cout << endl;
    }else{
        cout << "Inválido" << endl;
    }
    return 0;
}