#include "Client.h"


Mappage::Client::Client()
{
    this->idClient = -1;
    this->nom = "RIEN";
    this->prenom = "RIEN";
}

String^ Mappage::Client::SELECT()
{
    return "SELECT [numClient] AS ID, [nomC] AS NOM , [prenomC] AS PRENOM, [dateNaissance] AS 'DATE DE NAISSANCE', [datePreAchat] AS 'DATE PREMIER ACHAT' FROM[poo].[dbo].[Client]";
}

String^ Mappage::Client::INSERT()
{
    return "INSERT INTO Client(nomC, prenomC) VALUES('" + this->nom + "','" + this->prenom + "');";
}

String^ Mappage::Client::UPDATE()
{
    return "UPDATE Client " +
        "SET nom = '" + this->getNom() + "', prenom = '" + this->getPrenom() + "' " +
        "WHERE(id_personne = " + this->getId() + ");";
}

String^ Mappage::Client::DELETE()
{
    return "DELETE FROM Client " +
        "WHERE(id_personne = " + this->getId() + ");";
}

// SETTERS

void Mappage::Client::setId(int id)
{
    if (id > 0)
    {
        this->idClient = id;
    }
}

void Mappage::Client::setNom(String^ nom)
{
    if (!System::String::IsNullOrEmpty(nom))
    {
        this->nom = nom;
    }
}

void Mappage::Client::setPrenom(String^ prenom)
{
    if (!System::String::IsNullOrEmpty(prenom))
    {
        this->prenom = prenom;
    }
}

// GETTERS

int Mappage::Client::getId()
{
    return this->idClient;
}

String^ Mappage::Client::getNom()
{
    return this->nom;
}

String^ Mappage::Client::getPrenom()
{
    return this->prenom;
}