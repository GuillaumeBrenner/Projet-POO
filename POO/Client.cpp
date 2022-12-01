#include "Client.h"


Mappage::Client::Client()
{
    this->idClient = -1;
    this->nom = "RIEN";
    this->prenom = "RIEN";
}

String^ Mappage::Client::SELECT()
{
    return "SELECT [numClient], [nomC], [prenomC] FROM [poo].[dbo].[Client]";
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

void Mappage::Client::setId(int id)
{
    if (id > 0)
    {
        this->idClient = id;
    }
}

void Mappage::Client::setNom(System::String^ nom)
{
    if (!System::String::IsNullOrEmpty(nom))
    {
        this->nom = nom;
    }
}

void Mappage::Client::setPrenom(System::String^ prenom)
{
    if (!System::String::IsNullOrEmpty(prenom))
    {
        this->prenom = prenom;
    }
}

int Mappage::Client::getId()
{
    return this->idClient;
}

System::String^ Mappage::Client::getNom()
{
    return this->nom;
}

System::String^ Mappage::Client::getPrenom()
{
    return this->prenom;
}