<p align="center">
  <h1>Tarea: Mini generador léxico</h1>
</p>

**Universidad de Guadalajara Centro Universitario de Ciencias e Ingenierías**

![](logo.png)

Departamento de Ciencias Computacionales

SEMINARIO DE SOLUCION DE PROBLEMAS DE TRADUCTORES DE LENGUAJES II

Profesor: Michel Emanuel López Franco

Alumno: Torres Hernández David

Código: 215428899	     	Carrera: INCO		Sección: D02		Fecha: 24/02/2024



### **Introducción:**

Genera un pequeño analizador léxico, que identifique los siguientes tokens (identificadores y números reales) construidos de la siguiente manera.

identificadores = letra(letra|digito)\*
Real = entero.entero+


En el siguiente link encontraras un código realizado en c++, que podrán utilizar como referencia. El proyecto fue realizado en visual estudio.

<https://github.com/TraductoresLenguajes2/Traductores/tree/master/Modulo1/Compilador>

### **Desarrollo:**

Codigo:
```python
import re

def lexer(input_string):
    tokens = []
    keywords = ['if', 'else', 'while', 'for', 'int', 'float', 'char', 'return']  # Lista de palabras clave
    operators = ['+', '-', '*', '/', '=', '<', '>', '==', '!=']  # Lista de operadores

    # Expresiones regulares para identificar tokens
    identifier_pattern = r'[a-zA-Z][a-zA-Z0-9]*'  # Identificador: letra(letra|digito)*
    real_pattern = r'\d+\.\d+'  # Número real: entero.entero+

    # Encuentra todos los identificadores
    identifiers = re.findall(identifier_pattern, input_string)
    for identifier in identifiers:
        if identifier in keywords:
            tokens.append(("KEYWORD", identifier))
        else:
            tokens.append(("IDENTIFIER", identifier))

    # Encuentra todos los números reales
    real_numbers = re.findall(real_pattern, input_string)
    for real_number in real_numbers:
        tokens.append(("REAL", real_number))

    return tokens

# Ejemplo de uso
input_text = "if x < 10.5 else y = 20.7"
tokens = lexer(input_text)
print(tokens)
```
Capturas:

![](captura.png)

GitHub link: <https://github.com/Dav07TH/Sem.-Traductores-2/tree/0c949d1cc4f8a2f0d94ad8c6cbe1f6a10e11d501/Mini%20generador%20l%C3%A9xico> 

