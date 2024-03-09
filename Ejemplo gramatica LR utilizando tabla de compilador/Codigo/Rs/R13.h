#include <iostream>
#include <sstream>
using namespace std;

class R13
{
private:
    
public:
    R13(/* args */);
    ~R13();

    int cantidadTokens = 4;
    string forma = "R13 , tipo identificador <ListaParam>";
    string id = "R13";
    int tipo = 31;
    string tipoS = "<ListaParam>";

    int getCantidadTokens();
    void setCantidadTokens(int value);
    string getForma();
    void setForma(string& value);
    string getID();
    void setID(string& value);
    int getTipo();
    void setTipo(int value);
    string getTipoS();
    void setTipoS(string& value);

    string toString();
};

R13::R13(/* args */)
{
}

R13::~R13()
{
    
}

int R13::getCantidadTokens()
{
    /*cantidadTokens = 0;
    int largo = forma.length();
    for(int i = 0; i<largo; i++)
    {
        if(forma[i] == ' ')
            cantidadTokens++;
    }*/
    return cantidadTokens;
}
void R13::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R13::getForma()
{
    return forma;
}
void R13::setForma(string& value)
{
    forma = value;
}

string R13:: getID()
{
    return id;
}
void R13::setID(string& value)
{
    id = value;
}
int R13::getTipo()
{
    return tipo;
}
void R13::setTipo(int value)
{
    tipo = value;
}
string R13::getTipoS()
{
    return tipoS;
}
void R13::setTipoS(string& value)
{
    tipoS = value;
}

string R13::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}