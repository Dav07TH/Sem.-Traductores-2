#include <iostream>
#include <sstream>
using namespace std;

class R25
{
private:
    
public:
    R25(/* args */);
    ~R25();

    int cantidadTokens = 2;
    string forma = "R25 <LlamadaFunc> ;";
    string id = "R25";
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

R25::R25(/* args */)
{
}

R25::~R25()
{
    
}

int R25::getCantidadTokens()
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
void R25::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R25::getForma()
{
    return forma;
}
void R25::setForma(string& value)
{
    forma = value;
}

string R25:: getID()
{
    return id;
}
void R25::setID(string& value)
{
    id = value;
}
int R25::getTipo()
{
    return tipo;
}
void R25::setTipo(int value)
{
    tipo = value;
}
string R25::getTipoS()
{
    return tipoS;
}
void R25::setTipoS(string& value)
{
    tipoS = value;
}

string R25::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}