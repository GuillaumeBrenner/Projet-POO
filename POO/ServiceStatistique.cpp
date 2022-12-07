#include "ServiceStatistique.h"

Services::ServiceStatistique::ServiceStatistique()
{
    this->cad = gcnew Composants::Cad();
    this->statistique = gcnew Mappage::Statistique();
}

DataSet^ Services::ServiceStatistique::ChiffreAff(String^ dataTableName)
{
    System::String^ sql;

    sql = this->statistique->ChiffreAff();
    return this->cad->getRows(sql, dataTableName);
}