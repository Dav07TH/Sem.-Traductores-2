#include <iostream>
#include <sstream>
using namespace std;

class R27
{
private:
    
public:
    R27(/* args */);
    ~R27();

    int cantidadTokens = 2;
    string forma = "R27 else <SentenciaBloque>";
    string id = "R27";
    int tipo = 37;
    string tipoS = "<Otro>";

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

R27::R27(/* args */)
{
}

R27::~R27()
{
    
}

int R27::getCantidadTokens()
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
void R27::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R27::getForma()
{
    return forma;
}
void R27::setForma(string& value)
{
    forma = value;
}

string R27:: getID()
{
    return id;
}
void R27::setID(string& value)
{
    id = value;
}
int R27::getTipo()
{
    return tipo;
}
void R27::setTipo(int value)
{
    tipo = value;
}
string R27::getTipoS()
{
    return tipoS;
}
void R27::setTipoS(string& value)
{
    tipoS = value;
}

string R27::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}