/*
 * Inv.cpp
 *
 *  Created on: 13-Oct-2020
 *      Author: nitin
 */

#include<iostream>
#include<iomanip>
#include"Inv.h"
using namespace std;

int main(void)
{
	Inv prod[5]={Inv("Screwdriver",20),Inv("Plier",15),Inv("Wrench",50)};
	cout<<setw(15)<<"Inventory Item"<<"\t";
			cout<<setw(15)<<"Units On Hand"<<endl;
	for(int i=0;i<5;i++){
		cout<<setw(15)<<prod[i].retname()<<"\t";
		cout<<setw(2)<<prod[i].retqty()<<endl;
	}
	return 0;
}

