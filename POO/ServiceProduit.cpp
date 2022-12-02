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
