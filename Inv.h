/*
 * Inv.h
 *
 *  Created on: 13-Oct-2020
 *      Author: nitin
 */
#include<string.h>
#ifndef INV_H_
#define INV_H_
class Inv{
private:
	char *item;
	int qty;
public:
	Inv(void){
		item="NoIteam";
		qty=0;
	}
	Inv(char *it){
		item=it;
	}
	Inv(int q){
		qty=q;
	}
	Inv(char *it,int q){
		item=it;
		qty=q;
	}
	char* retname(void){
		return(item);
	}
	int retqty(void){
		return(qty);
	}
};




#endif /* INV_H_ */
