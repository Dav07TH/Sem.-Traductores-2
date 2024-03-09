#include <iostream>
#include <sstream>
using namespace std;

class R22
{
private:
    
public:
    R22(/* args */);
    ~R22();

    int cantidadTokens = 6;
    string forma = "R22 if ( <Expresion> ) <SentenciaBloque> <Otro>";
    string id = "R22";
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

R22::R22(/* args */)
{
}

R22::~R22()
{
    
}

int R22::getCantidadTokens()
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
void R22::setCantidadTokens(int value)
{
    cantidadTokens = value;
}
string R22::getForma()
{
    return forma;
}
void R22::setForma(string& value)
{
    forma = value;
}

string R22:: getID()
{
    return id;
}
void R22::setID(string& value)
{
    id = value;
}
int R22::getTipo()
{
    return tipo;
}
void R22::setTipo(int value)
{
    tipo = value;
}
string R22::getTipoS()
{
    return tipoS;
}
void R22::setTipoS(string& value)
{
    tipoS = value;
}

string R22::toString()
{
    stringstream ss;
    ss<<"Cantidad tokens: "<<cantidadTokens<<"\nForma: "<<forma<<endl;
    return ss.str();
}