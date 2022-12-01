#include "ServiceClient.h"


Services::ServiceClient::ServiceClient(void)
{
    this->cad = gcnew Composants::Cad();
    this->client = gcnew Mappage::Client();
}

DataSet^ Services::ServiceClient::listeClients(System::String^ dataTableName)
{
    System::String^ sql;

    sql = this->client->SELECT();
    return this->cad->getRows(sql, dataTableName);
}

