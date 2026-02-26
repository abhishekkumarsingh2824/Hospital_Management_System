#include<bits/stdc++.h>
using namespace std;
int pid;
int did;
class Patient
{
   public:
   string name;
   string gender;
   int age;
   int ID;
   Patient(string n,string g,int a)
   {
         ID = pid++;
         name = n;
         gender = g;
         age = a;
   }
};
class Doctor
{
   public:
   string name;
   string gender;
   int age;
   int ID;
   Doctor(string n,string g,int a)
   {
         ID = did++;
         name = n;
         gender = g;
         age = a;
   }
};
class Appointment
{
   public:
   int patientID;
   int doctorID;
   string Date;
   Appointment(int p,int d,string d1)
   {
        patientID = p;
        doctorID = d;
        Date = d1;
   }
};
vector<Patient>allpatients;
vector<Doctor>allDoctors;
vector<Appointment>allAppointments;
void addpatient()
{
     string name;
     string gender;
     int age;
     cout<<"Give the Patient Name :";
     cin>>name;
     cout<<endl;
     cout<<"Give the patient Age :";
     cin>>age;
     cout<<endl;
     cout<<"Give the patient Gender :";
     cin>>gender;
     cout<<endl;
     Patient temp(name,gender,age);
     allpatients.push_back(temp);

}
void addDoctor()
{
     string name;
     string gender;
     int age;
     cout<<"Give the Doctor Name :";
     cin>>name;
     cout<<endl;
     cout<<"Give the Doctor Age :";
     cin>>age;
     cout<<endl;
     cout<<"Give the Doctor Gender :";
     cin>>gender;
     cout<<endl;
     Doctor temp(name,gender,age);
     allDoctors.push_back(temp);
}
void ScheduleAppointments()
{
    cout<<"Your PatientID:"<<endl;
    for(int i=0;i<allpatients.size();i++)cout<<"Patient Name:"<<allpatients[i].name<<" "<<" Id: "<<allpatients[i].ID<<endl;
      int patientID;
      cout<<"Available Doctors"<<endl;
      for(int i =0;i<allDoctors.size();i++)
      {
          cout<<"Doctor Name: "<<allDoctors[i].name<<" "<<"Doctor id: "<<allDoctors[i].ID<<endl;
      }
      int doctorID;
      string Date;
      cout<<"Give the Patient ID: "<<endl;
      cin>>patientID;
      cout<<"Give the Doctor ID: "<<endl;
      cin>>doctorID;
      cout<<"Give Date(DD-MM-YY): "<<endl;
      cin>>Date;
      Appointment Ap(patientID,doctorID,Date);
      allAppointments.push_back(Ap);
}
void viewpatient()
{
    if(allpatients.size()==0)
    {
        cout<<"No patients available"<<endl;
        return;
    }
   cout<<"-------Your Current patients-----"<<endl;
   for(int i=0;i<allpatients.size();i++)
   {
        cout<<"Patient Name :"<<allpatients[i].name<<" "<<"Gender: "<<allpatients[i].gender<<" "<<"Age: "<<allpatients[i].age<<" "<<"PatientId: "<<allpatients[i].ID<<endl;
   }
   
}
void viewDoctor()
{
    if(allDoctors.size()==0)
    {
        cout<<"No doctors are available"<<endl;
        return;
    }
   cout<<"-----Your Current Doctors-----"<<endl;
   for(int i=0;i<allDoctors.size();i++)
   {
        cout<<"Doctor Name :"<<allDoctors[i].name<<" "<<"Gender: "<<allDoctors[i].gender<<" "<<"Age: "<<allDoctors[i].age<<" "<<"DoctorId: "<<allDoctors[i].ID<<endl;
   }
}
void  viewAppointments()
{
    if(allAppointments.size()==0)
    {
        cout<<"No appointments have been booked yet"<<endl;
        return;
    }
    cout<<"------Available Appointments-----"<<endl;
    for(int i=0;i<allAppointments.size();i++)
    {
        cout<<"patient : "<<" "<<allAppointments[i].patientID<<" "<<" is alloted to Doctor "<<" "<<allAppointments[i].doctorID<<" "<<" at date of "<<allAppointments[i].Date<<endl;
    }
}

int main()
{
    pid = 1254;
    did = 254;
    cout<<"----------HOSPITAL MANAGEMENT SYSTEM----------"<<endl;
    int choice;
    do
    {
     cout<<"1. Add Patient"<<endl;
     cout<<"2. Add doctors"<<endl;
     cout<<"3. Schedule Appointment"<<endl;
     cout<<"4. View Patients"<<endl;
     cout<<"5. View Doctors"<<endl;
     cout<<"6. View Appointments"<<endl;
     cout<<"0. Exit"<<endl;
     cout<<"Give your Choice :"<<endl;
     cin>>choice;
     switch(choice)
     {
        case 1:
        addpatient();
         break;
        case 2:
        addDoctor();
         break;
        case 3:
        ScheduleAppointments();
         break;
        case 4:
        viewpatient();
         break;
        case 5:
        viewDoctor();
         break;
        case 6:
        viewAppointments();
         break;
        case 0:
           break;
        default:
           cout<<"Invalid Choice"<<endl;
           cout<<endl;
           cout<<endl;
           cout<<endl;
           cout<<endl;
     }
    } while (choice!=0);
    
    return 0;
}