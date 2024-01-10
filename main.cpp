#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;


class Volume_Converter
{
	protected:   
		int num;
	public:
		void get_Input()
		{
			cout<<"Enter the number:";
			cin>>num;
		}
};  

class One : public Volume_Converter
{
	private:
		float divider = 1000;
		// Litres to milliliters.
		double litres;
		// Milliliters to litres.
		double litres_Con;
	public:
		// Function for Litre to milliliters.
	void l_To_Milli()
	{
		litres = num * 1000; // Formula for getting result.
		system("cls"); // It is used to clear the screen.
		system("color 4f");
		system("cls");
		cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"|The value from liters to milliliters is:| " <<litres <<endl; 
		cout<<"******************************************\n";
	}
	
		// Function for Litre to milliliters.
	void milli_To_L()
	{
		litres_Con = num / divider; // Formula for getting result.
		system("cls"); // It is used to clear the screen.
		system("color 4f");
		cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"|The value from milliliters to litres is:| " <<litres_Con <<endl; 
		cout<<"******************************************\n";
	}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//  	 SECOND CLASS         //
	//***************************//

class Two : public Volume_Converter
{
	private:
		float divider = 3785.412;
		// Gallons to milliliters.
		double gallons;
		// Milliliters to gallons.
		double gallons_Con;
	public:
		// Function for gallons to milliliters.
	void g_To_Milli()
	{
		gallons = num * 3785.412; // Formula for getting result.
		system("cls"); // It is used to clear the screen.
		system("color 4f");
		cout<<"+++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"|The value from gallons to milliliters is:| " <<gallons <<endl; 
		cout<<"*******************************************\n";
	}
		// Function for milliliters to gallons.
	void milli_To_G()
	{
		gallons_Con = num / divider; // Formula for getting result.
		system("cls"); // It is used to clear the screen.
		system("color 4f");
		cout<<"+++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"|The value from milliliters to gallons is:| " <<gallons_Con <<endl; 
		cout<<"*******************************************\n";
	}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//  	 THIRD CLASS          //
	//***************************//

class Three : public Volume_Converter
{
	private:
		// Table spoon to milliliters.
		double table_Spoon;
		// Milliliters to table spoon.
		double table_Spoon_Con;
		float divider = 14.787;
	public:
		// Function for Table spoon to milliliters.
	void ts_To_Milli()
	{
		table_Spoon = num * 14.787; // Formula for getting result.
		system("cls"); // It is used to clear the screen.
		system("color 4f");
		cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"|The value from liters to milliliters is:| " <<table_Spoon <<endl; 
		cout<<"******************************************\n";
	}
	
		// Function for Milliliters to table spoon.
	void milli_To_Ts()
	{
		table_Spoon_Con = num / divider; // Formula for getting result.
		system("cls"); // It is used to clear the screen.
		system("color 4f");
		cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"|The value from liters to milliliters is:| " <<table_Spoon_Con <<endl; 
		cout<<"******************************************\n";
	}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//  	 FORTH CLASS          //
	//***************************//
		
class Four : public Volume_Converter
{
	private:
		// Tea spoon to milliliters.
		double tea_Spoon;
		// Milliliters to tea spoon.
		double tea_Spoon_Con;
		float divider = 4.929;
	public:
		// Function for Tea spoon to milliliters.
	void tea_S_To_Milli()
	{
		tea_Spoon = num * 4.929; // Formula for getting result.
		system("cls"); // It is used to clear the screen.
		system("color 4f");
		cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"|The value from liters to milliliters is:| " <<tea_Spoon <<endl; 
		cout<<"******************************************\n";
	}
	
		// Function for Milliliters to tea spoon .
	void Milli_To_Tea_S()
	{
		tea_Spoon_Con = num / divider; // Formula for getting result.
		system("cls"); // It is used to clear the screen.
		system("color 4f");
		cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"|The value from liters to milliliters is:| " <<tea_Spoon_Con <<endl; 
		cout<<"******************************************\n";
	}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//  	 FIFTH CLASS          //
	//***************************//
class Five : public Volume_Converter
{
	private:
		// Cubic inch to milliliters.
		double cubic_Inch;
		// Milliliters to cubic inch.
		double cubic_Inch_Con;
		float divider = 28316.847;
	public:
		// Function for Cubic to milliliters.
	void cubic_I_To_Milli()
	{
		cubic_Inch = num * 28316.847; // Formula for getting result.
		system("cls"); // It is used to clear the screen.
		system("color 4f");
		cout<<"+++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"|The value from cubic to milliliters is:| " <<cubic_Inch <<endl; 
		cout<<"*****************************************\n";
	}
	
		// Function for Milliliters to cubic.

