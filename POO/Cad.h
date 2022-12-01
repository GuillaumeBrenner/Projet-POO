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
		Cad(void);
		int actionRowsId(String^);
		void actionRows(System::String^);
		System::Data::DataSet^ getRows(System::String^, System::String^);
		~Cad();

	private :
		String^ connectionInformation;
		String^ sqlRequest;
		SqlConnection^ sqlConnection;
		SqlCommand^ sqlCommand;
		SqlDataAdapter^ sqlAdapter;
		DataSet^ dataSet;
		void setSQL(String^ request);
	};
}



