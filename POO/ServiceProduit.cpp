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
void Services::ServiceProduit::addProduit(String^ reference, String^ designation, float prixHt, int quantite, int seuil, float tauxTva, array<String^>^ categorie)
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

