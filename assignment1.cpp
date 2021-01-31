#include <iostream>
#include <string>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
string customer_name;
const double vat = 0.12;
int unique_ID;
int quantity;


int main()  {
	
	cout<<"                       WELCOME TO BENJEN SUPERMARKET   "<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	
	
	            //user name
	cout<<"Please provide us with your name :"<<endl;
	getline(cin,customer_name);
	
	
	          //item sold
	string item1="Printer";
    string item2="Phone";	      
	string item3="Table";
	   cout<<""<<endl;
	   cout<<""<<endl;
	cout<<" These are the items sold here : " << endl;
	cout << "1."<< item1 <<endl;
	cout << "2."<< item2 <<endl;
	cout << "3."<< item3 <<endl;
	     
		 cout<<""<<endl;
	     cout<<""<<endl;
	      //ID
	 cout<<" Please enter a valid unique ID "<<endl;
	 cin>>unique_ID;
	 
	double Printer=300;
	double Phone=150;
	double Table=50;
	double totalcost,totalamountpaid; 
	   cout<<""<<endl;
	   cout<<""<<endl;
	cout<<" These are the prices of the items :"<<endl;
	cout<<"1. Printer=300"<<endl;
	cout<<"2. Phone=150"<<endl;
	cout<<"3. Table=50"<<endl;
	   cout<<""<<endl;
	   cout<<""<<endl;
	     //what to buy
	 string item_you_wanna_buy;
	 cout<<" Please which of these items do you wanna buy (one item at time) :"<<endl;
	 cin>>item_you_wanna_buy;
	 
	 if (item_you_wanna_buy == "Printer" || item_you_wanna_buy=="PRINTER" || item_you_wanna_buy=="printer")
	 {
	    cout<<" Please how many do you want?"<<endl;
	    cin>>quantity;	
	 }else if(item_you_wanna_buy == "Phone" || item_you_wanna_buy=="PHONE" || item_you_wanna_buy=="phone")
	 {
	 	cout<<" Please how many do you want?"<<endl;
	    cin>>quantity;
	 }else if(item_you_wanna_buy == "Table" || item_you_wanna_buy=="TABLE" || item_you_wanna_buy=="table")
	 {
	 	cout<<" Please how many do you want?"<<endl;
	    cin>>quantity;
	 }else
	 {
	 	//cout << "comot for there" << endl;
		do
	 	{
	 	   cout << "Enter a valid item: " << endl;
		   cin >> item_you_wanna_buy ;	
		 }while (item_you_wanna_buy != "Printer" && item_you_wanna_buy != "Phone" && item_you_wanna_buy != "Table");
		   cout<<""<<endl;
		   cout<<""<<endl;
		cout<<" Please how many do you want?"<<endl;
	    cin>>quantity; 
	 }
	                //quantity
	/*cout << "Please how many do you want to buy" << endl;
	cin >> quantity;*/
	
	
	
	  //money on you
	    cout<<""<<endl;
	    cout<<""<<endl; 
	  cout<<"so how much money do you have on you" <<endl;
	  int money_on_you;
	  cin>> money_on_you;
	  
	  if(money_on_you <Printer|| money_on_you<Phone||money_on_you<Table)
       {
	     cout<<"sorry, you do not sufficient money to purchase the item"<<endl;
		 
	}
	
	int vat_amount;
    if (item_you_wanna_buy=="printer" ||item_you_wanna_buy=="Printer" ||item_you_wanna_buy=="PRINTER" )
	{
	
	 //cout << Printer << endl;
	 //cout << vat << endl;
	  totalcost= Printer * quantity;
	  vat_amount= totalcost * vat;
	 
	 //cout<< "vat amount is: " << vat_amount << endl; 
	   
	 totalamountpaid = totalcost + vat_amount;
	 //cout<< "Amount to be paid is: " << totalamountpaid <<endl; 
	
	}else if (item_you_wanna_buy=="phone" ||item_you_wanna_buy=="Phone" ||item_you_wanna_buy=="PHONE" )
	{
	   totalcost= Phone * quantity;
	  vat_amount= totalcost * vat;
	 //cout<< "vat amount is: " << vat_amount << endl; 
	   
	 totalamountpaid = totalcost + vat_amount;
	 //cout<< "Amount to be paid is: " << totalamountpaid <<endl;
		
	}else if (item_you_wanna_buy=="table" ||item_you_wanna_buy=="Table" ||item_you_wanna_buy=="TABLE" )
	 
	{
	
	     totalcost= Table * quantity;
	    vat_amount= totalcost * vat;
	 //cout<< "vat amount is: " << vat_amount << endl; 
	  totalamountpaid = totalcost + vat_amount;
	 //cout<< "Amount to be paid is: " << totalamountpaid <<endl;
	   
	 
   }else{
   	
   }
    double balance;
   if (money_on_you > totalamountpaid){
    	balance= money_on_you - totalamountpaid;
    	//cout<<"your balance is :"<<balance<<endl;
   }else if(money_on_you == totalamountpaid )
    {
    	balance= money_on_you - totalamountpaid;
    	//cout<<"your balance is : "<<balance<<endl;
    	
	}else{
		
		cout<<"please go home and come back later"<<endl;
	    //cout<<""<<endl;
	    //cout<<""<<endl;
	}
	if ( money_on_you >= totalamountpaid)
	  {
	  	cout<<"                 ** BENJEN SUPERMARKET **   "<<endl;
	        cout<<""<<endl;
	        cout<<""<<endl;
	        
	        cout<<" Name of customer:" <<customer_name <<endl;
	          cout<<""<<endl;
	          cout<<""<<endl;
	        cout<<" Unique ID : "<< unique_ID <<endl;
	          cout<<""<<endl;
	          cout<<""<<endl;
	        cout<<" Item bought :"<< item_you_wanna_buy <<endl;
	          cout<<""<<endl;
	          cout<<""<<endl;
	        cout<<" Quantity bought : " << quantity << endl;
	          cout<<""<<endl;
	          cout<<""<<endl;
	        cout<<" Vat amount: " << vat_amount << endl;
	          cout<<""<<endl;
	          cout<<""<<endl;
	        cout<<" Total cost :"<<totalamountpaid<<endl;
	          cout<<""<<endl;
	          cout<<""<<endl;
	        cout<<" Total amount paid : "<<money_on_you<<endl;
	          cout<<""<<endl;
	          cout<<""<<endl;
	        cout<<" Balance : " <<balance<<endl;
	        
	         
	         cout<<""<<endl;
	         cout<<""<<endl;
	         cout<<""<<endl;
	         
	    cout<<" **           THANK YOU FOR TRANSACTING WITH US, HAVE A NICE DAY !!!   **"<<endl;
	  }
	        
	    
	
	 
	 
 return 0;
}
