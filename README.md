# 🃏 Super Trunfo: Cidades do Brasil 🇧🇷

[![Feito em C](https://img.shields.io/badge/feito%20em-C-blue?style=flat-square&logo=c)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Repositório público](https://img.shields.io/github/public-repo-status/P4ulo38/super-trunfo?style=flat-square)](https://github.com/P4ulo38/super-trunfo)
[![Status do Projeto](https://img.shields.io/badge/status-em%20desenvolvimento-yellow?style=flat-square)](#)

Projeto em linguagem C que simula uma versão do jogo Super Trunfo, com cartas representando cidades brasileiras. O objetivo é comparar dados como população, área territorial e PIB, promovendo o raciocínio lógico e a prática de variáveis, entrada de dados e cálculos matemáticos simples.

---

## 🎯 Objetivo

Permitir que o usuário cadastre duas cidades e visualize seus atributos organizadamente. O programa realiza cálculos de densidade populacional e PIB per capita de forma automática, sem uso de estruturas de repetição ou decisão.

---

## 💡 Funcionalidades

- Entrada de dados via teclado  
- Armazenamento em variáveis  
- Cálculo automático de:
  - **Densidade populacional**
  - **PIB per capita**
- Impressão formatada dos dados  
- Código estruturado, sem `if`, `else`, `for`, `while`

---

## 🛠️ Como compilar

Use o GCC (MinGW ou outro compilador C) via terminal:

```bash
gcc super_trunfo.c -o super_trunfo.exe
```

Se quiser salvar o executável em uma pasta de saída:

```bash
gcc super_trunfo.c -o output/super_trunfo.exe
```

---

## ▶️ Como executar

No Windows (via PowerShell, Prompt de Comando ou terminal do VS Code):

```bash
.\super_trunfo.exe
```

Ou, se estiver na pasta `output`:

```bash
.\output\super_trunfo.exe
```

---

## 🧪 Exemplo de uso

```
Digite o nome da cidade: Recife
Digite a população: 1653461
Digite a área (em km²): 218.84
Digite o PIB (em milhões): 52000

[Carta 1] Recife
População: 1.653.461
Área: 218.84 km²
Densidade: 7555.1 hab/km²
PIB per capita: R$ 31,446.76
```

---

## 📁 Estrutura do projeto

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

## 👨‍💻 Autor

**Paulo Augusto**  
📧 [pauloaugusto37.ti@gmail.com](mailto:pauloaugusto37.ti@gmail.com)  
🔗 [github.com/P4ulo38](https://github.com/P4ulo38)

---

## 🚀 Licença

Este projeto é de uso educacional e pessoal. Fique à vontade para clonar, adaptar e compartilhar!
