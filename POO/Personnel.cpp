#include "Personnel.h"

Mappage::Personnel::Personnel()
{
    this->idPersonnel = -1;
    this->nom = "RIEN";
    this->prenom = "RIEN";
    this->dateEmbauche = DateTime::Now;
    this->adresse = "RIEN";
    this->superieur = "RIEN";
}

String^ Mappage::Personnel::SELECT()
{
    return "SELECT [idPersonnel] AS ID, [nom] AS NOM , [prenom] AS PRENOM, [dateEmbauche] AS 'DATE EMBAUCHE', [adresse] AS 'ADRESSE', [superieur] AS 'SUPERIEUR' " +
        "FROM[poo].[dbo].[Personnel]";
}

String^ Mappage::Personnel::SELECTBYID()
{
    return "SELECT [idPersonnel], [nom], [prenom], [dateNaissance], [dateEmbauche], [adresse], [superieur] FROM [poo].[dbo].[Client] WHERE idPersonnel = " + this->getId() + ";";
}

String^ Mappage::Personnel::INSERT()
{
    return "INSERT INTO Personnel (nom, prenom, dateEmbauche, adresse, superieur)" +
        "VALUES('" + this->nom + "', '" + this->prenom + "', '" + this->dateEmbauche + "', '" + this->adresse + "', '" + this->superieur + "');";
}

String^ Mappage::Personnel::UPDATE()
{
    return "UPDATE Personnel " +
        "SET nom = '" + this->nom + "', prenom = '" + this->prenom + "', dateEmbauche = '" + this->dateEmbauche + "', adresse = '" + this->adresse + "', superieur = '" + this->superieur + "' " +
        "WHERE (idPersonnel = " + this->getId() + ");";
}

String^ Mappage::Personnel::DELETE()
{
    return "DELETE FROM [poo].[dbo].[Client] WHERE idPersonnel = " + this->getId() + ";";
}

// SETTERS

void Mappage::Personnel::setId(int idPersonnel)
{
    if (idPersonnel > 0)
    {
        this->idPersonnel = idPersonnel;
    }
}

void Mappage::Personnel::setNom(String^ nom)
{
    if (!String::IsNullOrEmpty(nom))
    {
        this->nom = nom;
    }
}

void Mappage::Personnel::setPrenom(String^ prenom)
{
    if (!String::IsNullOrEmpty(prenom))
    {
        this->prenom = prenom;
    }
}

void Mappage::Personnel::setDateEmbauche(DateTime dateEmbauche)
{
    this->dateEmbauche = dateEmbauche;
}

void Mappage::Personnel::setAdresse(String^ adresse)
{
    this->adresse = adresse;
}

void Mappage::Personnel::setSuperieur(String^ superieur)
{
    this->superieur = superieur;
}

// GETTERS

int Mappage::Personnel::getId()
{
    return this->idPersonnel;
}

String^ Mappage::Personnel::getNom()
{
    return this->nom;
}

String^ Mappage::Personnel::getPrenom()
{
    return this->prenom;
}

DateTime Mappage::Personnel::getDateEmbauche()
{
    return this->dateEmbauche;
}

String^ Mappage::Personnel::getAdresse()
{
    return this->adresse;
}

String^ Mappage::Personnel::getSuperieur()
{
    return this->superieur;
}
