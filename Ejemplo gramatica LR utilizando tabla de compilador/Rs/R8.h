#include <iostream>
#include <sstream>
using namespace std;

class R8
{
private:
    
public:
    R8(/* args */);
    ~R8();

    int cantidadTokens = 3;
    string forma = "R8 , identificador <ListaVar> ";
    string id = "R8";
    int tipo = 28;
    string tipoS = "<ListaVar>";

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

R8::R8(/* args */)
{
}

R8::~R8()
{
    
}

int R8::getCantidadTokens()
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
void R8::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R8::getForma()
{
    return forma;
}
void R8::setForma(string& value)
{
    forma = value;
}

string R8:: getID()
{
    return id;
}
void R8::setID(string& value)
{
    id = value;
}
int R8::getTipo()
{
    return tipo;
}
void R8::setTipo(int value)
{
    tipo = value;
}
string R8::getTipoS()
{
    return tipoS;
}
void R8::setTipoS(string& value)
{
    tipoS = value;
}

string R8::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}