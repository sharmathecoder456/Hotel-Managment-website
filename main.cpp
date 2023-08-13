
#include <iostream>

using namespace std;

int main()
{
    int quant;
    int choice;
    //Quantity
    int qrooms= 0, qpasta= 0, qburgers = 0, qnoodles = 0, qchicken = 0;
    //sold
    int srooms = 0, spasta = 0, sburgers =0, snoodles = 0, schicken = 0;
    //total price of all things
    int T_rooms = 0, T_pasta = 0, T_burgers = 0, T_noodles = 0, T_chicken = 0;
    
    cout<<"\t\t HELLO SAHIL MANAGER PLEASE ENTER THE DETAILS THE ITEMS WE HAVE  "<<endl;
    
    cout<<"Quantity of items we have : "<<endl;
    
    cout<<" Rooms available : "<<endl;
    cin>>qrooms;
    cout<<" Quantity of pasta : "<<endl;
    cin>>qpasta;
    cout<<" Quantity of burgers : "<<endl;
    cin>>qburgers;
    cout<<" Quantity of noodles : "<<endl;
    cin>>qnoodles;
    cout<<" Quantity of chicken : "<<endl;
    cin>>qchicken;
    cout<<"\t\t WECOME TO THE HOTEL OF SAHIL , ENJOY YOUR DAYS SPENDING TIME WITH US"<<endl;
    
    m:
    
    cout<<"\t\t\t Please select from the menu options :"<<endl<<endl;
    cout<<" 1) Rooms(per room 1200rs/- 2 persons allowed only)"<<endl;
    cout<<" 2) Pasta(per plate 500rs/- only)"<<endl;
    cout<<" 3) Burgers(one burger= 200rs/- only) "<<endl;
    cout<<" 4) Noodles(one plate of noodles = 100rs/- only) "<<endl;
    cout<<" 5) Chicken(one Chicken = 600rs/-only) "<<endl;
    cout<<" 6) Information regarding sales and collection "<<endl;
    cout<<" 7) Exit "<<endl<<endl;
    
    cout<<" Please enter your choice"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"\t\tEnter the no of Rooms you want to take sir/madam :"<<endl;\
        cin>>quant;
        if(qrooms-srooms>=quant){
            srooms=srooms+quant;
            T_rooms=T_rooms+quant*1200;
            
            cout<<quant<<" : These no of rooms have been alloted to you"<<endl;
        }
        else{
            cout<<"only"<<qrooms-srooms<<" rooms available in hotel, sorry for your inconvinience."<<endl;
        
        }
        break;
        case 2:
        cout<<"per plate of pasta is : 500rs/only "<<endl;
        cout<<"\t\tEnter the no of  pasta plates u want :"<<endl;
        cin>>quant;
        if(qpasta-spasta>=quant){
            spasta=spasta+quant;
            T_pasta=T_pasta+quant*500;
            cout<<quant<<"plates of pasta will be serve into you sir/madam"<<endl;
        }
        else{
            cout<<"only"<<qpasta-spasta<<" plates of pasta available , sorry for your inconvinience."<<endl;
            
        }
        break;
       
        case 3:
        cout<<"\t\tEnter the no of burgers  u want="<<endl;     
        cin>>quant;
        if(qburgers-sburgers>=quant){
            sburgers=sburgers+quant;
            T_burgers=T_burgers+quant*200;
            cout<<quant<<" : Burgers ordeered "<<endl;
        }
        else{
            cout<<"only"<<qburgers-sburgers<<" burgers left sir/madam, sorry for your inconvinience."<<endl;
            
        }
        break;
         case 4:
        cout<<"\t\tEnter the no plates u want="<<endl;
        cin>>quant;
        if(qnoodles-snoodles>=quant){
            snoodles=snoodles+quant;
            T_noodles=T_noodles+quant*100;
            cout<<quant<<" : Noodles plates ordered!"<<endl;
        }
        else{
            cout<<"only"<<qnoodles-snoodles<<" noodles plates available,sorry for your inconvinience. !"<<endl;
            
        }
        break;
         case 5:
        cout<<"\t\tEnter the no of chicken u want="<<endl;\
        cin>>quant;
        if(qchicken-schicken>quant){
            schicken=schicken+quant;
            T_chicken=T_chicken+quant*600;
            cout<<quant<<" : These no of chicken plates ordered !"<<endl;
        }
        else{
            cout<<"only"<<qchicken-schicken<<" chicken available, sorry for your inconvinience."<<endl;
            
        }
        break;
        case 6 :
        cout<<"Details of sales and collection"<<endl;
        cout<<"no of rooms we had :"<<qrooms<<endl;
        cout<<"no of rooms we have given for rent :"<<srooms<<endl;
        cout<<"remaining rooms :"<<qrooms-srooms<<endl;
        cout<<"total collection of rooms :"<<T_rooms<<endl;
        
        cout<<"no of pasta we had :"<<qpasta<<endl;
        cout<<"no of pasta we had sold :"<<spasta<<endl;
        cout<<"remaining pasta : "<<qpasta-spasta<<endl;
        cout<<"total pasta sold in rs :"<<T_pasta<<endl;
        
         cout<<"no of burgers we had : "<<qburgers<<endl;
        cout<<"no of burgers we had sold :"<<sburgers<<endl;
        cout<<"remaining burgers :"<<qburgers-sburgers<<endl;
        cout<<"total burgers sold in rs :"<<T_burgers<<endl;
        
         cout<<"no of plates of noodles we had :"<<qnoodles<<endl;
        cout<<"no of plates of noodles we had sold :"<<snoodles<<endl;
        cout<<"remaining noodles plates :"<<qnoodles-snoodles<<endl;
        cout<<"total noodles sold in rs :"<<T_noodles<<endl;
        
         cout<<"chicken quantity we had :"<<qchicken<<endl;
        cout<<"chicken qunaity we had sold :"<<schicken<<endl;
        cout<<"remaining chicken :"<<qchicken-schicken<<endl;
        cout<<"total chicken sold in rs :"<<T_chicken<<endl;
        break ;
         
         case 8: 
         exit(0);
         default :
         cout<<"Please entered the no mentioned above"<<endl;
        
        
    }
    
  goto m; 
  return 0;  
    
}




