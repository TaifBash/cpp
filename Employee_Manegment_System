#include <iostream>
using namespace std;

class Employee {// Employee's information class
    // private feilds
            private:// element can NOT be accessed by main
            
            //variables
                  string ID, name, Fdaywork, address, phoneN ;
                  
                  int    workH;
                  
                  double Salary;
                  
                  Employee* next;// link
    
    // public feilds
            
            public:// element can be accessed by main
      
            Employee(){
            //functions
                  name="";
                  ID="";
                  Fdaywork=""; 
                  phoneN=""; 
                  address="";
                  int workH= 0;
                  Salary=0.0;
      }
//constructors with parameters
      Employee(string name,string ID,string Fdaywork, string phoneN, string address,
                  int workH, double Salary){
            this->name=name;
            this->ID=ID;
            this->Fdaywork=Fdaywork;
            this->phoneN=phoneN;
            this->address=address;
            this->workH=workH;
            this->Salary=Salary;
            next=NULL;// linke is empte = null
      }
      
      // setrt يعين قيمه للمتغير الذي لايمكن استخدامه لانه متعرف في private
      //   (Setters)    take data from user [take parameter -> attribute]
      /*+*/ void setName(string name)           {this->name=name;}
            void setID(string ID)               {this->ID=ID;}
            void setFdaywork(string Fdaywork)   {this->Fdaywork=Fdaywork;}
            void setphoneN(string phoneN)          {this->phoneN=phoneN;}
            void setaddress(string address)     {this->address=address;}
            void setworkH(int workH)            {this->workH=workH;}
            void setSalary(double Salary)       {this->Salary=Salary;}
            
            void setNext(Employee* next)        {this->next=next;}
      
      // geter لاستخدام القيمه الخاصه الماخوذه من سيتتر 
      //    (getters)    save data on node [take attribute]
            string getName()      {return name;}
            string getID()        {return ID;}
            string getFdaywork()  {return Fdaywork;}
            string getphoneN()    {return phoneN;}
            string getaddress()   {return address;}
            int getworkH()        {return workH;}
            double getSalary()    {return Salary;}
           
            Employee* getNext()   {return next;}

};//close class of Employee information



class EmployeeMS{
      // private fields
      private:// element can NOT be accessed by main
      
      //variables
            Employee* head;// start node
      
      // public fields
      public:// element can be accessed by main
      //constructor      
            EmployeeMS(){
            head=NULL;
      }



/*##############################################################################
                                     Methods                                
                   5 void methods 1 has return methde(checkID)                                    
 ##############################################################################*/

string ID, name, Fdaywork, address, phoneN ;
                  
                  int    workH;
                  
