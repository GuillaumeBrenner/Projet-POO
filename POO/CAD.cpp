#include "CAD.h"
#include "Main.h"


using namespace System::IO;


CAD::CAD()
{
	this->connectionString = "Data Source=.;Initial Catalog=ProjetPOO;Integrated Security=True";
	this->connection = gcnew System::Data::SqlClient::SqlConnection(connectionString);
}
