#include <iostream>
#include <sstream>
using namespace std;

class R21
{
private:
    
public:
    R21(/* args */);
    ~R21();

    int cantidadTokens = 4;
    string forma = "R21 identificador = <Expresion> ;";//Vacío
    string id = "R21";
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

R21::R21(/* args */)
{
}

R21::~R21()
{
    
}

int R21::getCantidadTokens()
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
void R21::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R21::getForma()
{
    return forma;
}
void R21::setForma(string& value)
{
    forma = value;
}

string R21:: getID()
{
    return id;
}
void R21::setID(string& value)
{
    id = value;
}
int R21::getTipo()
{
    return tipo;
}
void R21::setTipo(int value)
{
    tipo = value;
}
string R21::getTipoS()
{
    return tipoS;
}
void R21::setTipoS(string& value)
{
    tipoS = value;
}

string R21::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}