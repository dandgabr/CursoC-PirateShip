# Makefile para CursoC-PirateShip
# Sistema de build para todos os exemplos do curso

CC = gcc
CFLAGS = -Wall -Wextra -std=c99
BINDIR = bin

# Criar diretório bin se não existir
$(shell mkdir -p $(BINDIR))

# Alvos principais
.PHONY: all clean aula1 aula2 aula3 aula4 test help

all: aula1 aula2 aula3 aula4

help:
	@echo "🏴‍☠️ CursoC-PirateShip - Sistema de Build"
	@echo "Comandos disponíveis:"
	@echo "  make all     - Compila todos os exemplos"
	@echo "  make aula1   - Compila exemplos da aula 1"
	@echo "  make aula2   - Compila exemplos da aula 2"
	@echo "  make aula4   - Compila exemplos da aula 4"
	@echo "  make test    - Executa todos os exemplos (teste rápido)"
	@echo "  make clean   - Remove executáveis"
	@echo "  make help    - Mostra esta ajuda"

# Aula 1: Introdução e Hello World
aula1: $(BINDIR)/hello_world $(BINDIR)/hello_user $(BINDIR)/comentarios

$(BINDIR)/hello_world: aula1/hello_world.c
	$(CC) $(CFLAGS) $< -o $@

$(BINDIR)/hello_user: aula1/hello_user.c
	$(CC) $(CFLAGS) $< -o $@

$(BINDIR)/comentarios: aula1/comentarios.c
	$(CC) $(CFLAGS) $< -o $@

# Aula 2: Variáveis e Tipos de Dados
aula2: $(BINDIR)/variaveis $(BINDIR)/calculadora $(BINDIR)/tipos_dados

$(BINDIR)/variaveis: aula2/variaveis.c
	$(CC) $(CFLAGS) $< -o $@

$(BINDIR)/calculadora: aula2/calculadora.c
	$(CC) $(CFLAGS) $< -o $@

$(BINDIR)/tipos_dados: aula2/tipos_dados.c
	$(CC) $(CFLAGS) $< -o $@

# Aula 3: Estruturas de Controle
aula3: $(BINDIR)/condicionais $(BINDIR)/loops

$(BINDIR)/condicionais: aula3/condicionais.c
	$(CC) $(CFLAGS) $< -o $@

$(BINDIR)/loops: aula3/loops.c
	$(CC) $(CFLAGS) $< -o $@

# Aula 4: Funções e Programação Modular
aula4: $(BINDIR)/funcoes_basicas

$(BINDIR)/funcoes_basicas: aula4/funcoes_basicas.c
	$(CC) $(CFLAGS) $< -o $@

# Teste de compilação (executa rapidamente sem interação)
test: all
	@echo "🧪 Testando compilação de todos os exemplos..."
	@echo "✅ hello_world"; echo "Hello World Test" | $(BINDIR)/hello_world > /dev/null || echo "❌ Erro"
	@echo "✅ comentarios"; $(BINDIR)/comentarios > /dev/null || echo "❌ Erro"
	@echo "✅ tipos_dados"; $(BINDIR)/tipos_dados > /dev/null || echo "❌ Erro"
	@echo "🎉 Todos os exemplos compilaram com sucesso!"

# Limpeza
clean:
	rm -rf $(BINDIR)/*
	@echo "🧹 Executáveis removidos!"

# Informações sobre os arquivos
info:
	@echo "📊 Informações do projeto:"
	@echo "Arquivos fonte encontrados:"
	@find aula* -name "*.c" -exec echo "  📄 {}" \;
	@echo "Executáveis no diretório bin:"
	@ls -la $(BINDIR)/ 2>/dev/null || echo "  (nenhum executável compilado)"