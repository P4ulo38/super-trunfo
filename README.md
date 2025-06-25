# 🃏 Super Trunfo: Cidades do Brasil 🇧🇷

[![Feito em C](https://img.shields.io/badge/feito%20em-C-blue?style=flat-square&logo=c)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Project Status](https://img.shields.io/badge/status-in%20progress-yellow?style=flat-square)](#)

Projeto em linguagem C que simula uma versão do jogo Super Trunfo, usando cartas com dados de cidades brasileiras. Agora com comparações automáticas, Super Poder calculado dinamicamente e lógica de batalha entre cartas!

**This C project simulates a Super Trunfo-style game, using cards representing Brazilian cities. Includes attribute comparisons, automatic “Super Power” calculation, and final scoring.**

---

## 🎯 Objetivo | Purpose

Permitir que o usuário cadastre duas cidades, visualize seus dados e compare atributos como população, área, PIB, etc.

**Allows the user to register two cities, view their data, and compare attributes like population, area, GDP, and more.**

---

## 💡 Funcionalidades | Features

- Entrada de dados via teclado  
- Cálculo de:
  - Densidade populacional  
  - PIB per capita  
  - Super Poder (todos os atributos + 1/densidade)  
- Comparação automática entre atributos  
- Impressão dos resultados no terminal  
- Sem uso de `if`, `else`, `for`, `while`  

**Data input via keyboard, automatic calculation of:**
- Population density  
- GDP per capita  
- Super Power (sum of numeric attributes plus inverse density)  
- Automatic comparison of attributes  
- No use of conditional or loop structures

---

## 🛠️ Como compilar | How to compile

```bash
gcc super_trunfo.c -o super_trunfo.exe
```

---

## ▶️ Como executar | How to run

```bash
.\super_trunfo.exe
```

---

## 🧪 Exemplo de uso | Example output

```
Digite o nome da cidade: Recife
Digite a população: 1653461
Digite a área (em km²): 218.84
Digite o PIB (em bilhões): 52
Digite o número de pontos turísticos: 5

--- Comparação de Cartas ---
População: Carta 1 venceu (1)
Área: Carta 1 venceu (0)
PIB: Carta 1 venceu (1)
Pontos Turísticos: Carta 1 venceu (1)
Densidade Populacional: Carta 1 venceu (0)
PIB per Capita: Carta 1 venceu (1)
Super Poder: Carta 1 venceu (1)
```

---

## 📁 Estrutura do projeto | Project Structure

```
super-trunfo/
├── super_trunfo.c
├── output/
│   └── super_trunfo.exe
├── .vscode/
│   ├── settings.json
│   └── tasks.json
└── README.md
```

---

## 👨‍💻 Autor | Author

**Paulo Augusto**  
📧 [pauloaugusto37.ti@gmail.com](mailto:pauloaugusto37.ti@gmail.com)  
🔗 [github.com/P4ulo38](https://github.com/P4ulo38)

---

## 🚀 Licença | License

Projeto de uso educacional e pessoal.  
**For educational and personal use.**
