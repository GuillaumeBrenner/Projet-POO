#include "Produit.h"

Mappage::Produit::Produit()
{
    this->idProduit = -1;
    this->reference = "RIEN";
    this->designation = "RIEN";
    this->prixHt = -1;
    this->quantite = -1;
    this->seuil = -1;
    this->tauxTva = -1;
    this->categorie = "RIEN";
}

String^ Mappage::Produit::SELECT()
{
    return "SELECT [idProduit] AS ID, [reference] AS REFERENCE, [designation] AS DESIGNATION, [prixHt] AS 'PRIX HT', [quantite] AS QUANTITE, [seuil] AS SEUIL , [tauxTva] AS 'TAUX TVA', [categorie] AS CATEGORIE FROM [poo].[dbo].[Produit]";
}

String^ Mappage::Produit::SELECTCAT()
{
    return "SELECT libelle FROM [poo].[dbo].[Categorie]";
}

String^ Mappage::Produit::SELECTBYID()
{
    return "SELECT [idProduit], [reference], [designation], [prixHt], [quantite], [seuil], [tauxTva], [categorie] FROM [poo].[dbo].[Produit] WHERE idPersonnel = " + this->getId() + ";";
}

String^ Mappage::Produit::INSERT()
{
    return "INSERT INTO Produit(reference, designation, prixHt, quantite, seuil, tauxTva, categorie) VALUES('" + this->reference + "','" + this->designation + "', '" + this->prixHt + "', '" + this->quantite + "', '" + this->seuil + "',  '" + this->tauxTva + "',  '" + this->categorie + "');";
}

String^ Mappage::Produit::UPDATE()
{
    return "UPDATE Produit " +
        "SET reference = '" + this->getRef() + "', designation = '" + this->getDesignation() + "' " +
        "WHERE(idProduit = " + this->getId() + ");";
}

String^ Mappage::Produit::DELETE()
{
    return "DELETE FROM Produit WHERE(idProduit = " + this->getId() + ");";
}

// SETTERS

void Mappage::Produit::setId(int id)
{
    if (id > 0)
    {
        this->idProduit = id;
    }
}

void Mappage::Produit::setRef(String^ reference)
{
    if (!String::IsNullOrEmpty(reference))
    {
        this->reference = reference;
    }
}

void Mappage::Produit::setDesignation(String^ designation)
{
    if (!String::IsNullOrEmpty(designation))
    {
        this->designation = designation;
    }
}

void Mappage::Produit::setPrixHt(float prixHt)
{
    if (prixHt != 0)
    { 
        this->prixHt = prixHt;
    }
}

void Mappage::Produit::setQuantite(int quantite)
{
    if (quantite != 0)
    {
        this->quantite = quantite;
    }
}

void Mappage::Produit::setSeuil(int seuil)
{
    if (seuil != 0)
    {
        this->seuil = seuil;
    }
}

void Mappage::Produit::setTaux(float tauxTva)
{
    if (tauxTva != 0)
    {
        this->tauxTva = tauxTva;
    }
}

void Mappage::Produit::setCategorie(String^ categorie)
{
    if (!String::IsNullOrEmpty(categorie))
    {
        this->categorie = categorie;
    }
}

// GETTERS

int Mappage::Produit::getId()
{
    return this->idProduit;
}

String^ Mappage::Produit::getRef()
{
    return this->reference;
}

String^ Mappage::Produit::getDesignation()
{
    return this->designation;
}

float Mappage::Produit::getPrixHt()
{
    return this->prixHt;
}

int Mappage::Produit::getQuantite()
{
    return this->quantite;
}

int Mappage::Produit::getSeuil()
{
    return this->seuil;
}

float Mappage::Produit::getTaux()
{
    return this->tauxTva;
}

String^ Mappage::Produit::getCategorie()
{
    return this->categorie;
}