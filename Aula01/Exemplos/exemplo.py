"""
Exemplo simples: demonstra os tipos das variáveis e o resultado do operador
de divisão em Python 3.

Detalhes:
- Em Python 3, o operador "/" realiza "true division" e sempre retorna float,
  mesmo quando os operandos são inteiros.
- A função embutida `type()` retorna o tipo do objeto passado.

Saída esperada (pode variar conforme o ambiente, mas o essencial é o tipo):
>>> a = 10
>>> b = 3
>>> type(a)
<class 'int'>
>>> type(b)
<class 'int'>
>>> type(a / b)
<class 'float'>
"""

# Dois inteiros
a = 10
b = 3

# Mostra o tipo de cada variável (ambas são int)
print(type(a))
print(type(b))

# Mostra o tipo do resultado de a / b. Em Python 3, 
# a divisão com "/" retorna float mesmo entre inteiros.
print(type(a / b))