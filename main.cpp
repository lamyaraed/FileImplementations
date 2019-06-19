// FCI – Programming 1 – 2018 - Assignment 3
// Program Name: assignment 3 last edit.cpp
// Last Modification Date: 06/04/2018
// Author1 and ID and Group:20170392 G15
// Author2 and ID and Group:20170387 G15
// Author3 and ID and Group:20170399 G15
// Teaching Assistant: Eng.Samar

/* Faculty of Computers and Info, Cairo Uni.
   Author: Ahmed Mohammed Abdulwahab, Lamyaa Raed, Yara Rabea
   Assignment 3 solution

   Sample program for calculating statistics
                                    +----------+
                                    |    main  |
                                    +----------+
                                         |
         +------------+----------+-------------+--------------------+-------------------------+-------------------+-------------+-----------------+-----------------+-------------+-------------+-------------+
         |            |          |             |                    |                         |                   |             |                 |                 |             |             |             |
  +----------+  +----------+  +---------+  +----------+    +-------------------+    +------------------+    +-----------+  +-----------+   +--------------+    +----------+  +----------+  +----------+  +-------------+
  | new_data |  | new_file |  | desplay |  | save_txt |    | count_words_chars |    | deleteFileContent|    | find_word |  |append_word|   | replace_word |    |uppercase |  | lowercase|  | aDD_file |  | encrypt_file|
  +----------+  +----------+  +---------+  +----------+    +-------------------+    +------------------+    +-----------+  +-----------+   +--------------+    +----------+  +----------+  +----------+  +-------------+

   Date: 6 April 2018
   Version: 1.0
*/

#include<iostream>
#include<cmath>
#include<string>
#include<fstream>
#include<algorithm>
using namespace std;



void new_data(string name)
{
	ofstream filename1;
	//string name;
	string value;
//	cout << "enter your file name \n";
//	cin >> name;
	cout << "enter your string  \n";
	//cin >> value;
	cin.ignore();
	getline(cin,value);
	filename1.open(name.c_str(),ios::app);
	filename1 << value;
	filename1.close();
}
void new_file(string name)
{

	ofstream filename1;
	//string name;
//     char name[20];
//	cout << "enter your file name \n";
//	cin >> name;

	filename1.open(name.c_str());
	filename1.close();

}
void desplay(string name)
{
	//string name1;

	//cout << "enter your file name num 1 \n";
	//cin >> name;


	ifstream filename3;
	filename3.open(name.c_str());
	cout << filename3.rdbuf();
	cout << "\n";
	filename3.close();


}
void save_txt(string name)
{
	ofstream filename1;
	string filename5;
	string filename4;
	cout << "enter your txt \n";
	getline(cin, filename4);
	//cout << "enter your file name \n";
	//cin >> name;
	filename1.open(name.c_str());
	filename1 << filename4;
	filename1.close();
}

void count_words_chars(string name)
{
    ifstream filename3;
    string text;
    int count_words = 0 , count_chars = 0 ;
	filename3.open(name.c_str());

	while(!filename3.eof())
    {
        filename3>>text;
        count_words++;
        count_chars+=text.length();
    }
	cout<< "number of words = " << count_words << endl;

	cout<< "number of characters = " << count_chars << endl;
	filename3.close();

}

void deleteFileContent(string name)
{
    ofstream out(name.c_str());
    out.close();
}

void find_word(string name)
{
    ifstream filename3;
    string text1, text2, text3, text4=" ";
    int x;

    filename3.open(name.c_str());

	while(filename3>>text3 )
    {
        text2.append(text3);
        text2.append(text4);
    }
    cout<<text2<<endl;
    cin>>text1;
    for(int i=0; i<text2.length();i++)
    {
        x=text2.find(text1);
    }
     cout<<x<<endl;
}
void append_word(string name)
{

    ofstream filename3;
    ifstream text5;
    string text1, text2, text3, text4="\n";
    cout<<"enter your word\n";
    cin>>text1;

    filename3.open(name.c_str(),ios::app);
    filename3<<text4;
    filename3<<text1;
    filename3.close();
    text5.open (name.c_str());
    cout << text5.rdbuf()<<endl;
    text5.close();

}
void replace_word(string name)
{
    ofstream z;
    ifstream y;
    int i=0;
    string a,A,xx,yy,zz=" ";
    cout<< "Enter your word to replace"<<endl;
    cin >> xx;
    cout << "Enter the new word"<<endl;
    cin>> yy;
    y.open(name.c_str());
    while(y>>A)
        {
         if (xx==A)
            {
                A=yy;
                a.append(A);
                a.append(zz);
                i++;
            }
            else {
                 a.append(A);
            }

        }

    y.close();

    if (i=0)
        {
            cout<<"word not found \n";
        }

    z.open(name.c_str());
    z<<a;
    z.close();
    cout<<"ur string ="<<a<<endl;

}

