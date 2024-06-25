#include <iostream>
using namespace std;

class Dono{
    string nome;
    int cpf;
};

class Animal{
    string nome;
    int idade;
    string especie;
    string raca;
    Dono dono;
};

class Ficha{
    Animal animal;
    int ID;
    string diagnostico;
};

class Atendimento{
    Ficha ficha;
    int data;
    string nomevet;
    string tipo;
};

class Consulta: public Atendimento{
    
};
class Vacinacao: public Atendimento{
    string vacina;
};
class Cirurgia: public Atendimento{
    string procedimentos;
};

class Veterinario{
    string nome;
    int registro;
    
    void EditaFicha(){
        cout << "editar ficha" << endl;
    }
};

class Contrato{
    int duracao;
    Veterinario vete;
};

class Clinica{
    string nome;
    Atendimento* atends;
    Contrato* contratos;
    int cnpj;
    
    void criarAtendimentos(){
        cout << "criacao de atendimentos" << endl;
    }
    void iniciarcontrato(){
        cout << "contrato iniciado" << endl;
    }
};

int main()
{
    Dono dono;
    dono.nome = "wagnao";
    dono.cpf = 874325682;
    
    Animal anim;
    anim.nome = "caramelo";
    anim.idade = 8;
    anim.especie = "cachorro";
    anim.raca = "vira-lata";
    
    Veterinario vete;
    vete.nome = "jp";
    vete.registro = 1234;
    vete.EditaFicha();
    
    Clinica clin;
    clin.nome = "MatchPet";
    clin.criarAtendimentos()
    

    return 0;
}