	void Milli_To_Cubic_I()
	{
		cubic_Inch_Con = num / divider; // Formula for getting result.
		system("cls"); // It is used to clear the screen.
		system("color 4f");
		cout<<"+++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"|The value from cubic to milliliters is:| " <<cubic_Inch_Con <<endl; 
		cout<<"*****************************************\n";
	}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Length_Converter
{
	protected:
		double length;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++//
		//  USE OF DEFAULT OR NON PARAMETRIZED CONSTRUCTOR.//
		//*************************************************//
		
		Length_Converter()
		{
			cout<<"Enter the length:";
			cin>>length;
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//  	 SIXTH CLASS          //
	//***************************//
class Six : public Length_Converter
{
	private:
		double m_To_Cm;
		double cm_To_M;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Six()
		{
			m_To_Cm = length * 100;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Meter to centimeter is:| "<<m_To_Cm<<endl;
			cout<<"****************************************\n";
		}
		Six(float divider)
		{
			cm_To_M = length / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Meter to centimeter is:| "<<cm_To_M<<endl;
			cout<<"****************************************\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//  	SEVENTH CLASS         //
	//***************************//
class Seventh : public Length_Converter
{
	private:
		double k_To_Cm;
		double cm_To_K;
	public:
			
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Seventh()
		{
			k_To_Cm = length * 100000;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Kilometer to centimeter is:| "<<k_To_Cm<<endl;
			cout<<"********************************************\n";
		}
		Seventh(float divider)
		{
			cm_To_K = length / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Centimetre to kilometer is:| "<<cm_To_K<<endl;
			cout<<"********************************************\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//  	  EIGHT CLASS         //
	//***************************//
class Eight : public Length_Converter
{
	private:
		double m_To_Cm;
		double cm_To_M;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Eight()
		{
			cm_To_M = length * 10;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Kilometer to centimeter is:| "<<cm_To_M<<endl;
			cout<<"********************************************\n";
		}
		Eight(float divider)
		{
			m_To_Cm = length / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Centimetre to kilometer is:| "<<m_To_Cm<<endl;
			cout<<"********************************************\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};
	//+++++++++++++++++++++++++++++//
	//  	   NINE CLASS         //
	//***************************//
class Nine : public Length_Converter
{
	private:
		double mile_To_Cm;
		double cm_To_Mile;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Nine()
		{
			cm_To_Mile = length * 160934.4;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Centimeter to mile is:| "<<cm_To_Mile<<endl;
			cout<<"***************************************\n";
		}
		Nine(float divider)
		{
			mile_To_Cm = length / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Mile to centimetre is:| "<<mile_To_Cm<<endl;
			cout<<"***************************************\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//  	   TEN CLASS         //
	//***************************//
class Ten : public Length_Converter
{
	private:
		double yard_To_Cm;
		double cm_To_Yard;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Ten()
		{
			yard_To_Cm = length * 91.44;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Centimeter to mile is:| "<<yard_To_Cm<<endl;
			cout<<"***************************************\n";
		}
		Ten(float divider)
		{
			cm_To_Yard = length / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Mile to centimetre is:| "<<cm_To_Yard<<endl;
			cout<<"***************************************\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//  	 ELEVEN CLASS         //
	//***************************//
class Eleven : public Length_Converter
{
	private:
		double foot_To_Cm;
		double cm_To_Foot;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Eleven()
		{
			foot_To_Cm = length * 30.48;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Centimeter to mile is:| "<<foot_To_Cm<<endl;
			cout<<"***************************************\n";
		}
		Eleven(float divider)
		{
			cm_To_Foot = length / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Mile to centimetre is:| "<<cm_To_Foot<<endl;
			cout<<"***************************************\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//  	 TWELVE CLASS         //
	//***************************//
class Twelve : public Length_Converter
{
	private:
		double Inch_To_Cm;
		double cm_To_Inch;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Twelve()
		{
			Inch_To_Cm = length * 2.54;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Centimeter to mile is:| "<<Inch_To_Cm<<endl;
			cout<<"***************************************\n";
		}
		Twelve(float divider)
		{
			cm_To_Inch = length / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Mile to centimetre is:| "<<cm_To_Inch<<endl;
			cout<<"***************************************\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Area_Converter
{
	protected:
		double area;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++//
		//  USE OF DEFAULT OR NON PARAMETRIZED CONSTRUCTOR.//
		//*************************************************//
		
		Area_Converter()
		{
			cout<<"Enter the value of area:";
			cin>>area;
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//     THIRTEEN CLASS         //
	//***************************//
class Thirteen : public Area_Converter
{
	private:
		double square_Metre_To_Square_K;
		double square_K_To_Square_Metre;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Thirteen()
		{
			square_K_To_Square_Metre = area * 1e+6;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Centimeter to mile is:| "<<square_K_To_Square_Metre<<endl;
			cout<<"***************************************\n";
		}
		Thirteen(float divider)
		{
			square_Metre_To_Square_K = area / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Mile to centimetre is:| "<<square_Metre_To_Square_K<<endl;
			cout<<"***************************************\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//     FOURTEEN CLASS         //
	//***************************//
class Fourteen : public Area_Converter
{
	private:
		double square_Mile_To_Square_K;
		double square_K_To_Square_Mile;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Fourteen()
		{
			square_Mile_To_Square_K = area * 2.59;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Square mile to Square kilometer is:| "<<square_Mile_To_Square_K<<endl;
			cout<<"****************************************************\n";
		}
		Fourteen(float divider)
		{
			square_K_To_Square_Mile = area / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Square kilometer to Square mile is:| "<<square_K_To_Square_Mile<<endl;
			cout<<"****************************************************\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};


	//+++++++++++++++++++++++++++++//
	//      FIFTEEN CLASS         //
	//***************************//
class Fifteen : public Area_Converter
{
	private:
		double square_Yard_To_Square_K;
		double square_K_To_Square_Yard;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Fifteen()
		{
			square_K_To_Square_Yard = area * 1.196e+6;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Square kilo to Square Yard is:| "<<square_K_To_Square_Yard<<endl;
			cout<<"***********************************************\n";
		}
		Fifteen(float divider)
		{
			square_Yard_To_Square_K = area / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Square yard to Square kilo is:| "<<square_Yard_To_Square_K<<endl;
			cout<<"***********************************************\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//      SIXTEEN CLASS         //
	//***************************//
class Sixteen : public Area_Converter
{
	private:
		double square_Foot_To_Square_K;
		double square_K_To_Square_Foot;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Sixteen()
		{
			square_K_To_Square_Foot = area * 1.196e+6;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Square kilo to Square foot is:| "<<square_K_To_Square_Foot<<endl;
			cout<<"***********************************************\n";
		}
		Sixteen(float divider)
		{
			square_Foot_To_Square_K = area / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Square foot to Square kilo is:| "<<square_Foot_To_Square_K<<endl;
			cout<<"***********************************************\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//     SEVENTEEN CLASS        //
	//***************************//
class Seventeen : public Area_Converter
{
	private:
		double square_Inch_To_Square_K;
		double square_K_To_Square_Inch;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Seventeen()
		{
			square_K_To_Square_Inch = area * 1.55e+9;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Square Kilo to Square inch is:| "<<square_K_To_Square_Inch<<endl;
			cout<<"***********************************************\n";
		}
		Seventeen(float divider)
		{
			square_Inch_To_Square_K = area / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Square Inch to Square kilo is:| "<<square_Inch_To_Square_K<<endl;
			cout<<"***********************************************\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//      EIGHTEEN CLASS        //
	//***************************//
class Eighteen : public Area_Converter
{
	private:
		double Acre_To_Square_K;
		double square_K_To_Acre;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Eighteen()
		{
			square_K_To_Acre = area * 247.105;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Square Kilo to Acre is:| "<<square_K_To_Acre<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++++\n";
		}
		Eighteen(float divider)
		{
			Acre_To_Square_K = area / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Acre to Square kilo is:| "<<Acre_To_Square_K<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//      START OF CLASS        //
	//***************************//
	
class Data_Transfer_Rate
{
	protected:
		double data;
	public:
		//+++++++++++++++++++++++++++++++++++++++++++++++++//
		//  USE OF DEFAULT OR NON PARAMETRIZED CONSTRUCTOR.//
		//*************************************************//
		
		Data_Transfer_Rate()
		{
			cout<<"Enter the value of data:";
			cin>>data;
		}
};
	
	//+++++++++++++++++++++++++++++//
	//        END OF CLASS        //
	//***************************//

	//+++++++++++++++++++++++++++++//
	//      START OF CLASS        //
	//***************************//

class Ninghteen : public Data_Transfer_Rate
{
	private:
		double k_Bit_To_Bit_Per_Second;
		double bit_Per_Second_To_K;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Ninghteen()
		{
			k_Bit_To_Bit_Per_Second = data * 1000;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Kilobit to Bit per second is:| "<<k_Bit_To_Bit_Per_Second<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++++++++++\n";
		}
		Ninghteen(float divider)
		{
			bit_Per_Second_To_K = data / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Bit per second to Kilobit is:| "<<bit_Per_Second_To_K<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//      START OF CLASS        //
	//***************************//

class Twenty : public Data_Transfer_Rate
{
	private:
		double k_Byte_To_Bit_Per_Second;
		double bit_Per_Second_To_K_Byte;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Twenty()
		{
			k_Byte_To_Bit_Per_Second = data * 8000;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Kilobyte to Bit per second is:| "<<k_Byte_To_Bit_Per_Second<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
		}
		Twenty(float divider)
		{
			bit_Per_Second_To_K_Byte = data / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Bit per second to Kilobyte is:| "<<bit_Per_Second_To_K_Byte<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//      START OF CLASS        //
	//***************************//

class Twenty_One : public Data_Transfer_Rate
{
	private:
		double Mega_Bit_To_Bit_Per_Second;
		double bit_Per_Second_To_Mega_Bit;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Twenty_One()
		{
			Mega_Bit_To_Bit_Per_Second = data * 1e+6;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Mega bit to Bit per second is:| "<<Mega_Bit_To_Bit_Per_Second<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
		}
		Twenty_One(float divider)
		{
			bit_Per_Second_To_Mega_Bit = data / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Bit per second to Mega bit is:| "<<bit_Per_Second_To_Mega_Bit<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

class Twenty_Two : public Data_Transfer_Rate
{
	private:
		double Mega_Byte_To_Bit_Per_Second;
		double bit_Per_Second_To_Mega_Byte;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Twenty_Two()
		{
			Mega_Byte_To_Bit_Per_Second = data *  8e+6;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Mega bit to Bit per second is:| "<<Mega_Byte_To_Bit_Per_Second<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
		}
		Twenty_Two(float divider)
		{
			bit_Per_Second_To_Mega_Byte = data / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Bit per second to Mega bit is:| "<<bit_Per_Second_To_Mega_Byte<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//      START OF CLASS        //
	//***************************//

class Twenty_Three : public Data_Transfer_Rate
{
	private:
		double Giga_Bit_To_Bit_Per_Second;
		double bit_Per_Second_To_Giga_Bit;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Twenty_Three()
		{
			Giga_Bit_To_Bit_Per_Second = data *  1e+9;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Mega bit to Bit per second is:| "<<Giga_Bit_To_Bit_Per_Second<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
		}
		Twenty_Three(float divider)
		{
			bit_Per_Second_To_Giga_Bit = data / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Bit per second to Mega bit is:| "<<bit_Per_Second_To_Giga_Bit<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//      START OF CLASS        //
	//***************************//

class Twenty_Four : public Data_Transfer_Rate
{
	private:
		double Tera_Bit_To_Bit_Per_Second;
		double bit_Per_Second_To_Tera_Bit;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Twenty_Four()
		{
			Tera_Bit_To_Bit_Per_Second = data *  1e+12;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Mega bit to Bit per second is:| "<<Tera_Bit_To_Bit_Per_Second<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
		}
		Twenty_Four(float divider)
		{
			bit_Per_Second_To_Tera_Bit = data / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Bit per second to Mega bit is:| "<<bit_Per_Second_To_Tera_Bit<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//      START OF CLASS        //
	//***************************//

class Twenty_Five : public Data_Transfer_Rate
{
	private:
		double Tera_Byte_To_Bit_Per_Second;
		double bit_Per_Second_To_Tera_Byte;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Twenty_Five()
		{
			Tera_Byte_To_Bit_Per_Second = data *  8e+12;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Mega bit to Bit per second is:| "<<Tera_Byte_To_Bit_Per_Second<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
		}
		Twenty_Five(float divider)
		{
			bit_Per_Second_To_Tera_Byte = data / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Bit per second to Mega bit is:| "<<bit_Per_Second_To_Tera_Byte<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};


	//+++++++++++++++++++++++++++++//
	//      FIFTH MAIN CLASS      //
	//***************************//

class Energy_Conversion
{
	protected:
		float energy;
	public:
		//+++++++++++++++++++++++++++++++++++++++++++++++++//
		//  USE OF DEFAULT OR NON PARAMETRIZED CONSTRUCTOR.//
		//*************************************************//
		
		Energy_Conversion()	
		{
			cout<<"Enter the amount of energy:";
			cin>>energy;
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Twenty_Six : public Energy_Conversion
{
	private:
		double kilo_Cal_To_Joule;
		double joule_To_Kilo_Cal;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Twenty_Six()
		{
			kilo_Cal_To_Joule = energy * 4184;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Kilocalorie to Joule is:| "<<kilo_Cal_To_Joule<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++\n";
		}
		Twenty_Six(float divider)
		{
			joule_To_Kilo_Cal = energy / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Joule to Kilocalorie is:| "<<joule_To_Kilo_Cal<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Twenty_Seven : public Energy_Conversion
{
	private:
		double kilo_Cal_To_Kilojoule;
		double kilojoule_To_Kilo_Cal;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Twenty_Seven()
		{
			kilo_Cal_To_Kilojoule = energy * 4.184;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Kilocalorie to Joule is:| "<<kilo_Cal_To_Kilojoule<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++\n";
		}
		Twenty_Seven(float divider)
		{
			kilojoule_To_Kilo_Cal = energy / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Joule to Kilocalorie is:| "<<kilojoule_To_Kilo_Cal<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Twenty_Eight : public Energy_Conversion
{
	private:
		double kilo_Cal_To_Gramcalorie;
		double gramcalorie_To_Kilo_Cal;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Twenty_Eight()
		{
			kilo_Cal_To_Gramcalorie = energy * 1000;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Kilocalorie to Gramcalorie is:| "<<kilo_Cal_To_Gramcalorie<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
		}
		Twenty_Eight(float divider)
		{
			gramcalorie_To_Kilo_Cal = energy / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Gramcalorie to Kilocalorie is:| "<<gramcalorie_To_Kilo_Cal<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Twenty_Nine : public Energy_Conversion
{
	private:
		double kilo_Cal_To_W_H;
		double w_H_To_Kilo_Cal;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Twenty_Nine()
		{
			kilo_Cal_To_W_H = energy * 1.16222;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Kilocalorie to Watt hour is:| "<<kilo_Cal_To_W_H<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++\n";
		}
		Twenty_Nine(float divider)
		{
			w_H_To_Kilo_Cal = energy / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Watt hour to Kilocalorie is:| "<<w_H_To_Kilo_Cal<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Thirty : public Energy_Conversion
{
	private:
		double kilo_Watt_To_W_H;
		double w_H_To_Kilo_Watt;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Thirty()
		{
			kilo_Watt_To_W_H = energy * 1000;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Kilocalorie to Watt hour is:| "<<kilo_Watt_To_W_H<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++\n";
		}
		Thirty(float divider)
		{
			w_H_To_Kilo_Watt = energy / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Watt hour to Kilocalorie is:| "<<w_H_To_Kilo_Watt<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Thirty_One : public Energy_Conversion
{
	private:
		double j_To_E_V;
		double e_V_To_J;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Thirty_One()
		{
			j_To_E_V = energy * 6.242e+18;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Joule to Electron volt is:| "<<j_To_E_V<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++++\n";
		}
		Thirty_One(float divider)
		{
			e_V_To_J = energy / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Electron volt to Joule is:| "<<e_V_To_J<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Thirty_Two : public Energy_Conversion
{
	private:
		double k_H_To_E_V;
		double e_V_To_K_H;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Thirty_Two()
		{
			k_H_To_E_V = energy * 2.247e+25;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Kilowatt hour to Electron volt is:| "<<k_H_To_E_V<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		}
		Thirty_Two(float divider)
		{
			e_V_To_K_H = energy / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Electron volt to Kilowatt hour is:| "<<e_V_To_K_H<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	// START OF SIXTH MAIN CLASS  //
	//***************************//
	
class Digital_Storage
{
	protected:
		double value;
	public:
		//+++++++++++++++++++++++++++++++++++++++++++++++++//
		//  USE OF DEFAULT OR NON PARAMETRIZED CONSTRUCTOR.//
		//*************************************************//
		
		Digital_Storage()
		{
			cout<<"Enter the value:";
			cin>>value;
		}
		
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};
	
	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Thirty_Three : public Digital_Storage
{
	private:
		double k_Bit_To_Bit;
		double bit_To_K_Bit;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Thirty_Three()
		{
			k_Bit_To_Bit = value * 1000;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Kilobit to Bit is:| "<<k_Bit_To_Bit<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++\n";
		}
		Thirty_Three(float divider)
		{
			bit_To_K_Bit = value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Bit to Kilobit is:| "<<bit_To_K_Bit<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Thirty_Four : public Digital_Storage
{
	private:
		double byte_To_Bit;
		double bit_To_Byte;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Thirty_Four()
		{
			byte_To_Bit = value * 8;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Byte to Bit is:| "<<byte_To_Bit<<endl;
			cout<<"++++++++++++++++++++++++++++++++\n";
		}
		Thirty_Four(float divider)
		{
			bit_To_Byte = value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Bit to Byte is:| "<<bit_To_Byte<<endl;
			cout<<"++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Thirty_Five : public Digital_Storage
{
	private:
		double mega_Bit_To_Bit;
		double bit_To_Mega_Bit;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Thirty_Five()
		{
			mega_Bit_To_Bit = value * 1.049e+6;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Megabit to Bit is:| "<<mega_Bit_To_Bit<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++\n";
		}
		Thirty_Five(float divider)
		{
			bit_To_Mega_Bit = value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Bit to Megabit is:| "<<bit_To_Mega_Bit<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Thirty_Six : public Digital_Storage
{
	private:
		double giga_Bit_To_Bit;
		double bit_To_Giga_Bit;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Thirty_Six()
		{
			giga_Bit_To_Bit = value * 1e+9;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Gigabit to Bit is:| "<<giga_Bit_To_Bit<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++\n";
		}
		Thirty_Six(float divider)
		{
			bit_To_Giga_Bit = value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Bit to Gigabit is:| "<<bit_To_Giga_Bit<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Thirty_Seven : public Digital_Storage
{
	private:
		double tera_Bit_To_Bit;
		double bit_To_Tera_Bit;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Thirty_Seven()
		{
			tera_Bit_To_Bit = value * 1e+12;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Terabit to Bit is:| "<<tera_Bit_To_Bit<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++\n";
		}
		Thirty_Seven(float divider)
		{
			bit_To_Tera_Bit = value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Bit to Terabit is:| "<<bit_To_Tera_Bit<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Thirty_Eight : public Digital_Storage
{
	private:
		double peta_Bit_To_Bit;
		double bit_To_Peta_Bit;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Thirty_Eight()
		{
			peta_Bit_To_Bit = value * 1e+15;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Petabit to Bit is:| "<<peta_Bit_To_Bit<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++\n";
		}
		Thirty_Eight(float divider)
		{
			bit_To_Peta_Bit = value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Bit to Petabit is:| "<<bit_To_Peta_Bit<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Thirty_Nine : public Digital_Storage
{
	private:
		double mega_Bit_To_K_Bit;
		double K_bit_To_Mega_Bit;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Thirty_Nine()
		{
			mega_Bit_To_K_Bit = value * 1000;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Megabit to Kilobit is:| "<<mega_Bit_To_K_Bit<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
		}
		Thirty_Nine(float divider)
		{
			K_bit_To_Mega_Bit = value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Bit to Terabit is:| "<<K_bit_To_Mega_Bit<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//++++++++++++++++++++++++++++++//
	// START OF SEVENTH MAIN CLASS //
	//****************************//
	
class Frequency
{
	protected:
		float f_Value;
	public:
		//+++++++++++++++++++++++++++++++++++++++++++++++++//
		//  USE OF DEFAULT OR NON PARAMETRIZED CONSTRUCTOR.//
		//*************************************************//
		
		Frequency()
		{
			cout<<"Enter the value:";
			cin>>f_Value;
		}
		
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};


	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Forty : public Frequency
{
	private:
		double kilo_H_To_H;
		double h_To_Kilo_H;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Forty()
		{
			kilo_H_To_H = f_Value * 1000;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Kilohertz to Hertz is:| "<<kilo_H_To_H<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
		}
		Forty(float divider)
		{
			h_To_Kilo_H = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Hertz to Kilohertz is:| "<<h_To_Kilo_H<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Forty_One : public Frequency
{
	private:
		double mega_H_To_H;
		double h_To_Mega_H;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Forty_One()
		{
			mega_H_To_H = f_Value * 1e+6;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Megahertz to Hertz is:| "<<mega_H_To_H<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
		}
		Forty_One(float divider)
		{
			h_To_Mega_H = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Hertz to Megahertz is:| "<<h_To_Mega_H<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Forty_Two : public Frequency
{
	private:
		double giga_H_To_H;
		double h_To_Giga_H;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Forty_Two()
		{
			giga_H_To_H = f_Value * 1e+9;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Gigahertz to Hertz is:| "<<giga_H_To_H<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
		}
		Forty_Two(float divider)
		{
			h_To_Giga_H = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Hertz to Gigahertz is:| "<<h_To_Giga_H<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Forty_Three : public Frequency
{
	private:
		double mega_H_To_K_H;
		double k_H_To_Mega_H;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Forty_Three()
		{
			mega_H_To_K_H = f_Value * 1000;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Gigahertz to Hertz is:| "<<mega_H_To_K_H<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
		}
		Forty_Three(float divider)
		{
			k_H_To_Mega_H = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Hertz to Gigahertz is:| "<<k_H_To_Mega_H<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Forty_Four : public Frequency
{
	private:
		double mega_H_To_G_H;
		double g_H_To_Mega_H;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Forty_Four()
		{
			mega_H_To_G_H = f_Value * 1000;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Gigahertz to Hertz is:| "<<mega_H_To_G_H<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
		}
		Forty_Four(float divider)
		{
			g_H_To_Mega_H = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Hertz to Gigahertz is:| "<<g_H_To_Mega_H<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//++++++++++++++++++++++++++++++//
	// START OF EIGHTH MAIN CLASS  //
	//****************************//
	
class Fuel
{
	protected:
		float f_Value;
	public:
		//+++++++++++++++++++++++++++++++++++++++++++++++++//
		//  USE OF DEFAULT OR NON PARAMETRIZED CONSTRUCTOR.//
		//*************************************************//
		
		Fuel()
		{
			cout<<"Enter the value:";
			cin>>f_Value;
		}
		
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Forty_Five : public Fuel
{
	private:
		double k_M_P_L_To_P_G;
		double p_G_To_K_M_P_L;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Forty_Five()
		{
			k_M_P_L_To_P_G = f_Value * 2.352;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Gigahertz to Hertz is:| "<<k_M_P_L_To_P_G<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
		}
		Forty_Five(float divider)
		{
			p_G_To_K_M_P_L = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Hertz to Gigahertz is:| "<<p_G_To_K_M_P_L<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//++++++++++++++++++++++++++++++//
	//  START OF NINTH MAIN CLASS  //
	//****************************//
	
class Temperature
{
	protected:
		float f_Value;
	public:
		//+++++++++++++++++++++++++++++++++++++++++++++++++//
		//  USE OF DEFAULT OR NON PARAMETRIZED CONSTRUCTOR.//
		//*************************************************//
		
		Temperature()
		{
			cout<<"Enter the value:";
			cin>>f_Value;
		}
		
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Forty_Six : public Temperature
{
	private:
		double c_To_F;
		double f_To_C;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Forty_Six()
		{
			c_To_F = (f_Value * 1.8) + 32;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Celsius to Fahrenheit is:| "<<c_To_F<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
		}
		Forty_Six(float multiplier)
		{
			f_To_C = (f_Value - 32) * multiplier;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Fahrenheit to Celsius is:| "<<f_To_C<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Forty_Seven : public Temperature
{
	private:
		double c_To_K;
		double k_To_C;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Forty_Seven()
		{
			c_To_K = f_Value + 273.15;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Celsius to Kelvin is:| "<<c_To_K<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
		}
		Forty_Seven(float multiplier)
		{
			k_To_C = f_Value - multiplier;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Kelvin to Celsius is:| "<<k_To_C<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Forty_Eight : public Temperature
{
	private:
		double f_To_K;
		double k_To_F;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Forty_Eight()
		{
			f_To_K = (f_Value - 32) * 0.55555 + 273.15;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Celsius to Kelvin is:| "<<f_To_K<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
		}
		Forty_Eight(float multiplier)
		{
			k_To_F = (f_Value - multiplier) * 1.8 + 32;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Kelvin to Celsius is:| "<<k_To_F<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//++++++++++++++++++++++++++++++//
	//  START OF TENTH MAIN CLASS  //
	//****************************//
	
class Time
{
	protected:
		float f_Value;
	public:
		//+++++++++++++++++++++++++++++++++++++++++++++++++//
		//  USE OF DEFAULT OR NON PARAMETRIZED CONSTRUCTOR.//
		//*************************************************//
		
		Time()
		{
			cout<<"Enter the value:";
			cin>>f_Value;
		}
		
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Forty_Nine : public Time
{
	private:
		double s_To_NS;
		double ns_To_S;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Forty_Nine()
		{
			s_To_NS = f_Value * 1e+9;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Second to Nanosecond is:| "<<s_To_NS<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++++\n";
		}
		Forty_Nine(float divider)
		{
			ns_To_S = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Nanosecond to Second is:| "<<ns_To_S<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Fifty : public Time
{
	private:
		double s_To_MS;
		double ms_To_S;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Fifty()
		{
			s_To_MS = f_Value * 1e+6;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Second to Microsecond is:| "<<s_To_MS<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++\n";
		}
		Fifty(float divider)
		{
			ms_To_S = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Microsecond to Second is:| "<<ms_To_S<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Fifty_One : public Time
{
	private:
		double s_To_Mill_S;
		double milli_S_To_S;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Fifty_One()
		{
			s_To_Mill_S = f_Value * 1000;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Second to Millisecond is:| "<<s_To_Mill_S<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++\n";
		}
		Fifty_One(float divider)
		{
			milli_S_To_S = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Millisecond to Second is:| "<<milli_S_To_S<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Fifty_Two : public Time
{
	private:
		double s_To_Mill_S;
		double milli_S_To_S;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Fifty_Two()
		{
			s_To_Mill_S = f_Value * 1000;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Second to Millisecond is:| "<<s_To_Mill_S<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++\n";
		}
		Fifty_Two(float divider)
		{
			milli_S_To_S = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Millisecond to Second is:| "<<milli_S_To_S<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Fifty_Three : public Time
{
	private:
		double s_To_M;
		double m_To_S;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Fifty_Three()
		{
			s_To_M = f_Value * 60;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Minute to Second is:| "<<s_To_M<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
		}
		Fifty_Three(float divider)
		{
			m_To_S = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Second to Minute is:| "<<m_To_S<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Fifty_Four : public Time
{
	private:
		double s_To_H;
		double h_To_S;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Fifty_Four()
		{
			s_To_H = f_Value * 3600;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Hour to Second is:| "<<s_To_H<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++\n";
		}
		Fifty_Four(float divider)
		{
			h_To_S = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Second to Hour is:| "<<h_To_S<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Fifty_Five : public Time
{
	private:
		double s_To_W;
		double w_To_S;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Fifty_Five()
		{
			s_To_W = f_Value * 604800;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Week to Second is:| "<<s_To_W<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++\n";
		}
		Fifty_Five(float divider)
		{
			w_To_S = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Second to Week is:| "<<w_To_S<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Fifty_Six : public Time
{
	private:
		double s_To_M;
		double m_To_S;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Fifty_Six()
		{
			s_To_M = f_Value * 2.628e+6;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Week to Second is:| "<<s_To_M<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++\n";
		}
		Fifty_Six(float divider)
		{
			m_To_S = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Second to Week is:| "<<m_To_S<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Fifty_Seven : public Time
{
	private:
		double s_To_C;
		double c_To_S;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Fifty_Seven()
		{
			s_To_C = f_Value * 3.154e+9;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Century to Second is:| "<<s_To_C<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
		}
		Fifty_Seven(float divider)
		{
			c_To_S = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Second to Century is:| "<<c_To_S<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Fifty_Eight : public Time
{
	private:
		double d_To_Min;
		double min_To_D;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Fifty_Eight()
		{
			d_To_Min = f_Value * 1440;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Day to Minute is:| "<<d_To_Min<<endl;
			cout<<"++++++++++++++++++++++++++++++++++\n";
		}
		Fifty_Eight(float divider)
		{
			min_To_D = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Minute to Day is:| "<<min_To_D<<endl;
			cout<<"++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Fifty_Nine : public Time
{
	private:
		double d_To_Week;
		double week_To_D;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Fifty_Nine()
		{
			d_To_Week = f_Value * 7;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Day to Week is:| "<<d_To_Week<<endl;
			cout<<"++++++++++++++++++++++++++++++++\n";
		}
		Fifty_Nine(float divider)
		{
			week_To_D = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Week to Day is:| "<<week_To_D<<endl;
			cout<<"++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Sixty : public Time
{
	private:
		double cen_To_Day;
		double day_To_Cen;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Sixty()
		{
			cen_To_Day = f_Value * 36500;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Century to Day is:| "<<cen_To_Day<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++\n";
		}
		Sixty(float divider)
		{
			day_To_Cen = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Day to Century is:| "<<day_To_Cen<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Sixty_One : public Time
{
	private:
		double H_To_N_S;
		double n_S_To_H;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Sixty_One()
		{
			H_To_N_S = f_Value * 3.6e+12;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Hour to Nanosecond is:| "<<H_To_N_S<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
		}
		Sixty_One(float divider)
		{
			n_S_To_H = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Nanosecond to Hour:| "<<n_S_To_H<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Sixty_Two : public Time
{
	private:
		double H_To_M_S;
		double m_S_To_H;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Sixty_Two()
		{
			H_To_M_S = f_Value * 3.6e+9;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Hour to Nanosecond is:| "<<H_To_M_S<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
		}
		Sixty_Two(float divider)
		{
			m_S_To_H = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Nanosecond to Hour:| "<<m_S_To_H<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Sixty_Three : public Time
{
	private:
		double w_To_H;
		double h_To_W;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Sixty_Three()
		{
			w_To_H = f_Value * 168;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Week to Hour is:| "<<w_To_H<<endl;
			cout<<"+++++++++++++++++++++++++++++++++\n";
		}
		Sixty_Three(float divider)
		{
			h_To_W = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Hour to Week is:| "<<h_To_W<<endl;
			cout<<"+++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Sixty_Four : public Time
{
	private:
		double c_Y_To_W;
		double w_To_C_Y;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Sixty_Four()
		{
			c_Y_To_W = f_Value * 52.143;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Calender year to Week is:| "<<c_Y_To_W<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
		}
		Sixty_Four(float divider)
		{
			w_To_C_Y = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Week to Calander year is:| "<<w_To_C_Y<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Sixty_Five : public Time
{
	private:
		double micro_To_NS;
		double nS_To_Micro;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Sixty_Five()
		{
			micro_To_NS = f_Value * 1000;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Micro to Nanosecond is:| "<<micro_To_NS<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++++\n";
		}
		Sixty_Five(float divider)
		{
			nS_To_Micro = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Nanosecond to Micro is:| "<<nS_To_Micro<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Sixty_Six : public Time
{
	private:
		double week_To_NS;
		double nS_To_Week;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Sixty_Six()
		{
			week_To_NS = f_Value * 6.048e+14;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Week to Nanosecond is:| "<<week_To_NS<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
		}
		Sixty_Six(float divider)
		{
			nS_To_Week = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Nanosecond to Week is:| "<<nS_To_Week<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Sixty_Seven : public Time
{
	private:
		double week_To_S;
		double s_To_Week;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Sixty_Seven()
		{
			week_To_S = f_Value * 604800;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Week to Second is:| "<<week_To_S<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++\n";
		}
		Sixty_Seven(float divider)
		{
			s_To_Week = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Second to Week is:| "<<s_To_Week<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++++++//
	//  START OF ELEVENTH MAIN CLASS  //
	//*******************************//
	
class Pressure
{
	protected:
		float f_Value;
	public:
		//+++++++++++++++++++++++++++++++++++++++++++++++++//
		//  USE OF DEFAULT OR NON PARAMETRIZED CONSTRUCTOR.//
		//*************************************************//
		
		Pressure()
		{
			cout<<"Enter the value:";
			cin>>f_Value;
		}
		
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Sixty_Eight : public Pressure
{
	private:
		double a_To_B;
		double b_To_A;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Sixty_Eight()
		{
			a_To_B = f_Value * 1.013;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Atmosphere to Bar is:| "<<a_To_B<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
		}
		Sixty_Eight(float divider)
		{
			b_To_A = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Bar to Atmosphere is:| "<<b_To_A<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Sixty_Nine : public Pressure
{
	private:
		double a_To_P;
		double p_To_A;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Sixty_Nine()
		{
			a_To_P = f_Value * 101325;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Atmosphere to Pascal is:| "<<a_To_P<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++\n";
		}
		Sixty_Nine(float divider)
		{
			p_To_A = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"+++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Pascal to Atmosphere is:| "<<p_To_A<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	//+++++++++++++++++++++++++++++//
	//       USE OF CLASS         //
	//***************************//
	
class Seventy : public Pressure
{
	private:
		double a_To_P_F_P_S_I;
		double p__F_P_S_I_To_A;
	public:
		
		//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
		// USE OF CONSTRUCTOR OVERLOADING AS WELL AS USE OF POLYMORPHISM. //
		//***************************************************************//
		Seventy()
		{
			a_To_P_F_P_S_I = f_Value * 14.696;
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Atmosphere to Pound Force Square Inch is:| "<<a_To_P_F_P_S_I<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		}
		Seventy(float divider)
		{
			p__F_P_S_I_To_A = f_Value / divider;
		}
		void show()
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"|The value from Pound Force Square Inch to Atmosphere is:| "<<p__F_P_S_I_To_A<<endl;
			cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		}
	//+++++++++++++++++++++++++++++//
	//       END OF CLASS         //
	//***************************//
};

	///////////////////////////////////////
	//          MAIN FUNCTION 			//
    //**********************************//
int main()
{
	int chosen;
	/////////////////////////////////////////////
	//  VARIABLES USED FOR FIRST MAIN CLASS   //
	//**********************************///////
	int input, call;
	One _1;	   // Class object.
	Two _2;	   // Class object.
	Three _3;  // Class object.
	Four _4;   // Class object.
	Five _5;   // Class object.
	
	
	/////////////////////////////////////////////
	//  VARIABLES USED FOR SECOND MAIN CLASS  //
	//**********************************///////
	
	int calling;
	
	/////////////////////////////////////////////
	//  VARIABLES USED FOR THIRD MAIN CLASS   //
	//**********************************///////
	
	int called;
	
	/////////////////////////////////////////////
	//  VARIABLES USED FOR FORTH MAIN CLASS   //
	//**********************************///////
	
	int make_Selection;
	
	/////////////////////////////////////////////
	//  VARIABLES USED FOR FIFTH MAIN CLASS   //
	//**********************************///////
	
	int has_Selection;
	
	/////////////////////////////////////////////
	//  VARIABLES USED FOR SIXTH MAIN CLASS   //
	//**********************************///////

	int in_Selection;
	
	
	/////////////////////////////////////////////
	//  VARIABLES USED FOR SEVENTH MAIN CLASS //
	//**********************************///////
	
	int o_Selection;

	/////////////////////////////////////////////
	//  VARIABLES USED FOR EIGHTH MAIN CLASS  //
	//**********************************///////
	
	int oo_Selection;

	/////////////////////////////////////////////
	//   VARIABLES USED FOR NINTH MAIN CLASS  //
	//**********************************///////
	
	int t_Selection;

	/////////////////////////////////////////////
	//   VARIABLES USED FOR TENTH MAIN CLASS  //
	//**********************************///////
	
	int time_Selection;
	
	////////////////////////////////////////////////
	//   VARIABLES USED FOR ELEVENTH MAIN CLASS  //
	//*************************************///////
	
	int p_Selection;
	
	A:
	system("color 1f");
	cout<<"+++++++++++++++++++++++++++++++\n";
	cout<<"|  UNIT CONVERTER CALCULATOR  |\n";
	cout<<"*******************************\n";
	cout<<"|  1 = Volume conversion      |\n";
	cout<<"*			      +\n";
	cout<<"|  2 = Length conversion      |\n";
	cout<<"*			      +\n";
	cout<<"|  3 = Area conversion        |\n";
	cout<<"*			      +\n";
	cout<<"|  4 = Data conversion        |\n";
	cout<<"*			      +\n";
	cout<<"|  5 = Energy conversion      |\n";
	cout<<"*			      +\n";
	cout<<"|  6 = Digital conversion     |\n";
	cout<<"*			      +\n";
	cout<<"|  7 = Frequency conversion   |\n";
	cout<<"*			      +\n";
	cout<<"|  8 = Fuel conversion        |\n";
	cout<<"*			      +\n";
	cout<<"|  9 = Temperature conversion |\n";
	cout<<"*			      +\n";
	cout<<"| 10 = Time conversion        |\n";
	cout<<"*			      +\n";
	cout<<"| 11 = Pressure conversion    |\n";
	cout<<"===============================\n";
	cout<<endl<<endl;
	cout<<"Enter input from above:";
	cin>>input;
	if(input == 1)
	do
	{
		
	//+++++++++++++++++++++++++++++//
	//     VOLUME CONVERSION      //
	//***************************//
		system("cls");
		system("color 5f");
		cout<<"=================================\n";
		cout<<"| 1 = Litres to Milliliters     |\n";
		cout<<"* 			        +\n";
		cout<<"| 2 = Milliliters to Litres     |\n";
		cout<<"* 			        +\n";
		cout<<"| 3 = Gallons to Milliliters    |\n";
		cout<<"* 				+\n";
		cout<<"| 4 = Milliliters to Gallons    |\n";
		cout<<"* 				+\n";
		cout<<"| 5 = Table spoon to Milliliters|\n";
		cout<<"* 				+\n";
		cout<<"| 6 = Milliliters to Table spoon|\n";
		cout<<"* 				+\n";
		cout<<"| 7 = Tea spoon to Milliliters  |\n";
		cout<<"* 				+\n";
		cout<<"| 8 = Milliliters to Tea spoon  |\n";
		cout<<"* 				+\n";
		cout<<"| 9 = Cubic inch to Milliliters |\n";
		cout<<"* 				+\n";
		cout<<"|10 = Milliliters to Cubic inch |\n";
		cout<<"* 				+\n";
		cout<<"|11 = Enter 11 to exit or escape|\n";
		cout<<"=================================\n";
		cout<<endl;
		cout<<"Call any one input from above:";
		cin>>call;
		switch(call)
		{
			case 1:
				_1.get_Input();
				_1.l_To_Milli();
				
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
				
			}
			else 
			{
				cout<<"As u wish\n";
			}
				break;
			case 2:
				_1.get_Input();
				_1.milli_To_L();
				cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
				break;
			case 3:
				_2.get_Input();
				_2.g_To_Milli();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
				break;
			case 4:
				_2.get_Input();
				_2.milli_To_G();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
				break;
			case 5:
				_3.get_Input();
				_3.ts_To_Milli();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
				break;
			case 6:
				_3.get_Input();
				_3.milli_To_Ts();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
				break;
			case 7:
				_4.get_Input();
				_4.tea_S_To_Milli();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
				break;
			case 8:
				_4.get_Input();
				_4.Milli_To_Tea_S();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
				break;
			case 9:
				_5.get_Input();
				_5.cubic_I_To_Milli();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
				break;
			case 10:
				_5.get_Input();
				_5.Milli_To_Cubic_I();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
				break;
			case 11:
				{
					system("cls"); // It is used to clear the screen.
					system("color 4f");
					cout<<"+++++++++++++++++++++++++++++++++++++\n";
					cout<<"|Thanks for using JS UNIT CONVERTER.|\n";
					cout<<"=====================================\n";
				}
		}
}
	while(call!=11);
	else if(input == 2)
	do
	{
		
	//+++++++++++++++++++++++++++++//
	//     LENGTH CONVERSION      //
	//***************************//
		system("cls");
		system("color 5f");
		cout<<"=================================\n";
		cout<<"| 1 = Meter to Centimetre       |\n";
		cout<<"* 			        +\n";
		cout<<"| 2 = Centimetre to Meter	|\n";
		cout<<"* 			        +\n";
		cout<<"| 3 = Kilometer to Centimetre   |\n";
		cout<<"* 				+\n";
		cout<<"| 4 = Centimetre to Kilometer   |\n";
		cout<<"* 				+\n";
		cout<<"| 5 = Centimetre to Milimeter   |\n";
		cout<<"* 				+\n";
		cout<<"| 6 = Milimeter to Centimetre   |\n";
		cout<<"* 				+\n";
		cout<<"| 7 = Mile to centimetre 	|\n";
		cout<<"* 				+\n";
		cout<<"| 8 = Centimetre to Mile 	|\n";
		cout<<"* 				+\n";
		cout<<"| 9 = Yard to Centimetre	|\n";
		cout<<"* 				+\n";
		cout<<"|10 = Centimetre to Yard        |\n";
		cout<<"* 				+\n";
		cout<<"|11 = Foot to Centimetre	|\n";
		cout<<"* 				+\n";
		cout<<"|12 = Centimetre to Foot        |\n";
		cout<<"* 				+\n";
		cout<<"|13 = Inch to Centimetre	|\n";
		cout<<"* 				+\n";
		cout<<"|14 = Centimetre to Inch        |\n";
		cout<<"* 				+\n";
		cout<<"|15 = Enter 15 to exit or escape|\n";
		cout<<"*********************************\n";
		cout<<endl<<endl;
		cout<<"Make any one selection from above:";
		cin>>calling;
		if(calling == 1)
		{
			Six _6;			
		cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(calling == 2)
		{
			Six _6(100);
			_6.show();			
		cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(calling == 3)
		{
			Seventh _7;
		cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(calling == 4)
		{
			Seventh _7(100000);
			_7.show();			
		cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(calling == 5)
		{
			Eight _8;
		cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(calling == 6)
		{
			Eight _8(10);
			_8.show();
		cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(calling == 7)
		{
			Nine _9;
		cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(calling == 8)
		{		
			Nine _9(160934.4);
			_9.show();
		cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(calling == 9)
		{		
			Ten _10;
		cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(calling == 10)
		{		
			Ten _10(91.44);
			_10.show();
		cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(calling == 11)
		{		
			Eleven _11;
		cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(calling == 12)
		{		
			Eleven _11(30.48);
			_11.show();
		cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(calling == 13)
		{		
			Twelve _12;
		cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(calling == 14)
		{		
			Twelve _12(2.54);
			_12.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
			else if(calling == 15)		
			{
				system("cls"); // It is used to clear the screen.
				system("color 4f");
				cout<<"+++++++++++++++++++++++++++++++++++++\n";
				cout<<"|Thanks for using JS UNIT CONVERTER.|\n";
				cout<<"=====================================\n";
			}
		
		}
		
	while(calling!=15);
	else if(input == 3)
	do
	{
		
	//+++++++++++++++++++++++++++++//
	//       AREA CONVERSION      //
	//***************************//
		system("cls");
		system("color 5f");
		cout<<"========================================\n";
		cout<<"| 1 = Square kilometer to Square Metre |\n";
		cout<<"* 			               +\n";
		cout<<"| 2 = Square Metre to Square Kilometer |\n";
		cout<<"* 			               +\n";
		cout<<"| 3 = Square kilometer to Square Mile  |\n";
		cout<<"* 				       +\n";
		cout<<"| 4 = Square Mile to Square kilometer  |\n";
		cout<<"* 			               +\n";
		cout<<"| 5 = Square kilometer to Square Yard  |\n";
		cout<<"* 				       +\n";
		cout<<"| 6 = Square Yard to Square kilometer  |\n";
		cout<<"* 				       +\n";
		cout<<"| 7 = Square kilometer to Square Foot  |\n";
		cout<<"* 				       +\n";
		cout<<"| 8 = Square Foot to Square kilometer  |\n";
		cout<<"* 				       +\n";
		cout<<"| 9 = Square kilometer to Square Inch  |\n";
		cout<<"* 				       +\n";
		cout<<"|10 = Square Inch to Square kilometer  |\n";
		cout<<"* 				       +\n";
		cout<<"|11 = Square kilometer to Acre	       |\n";
		cout<<"* 				       +\n";
		cout<<"|12 = Acre to Square kilometer         |\n";
		cout<<"* 				       +\n";
		cout<<"|13 = Enter 13 to escape or exit       |\n";
		cout<<"* 				       +\n";
		cout<<"****************************************\n";
		cout<<endl<<endl;
		cout<<"Make any one selection from above:";
		cin>>called;
		if(called == 1)
		{
			Thirteen _13;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(called == 2)
		{
			Thirteen _13(1e+6);
			_13.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(called == 3)
		{
			Fourteen _14(2.59);
			_14.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(called == 4)
		{
			Fourteen _14;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(called == 5)
		{
			Fifteen _15;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(called == 6)
		{
			Fifteen _15(1.196e+6);
			_15.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(called == 7)
		{
			Sixteen _16;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(called == 8)
		{
			Sixteen _16(1.076e+7);
			_16.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(called == 9)
		{
			Seventeen _17;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(called == 10)
		{
			Seventeen _17(1.55e+9);
			_17.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(called == 11)
		{
			Eighteen _18;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(called == 12)
		{
			Eighteen _18(247.105);
			_18.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(called == 13)
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
			cout<<"| Thanks for using JS Unit Converter.|\n";
			cout<<"**************************************\n";
		}
	}
	while(called!=13);
	else if(input == 4)
	do
	{
	//+++++++++++++++++++++++++++++//
	//       DATA CONVERSION      //
	//***************************//
		system("cls");
		system("color 5f");
		cout<<"===================================\n";
		cout<<"| 1 = Kilobit to Bit per second   |\n";
		cout<<"* 			          +\n";
		cout<<"| 2 = Bit per second to Kilobit   |\n";
		cout<<"* 			          +\n";
		cout<<"| 3 = Kilobyte to Bit per second  |\n";
		cout<<"* 				  +\n";
		cout<<"| 4 = Bit per second to Kilobyte  |\n";
		cout<<"* 				  +\n";
		cout<<"| 5 = Mega bit to Bit per second  |\n";
		cout<<"* 				  +\n";
		cout<<"| 6 = Bit per second to Mega bit  |\n";
		cout<<"* 				  +\n";
		cout<<"| 7 = Mega byte to Bit per second |\n";
		cout<<"* 				  +\n";
		cout<<"| 8 = Bit per second to Mega byte |\n";
		cout<<"* 				  +\n";
		cout<<"| 9 = Giga bit to Bit per second  |\n";
		cout<<"* 				  +\n";
		cout<<"|10 = Bit per second to Giga bit  |\n";
		cout<<"* 				  +\n";
		cout<<"|11 = Tera bit to Bit per second	 |\n";
		cout<<"* 				  +\n";
		cout<<"|12 = Bit per second to Tera bit  |\n";
		cout<<"* 				  +\n";
		cout<<"|13 = Tera byte to Bit per second |\n";
		cout<<"* 				  +\n";
		cout<<"|14 = Bit per second to Tera byte |\n";
		cout<<"* 				  +\n";
		cout<<"|15 = Enter 15 to exit or escape|\n";
		cout<<"***********************************\n";
		cout<<endl<<endl;
		
		cout<<"Make any one selection from above:";
		cin>>make_Selection;
		if(make_Selection == 1)
		{
			Ninghteen _19;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(make_Selection == 2)
		{
			Ninghteen _19(1000);
			_19.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(make_Selection == 3)
		{
			Twenty _20;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(make_Selection == 4)
		{
			Twenty _20(8000);
			_20.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(make_Selection == 5)
		{
			Twenty_One _21;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(make_Selection == 6)
		{
			Twenty_One _21(1e+6);
			_21.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(make_Selection == 7)
		{
			Twenty_Two _22;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(make_Selection == 8)
		{
			Twenty_Two _22(8e+6);
			_22.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(make_Selection == 9)
		{
			Twenty_Three _23;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(make_Selection == 10)
		{
			Twenty_Three _23(1e+9);
			_23.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(make_Selection == 11)
		{
			Twenty_Four _24;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(make_Selection == 12)
		{
			Twenty_Four _24(1e+12);
			_24.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(make_Selection == 13)
		{
			Twenty_Five _25;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(make_Selection == 14)
		{
			Twenty_Five _25(8e+12);
			_25.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(make_Selection == 15)
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
			cout<<"| Thanks for using JS Unit Converter.|\n";
			cout<<"**************************************\n";
		}
	}
	while(make_Selection!=15);
	else if(input == 5)
	do
	{
	//+++++++++++++++++++++++++++++//
	//     ENERGY CONVERSION      //
	//***************************//
		system("cls");
		system("color 5f");
		cout<<"===================================\n";
		cout<<"| 1 = Kilocalorie to Joule  |\n";
		cout<<"* 			          +\n";
		cout<<"| 2 = Joule to Kilocalorie  |\n";
		cout<<"* 			          +\n";
		cout<<"| 3 = Kilocalorie to Kilojoule  |\n";
		cout<<"* 				  +\n";
		cout<<"| 4 = Kilojoule to Kilocalorie  |\n";
		cout<<"* 				  +\n";
		cout<<"| 5 = Kilocalorie to Gramcalorie |\n";
		cout<<"* 				  +\n";
		cout<<"| 6 = Gramcalorie to Kilocalorie |\n";
		cout<<"* 				  +\n";
		cout<<"| 7 = Kilocalorie to Watt hour |\n";
		cout<<"* 				  +\n";
		cout<<"| 8 = Watt hour to Kilocalorie |\n";
		cout<<"* 				  +\n";
		cout<<"| 9 = Kilowatt hour to Watt hour  |\n";
		cout<<"* 				  +\n";
		cout<<"|10 = Watt hour to Kilowatt hour  |\n";
		cout<<"* 				  +\n";
		cout<<"|11 = Joule to Electron volt	 |\n";
		cout<<"* 				  +\n";
		cout<<"|12 = Electron volt to Joule  |\n";
		cout<<"* 				  +\n";
		cout<<"|13 = Kilowatt hour to Electron volt |\n";
		cout<<"* 				  +\n";
		cout<<"|14 = Electron volt to Kilowatt hour |\n";
		cout<<"* 				  +\n";
		cout<<"|15 = Enter 15 to exit or escape|\n";
		cout<<"***********************************\n";
		cout<<endl<<endl;
		
		cout<<"Make any one selection from above:";
		cin>>has_Selection;
		
		if(has_Selection == 1)
		{
			Twenty_Six _26;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(has_Selection == 2)
		{
			Twenty_Six _26(4184);
			_26.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(has_Selection == 3)
		{
			Twenty_Seven _27;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(has_Selection == 4)
		{
			Twenty_Seven _27(4.184);
			_27.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(has_Selection == 5)
		{
			Twenty_Eight _28;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(has_Selection == 6)
		{
			Twenty_Eight _28(1000);
			_28.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(has_Selection == 7)
		{
			Twenty_Nine _29;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(has_Selection == 8)
		{
			Twenty_Nine _29(1000);
			_29.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(has_Selection == 9)
		{
			Thirty _30;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(has_Selection == 10)
		{
			Thirty _30(1000);
			_30.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(has_Selection == 11)
		{
			Thirty_One _31;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(has_Selection == 12)
		{
			Thirty_One _31(6.242e+18);
			_31.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(has_Selection == 13)
		{
			Thirty_Two _32;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(has_Selection == 14)
		{
			Thirty_Two _32(2.247e+25);
			_32.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
	}
	while(has_Selection!=15);
	else if(input == 6)
	do
	{
	//+++++++++++++++++++++++++++++//
	//    DIGITAL CONVERSION      //
	//***************************//
		system("cls");
		system("color 5f");
		cout<<"===================================\n";
		cout<<"| 1 = Kilobit to Bit              |\n";
		cout<<"* 			          +\n";
		cout<<"| 2 = Bit to Kilobit 		  |\n";
		cout<<"* 			          +\n";
		cout<<"| 3 = Byte to Bit    		  |\n";
		cout<<"* 				  +\n";
		cout<<"| 4 = Bit to Byte    		  |\n";
		cout<<"* 				  +\n";
		cout<<"| 5 = Megabit to Bit 		  |\n";
		cout<<"* 				  +\n";
		cout<<"| 6 = Bit to Megabit 		  |\n";
		cout<<"* 				  +\n";
		cout<<"| 7 = Gigabit to Bit 		  |\n";
		cout<<"* 				  +\n";
		cout<<"| 8 = Bit to Gigabit 		  |\n";
		cout<<"* 				  +\n";
		cout<<"| 9 = Terabit to Bit 		  |\n";
		cout<<"* 				  +\n";
		cout<<"|10 = Bit to Terabit 		  |\n";
		cout<<"* 				  +\n";
		cout<<"|11 = Petabit to Bit	          |\n";
		cout<<"* 				  +\n";
		cout<<"|12 = Bit to Petabit 		  |\n";
		cout<<"* 				  +\n";
		cout<<"|13 = Megabit to Kilobit   	  |\n";
		cout<<"* 				  +\n";
		cout<<"|14 = Kilobit to Megabit 	  |\n";
		cout<<"* 				  +\n";
		cout<<"|15 = Enter 15 to exit or escape  |\n";
		cout<<"***********************************\n";
		cout<<endl<<endl;
		cout<<"Make any one selection from above:";
		cin>>in_Selection;
		if(in_Selection == 1)
		{
			Thirty_Three _33;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(in_Selection == 2)
		{
			Thirty_Three _33(1000);
			_33.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(in_Selection == 3)
		{
			Thirty_Four _34;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(in_Selection == 4)
		{
			Thirty_Four _34(8);
			_34.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(in_Selection == 5)
		{
			Thirty_Five _35;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(in_Selection == 6)
		{
			Thirty_Five _35(1.049e+6);
			_35.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(in_Selection == 7)
		{
			Thirty_Six _36;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(in_Selection == 8)
		{
			Thirty_Five _36(1e+9);
			_36.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(in_Selection == 9)
		{
			Thirty_Seven _37;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(in_Selection == 10)
		{
			Thirty_Seven _37(1e+12);
			_37.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(in_Selection == 11)
		{
			Thirty_Eight _38;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(in_Selection == 12)
		{
			Thirty_Eight _38(1e+15);
			_38.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(in_Selection == 13)
		{
			Thirty_Nine _39;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(in_Selection == 14)
		{
			Thirty_Nine _39(1000);
			_39.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(in_Selection == 15)
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
			cout<<"| Thanks for using JS Unit Converter.|\n";
			cout<<"**************************************\n";			
		}
	}
	while(o_Selection!=15);
	else if(input == 7)
	do
	{
	//+++++++++++++++++++++++++++++//
	//    FREQUENCY CONVERSION    //
	//***************************//
		system("cls");
		system("color 5f");
		cout<<"===================================\n";
		cout<<"| 1 = Kilohertz to Hertz          |\n";
		cout<<"* 			          +\n";
		cout<<"| 2 = Hertz to Kilohertz 	  |\n";
		cout<<"* 			          +\n";
		cout<<"| 3 = Megahertz to Hertz    	  |\n";
		cout<<"* 				  +\n";
		cout<<"| 4 = Hertz to Megahertz    	  |\n";
		cout<<"* 				  +\n";
		cout<<"| 5 = Gigahertz to Hertz 	  |\n";
		cout<<"* 				  +\n";
		cout<<"| 6 = Hertz to Gigahertz 	  |\n";
		cout<<"* 				  +\n";
		cout<<"| 7 = Megahertz to Kilohertz      |\n";
		cout<<"* 				  +\n";
		cout<<"| 8 = Kilohertz to Megahertz      |\n";
		cout<<"* 				  +\n";
		cout<<"| 9 = Gigahertz to MegaHertz  	  |\n";
		cout<<"* 				  +\n";
		cout<<"|10 = Megahertz to Gigahertz 	  |\n";
		cout<<"* 				  +\n";
		cout<<"|11 = Enter 15 to exit or escape  |\n";
		cout<<"***********************************\n";
		cout<<endl<<endl;
		cout<<"Make any one selection from above:";
		cin>>o_Selection;		
		if(o_Selection == 1)
		{
			Forty _40;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(o_Selection == 2)
		{
			Forty _40(1000);
			_40.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(o_Selection == 3)
		{
			Forty_One _41;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(o_Selection == 4)
		{
			Forty_One _41(1e+6);
			_41.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
			
		else if(o_Selection == 5)
		{
			Forty_Two _42;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(o_Selection == 6)
		{
			Forty_Two _42(1e+9);
			_42.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(o_Selection == 7)
		{
			Forty_Three _43;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(o_Selection == 8)
		{
			Forty_Three _43(1000);
			_43.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(o_Selection == 9)
		{
			Forty_Four _44;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(o_Selection == 10)
		{
			Forty_Four _44(1000);
			_44.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(o_Selection == 11)
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
			cout<<"| Thanks for using JS Unit Converter.|\n";
			cout<<"**************************************\n";			
		}
	}
	while(o_Selection!=11);
	else if(input == 8)
	do
	{
	//+++++++++++++++++++++++++++++//
	//    FREQUENCY CONVERSION    //
	//***************************//
		system("cls");
		system("color 5f");
		cout<<"==============================================\n";
		cout<<"| 1 = Kilometre per litre to Mile per Gallon |\n";
		cout<<"* 			          	     +\n";
		cout<<"| 2 = Mile per Gallon to Kilometre per litre |\n";
		cout<<"* 			          	     +\n";
		cout<<"| 3 = Enter 3 to exit or escape  	     |\n";
		cout<<"**********************************************\n";
		cout<<endl<<endl;
		cout<<"Make any one selection from above:";
		cin>>oo_Selection;		
		if(oo_Selection == 1)
		{
			Forty_Five _45;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(oo_Selection == 2)
		{
			Forty_Five _45(2.352);
			_45.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(oo_Selection == 3)
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
			cout<<"| Thanks for using JS Unit Converter.|\n";
			cout<<"**************************************\n";			
		}
	}
	while(oo_Selection!=3);
	else if(input == 9)
	do
	{
	//+++++++++++++++++++++++++++++//
	//  TEMPERATURE CONVERSION    //
	//***************************//
		system("cls");
		system("color 5f");
		cout<<"===================================\n";
		cout<<"| 1 = Celsius to Fahrenheit       |\n";
		cout<<"* 			          +\n";
		cout<<"| 2 = Fahrenheit to Celsius 	  |\n";
		cout<<"* 			          +\n";
		cout<<"| 3 = Celsius to Kelvin       	  |\n";
		cout<<"* 				  +\n";
		cout<<"| 4 = Kelvin to Celsius    	  |\n";
		cout<<"* 				  +\n";
		cout<<"| 5 = Fahrenheit to Kelvin 	  |\n";
		cout<<"* 				  +\n";
		cout<<"| 6 = Kelvin to Fahrenheit 	  |\n";
		cout<<"* 				  +\n";
		cout<<"| 7 = Enter 7 to exit or escape   |\n";
		cout<<"***********************************\n";
		cout<<endl<<endl;
		cout<<"Make any one selection from above:";
		cin>>t_Selection;		
		if(t_Selection == 1)
		{
			Forty_Six _46;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
	
		else if(t_Selection == 2)
		{
			Forty_Six _46(0.55555);
			_46.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(t_Selection == 3)
		{
			Forty_Seven _47;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(t_Selection == 4)
		{
			Forty_Seven _47(273.15);
			_47.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(t_Selection == 5)
		{
			Forty_Eight _48;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(t_Selection == 6)
		{
			Forty_Eight _48(273.15);
			_48.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(t_Selection == 7)
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
			cout<<"| Thanks for using JS Unit Converter.|\n";
			cout<<"**************************************\n";			
		}
	}
	while(t_Selection!=7);	
	else if(input == 10)
	do
	{
	//+++++++++++++++++++++++++++++//
	//      TIME CONVERSION       //
	//***************************//
		system("cls");
		system("color 5f");
		cout<<"===================================\n";
		cout<<"| 1 = Second to Nanosecond        |\n";
		cout<<"* 			          +\n";
		cout<<"| 2 = Nanosecond to Second 	  |\n";
		cout<<"* 			          +\n";
		cout<<"| 3 = Second to Microsecond       |\n";
		cout<<"* 				  +\n";
		cout<<"| 4 = Microsecond to Second       |\n";
		cout<<"* 				  +\n";
		cout<<"| 5 = Second to Millisecond 	  |\n";
		cout<<"* 				  +\n";
		cout<<"| 6 = Millisecond to Second 	  |\n";
		cout<<"* 				  +\n";
		cout<<"| 7 = Minute to Second 	          |\n";
		cout<<"* 				  +\n";
		cout<<"| 8 = Second to Minute	          |\n";
		cout<<"* 				  +\n";
		cout<<"| 9 = Hour to Second 	          |\n";
		cout<<"* 				  +\n";
		cout<<"|10 = Second to Hour  	          |\n";
		cout<<"* 				  +\n";
		cout<<"|11 = Week to Second 	          |\n";
		cout<<"* 				  +\n";
		cout<<"|12 = Second to Week  	          |\n";
		cout<<"* 				  +\n";
		cout<<"|13 = Month to Second 	          |\n";
		cout<<"* 				  +\n";
		cout<<"|14 = Second to Month  	          |\n";
		cout<<"* 				  +\n";
		cout<<"|15 = Century to Second 	  |\n";
		cout<<"* 				  +\n";
		cout<<"|16 = Second to Century  	  |\n";
		cout<<"* 				  +\n";
		cout<<"|17 = Day to Minute 	          |\n";
		cout<<"* 				  +\n";
		cout<<"|18 = Minute to Day  	          |\n";
		cout<<"* 				  +\n";
		cout<<"|19 = Day to Week 	          |\n";
		cout<<"* 				  +\n";
		cout<<"|20 = Week to Day  	          |\n";
		cout<<"* 				  +\n";
		cout<<"|21 = Century to Day 	          |\n";
		cout<<"* 				  +\n";
		cout<<"|22 = Day to Century  	          |\n";
		cout<<"* 				  +\n";
		cout<<"|23 = Hour to Nanosecond 	  |\n";
		cout<<"* 				  +\n";
		cout<<"|24 = Nanosecond to Hour  	  |\n";
		cout<<"* 				  +\n";
		cout<<"|25 = Hour to Microsecond 	  |\n";
		cout<<"* 				  +\n";
		cout<<"|26 = Microsecond to Hour  	  |\n";
		cout<<"* 				  +\n";
		cout<<"|27 = Week to Hour	          |\n";
		cout<<"* 				  +\n";
		cout<<"|28 = Hour to Week	          |\n";
		cout<<"* 				  +\n";
		cout<<"|29 = Calander year to Week	  |\n";
		cout<<"* 				  +\n";
		cout<<"|30 = Week to Calander year	  |\n";
		cout<<"* 				  +\n";
		cout<<"|31 = Micro to Nano	   	  |\n";
		cout<<"* 				  +\n";
		cout<<"|32 = Nano to Micro	   	  |\n";
		cout<<"* 				  +\n";
		cout<<"|33 = Week to Nanosecond	  |\n";
		cout<<"* 				  +\n";
		cout<<"|34 = Nanosecond to Week	  |\n";
		cout<<"* 				  +\n";
		cout<<"|35 = Week to Second 	  	  |\n";
		cout<<"* 				  +\n";
		cout<<"|36 = Second to Week	          |\n";
		cout<<"* 				  +\n";
		cout<<"|37 = Enter 37 to exit or escape  |\n";
		cout<<"***********************************\n";
		cout<<endl<<endl;
		cout<<"Make any one selection from above:";
		cin>>time_Selection;		
		if(time_Selection == 1)
		{
			Forty_Nine _49;			
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(time_Selection == 2)
		{
			Forty_Nine _49(1e+9);			
			_49.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 3)
		{
			Fifty _50;			
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 4)
		{
			Fifty _50(1e+6);			
			_50.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 5)
		{
			Fifty_One _51;			
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 6)
		{
			Fifty_One _51(1000);			
			_51.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 7)
		{
			Fifty_Three _53;			
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 8)
		{
			Fifty_Three _53(60);			
			_53.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 9)
		{
			Fifty_Four _54;			
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 10)
		{
			Fifty_Four _54(3600);			
			_54.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 11)
		{
			Fifty_Five _55;			
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 12)
		{
			Fifty_Five _55(604800);			
			_55.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 13)
		{
			Fifty_Six _56;			
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 14)
		{
			Fifty_Six _56(2.628e+6);			
			_56.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 15)
		{
			Fifty_Seven _57;			
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 16)
		{
			Fifty_Seven _57(3.154e+9);			
			_57.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 17)
		{
			Fifty_Eight _58;			
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 18)
		{
			Fifty_Eight _58(1440);			
			_58.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 19)
		{
			Fifty_Nine _59;			
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 20)
		{
			Fifty_Nine _59(7);			
			_59.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 21)
		{
			Sixty _60;			
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 22)
		{
			Sixty _60(36500);			
			_60.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 23)
		{
			Sixty_One _61;			
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 24)
		{
			Sixty _61(3.6e+12);			
			_61.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 25)
		{
			Sixty_Two _62;			
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 26)
		{
			Sixty _62(3.6e+9);			
			_62.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 27)
		{
			Sixty_Three _63;			
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 28)
		{
			Sixty _63(168);			
			_63.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 29)
		{
			Sixty_Four _64;			
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 30)
		{
			Sixty _64(52.143);			
			_64.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 31)
		{
			Sixty_Five _65;			
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 32)
		{
			Sixty _65(1000);			
			_65.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 33)
		{
			Sixty_Six _66;			
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 34)
		{
			Sixty _66(6.048e+14);			
			_66.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 35)
		{
			Sixty_Seven _67;			
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(time_Selection == 36)
		{
			Sixty _67(604800);			
			_67.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		else if(time_Selection == 37)
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
			cout<<"| Thanks for using JS Unit Converter.|\n";
			cout<<"**************************************\n";				
		}
	}
	
	while(time_Selection!=37);
	else if(input == 11)
	do
	{
	//+++++++++++++++++++++++++++++//
	//    PRESSURE CONVERSION     //
	//***************************//
		system("cls");
		system("color 5f");
		cout<<"===================================\n";
		cout<<"| 1 = Atmosphere to Bar           |\n";
		cout<<"* 			          +\n";
		cout<<"| 2 = Bar to Atmosphere  	  |\n";
		cout<<"* 			          +\n";
		cout<<"| 3 = Atmosphere to Pascal        |\n";
		cout<<"* 				  +\n";
		cout<<"| 4 = Pascal to Atmosphere        |\n";
		cout<<"* 				  +\n";
		cout<<"| 5 = Atmosphere to Pound  	  |\n";
		cout<<"* 				  +\n";
		cout<<"| 6 = Pound to Atmosphere  	  |\n";
		cout<<"* 				  +\n";
		cout<<"|7 = Enter 7 to exit or escape    |\n";
		cout<<"***********************************\n";
		cout<<endl<<endl;
		cout<<"Make any one selection from above:";
		cin>>p_Selection;		
		if(p_Selection == 1)
		{
			Sixty_Eight _68;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(p_Selection == 2)
		{
			Sixty_Eight _68(1.013);
			_68.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(p_Selection == 3)
		{
			Sixty_Nine _69;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(p_Selection == 4)
		{
			Sixty_Eight _69(101325);
			_69.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(p_Selection == 5)
		{
			Seventy _70;
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(p_Selection == 6)
		{
			Seventy _70(14.696);
			_70.show();
			cout<<endl;
			cout<<"+++++++++++++++++++++++++++++++++++++\n";
			cout<<"|Do you want to go to the main menu.|\n";
			cout<<"|				    |\n";
			cout<<"|	       1 = Yes		    |\n";
			cout<<"|			            |\n";
			cout<<"|	       2 = No 	            |\n";
			cout<<"=====================================\n";
			cout<<endl;
			cout<<"Make any one selection form above:";
			cin>>chosen;
			if(chosen == 1)
			{
				goto A;
			}
			else 
			{
				cout<<"As u wish\n";
			}
		}
		
		else if(p_Selection == 7)
		{
			system("cls"); // It is used to clear the screen.
			system("color 4f");
			cout<<"++++++++++++++++++++++++++++++++++++++\n";
			cout<<"| Thanks for using JS Unit Converter.|\n";
			cout<<"**************************************\n";
		}
	}
	while(p_Selection!=7);
	system("pause");
	return 0;
}