void uppercase(string name)
{
    ifstream filename3;
    ofstream text;
    string b,B,bb=" ";


    filename3.open(name.c_str());

	while(filename3>>B )
    {
        b.append(B);
        b.append(bb);
    }
    transform(b.begin(),b.end(),b.begin(),::toupper);
    text.open(name.c_str());
    text<<b;
    text.close();
    cout<<"your string is : "<<b<<"\n";

}

void lowercase(string name)
{
    ifstream filename3;
    ofstream fille;
    string b,B,bb=" ";


    filename3.open(name.c_str());

	while(filename3>>B )
    {
        b.append(B);
        b.append(bb);
    }
    transform(b.begin(),b.end(),b.begin(),::tolower);
    fille.open(name.c_str());
    fille<<b;
    fille.close();
    cout<<"your string is : "<<b<<"\n";

}

void aDD_file(string name)
{
	string  A, a, c = " " ;
	ifstream set1;
	ofstream set2;
	cout << "enter name of file you wont to add in the oregnal file \n";
	cin >> name;
	set1.open(name.c_str());
	while (set1 >> A)
	{

		a.append(A);
		a.append(c);

	}
	set2.open("setring.txt", ios::app);
	set2 << "\n";
	set2 << a;
	set2.close();
	cout << "cheak your file \n";
}


void encrypt_file (string name)
{
    int number;
    string msg;
    string en_msg="";
    char assignemnt3 [1000];
    fstream filename3;
    cin.getline(assignemnt3, 1000);
    filename3.open(name.c_str());
    filename3 >> msg;
    cout<<"If you want to cipher the data enter number 1 and if you want to decipher the data enter 2: ";
    cin>>number;
    cin.ignore(100,'\n');
    string low ="abcdefghijklmnopqrstuvwxyz";
    string upr ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string num ="1234567890";
    if (number==1 || (number==2))
    {
        for (int i = 0 ; i <msg.length() ; i ++ )
        {
            char w = msg[i] ;
            if (low.find(w)!= string::npos)
            {
                int pos = low.find(w) ;
                if (pos<=12)
                {
                    pos +=13 ;
                    en_msg+=low[pos];
                }
                else
                {
                    pos -=13 ;
                    en_msg+=low[pos];
                }
            }
            if (upr.find(w)!= string::npos)
            {
                int pos = upr.find(w) ;
                if (pos<=12)
                {
                    pos +=13 ;
                    en_msg+=upr[pos];
                }
                else
                {
                    pos -=13 ;
                    en_msg+=upr[pos];
                }
            }
            if ((w=='1') || (w=='2') || (w=='3') || (w=='4') || (w=='5') || (w=='6') || (w=='7') || (w=='8') || (w=='9') || (w=='0'))
            {
                en_msg+=w;
            }

        }
        cout<<"your encoded massage is: "<<en_msg<<endl;
    }
}

int main(){


    string name ;
	string number;

	while (1)
    {


	cout << "if u want to load  a new data press 1 \n";

	cout << "if u want to name a new file press 2 \n";

	cout << "if u want to display file content press 3 \n";

	cout << "if u want to save text press 4 \n";

	cout << "if u want to know the number of words and characters press 5 \n";

    cout << "if u want to search for a word press 6 \n";

    cout << "if u want to empty file content press 7 \n";

    cout << "if u want to add a word press 8 \n";

    cout << "if u want to replace a word press 9 \n";

    cout << "If u want to turn sentence to uppercase press 10\n";

    cout << "If u want to turn sentence to lowercase press 11\n";

    cout << "If u want to add a file to another file press 12\n";

    cout << "If u want to encrypt a the file content press 13\n";

    cout << "if u want to exit press E \n";

    cout << "enter your your choice: \n";

	cin >> number;
	if (number == "1")
    {
        cout << "enter your file name \n";
	    cin  >> name;
	    new_data(name);
    }

	else if (number == "2")
    {
        cout << "enter your file name \n";
     	cin >> name;
        new_file(name);
    }

	else if (number == "3")
    {
        cout << "enter your file name num 1 \n";
        cin >> name;
        desplay(name);
    }

	else if (number == "4")
    {
        cout << "enter your file name \n";
	    cin >> name;
	    save_txt(name);
    }
    else if(number == "5")
    {
        count_words_chars(name);

    }

    else if (number == "6")
    {
        find_word(name);
    }
    else if(number == "7")
    {
        deleteFileContent(name);
    }
    else if(number == "8")
    {
        append_word(name);
    }
    else if(number == "9")
    {
        replace_word(name);

    }

    else if (number=="10"){
          uppercase(name);
        }

    else if (number == "11")
    {
       lowercase(name);

    }

    else if (number == "12")
    {
        aDD_file(name);
    }

    else if (number == "13")
    {

        encrypt_file (name);
    }


    else if (number == "E")
    {
        break;
    }
    }
}
