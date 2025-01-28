#include <stdio.h>

int main() {
   printf("Cartas Super Trunfo!\n");
   printf("Novo commit\n");
   class Cidade:
    def __init__(self, nome, populacao, area, pib, pontos_turisticos):
        self.nome = nome
        self.populacao = populacao
        self.area = area
        self.pib = pib
        self.pontos_turisticos = pontos_turisticos

    def exibir_dados(self):
        print(f"Nome: {self.nome}")
        print(f"População: {self.populacao}")
        print(f"Área: {self.area} km²")
        print(f"PIB: R$ {self.pib}")
        print(f"Número de Pontos Turísticos: {self.pontos_turisticos}")
        print("-" * 30)

def cadastrar_cidade():
    nome = input("Arapiraca: ")
    populacao = int(input("234.696: "))
    area = float(input("345,655km²: "))
    pib = float(input("25.248,44: "))
    pontos_turisticos = int(input("9: "))

    cidade = Cidade(nome, populacao, area, pib, pontos_turisticos)
    return cidade

def main():
    cidades = []

    while True:
        print("\n--- Cadastro de Cidades ---")
        cidade = cadastrar_cidade()
        cidades.append(cidade)

        continuar = input("Deseja cadastrar outra cidade? (s/n): ").strip().lower()
        if continuar != 's':
            break

    print("\n--- Dados das Cidades Cadastradas ---")
    for cidade in cidades:
        cidade.exibir_dados()

if __name__ == "__main__":
    main()
}
