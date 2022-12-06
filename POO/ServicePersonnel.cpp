#include "ServicePersonnel.h"
using namespace Services;

Services::ServicePersonnel::ServicePersonnel()
{
    this->cad = gcnew Composants::Cad();
    this->personnel = gcnew Mappage::Personnel();
}

DataSet^ Services::ServicePersonnel::listePersonnels(String^ dataTableName)
{
    String^ sql;

    sql = this->personnel->SELECT();
    return this->cad->getRows(sql, dataTableName);
}


void Services::ServicePersonnel::addPersonnel(String^ nom, String^ prenom, DateTime dateEmbauche, String^ adresse, String^ superieur)
{
    int idPersonnel;
    String^ sql;

    this->personnel->setNom(nom);
    this->personnel->setPrenom(prenom);
    this->personnel->setDateEmbauche(dateEmbauche);
    this->personnel->setAdresse(adresse);
    this->personnel->setSuperieur(superieur);
    idPersonnel = this->databaseAccess->actionRowsID(this->personnel->INSERT());
    sql = this->personnel->INSERT();
    this->cad->actionRows(sql);
}
