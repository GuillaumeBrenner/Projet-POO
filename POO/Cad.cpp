#include "Cad.h"

using namespace Composants;

Cad::Cad()
{
	this->sqlRequest = "RIEN";

	this->connectionInformation = "Data Source=HK;Initial Catalog=poo;User ID=HK;Password=azerty";

    this->sqlConnection = gcnew SqlConnection(this->connectionInformation);
    this->sqlCommand = gcnew SqlCommand(this->sqlRequest, this->sqlConnection);
    this->sqlCommand->CommandType = CommandType::Text;
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
    this->setSQL(request);
    this->sqlCommand->CommandText = this->sqlRequest;
    this->sqlConnection->Open();
    this->sqlCommand->ExecuteNonQuery();
    this->sqlConnection->Close();
}

DataSet^ Cad::getRows(String^ request, String^ dataTableName)
{
    this->setSQL(request);
    this->sqlAdapter = gcnew SqlDataAdapter(this->sqlCommand);
    this->sqlCommand->CommandText = this->sqlRequest;
    this->dataSet = gcnew DataSet();
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