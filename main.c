#include"..\Lib\main.h"

#include"..\Lib\Delay.h"

void main(){
 	P0=0x55;
	while(1){
	 	P0=~P0;
		Delay_ms(1000);
	}

}