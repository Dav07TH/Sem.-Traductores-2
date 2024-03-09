#include <iostream>
#include <sstream>
using namespace std;

class R24
{
private:
    
public:
    R24(/* args */);
    ~R24();

    int cantidadTokens = 3;
    string forma = "R24 return <ValorRegresa> ;";
    string id = "R24";
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

R24::R24(/* args */)
{
}

R24::~R24()
{
    
}

int R24::getCantidadTokens()
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
void R24::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R24::getForma()
{
    return forma;
}
void R24::setForma(string& value)
{
    forma = value;
}

string R24:: getID()
{
    return id;
}
void R24::setID(string& value)
{
    id = value;
}
int R24::getTipo()
{
    return tipo;
}
void R24::setTipo(int value)
{
    tipo = value;
}
string R24::getTipoS()
{
    return tipoS;
}
void R24::setTipoS(string& value)
{
    tipoS = value;
}

string R24::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}