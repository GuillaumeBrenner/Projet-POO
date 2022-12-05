#include "ServicePersonnel.h"

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
    String^ sql;

    this->personnel->setNom(nom);
    this->personnel->setPrenom(prenom);
    this->personnel->setDateEmbauche(dateEmbauche);
    this->personnel->setAdresse(adresse);
    this->personnel->setSuperieur(superieur);

    sql = this->personnel->INSERT();
    this->cad->actionRows(sql);
}
