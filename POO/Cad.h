#pragma once
#include <string>

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;


namespace Composants
{
	ref class Cad
	{
	public :
		Cad();
		int actionRowsId(String^ request);
		void actionRows(String^ request);
		DataSet^ getRows(String^ request, String^ dataTableName);

	protected :
		String^ connectionInformation;
		String^ sqlRequest;
		SqlConnection^ sqlConnection;
		SqlCommand^ sqlCommand;
		SqlDataAdapter^ sqlAdapter;
		DataSet^ dataSet;
		void setSQL(String^ request);
	};
}



