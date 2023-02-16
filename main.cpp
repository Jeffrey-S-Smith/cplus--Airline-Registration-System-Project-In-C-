#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

////////////////////////////////////////////////

void mainMenu();

class Management
{
  public:
    Management()
    {
     mainMenu(); 
    }
};
//////////////////////DETAILS////////////////////////////////
 class Details
  {
    public:
    
      static string name, gender;
      int phoneNo;
      int age;
      string address;
      static int cId;
      char arr[100];
    
    void information()
    {
      cout<<"\nEnter customer ID:";
      cin>>cId;
      cout<<"\n Enter the name :";
      cin>>name;
      cout<<"\n Enter the age :";
      cin>>age;
      cout<<"\n Address :";
      cin>>address;
      cout<<"\n Gender :";
      cin>>gender;
      cout<<"Your details are saved\n"<<endl;
    }
  };

///////////////////////REGISTRATION////////////////////////////

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
  public:
  {
    static int choice;
    int choice1;
    int back;
    static float charges; 

    void flights()
    {
      string flightN[]={"Canada","USA","UK","Europe"};

      for(int a=0;a<4;a++)
      {
        cout<<(a+1)<<".flight to"<<flightN[a]<<endl; 
      }

      cout<<"\nWelcome to the Airlines!"<<endl;
      cout<<"Press the number of the country where you want to book:";
      cin>>choice;

      
      switch(choice)
        {
          case 1:
          {
            cout<<"__________Welcome to Canadian Airlines___________\n"<<endl;

            cout<<"Your comfort is our priority."<<endl;
            
            cout<<"Following are the flights \n"<<endl;

            cout<<"1. CAN - 400"<<endl;
            cout<<"\t02-01-2023 8:00AM 05hrs $. 14000"<<endl;
            cout<<"1. CAN - 500"<<endl;
            cout<<"\t02-02-2023 11:00AM 06hrs $. 15000"<<endl;
            cout<<"1. CAN - 600"<<endl;
            cout<<"\t02-03-2023 10:00AM 07hrs $. 16000"<<endl;

            cout<<"\nSelect the flight you want to book :";
            cin>>choice1;

              if(choice1==1)
              {
                charges=14000;
                cout<<"\nYou have booked the flight CAN - 400 successfully"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
              }
              else if(choice1==2)
              {
                charges=15000;
                cout<<"\nYou have booked the flight CAN - 500 successfully"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
              }
              else if(choice1==3)
              {
                charges=16000;
                cout<<"\nYou have booked the flight CAN - 600 successfully"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
              } 
              else
              {
                cout<<"Invalid input , shifting to the previous menu"<<endl;
                flights();
              }

            cout<<"Press any key to go back to the main menu:"<<endl;
            cin>>back;

              if(back==1)
              {
                mainMenu();
              }
              else
              {
                mainMenu(); 
              }
          } 
          case 2:
          {
            cout<<"__________Welcome to US Airways___________\n"<<endl;

            cout<<"Your comfort is our priority."<<endl;
            
            cout<<"Following are the flights \n"<<endl;

            cout<<"1. US - 100"<<endl;
            cout<<"\t03-01-2023 12:00PM 03hrs $. 4000"<<endl;
            cout<<"1. US - 200"<<endl;
            cout<<"\t03-02-2023 01:00PM 10hrs $. 5000"<<endl;
            cout<<"1. US - 300"<<endl;
            cout<<"\t03-03-2023 02:00PM 02hrs $. 6000"<<endl;

            cout<<"\nSelect the flight you want to book :";
            cin>>choice1;

              if(choice1==1)
              {
                charges=4000;
                cout<<"\nYou have booked the flight US - 100 successfully"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
                cout<<""<<endl;
              }
              else if(choice1==2)
              {
                charges=5000;
                cout<<"\nYou have booked the flight US - 200 successfully"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;  
              }
              else if(choice1==3)
              {
                charges=6000;
                cout<<"\nYou have booked the flight US - 300 successfully"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
              }
              else
              {
                cout<<"Invalid input , shifting to the previous menu"<<endl;
                flights();
              }
            
            cout<<"Press any key to go back to the main menu:"<<endl;
            cin>>back;

              if(back==1)
              {
                mainMenu();
              }
              else
              {
                mainMenu(); 
              } 
          }
          case 3:
          {
            cout<<"__________Welcome to UK Airways___________\n"<<endl;

            cout<<"Your comfort is our priority."<<endl;
            
            cout<<"Following are the flights \n"<<endl;

            cout<<"1. UK - 700"<<endl;
            cout<<"\t04-01-2023 03:00PM 12hrs $. 30000"<<endl;
            cout<<"1. UK - 800"<<endl;
            cout<<"\t04-02-2023 04:00PM 14hrs $. 40000"<<endl;
            cout<<"1. UK - 900"<<endl;
            cout<<"\t04-03-2023 05:00PM 20hrs $. 20000"<<endl;

            cout<<"\nSelect the flight you want to book :";
            cin>>choice1;

              if(choice1==1)
              {
                charges=30000;
                cout<<"\nYou have booked the flight UK - 700 successfully"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
                cout<<""<<endl;
              }
              else if(choice1==2)
              {
                charges=40000;
                cout<<"\nYou have booked the flight UK - 800 successfully"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
              }
              else if(choice1==3)
              {
                charges=20000;
                cout<<"\nYou have booked the flight UK - 900 successfully"<<endl;
                cout<<"You can go back to menu and take the ticket"<<endl;
              }
              else
              {
                cout<<"Invalid input , shifting to the previous menu"<<endl;
                flights();
              }
        
            cout<<"Press any key to go back to the main menu:"<<endl;
            cin>>back;

              if(back==1)
              {
                mainMenu();
              }
              else
              {
                mainMenu(); 
              }
          }
          case 4:
          {
            cout<<"__________Welcome to European Airlines___________\n"<<endl;

            cout<<"Your comfort is our priority."<<endl;
          
            cout<<"Following are the flights \n"<<endl;

            cout<<"1. Euro - 710"<<endl;
            cout<<"\t05-01-2023 10:00PM 12hrs $. 30000"<<endl;
            cout<<"1. Euro - 810"<<endl;
            cout<<"\t05-02-2023 06:00PM 14hrs $. 40000"<<endl;
            cout<<"1. Euro - 910"<<endl;
            cout<<"\t05-03-2023 05:00PM 20hrs $. 20000"<<endl;

            cout<<"\nSelect the flight you want to book :";
            cin>>choice1;

                if(choice1==1)
                {
                  charges=30000;
                  cout<<"\nYou have booked the flight UK - 700 successfully"<<endl;
                  cout<<"You can go back to menu and take the ticket"<<endl;
                  cout<<""<<endl;
                }
                else if(choice1==2)
                {
                  charges=40000;
                  cout<<"\nYou have booked the flight UK - 800 successfully"<<endl;
                  cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==3)
                {
                  charges=20000;
                  cout<<"\nYou have booked the flight UK - 900 successfully"<<endl;
                  cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                  cout<<"Invalid input , shifting to the previous menu"<<endl;
                  flights();
                }
          
            cout<<"Press any key to go back to the main menu:"<<endl;
            cin>>back;

                if(back==1)
                {
                  mainMenu();
                }
                else
                {
                  mainMenu(); 
                }
                default
                {
                  cout<<"Invalid input, shifting to the main menu !"<<endl; 
                  mainMenu();
                  break;
                } 
          }
        }

    }
  }
};

