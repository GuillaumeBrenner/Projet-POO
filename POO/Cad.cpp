#include "Cad.h"

using namespace Composants;

Composants::Cad::Cad(void)
{

	this->connectionInformation = "Data Source=DESKTOP-FNLSNBN\\MSSQLYOUSSEF;Initial Catalog=poo;User ID=youssef;Password=youssef";

    this->sqlRequest = "RIEN";

    this->sqlConnection = gcnew SqlConnection(this->connectionInformation);
    this->sqlCommand = gcnew SqlCommand(this->sqlRequest, this->sqlConnection);
    this->sqlAdapter = gcnew SqlDataAdapter();
    this->dataSet = gcnew DataSet();


    this->sqlCommand->CommandType = System::Data::CommandType::Text;
}

System::Data::DataSet^ Cad::getRows(String^ sqlRequest, String^ dataTableName)
{
    this->dataSet->Clear();
    this->sqlRequest = sqlRequest;
    this->sqlAdapter->SelectCommand = this->sqlCommand;
    this->sqlCommand->CommandText = this->sqlRequest;
    this->sqlAdapter->Fill(this->dataSet, dataTableName);

    return this->dataSet;
}

void Composants::Cad::actionRows(String^ sqlRequest)
{
    this->sqlRequest = sqlRequest;
    this->sqlCommand->CommandText = this->sqlRequest;
    this->sqlAdapter->SelectCommand = this->sqlCommand;
    this->sqlConnection->Open();
    this->sqlCommand->ExecuteNonQuery();
    this->sqlConnection->Close();
}

int Cad::actionRowsId(String^ sqlRequest)
{
    int id;
    this->sqlRequest = sqlRequest;
    this->sqlCommand->CommandText = this->sqlRequest;
    this->sqlConnection->Open();
    id = Convert::ToInt32(this->sqlCommand->ExecuteScalar());
    this->sqlConnection->Close();

    return id;
}

void Cad::setSQL(String^ sqlRequest)
{
    if (String::IsNullOrEmpty(sqlRequest) || sqlRequest == "RIEN")
    {
        this->sqlRequest = "RIEN";
    }
    else
    {
        this->sqlRequest = sqlRequest;
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