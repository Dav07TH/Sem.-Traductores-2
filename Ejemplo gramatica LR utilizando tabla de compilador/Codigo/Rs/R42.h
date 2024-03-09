#include <iostream>
#include <sstream>
using namespace std;

class R42
{
private:
    
public:
    R42(/* args */);
    ~R42();

    int cantidadTokens = 1;
    string forma = "R42 <Bloque>";
    string id = "R42";
    int tipo = 44;
    string tipoS = "<SentenciaBloque>";

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

R42::R42(/* args */)
{
}

R42::~R42()
{
    
}

int R42::getCantidadTokens()
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
void R42::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R42::getForma()
{
    return forma;
}
void R42::setForma(string& value)
{
    forma = value;
}

string R42:: getID()
{
    return id;
}
void R42::setID(string& value)
{
    id = value;
}
int R42::getTipo()
{
    return tipo;
}
void R42::setTipo(int value)
{
    tipo = value;
}
string R42::getTipoS()
{
    return tipoS;
}
void R42::setTipoS(string& value)
{
    tipoS = value;
}

string R42::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}