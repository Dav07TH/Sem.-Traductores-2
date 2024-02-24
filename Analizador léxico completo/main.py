import re

# Expresiones regulares para los símbolos léxicos
tokens = [
    ('ENTERO', r'\d+', 1),
    ('REAL', r'\d+\.\d+', 2),
    ('OP_SUMA', r'[+-]', 5),
    ('OP_MUL', r'[*/]', 6),
    ('OP_RELAC', r'[<>]=?|!=|==', 7),
    ('OP_OR', r'\|\|', 8),
    ('OP_AND', r'&&', 9),
    ('OP_NOT', r'!', 10),
    ('OP_IGUALDAD', r'=', 11),
    ('PUNTO_COMA', r';', 12),
    ('COMA', r',', 13),
    ('PARENTESIS_IZQ', r'\(', 14),
    ('PARENTESIS_DER', r'\)', 15),
    ('LLAVE_IZQ', r'{', 16),
    ('LLAVE_DER', r'}', 17),
    ('IF', r'if', 19),
    ('WHILE', r'while', 20),
    ('RETURN', r'return', 21),
    ('ELSE', r'else', 22),
    ('IDENTIFICADOR', r'[a-zA-Z][a-zA-Z0-9]*', 0),
    ('TIPO', r'int|float', 4),
    ('ESPACIO', r'\s+', -2),  # Token para espacios en blanco
    ('FIN_DE_ARCHIVO', r'\$', -1)
]

# Función para analizar el código fuente
def analizador_lexico(codigo):
    tokens_encontrados = []
    while codigo:
        encontrado = False
        for token in tokens:
            nombre_token, patron, tipo = token
            regex = re.compile(patron)
            match = regex.match(codigo)
            if match:
                valor = match.group(0)
                if nombre_token != 'ESPACIO':
                    tokens_encontrados.append((valor, nombre_token, tipo))
                codigo = codigo[len(valor):].lstrip()
                encontrado = True
                break
        if not encontrado:
            print("Error: Token no reconocido")
            break
    
    return tokens_encontrados

# Código de prueba con espacios entre tokens
codigo_prueba = "if ( x < 10 ) { return x ; } else { return 0 ; }"
tokens_encontrados = analizador_lexico(codigo_prueba)

# Generar reporte con espacios entre tokens
print("Reporte de Tokens con Espacios entre Tokens:")
print("--------------------------------------------")
for token in tokens_encontrados:
    print(f"Valor: {token[0]}, Token: {token[1]}, Tipo: {token[2]}")