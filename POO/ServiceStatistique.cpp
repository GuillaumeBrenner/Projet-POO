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

DataSet^ Services::ServiceStatistique::ValeurCommerciale(String^ dataTableName)
{
    System::String^ sql;

    sql = this->statistique->ValeurCommerciale();
    return this->cad->getRows(sql, dataTableName);
}

DataSet^ Services::ServiceStatistique::ValeurAchat(String^ dataTableName)
{
    System::String^ sql;

    sql = this->statistique->ValeurAchat();
    return this->cad->getRows(sql, dataTableName);
}

DataSet^ Services::ServiceStatistique::SousSeuil(String^ dataTableName)
{
    System::String^ sql;

    sql = this->statistique->SousSeuil();
    return this->cad->getRows(sql, dataTableName);
}

DataSet^ Services::ServiceStatistique::PlusVendus(String^ dataTableName)
{
    System::String^ sql;

    sql = this->statistique->PlusVendus();
    return this->cad->getRows(sql, dataTableName);
}

DataSet^ Services::ServiceStatistique::MoinsVendus(String^ dataTableName)
{
    System::String^ sql;

    sql = this->statistique->MoinsVendus();
    return this->cad->getRows(sql, dataTableName);
}


