// Pay As You Study University of Ghana charges 1000 cedis for each semester hour of credit, 
// 500000 cedis for regular room (R) and 1000000 cedis for an air-conditioned room (A) and 500000  
// cedis for use of academic facilities. All students pay 200000 for matriculation and graduating 
// students pay 300000 cedis for degree certificate. Devise a computer solution that computes fees 
// that must be paid by each student. A warning message should be displayed if a student is taking more than 21 credit hours and less than 15 credit hours per semester. The input per student should 
// be students' id number (4 digits), room type (A or R), credit hours and graduating status (Y or N).

#include <iostream>

using namespace std;

//create fxns for warning messages

void IDwarning(){
        cout<<"ID number should be 4-digit.\n";
    
}

void credit_hours_warning(){
  
        cout<<"Credit hours must be between 21 and 15 hours inclusive.\n";
}

void graduating_status_info(){
    int graduating_status;
    
    cout<<"(NOTE: Input should be Y or N.)\n";

}

void room_type_info(){
    int room_type;
    cout<<"(NOTE: Input must be A or R)\n";
}


//noe to the main fxn
int main(){
    int IDnumber, credithours,Fees, academic_facilities=500000,
        R=500000, A=1000000, degreecert_fees=300000, matriculation_fees=200000;

    char  graduating_status, room_type;

    cout<<"Enter ID number: \n";
    cin>>IDnumber;
    //thi if for the ID number acting as the master if
    if (IDnumber>9999 || IDnumber<1000){
                IDwarning();

    }

    else {

        //this is the if to check values for the credit hours
            cout<<"Enter number of credit hours \n";
            cin>>credithours;
            if(credithours<15 || credithours>21)
            {
                    credit_hours_warning();

            }
            else 
            {
                //this is the if to show output of gradstat and calc fees
                    cout<<"Enter your Graduation Status\n";
                    graduating_status_info();
                    cin>>graduating_status;
                    if (graduating_status=='Y')
                    {
                        Fees=(1000*credithours)+degreecert_fees+academic_facilities;
                    }
                    else if (graduating_status=='N')
                    {
                        Fees=(1000*credithours)+matriculation_fees+academic_facilities;
                    }

                //This is to choose your preferred room type and calc fees
                    cout<<"Input your preferred room type \n";
                    room_type_info();
                    cin>>room_type;

                    if (room_type=='A')
                    {
                        Fees=Fees+A;
                        cout<<"Your Fees for this semester is "<<Fees<<endl;
                    }
                    else if(room_type=='R')
                    {
                        Fees=Fees+R;
                        cout<<"Your Fees for this semester is "<<Fees<<endl;
                    }

            }


    }


    return 0;
}