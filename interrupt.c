#include "define_mouse.h"
#include "interrupt.h"
#include "switch.h"
#include "sci.h"
#include "mode.h"
#include "camera.h"
#include "run.h"
#include "drive.h"

static unsigned short mtu3_cnt = 0;
static unsigned int timer_ms = 0;
static unsigned int timer_sec = 0;



void mtu3_tgra(){
	mtu3_cnt ++;
}

void mtu3_tgrb(){
	static short int j=0;
	static short int clk=0,rokou=0;
	if(SW_MODE==SW_ON){
		LED_1 = CHIP_LED_ON;
		wait_sw_off();
		j=j+1;
		if(j>9)j=0;
		LED_1 = CHIP_LED_OFF;
	}
	mode(j);
	seven_seg(j);
	line_scan();
	if(SW_START==SW_ON){
		LED_2 = CHIP_LED_ON;
		wait_sw_off();
		move ^= 1;
		distance = 0;
		LED_2 = CHIP_LED_OFF;
	}
	/*if(clk >= 128){
		rokou++;
		if(rokou>5){
			rokou=0;
			clk=0;
			CAM_SI=1;
			CAM_CLK=1;
			CAM_SI=0;
			CAM_CLK=0;
			/*for(i=0;i<128;i++){
				//sci_printf("%d ",cam[i]);
					if(cam[i]>100){
						sci_printf("|");
					}else{
						sci_printf("_");
					}
			}
			sci_printf("\r\n");
			
			line_scan();
			sci_printf("interruput move:%d \r\n",move);
		}
	}else{
		CAM_CLK=1;
		S12AD.ADANSA.WORD = 0x01;			//AN000��I��
		while(S12AD.ADCSR.BIT.ADST == 1);		//ADST��0�ɂȂ�܂ő҂�
		S12AD.ADCSR.BIT.ADST = 1;			//AD�ϊ��J�n
		cam[clk]=CAM_AOO;
		while(S12AD.ADCSR.BIT.ADST == 1);		//ADST��0�ɂȂ�܂ő҂�
		//sci_printf("%d ", S12AD.ADDR0);
		CAM_CLK=0;
		clk++;
	}  */
	encoder();
}

void mtu4_tgrb(){
	
}
void increment_timer_ms(){
	timer_ms ++;
	if(timer_ms >= 1000){
		increment_timer_sec();
		timer_ms = 0;
	}
	
}

void increment_timer_sec(){
	timer_sec++;
}
