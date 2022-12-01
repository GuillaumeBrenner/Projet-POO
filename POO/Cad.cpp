#include "Cad.h"

using namespace Composants;

Cad::Cad(void)
{

	this->connectionInformation = "Data Source=HK;Initial Catalog=poo;User ID=HK;Password=azerty";

    this->sqlRequest = "RIEN";

    this->sqlConnection = gcnew System::Data::SqlClient::SqlConnection(this->connectionInformation);
    this->sqlCommand = gcnew System::Data::SqlClient::SqlCommand(this->sqlRequest, this->sqlConnection);
    this->sqlAdapter = gcnew System::Data::SqlClient::SqlDataAdapter();
    this->dataSet = gcnew System::Data::DataSet();


    this->sqlCommand->CommandType = System::Data::CommandType::Text;
}

int Cad::actionRowsId(String^ request)
{
    int id;
    this->setSQL(request);
    this->sqlCommand->CommandText = this->sqlRequest;
    this->sqlConnection->Open();
    id = Convert::ToInt32(this->sqlCommand->ExecuteScalar());
    this->sqlConnection->Close();
    return id;
}

void Cad::actionRows(String^ request)
{
    this->sqlRequest = sqlRequest;
    this->sqlCommand->CommandText = this->sqlRequest;
    this->sqlAdapter->SelectCommand = this->sqlCommand;
    this->sqlConnection->Open();
    this->sqlCommand->ExecuteNonQuery();
    this->sqlConnection->Close();
}

System::Data::DataSet^ Cad::getRows(System::String^ sqlRequest, System::String^ dataTableName)
{
    //this->setSQL(request);
    this->dataSet->Clear();
    this->sqlRequest = sqlRequest;
    this->sqlAdapter->SelectCommand = this->sqlCommand;
    this->sqlCommand->CommandText = this->sqlRequest;
    this->sqlAdapter->Fill(this->dataSet, dataTableName);
    return this->dataSet;
}

void Cad::setSQL(String^ request)
{
    if (String::IsNullOrEmpty(request) || request == "RIEN")
    {
        this->sqlRequest = "RIEN";
    }
    else
    {
        this->sqlRequest = request;
    }
}

Cad::~Cad(void)
{
    delete this->connectionInformation;
    delete this->sqlRequest;
    delete this->sqlConnection;
    delete this->sqlAdapter;
    delete this->dataSet;
}