                  double Salary;
//insert employee***************************************************************
     void INSERTEMPLOYMENT(string name,string ID,string Fdaywork,string phoneN,string address,int WorkH,double Salary){
            // ID must be unique
            if(checkID(ID)){
                cout<<"can NOT record employee because ID exsits on MS "<<endl;
            }else{
                Employee* newnode = new Employee( name, ID, Fdaywork, phoneN, address, WorkH, Salary);
                // insert at the begining
                // if empty list or first node's ID is larger than new ID (sorted insert)
                if (head == NULL || head->getID() >= newnode->getID()){
                    newnode->setNext(head);
                    head = newnode;
                }else{
                    Employee* temp = head;
                    // insert at the middle or end
                    while (temp->getNext() != NULL && (temp->getNext())->getID() < newnode->getID()){
                        temp = temp->getNext();
                    }
                    newnode->setNext(temp->getNext());
                    temp->setNext(newnode);
                }
                cout<<"The Employee record was added successfully."<<endl;
            }
        }




//(check ID) that the ID is entered only once ******************************************************
      bool checkID(string ID){
                  bool flag = false; //false when NO found ID
                  
                  Employee* temp = head;
                 
                  while(temp != NULL){// if [the list NOT EMPTY=NULL] the loop working 
                      if(temp->getID() == ID){// serch ID
                          flag = true;// Change it to true when you find ID
                          break;
                      }
                      temp = temp->getNext();// linke move to the next
                  }
                  return flag; //return the flag [true or false] 
              }




//DELETEEMPLOYMENT() method*****************************************************
      void DELETEEMPLOYMENT(string ID){
            Employee* prev = NULL;
            Employee* temp = head;
            bool flag = false;  //false when NO found ID
            
                  //if head is [NULL] the list is empty.
                  if(head == NULL){
                  cout<<"No epmloyee (is empty)."<<endl;
                  cout<<"--------------------------------"<<endl;
                  }
                  //else finds the employee node and deletes it.
                  else{
                        while(temp != NULL){// if [the list NOT EMPTY=NULL] the loop working 
                                          if(temp->getID() == ID){// serch
                                          flag = true;// Change it to true when you find ID
                                          break;
                                          }
                                    prev = temp; //if haed empty = null so that the node is first node 
                                    temp = temp->getNext(); // *******************************************************
                              }
                              
                        if(flag == true){// found the ID
                              if(prev == NULL){ // last node
                              head = head->getNext();// **************************************************
                              delete temp;// delete node
                              }
                              else{
                              prev->setNext(temp->getNext());
                              delete temp;// delete node
                              }
                  
                                    //if found it
                                          cout<<"Deleted successfully."<<endl;
                                          cout<<"------------------------------------------------------------"<<endl;
                                    }
                                    
                                    //if not found it
                                    else{
                                          cout<<"NO employees have this ID on MS."<<endl;
                                          cout<<"------------------------------------------------------------"<<endl;
                                    }
                  }
      }




//DISPLAY ALL LIST of EMPLOYMENTS **********************************************************
      void DISPLAYALLEMPLOYMENTS(){
            Employee* temp=head;
            // if list empte
            if(temp==NULL){cout<<"No employee (is empty)"<<endl; } 
            // if list NOT empty    [take all data for Employee List]
        cout<<"[[Employee's List on MS]]"<<endl<<endl;
        cout<<"---------------------------------------"<<endl;
            while(temp!=NULL){
                  cout<<" Name: "           <<temp->getName()    <<endl;
                  cout<<" ID: "             <<temp->getID()      <<endl;
                  cout<<" First Day Work: " <<temp->getFdaywork()<<endl;
                  cout<<" Phone Number: "   <<temp->getphoneN()  <<endl;
                  cout<<" Address: "        <<temp->getaddress() <<endl;
                  cout<<" Work Hours: "     <<temp->getworkH()   <<endl;
                  cout<<" Salary: "         <<temp->getSalary()  <<endl;
                  cout<<"---------------------------------------"        <<endl;
                        //move to the next node
                        temp=temp->getNext();
                        
                       }
      }




//searches for employee info by [ID] ******************************************************
      void FINDEMPLOYMENTINFOID(string ID){
            Employee* temp = head;
            bool flag=false;
                        // if list NOT empte loop will working
                  while(temp!=NULL){
                  if(temp->getID()==ID)//serch ID 
                  {
                  flag= true;// Change the flag to true to display the data
                              cout<<" Name: "            <<temp->getName()    <<endl;
                              cout<<" ID: "              <<temp->getID()      <<endl;
                              cout<<" First Day Work: "  <<temp->getFdaywork()<<endl;
                              cout<<" Phone Number: "    <<temp->getphoneN()  <<endl;
                              cout<<" Address: "         <<temp->getaddress() <<endl;
                              cout<<" Work Hours: "      <<temp->getworkH()   <<endl;
                              cout<<" Salary: "          <<temp->getSalary()  <<endl;
                              cout<<"---------------------------------------"         <<endl;
                  }
                        temp=temp->getNext(); //move to the next node
                  }
                  if(flag==false){
                  cout<<"NO employees have this ID on MS "<<endl;
                  cout<<"--------------------------------------------"<<endl;
                  }
      }




//update Salary of Employee has 32 or more Hours************************
      void updateSal(string ID){
                  Employee* temp = head;
                  double newSalary=0.0;
                  double salary=0.0;
          
                  if(checkID(ID)){
                      while(temp != NULL){
                            // if the same ID and the Salary >= 32 will UPdate it
                  /**/ if((temp->getID() == ID) && (temp->getworkH()>=32)){
                              
                              salary = temp->getSalary();// take salary to update it
                              newSalary =  salary + (salary * 0.02);// update Salary to add 2% [0.0 + ( 0.0 * 0.02 )]
                              temp->setSalary(newSalary);// add newSalary to the employee founded by ID
                              cout<<"Updated salary."<<endl;
                              break;
                          }
                           // if NOT the same ID and the Salary NOT >= 32 will NOT UPdate it
                          else if ((temp->getID() == ID ) && (temp->getworkH()<=32)){
                              cout<<"can NOT update salary Because work hours less than 32hours."<<endl;
                          }
                  /**/ temp = temp->getNext();// the link move to find [Employee has ID] matches the condition 
                      }
                      
                  }else{// if NOT foun ID
                      cout<<"NO employees have this ID on MS."<<endl;
                  }
              }
        
   
   
   
   
};