//////////////////////TICKET/////////////////////////////////
float registration::charges;
int registration::choice;

class ticket : public registration, Details
{
  public:

           void Bill()
           {
              string destination="";
              ofstream outf("records.txt");
              {
                outf<<"_____________Smith Airlines____________"<<endl;
                outf<<"_________________Ticket__________________ "<<endl;
                outf<<"_________________________________________ "<<endl;

                outf<<"Customer ID:"<<Details::cId<<endl;
                outf<<"Customer Name:"<<Details::name<<endl;
                outf<<"Customer Gender:"<<Details::gender<<endl;
                outf<<"\tDescription"<<endl<<endl;

                  if (registration::choice==1)
                  {
                    destination="Canada";
                  }
                  else if (registration::choice==2)
                  {
                    destination="USA";
                  }
                  else if (registration::choice==3)
                  {
                    destination="UK";
                  }
                  else if (registration::choice==4)
                  {
                    destination="Europe";
                  }
                
                outf<<"Destination\t\t"<<destination<<endl;
                outf<<"Flight cost  :\t\t"<<registration::charges<<endl;
              }
              outf.close();
           }
            void displayBill()
            {
              ifstream ifs("records.txt");
              {
                 if(!ifs)
                 {
                  cout<<"File error!"<<endl;
                 }
                  while(!ifs.eof())
                  {
                    ifs.getline(arr, 100);
                    cout<<arr<<endl;
                  }
              }
              ifs.close();
            }
};

//////////////////////MAIN Menu/////////////////////////////

void mainMenu()
{
  int lchoice;
  int schoice;
  int back;

  cout<<"\t        Smith Airlines  \n"<<endl;
  cout<<"\t       ____Main Menu____ \n"<<endl;

  cout<<"\t______________________________________________"<<endl;
  cout<<"\t\t\t\t\t\t\t|"  <<endl;

  cout<<"\t\t Press 1 Add the Customer Details   \t|"<<endl;
  cout<<"\t\t Press 2 Add Flight Registration    \t|"<<endl;
  cout<<"\t\t Press 3 Ticket and Charges         \t|"<<endl;
  cout<<"\t\t Press 4 Exit                       \t|"<<endl;
  cout<<"\t\t\t\t\t\t\t|" <<endl;
  cout<<"\t__________________________________________________"<<endl;

  cout<<"Enter the choice  :  ";
  cin>> lchoice;

  Details  d;
  registration r;
  ticket t;

   switch(lchoice)
   {
      case 1:
      {
       cout<<"_______Customers_______\n"<<endl;
          d.information();
          cout<<"Press any key to go back to Main menu ";
          cin>>back;

          if(back==1)
          {
            mainMenu();
          }
          else
          {
            mainMenu();
          }
            break; 
      }
      case 2:
      {
        cout<<"______Book a flight using the system_______\n "<<endl;
        r.flights();
        break;    
      }
      case 3:
      {
       cout<<"______Get A Ticket_______\n "<<endl;
        t.Bill();

        cout<<"Your ticket is printed, you can collect\n"<<endl;
        cout<<"Press 1 to display your ticket\n";

        cin>>back;

        if(back==1)
          {
            t.displayBill();
            cout<<"Press any key to go back to Main Menu\n"<<endl;
            cin>>back;
            
          if(back==1)
          {
            mainMenu();
          }
          else
          {
            mainMenu();
          }
          else
          {
            mainMenu();
          }
            break;
          }
      }
      case 4:
      {
        cout<<"\n\n\t______Thank you!!_______"<<endl;
        break;
      }
      default :
      {
        cout<<"Invalided Input\n"<<endl; 
        mainMenu();
        break;
      }
   }

}

////////////////////////////////////////////// 

int main()
{
  Management Mobj;
  return 0;
}