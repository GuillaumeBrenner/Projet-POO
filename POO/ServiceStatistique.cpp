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
DataSet^ Services::ServiceStatistique::PanierMoyen(String^ dataTableName)
{
    System::String^ sql;

    sql = this->statistique->PanierMoyen();
    return this->cad->getRows(sql, dataTableName);
}
DataSet^ Services::ServiceStatistique::SeuilApp(String^ dataTableName)
{
    System::String^ sql;

    sql = this->statistique->SeuilApp();
    return this->cad->getRows(sql, dataTableName);
}
DataSet^ Services::ServiceStatistique::MontantTotal(String^ dataTableName)
{
    System::String^ sql;

    sql = this->statistique->MontantTotal();
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

    sql = this->statistique->PlusVendus();
    return this->cad->getRows(sql, dataTableName);
}
DataSet^ Services::ServiceStatistique::ValCom(String^ dataTableName)
{
    System::String^ sql;

    sql = this->statistique->ValCom();
    return this->cad->getRows(sql, dataTableName);
}
DataSet^ Services::ServiceStatistique::ValAchat(String^ dataTableName)
{
    System::String^ sql;

    sql = this->statistique->ValAchat();
    return this->cad->getRows(sql, dataTableName);
}
DataSet^ Services::ServiceStatistique::Simulation(String^ dataTableName)
{
    System::String^ sql;

    sql = this->statistique->Simulation();
    return this->cad->getRows(sql, dataTableName);
}