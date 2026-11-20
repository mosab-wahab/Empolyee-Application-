#include <bits/stdc++.h>
using namespace std;

int main() 
{

    const int max = 10000;
    string name[max];
    int age[max];
    int salary[max];
    char gender[max];

    int employees =0;
    int removed_age ;
    int choice = -1;



    while(1){
    cout<<"\nEnter your choice : \n";
    cout<<"1- Add new empoiyee \n";
    cout<<"2- Print all empolyees \n";
    cout<<"3- Delete by age \n";
    cout<<"4- Update Salary by name \n";
    
    
    cin>>choice ;

    if(choice < 1 || choice > 4){
        cout<<"INVALID CHOICE \n";
        continue;
    }


    else if(choice==1){
         
        cout<<"Enter name : ";
        cin>>name[employees] ;
         cout<<"Enter age :  ";
         cin>>age[employees] ;
        cout<<"Enter salary : ";
        cin>>salary[employees] ;
        cout<<"Enter gender (M/F) : ";
        cin>>gender[employees];

    
        employees ++ ;
    }

    else if(choice==2){
        for(int i=0 ; i<employees ; i++){
        // print all expect deleted employees 
        if(age[i]!= removed_age )
        cout<< name[i] <<" "<<age[i] <<" "<<salary[i] <<" "<<gender[i] <<endl;
        }
    }

    else if(choice==3){
        cout<<"Enter start and end age \n";
        int start , end ;
        cin>>start >> end ;

        for(int i=0;i<employees ; i++){
            if(age[i] >=start && age[i]<= end ){
            age[i] = removed_age ;
        }

    }
}

     else if(choice==4){
        cout<<"Enter the name and salary ";
        string namee  ; int salaryy ;
        cin>>namee>>salaryy ;

        bool is_found = false ; // To check if the employee is found or not
        
        for(int i=0 ;i<employees ;i++){
            if(age[i] != removed_age && name[i] == namee ){
            salary[i]=salaryy ;
            is_found = true ;
            }
        }
        if(!is_found){
            cout<<"Employee not found \n";
        }
     }

    }


    return 0;
}
