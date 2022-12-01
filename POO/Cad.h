#pragma once
#include "Header.h"


namespace Composants
{
	ref class Cad
	{
	public :
		Cad(void);
		DataSet^ getRows(String^,String^);
		int actionRowsId(String^);
		void actionRows(String^);
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



