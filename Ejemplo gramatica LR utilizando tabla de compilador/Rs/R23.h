#include <iostream>
#include <sstream>
using namespace std;

class R23
{
private:
    
public:
    R23(/* args */);
    ~R23();

    int cantidadTokens = 5;
    string forma = "R23 while ( <Expresion> ) <Bloque>";
    string id = "R23";
    int tipo = 36;
    string tipoS = "<Sentencia>";

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

R23::R23(/* args */)
{
}

R23::~R23()
{
    
}

int R23::getCantidadTokens()
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
void R23::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R23::getForma()
{
    return forma;
}
void R23::setForma(string& value)
{
    forma = value;
}

string R23:: getID()
{
    return id;
}
void R23::setID(string& value)
{
    id = value;
}
int R23::getTipo()
{
    return tipo;
}
void R23::setTipo(int value)
{
    tipo = value;
}
string R23::getTipoS()
{
    return tipoS;
}
void R23::setTipoS(string& value)
{
    tipoS = value;
}

string R23::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}