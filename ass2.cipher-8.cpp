//FCAI-Programing 1-2022-Assignment 2
//Program Name:  XOR Cipher   
//Program Description: 
//Last Modification Date: 22Mar2022
//Author1 and ID and Group: 20210098
//Author2 and ID and Group: 20210222
//Author3 and ID and Group: 20210295
//Teaching Assistant:
//purpose:


#include<iostream>
#include<string>
using namespace std;
int main()
{
	
	int i = 0, nstr, len, nkey, Xor,k,decimal; // i = i for loop,nstr = decimal Ascii for each char in the statement,len = length of the statment,nkey= decimal Ascii for the char Key,Xor = the result after do Xor operation, decimal = decimal XOR,k = decimal%16.
	string str, cstr, cipher = "encode",hexa="",chexa;  //str = the input statment ,cstr = the output statement,cipher for if statment wich equal (encode or decode).
	char key = 'P', cchar,hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'}; // key = the char key, cchar = to store int xor as char,hex= array of hexa nnmbers.	
	cout << "Hello user (: " << "\n" << "Do you want to encode or decode ?" << endl;
	cin >> cipher; //to know which opreation the user want
	cin.ignore();

	if (cipher=="encode")
	{
	
		cout << "Please enter the char Key: "<<endl;
		cin >> key; //take the char key
		cin.ignore();
		nkey = key; //store the char in integr to get the decimal ASCII of char key.
		cout << "enter the statment you would like to encode it:" << endl;
		getline(cin, str); //take the statement from the user.
		len = str.length(); //store the length of the statement in len variable.
		for (i;i < len;i++) // for loop to loop in each character in the statement.
		{
			nstr = str.at(i); //get the decimal ASCII for each char in the statement.  
			Xor = nstr ^ nkey; // do xor operation to the char key with each char in statement.
			cchar = Xor; //store the result of xor for each char as a string.
			cstr += cchar; //collect the charracters in new statment.
			decimal = Xor; //store xor value in a new variable.
			hexa = "";
			while (decimal > 0) //while loop to get the hexa represntation for each char.
			{
				k = decimal % 16; //hexa operation
				hexa = hex[k] + hexa; //add the hexa number for each char to he hexa statement
				decimal = decimal / 16; 
			} 
			chexa += hexa; //the finall hexa statment.
		}
		cout <<"the encode is :\n" << cstr << endl<<"the hexa is:\n"<<chexa<<endl;//print the encode statement and the hexa for it.
		cout << "Thank you for using my cipher (: ";
	}
	if (cipher == "decode")
	{

		cout << "Please enter the char Key: " << endl;
		cin >> key; //take the char key
		cin.ignore();
		nkey = key; //store the char in integr to get the decimal AScii of char key.
		cout << "enter the statment you would like to decode it:" << endl;
		getline(cin, str); //take the statement from the user.
		len = str.length(); //store the length of the statement in len variable.
		for (i;i < len;i++) // for loop to loop in each character in the statement     #
		{
			nstr = str.at(i); //get the decimal Ascii for each char in the statement .
			Xor = nstr ^ nkey; // do xor opreationto to the char key with each char in statement.
			cchar = Xor; //store the result of xor for individual char as a string .
			cstr += cchar; //cloect the charracters in new statment.
		}
		cout << cstr << endl; //print the decode statement.
		cout << "Thank you for using my cipher (: "<<endl;

	}
}