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

