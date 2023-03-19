#include <iostream>
#include <windows.h>
#include<string>
using namespace std;
//Functions---------------------------------
string id_generator();
string pwd_generator();
void advertisement();
void create_account();
void signin();
void recover_pwd();
void regular();
void admit_card();
void start_application();
void my_application();
void homepage();
int main();
//User1--------------------------------------
string user1_admitcard = "";
string full_name1 = "zain ali", acc_email1 = "zaynmr810@gmail.com";
string applicant_id1 = "numl-f22-59846", pwd1 = "google";
//User2--------------------------------------
string user2_admitcard = "";
string full_name2, acc_email2, acc_confirmemail2;
string applicant_id2 = "numl-s23-", pwd2 = "";
int user2_application_status = 0;
string user2_application = "";
//User3--------------------------------------
string user3_admitcard = "";
string full_name3, acc_email3, acc_confirmemail3;
string applicant_id3 = "numl-s23-", pwd3 = "";
int user3_application_status = 0;
string user3_application = "";
//------------------------------------------
int user2 = 0, user3 = 0;
int active_user = 0;
//--------password storing variables--------
string pwd_new;
string id_new;
//------------------------------------------
struct personal_info
{
	char cnic[15], cell_no[11];
	string father_name, birthdate, gender, address, province, nationality, course;
	char blood_group[2];
};
struct personal_info s[2];
//------------------------------------------
void my_application()
{
	if (active_user == 1)
	{
		system("CLS");
		cout << "---------------------------------------------" << endl;
		cout << "| Applicant ID      : " << applicant_id1 << endl;
		cout << "| Applicant's Name  : " << full_name1 << endl;
		cout << "| Applicant's Email : " << acc_email1 << endl;
		cout << "| Cell no.          : 0300-****-017" << endl;
		cout << "| Present Address   : Sahiwal" << endl;
		cout << "| Father's Name     : Muhammad Rauf" << endl;
		cout << "| Birth Date        : 9-Nov-2003" << endl;
		cout << "| Gender            : MALE" << endl;
		cout << "| Blood Group       : A+" << endl;
		cout << "| Nationality       : Pakistani" << endl;
		cout << "| Province          : Punjab" << endl;
		cout << "| Course            : Software Engineering" << endl;
		cout << "---------------------------------------------" << endl;
		system("Pause");
	}
	if (user2_application_status == 0 || user3_application_status == 0)
	{
		cout << "Please Submit the Application First!" << endl;
	}
	if (user2_application_status == 1)
	{
		system("CLS");
		cout << "---------------------------------------------" << endl;
		cout << "| Applicant ID      : " << applicant_id2 << endl;
		cout << "| Applicant's Name  : " << full_name2 << endl;
		cout << "| Applicant's Email : " << acc_email2 << endl;
		cout << "| Cell no.          : " << s[0].cell_no << endl;
		cout << "| Present Address   : " << s[0].address << endl;
		cout << "| Father's Name     : " << s[0].father_name << endl;
		cout << "| Birth Date        : " << s[0].birthdate << endl;
		cout << "| Gender            : " << s[0].gender << endl;
		cout << "| Blood Group       : " << s[0].blood_group << endl;
		cout << "| Nationality       : " << s[0].nationality << endl;
		cout << "| Province          : " << s[0].province << endl;
		cout << "| Course            : " << s[0].course << endl;
		cout << "---------------------------------------------" << endl;
		system("Pause");
	}
	if (user3_application_status == 1)
	{
		system("CLS");
		cout << "---------------------------------------------" << endl;
		cout << "| Applicant ID      : " << applicant_id3 << endl;
		cout << "| Applicant’s Name  : " << full_name3 << endl;
		cout << "| Applicant’s Email : " << acc_email3 << endl;
		cout << "| Cell no.          : " << s[1].cell_no << endl;
		cout << "| Present Address   : " << s[1].address << endl;
		cout << "| Father's Name     : " << s[1].father_name << endl;
		cout << "| Birth Date        : " << s[1].birthdate << endl;
		cout << "| Gender            : " << s[1].gender << endl;
		cout << "| Blood Group       : " << s[1].blood_group << endl;
		cout << "| Nationality       : " << s[1].nationality << endl;
		cout << "| Province          : " << s[1].province << endl;
		cout << "| Course            : " << s[1].course << endl;
		cout << "---------------------------------------------" << endl;
		system("Pause");
	}
}
//------------------------------------------
void recover_pwd()
{
	string recover_pwd;
	system("CLS");
	cout << "Enter your system id : ";
	cin >> recover_pwd;
	if (recover_pwd == applicant_id1)
	{
		system("Color 2");
		pwd1 = "";
		cout << "Your New Password : " << pwd_generator() << endl;
		pwd1 += pwd_new;
		system("Pause");
	}
	else if (recover_pwd == applicant_id2)
	{
		system("Color 2");
		pwd2 = "";
		cout << "Your New Password : " << pwd_generator() << endl;
		pwd2 += pwd_new;
		system("Pause");
	}
	else if (recover_pwd == applicant_id3)
	{
		system("Color 2");
		pwd3 = "";
		cout << "Your New Password : " << pwd_generator() << endl;
		pwd3 += pwd_new;
		system("Pause");
	}
	else
	{
		system("Color 4");
		system("CLS");
		cout << "Wrong Applicant id!" << endl;
		Sleep(2000);
		system("CLS");
		regular();
	}
}
//------------------------------------------
void start_application()
{
	system("CLS");
	if (active_user == 1)
	{
		cout << "Your Application is already complete!";
		Sleep(3000);
		homepage();
	}
	else if (active_user == 2 && user2_application_status == 0)
	{
		user2_application_status = 1;
		cout << "Student Name         : " << full_name2 << endl;
		cout << "Student Email        : " << acc_email2 << endl;
		cout << "Enter Father's Name  : "; cin >> s[0].father_name;
		cout << "Enter CNIC           : "; cin >> s[0].cnic;
		cout << "Enter Cell no.       : "; cin >> s[0].cell_no;
		cout << "Enter Birthdate      : "; cin >> s[0].birthdate;
		cout << "Enter Gender         : "; cin >> s[0].gender;
		cout << "Enter Home Address   : "; cin >> s[0].address;
		cout << "Enter Province       : "; cin >> s[0].province;
		cout << "Enter Nationality    : "; cin >> s[0].nationality;
		cout << "Enter Blood group    : "; cin >> s[0].blood_group;
		cout << "Enter Course         : "; cin >> s[0].course;
		system("CLS");
		system("Color 2");
		cout << "Application Complete!" << endl;
		Sleep(2000);
	}
	else if (active_user == 3 && user3_application_status == 0)
	{
		user3_application_status = 1;
		cout << "Student Name         : " << full_name3 << endl;
		cout << "Student Email        : " << acc_email3 << endl;
		cout << "Enter Father's Name  : "; cin >> s[1].father_name;
		cout << "Enter CNIC           : "; cin >> s[1].cnic;
		cout << "Enter Cell no.       : "; cin >> s[1].cell_no;
		cout << "Enter Birthdate      : "; cin >> s[1].birthdate;
		cout << "Enter Gender         : "; cin >> s[1].gender;
		cout << "Enter Home Address   : "; cin >> s[1].address;
		cout << "Enter Province       : "; cin >> s[1].province;
		cout << "Enter Nationality    : "; cin >> s[1].nationality;
		cout << "Enter Blood group    : "; cin >> s[1].blood_group;
		cout << "Enter Course         : "; cin >> s[1].course;
		system("CLS");
		system("Color 2");
		cout << "Application Complete!" << endl;
		Sleep(2000);
	}
	else
	{
		system("CLS");
		system("Color 2");
		cout << "Your Application is already complete!";
	}
	homepage();
}
//------------------------------------------
void admit_card()
{
	system("CLS");
	if (active_user == 1)
	{
		cout << "----------NATIONAL UNIVERSITY OF MODERN LANGUAGES----------" << endl;
		cout << "|                     Islamabad Campus" << endl;
		cout << "|                        ADMIT CARD" << endl;
		cout << "|   Name          : Zain Ali" << endl;
		cout << "|   System-id     : Numl-f22-50946" << endl;
		cout << "|   Father's Name : Muhammad Rauf" << endl;
		cout << "|   CNIC:         : 36502-6829-5073" << endl;
		cout << "|   Session       : Spring 2023" << endl;
		cout << "|   Program       : Software Engineering" << endl;
		cout << "-----------------------------------------------------------" << endl;
		system("pause");
		homepage();
	}
	if (user2_application_status == 1)
	{
		cout << "----------NATIONAL UNIVERSITY OF MODERN LANGUAGES----------" << endl;
		cout << "|                     Islamabad Campus" << endl;
		cout << "|                        ADMIT CARD" << endl;
		cout << "|   Name          : " << full_name2 << endl;
		cout << "|   System-id     : " << applicant_id2 << endl;
		cout << "|   Father's Name : " << s[0].father_name << endl;
		cout << "|   CNIC:         : " << s[0].cnic << endl;
		cout << "|   Session       : Spring 2023" << endl;
		cout << "|   Program       : " << s[0].course << endl;
		cout << "-----------------------------------------------------------" << endl;
		system("pause");
		homepage();
	}
	if (user3_application_status == 1)
	{
		cout << "----------NATIONAL UNIVERSITY OF MODERN LANGUAGES----------" << endl;
		cout << "|                     Islamabad Campus" << endl;
		cout << "|                        ADMIT CARD" << endl;
		cout << "|   Name          : " << full_name3 << endl;
		cout << "|   System-id     : " << applicant_id3 << endl;
		cout << "|   Father's Name : " << s[1].father_name << endl;
		cout << "|   CNIC:         : " << s[1].cnic << endl;
		cout << "|   Session       : Spring 2023" << endl;
		cout << "|   Proram        : " << s[1].course << endl;
		cout << "-----------------------------------------------------------" << endl;
		system("pause");
		homepage();
	}
	else
	{
		system("CLS");
		system("Color 4");
		cout << "Please Submit Application First!" << endl;
		Sleep(2000);
	}
	homepage();
}
void advertisement()
{
	system("CLS");
	cout << "------------Islamabad Campus (Main)------------" << endl;
	cout << "|  FACULTY OF ENGINEERING & COMPUTER SCIENCE  |" << endl;
	cout << "|                                             |" << endl;
	cout << "| 0 Higher Studies Programs:                  |" << endl;
	cout << "| ----PhD----                                 |" << endl;
	cout << "| -Computer Science                           |" << endl;
	cout << "| -Software Engineering                       |" << endl;
	cout << "| -Mathematics (Afternoon)                    |" << endl;
	cout << "| ----MS----                                  |" << endl;
	cout << "| -Electrial Engeering                        |" << endl;
	cout << "| -Computer Science                           |" << endl;
	cout << "| -Data Science                               |" << endl;
	cout << "| -Artificial Intelligence                    |" << endl;
	cout << "| -Cyber Security                             |" << endl;
	cout << "| -Mathematics (Afternoon)                    |" << endl;
	cout << "|                                             |" << endl;
	cout << "| 0 Degree Programs                           |" << endl;
	cout << "| -BSCS (Morning & Afternoon)                 |" << endl;
	cout << "| -BS Artificial Intelligence (Morning)       |" << endl;
	cout << "| -BS Software Engineering                    |" << endl;
	cout << "| -BS Information Technology-Morning          |" << endl;
	cout << "| -BS Mathematics-Morning & Afternoon         |" << endl;
	cout << "| -BS Artificial Intelligence (Morning)       |" << endl;
	cout << "| -BS Mathematics (Bridging)                  |" << endl;
	cout << "| -BS Electronics - Afternoon                 |" << endl;
	cout << "-----------------------------------------------" << endl;
	system("Pause");
	system("CLS");
	regular();
}
//------------------------------------------
string pwd_generator()
{
	srand(time(NULL));
	char alphabet[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	pwd_new = "";
	for (int i = 1; i <= 6; i++)
	{
		pwd_new += alphabet[rand() % 6];
	}
	return pwd_new;
}
//------------------------------------------
string id_generator()
{
	int temp_id = 0;
	id_new = "";
	for (int i = 1; i <= 5; i++)
	{
		temp_id += rand();
	}
	id_new = to_string(temp_id);
	return id_new;
}
//------------------------------------------
void create_account()
{
	if (user2 == 0)
	{
		cout << "Enter Full Name : ";
		cin >> full_name2;
		cout << "\nEnter Email : ";
		cin >> acc_email2;
		cout << "\nConfirm Email : ";
		cin >> acc_confirmemail2;
		while (acc_email2 != acc_confirmemail2)
		{
			system("CLS");
			cout << "Emails do not match!" << endl;
			cout << "\nEnter Email : ";
			cin >> acc_email2;
			cout << "\nConfirm Email : ";
			cin >> acc_confirmemail2;
		}
		user2 = 1;
		system("CLS");
		system("Color 2");
		cout << "Account Creation Successful!" << endl;
		Sleep(2000);
		system("CLS");
		cout << "--------------------------------------" << endl;
		cout << "Your Applicant id : numl-s23-" << id_generator() << endl;
		applicant_id2 += id_new;
		cout << "Your Password     : " << pwd_generator() << endl;
		cout << "--------------------------------------" << endl;
		pwd2 += pwd_new;
		system("pause");
		system("CLS");
		system("Color 7");
		regular();
	}
	if (user3 == 0)
	{
		cout << "Enter Full Name : ";
		cin >> full_name3;
		cout << "\nEnter Email : ";
		cin >> acc_email3;
		cout << "\nConfirm Email : ";
		cin >> acc_confirmemail3;
		while (acc_email3 != acc_confirmemail3)
		{
			system("CLS");
			cout << "Emails do not match!" << endl;
			cout << "\nEnter Email : ";
			cin >> acc_email3;
			cout << "\nConfirm Email : ";
			cin >> acc_confirmemail3;
		}
		user3 = 1;
		system("CLS");
		system("Color 2");
		cout << "Account Creation Successful!" << endl;
		Sleep(2000);
		system("CLS");
		cout << "--------------------------------------" << endl;
		cout << "Your Applicant id : numl-s23-" << id_generator() << endl;
		applicant_id3 += id_new;
		cout << "Your Password     : " << pwd_generator() << endl;
		cout << "--------------------------------------" << endl;
		pwd3 += pwd_new;
		system("pause");
		system("CLS");
		system("Color 7");
		regular();
	}
	else
	{
		system("CLS");
		system("Color 4");
		cout << "Cannot Create More Users! " << endl;
		Sleep(2500);
		system("CLS");
	}
	regular();
}
//------------------------------------------
void signin()
{
	system("CLS");
	int fp;
	string check_id = "", check_pwd = "";
	cout << "Enter Application id : ";
	cin >> check_id;
	cout << "Enter Password : ";
	cin >> check_pwd;
	if (check_id == applicant_id1 && check_pwd == pwd1)
	{
		active_user = 1;
		system("CLS");
		system("Color 2");
		cout << "Login Successful!" << endl;
		Sleep(2000);
		system("Color 7");
		homepage();
	}
	else if (check_id == applicant_id2 && check_pwd == pwd2)
	{
		active_user = 2;
		system("CLS");
		system("Color 2");
		cout << "Login Successful!" << endl;
		Sleep(2000);
		system("Color 7");
		homepage();
	}
	else if (check_id == applicant_id3 && check_pwd == pwd3)
	{
		active_user = 3;
		system("CLS");
		system("Color 2");
		cout << "Login Successful!" << endl;
		Sleep(2000);
		system("Color 7");
		homepage();
	}
	else
	{
		system("CLS");
		system("Color 4");
		cout << "Wrong ID or Password!" << endl;
		Sleep(1500);
		system("CLS");
		system("Color 7");
		cout << "Enter 1 to Recover Password or any Number to exit : ";
		cin >> fp;
		switch (fp)
		{
		case 1:
		{
			recover_pwd();
			break;
		}
		default:
		{
			break;
		}
		}
		system("CLS");
		regular();
	}
}
//------------------------------------------
void regular()
{
	system("Color 7");
	int x;
	cout << "-----------------------------" << endl;
	cout << "| 1.Create New Account      |" << endl;
	cout << "| 2.Sign in                 |" << endl;
	cout << "| 3.Admission Advertisement |" << endl;
	cout << "| 4.Back                    |" << endl;
	cout << "-----------------------------" << endl;
	cin >> x;
	switch (x)
	{
	case 1:
	{
		create_account();
		break;
	}
	case 2:
	{
		signin();
		break;
	}
	case 3:
	{
		advertisement();
		break;
	}
	case 4:
	{
		system("CLS");
		main();
		break;
	}
	default:
	{
		cout << "Invalid Input!" << endl;
		Sleep(1500);
		system("CLS");
		regular();
	}
	}
}
//------------------------------------------
void homepage()
{
	system("CLS");
	system("Color 7");
	int choice;
	cout << "-----------------------" << endl;
	cout << "| 1.Start Application |\n";
	cout << "| 2.Admit Card        |\n";
	cout << "| 3.My Application    |\n";
	cout << "| 4.Mail Box          |\n";
	cout << "| 5.Change Password   |\n";
	cout << "| 6.Contact us        |\n";
	cout << "| 7.Back              |\n";
	cout << "-----------------------" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		start_application();
		break;
	}
	case 2:
	{
		admit_card();
		break;
	}
	case 3:
	{
		my_application();
		break;
	}
	case 4:
	{
		system("CLS");
		cout << "Welcome Student! We hope that you get admitted to the National University of Modern Languages" << endl << endl;
		system("Pause");
		system("CLS");
		system("Color 7");
		break;
	}
	case 5:
	{
		recover_pwd();
		break;
	}
	case 6:
	{
		system("Color 7");
		system("CLS");
		cout << "----------------------------------------------------------" << endl;
		cout << "|                   Islamabad Campus                     |" << endl;
		cout << "| Admission Office : H-9, Islamabad.                     |" << endl;
		cout << "| Telephone : 92-51-9265100-2401 , 92-51-9265100-2409    |" << endl;
		cout << "| Fax       : 92-51-9265100                              |" << endl;
		cout << "| Academics related queries : admission-info@numl.edu.pk |" << endl;
		cout << "| For technical assistance	 : it-desk@numl.edu.pk   |" << endl;
		cout << "----------------------------------------------------------" << endl;
		system("Pause");
		break;
	}
	case 7:
	{
		system("CLS");
		regular();
		break;
	}
	default:
	{
		system("CLS");
		system("Color 4");
		cout << "Wrong Option!" << endl;
		Sleep(1500);
	}
	}
	homepage();
}
//------------------------------------------
int main()
{
	int o = 3;
	while (true)
	{
		system("Color 7");
		cout << "----------------------NUML Admission System---------------------" << endl;
		cout << "|  1.Regular Admission Spring 2023       2.Summer Short Course |" << endl;
		cout << "----------------------------------------------------------------" << endl;
		cin >> o;
		if (o == 1)
		{
			system("CLS");
			regular();
		}
		else if (o == 2)
		{
			system("CLS");
			cout << "Admissions Closed for Summer Short Courses!" << endl;
			Sleep(2000);
			system("CLS");
		}
		else if (o == 0)
		{
			system("CLS");
			system("Color 2");
			cout << "Thankyou for visiting Numl!";
			Sleep(1500);
			system("CLS");
			exit(0);
		}
		else
		{
			system("CLS");
			system("Color 4");
			cout << "Invalid Input!" << endl;
			Sleep(1500);
			system("CLS");
		}
	}
}