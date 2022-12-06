#include "ServiceProduit.h"

Services::ServiceProduit::ServiceProduit()
{
    this->cad = gcnew Composants::Cad();
    this->produit = gcnew Mappage::Produit();
}

DataSet^ Services::ServiceProduit::listeProduits(String^ dataTableName)
{
    System::String^ sql;

    sql = this->produit->SELECT();
    return this->cad->getRows(sql, dataTableName);
}

DataSet^ Services::ServiceProduit::listeCategorie(String^ dataTableName)
{
    System::String^ sql;

    sql = this->produit->SELECTCAT();
    return this->cad->getRows(sql, dataTableName);
}

void Services::ServiceProduit::addProduit(String^ reference, String^ designation, float prixHt, int quantite, int seuil, float tauxTva, String^ categorie)
{
    String^ sql;

    this->produit->setRef(reference);
    this->produit->setDesignation(designation);
    this->produit->setPrixHt(prixHt);
    this->produit->setQuantite(quantite);
    this->produit->setSeuil(seuil);
    this->produit->setTaux(tauxTva);
    this->produit->setCategorie(categorie);

    sql = this->produit->INSERT();
    this->cad->actionRows(sql);
}

void Services::ServiceProduit::deleteProduit(int idProduit)
{
    this->produit->setId(idProduit);
    String^ sql;

    this->produit->getId();

    sql = this->produit->DELETE();
    this->cad->actionRows(sql);
}

DataSet^ Services::ServiceProduit::ProduitById(int idProduit, String^ dataTableName)
{

    String^ sql;
    sql = this->produit->SELECTBYID();

    //this->client->setId(numClient);
    //this->dataSet = this->cad->getRows(sql, dataTableName);
   // return this->dataSet;

    //this->cad->actionRowsId(sql);
    return this->cad->getRows(sql, dataTableName);
}

