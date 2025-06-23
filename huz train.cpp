#include<iostream>
using namespace std;
	struct train{
		int seats;
		int columns;
	};
int main(){
cout<<"--------------Welcome!Sir-------------"<<endl;
cout<<"                                       "<<endl;
cout<<"0 means available and 1 means Occupied"<<endl;
cout<<"                                       "<<endl;
train seat[8][4]{
	
{{0},{0},{0},{0}},
{{0},{0},{0},{0}},
{{0},{0},{0},{0}},
{{0},{0},{0},{0}},
{{0},{0},{0},{0}},
{{0},{0},{0},{0}},
{{0},{0},{0},{0}},
{{1},{1},{1},{1}},

};

cout<<"Data of available seats is as follows:"<<endl;
	for(int i=1;i<=8;i++){
	        for(int j=1;j<=4;j++){
	        	cout<<seat[i][j].seats;
	        	if(j==1){
				cout<<" ";
			}
			}
			
			cout<<endl;
	}
	while(true){
		int row,column;
	cout<<"Which seat do you want to book (index starting from 0)"<<endl;
	cout<<"Please enter row index:"<<endl;
	cin>>row;
	cout<<"Please enter column index:"<<endl;
	cin>>column;
	
	if(row>0&&row<=8&&column>0&&column<=4){
		if(seat[row][column].seats==0){
			seat[row][column].seats=1;
			cout<<"Seat Booked Successfully"<<endl;
		}
		else{
			cout<<"Sorry Seat is occupied"<<endl;
		}
		
	}
	else{
		cout<<"Seat not available"<<endl;
	}
	cout<<"Updated Record"<<endl;
	for(int i=1;i<=8;i++){
		for(int j=1;j<=4;j++){
			cout<<seat[i][j].seats;
	        	if(j==1){
				cout<<" ";
			}	
			
		}
		cout<<endl;
	}
	cout<<"                      "<<endl;
	int check;
	cout<<"Please enter -1 to exit // Any other key to make another booking"<<endl;
	cin>>check;
	if(check==-1){
		return 0;
	}
	else continue;
}
	}
	