int main()
{
            string ID, name, Fdaywork, address, phoneN ;
                  
            int    workH, choice=0;
                  
            double Salary;
            
      
      EmployeeMS* EMS = new EmployeeMS();
      
      
      cout<<"////////////////////////////////////////////"<<endl;
      cout<<"/////            Employee MS           /////"<<endl;
      cout<<"////////////////////////////////////////////"<<endl;
      
      
      
      while(1){// while true will DISPLAY menu all time untel user choice[7] to exit

//[1] printing the menu.
            cout<<"1- INSERT EMPLOYMENT:"<<endl;
            cout<<"2- DELETE EMPLOYMENT by ID:"<<endl;
            cout<<"3- DISPLAY All List:"<<endl;
            cout<<"4- FIND EMPLOYMENT INFO by ID:"<<endl;
            cout<<"5- update salary"<<endl;
            cout<<"0- exit:"<<endl;
            
//[2]reading the choice from user.
            cout<<"Enter your choice: ";
            cin>>choice;
      
//switch (menu) for the choice.
            switch(choice){
                  
                        //case 1 for INSERTE MPLOYMENT .
                              case 1:
                              /*display the info of MS want to user add it for 
                              employee to save it on list*/
                                    cout<<endl;
                                    cout<<"Enter name: ";
                                    cin>>name;
                                    cout<<"Enter ID: ";
                                    cin>>ID;                 
                                    cout<<"Enter First day work: ";
                                    cin>>Fdaywork;                  
                                    cout<<"Enter Phone Number: ";
                                    cin>>phoneN;                  
                                    cout<<"Enter Address: ";
                                    cin>>address;               
                                    cout<<"Enter work Hours: ";
                                    cin>>workH;
                                    cout<<"Enter Salary : ";
                                    cin>>Salary;
                                    cout<<endl;
                                    //call method
                                    EMS->INSERTEMPLOYMENT(name,ID,Fdaywork,phoneN,address,workH,Salary);
                              break;
                              
                              
                        //case 2 to DELETEE MPLOYMENT BY ID
                              case 2:
                              /*the euser input the ID 
                              to serch of employee has same ID to delete it*/ 
                                    cout<<endl;
                                    cout<<"Employee ID: ";
                                    cin>>ID;
                                    cout<<endl;
                                    //call method
                                    EMS->DELETEEMPLOYMENT(ID);
                              break;
                              
                              
                              
                        //case 3 to DISPLAY ALL EMPLOYMENTS
                              case 3:
                              
                                    cout<<endl;
                                    //call method 
                                    EMS->DISPLAYALLEMPLOYMENTS();
                              break;
                              
                              
                        //case 4 for FIND EMPLOYMENT INFO BY ID.
                              case 4:
                                    cout<<endl;
                                    cout<<"Enter ID: ";
                                    cin>>ID;
                                    cout<<endl;
                                    //call method
                                    EMS->FINDEMPLOYMENTINFOID(ID);
                              break;
                              
                              
                        //case 5 
                              case 5:
                              /*the euser input the ID 
                              to serch of employee has same ID 
                              to update the Salary + 2% */
                                    cout<<endl;
                                    cout<<"Enter ID: ";
                                    cin>>ID;
                                    cout<<endl;
                                    //call method
                                    EMS->updateSal(ID);                              
                              break;
                              
                              
                        //case 0 to the exit
                              case 0:
                              // close  [Employee MS]
                                   cout<< "\n\nThank you for using Employee Management System\n";
                                    exit(0);
                                    
                                    
                              default:// if user input Number NOT on the list
                              cout<<"wrong choice.\nChoose again\n\n"<<endl;
                              break;
                        }//end switch of choice user on menu
                        
            }//end while of menu
return 0;
}

