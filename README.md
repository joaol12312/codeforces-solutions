# 🚀 Codeforces Solutions & Competitive Programming

![Language](https://img.shields.io/badge/Language-C%2B%2B17-blue.svg)
![Platform](https://img.shields.io/badge/Platform-Codeforces-red.svg)
![Status](https://img.shields.io/badge/Status-In%20Progress-brightgreen.svg)

Este repositório é dedicado ao armazenamento, organização e registro da minha evolução na **Programação Competitiva** no [Codeforces](https://codeforces.com/).

---

## 📌 Sobre o Repositório

O objetivo principal deste projeto é documentar a minha transição da base algorítmica sólida obtida em **Python** (durante a disciplina de Introdução à Programação no **CIn - UFPE**) para a implementação de alta performance utilizando **C++**.

Aqui você encontrará soluções para problemas de diversos níveis de dificuldade, focando não apenas em obter o "Accepted", mas também em aplicar boas práticas de I/O, otimização de tempo e espaço de memória.

### 🎯 Objetivos Pessoais
- [x] Dominar a sintaxe e as estruturas de dados nativas da **STL** (Standard Template Library) do C++.
- [ ] Desenvolver intuição para técnicas avançadas (Algoritmos Gulosos, Busca Binária, Soma de Prefixos e Programação Dinâmica).
- [ ] Subir gradualmente de rating no Codeforces (foco atual: problemas nível **1300–1500**).
- [ ] Manter um histórico organizado de *Upsolving*.

---

## 🛠️ Tecnologias e Ferramentas

- **Linguagem Principal:** C++ (C++17 / C++20)
- **Editor:** Visual Studio Code
- **Versionamento & Sincronização:** Git & GitHub Desktop

---

## ⚡ Boilerplate / Template Base

Para garantir execução rápida de I/O em maratonas de programação, utilizo a seguinte estrutura base para resolver os problemas:

```cpp
#include <bits/stdc++.h>
using namespace std;

void resolver() {
    // Lógica do problema aqui
}

int main() {
    // Otimização de Entrada e Saída (I/O)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t; // Descomente caso o problema possua múltiplos casos de teste
    while (t--) {
        resolver();
    }

    return 0;
}
