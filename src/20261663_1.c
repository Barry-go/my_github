#include<stdio.h>
int main(void)
{
	int a;
	char d1,d2,d3,d4,d5,d6,d7,d8;
	char e1,e2,e3,e4,e5,e6,e7,e8;
	int r1,r2,r3,r4,r5,r6,r7,r8;
	int f,g;
	char op;
	printf(" 1. 이진수 변환기	2. 이진수 덧셈기	3. 이진수 뺄셈기\n");
	printf("\n");
	printf("번호를 선택하세요 : ");
	scanf("%d", &a); //번호 선택

	
	if(a==1){ 
		char b1,b2,b3,b4,b5,b6,b7,b8;//이진수 입력받을 변수들
		int c; //이진수 값을 십진수로 저장할 변수
		printf("8비트 이진수를 입력하세요 : ");
		while((op = getchar()) == ' ')
			;
		scanf("%c",&b1);
		scanf("%c",&b2);
		scanf("%c", &b3);
		scanf("%c", &b4);
		scanf("%c", &b5);
		scanf("%c", &b6);
		scanf("%c", &b7);
		scanf("%c", &b8);
		
		if(b1=='0') {
		b1 = b1 - '0';
		b2 = b2 - '0';
		b3 = b3 - '0';
		b4 = b4 - '0';
		b5 = b5 - '0';
		b6 = b6 - '0';
		b7 = b7 - '0';
		b8 = b8 - '0';

		c = ( (b1 * 0) + (b2 * 64) + (b3 * 32) + (b4 * 16) + (b5 * 8) + (b6 * 4) + (b7 * 2) + (b8 * 1));

		printf("십진수로 %d입니다.", c);
		}
		if(b1=='1') {
		b2 = b2 - '0';
    	b3 = b3 - '0';
        b4 = b4 - '0';          
		b5 = b5 - '0';
        b6 = b6 - '0';
        b7 = b7 - '0';
        b8 = b8 - '0';

 		c = ( (b1 * 0) + (b2 * 64) + (b3 * 32) + (b4 * 16) + (b5 * 8) + (b6 * 4) + (b7 * 2) + (b8 * 1)-128);
		printf("십진수로 %d입니다. ", c);
    	}
	
	}
	if(a==2){
		printf("첫 번째 8비트 이진수를 입력하세요 : ");
		while((op = getchar()) == ' ')
				;
		scanf("%c%c%c%c%c%c%c%c", &d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8);
		if(d1=='0') {
			d2 = d2 - '0';
			d3 = d3 - '0';
			d4 = d4 - '0';
			d5 = d5 - '0';
			d6 = d6 - '0';
			d7 = d7 - '0';
			d8 = d8 - '0';
		f =  ((d2 * 64) + (d3 * 32) + (d4 * 16) + (d5 * 8) + (d6 * 4) + (d7 * 2) + (d8 * 1));
		}
		if(d1=='1') {
			d2 = d2 - '0';
  			d3 = d3 - '0';
            d4 = d4 - '0';
            d5 = d5 - '0';
            d6 = d6 - '0';
            d7 = d7 - '0';
            d8 = d8 - '0';
    	f =  ((d2 * 64) + (d3 * 32) + (d4 * 16) + (d5 * 8) + (d6 * 4) + (d7 * 2) + (d8 * 1)-128);
		}
		printf("두 번째 8비트 이진수를 입력하세요 : ");
		while((op = getchar()) == ' ')
			;
		scanf("%c%c%c%c%c%c%c%c", &e1,&e2,&e3,&e4,&e5,&e6,&e7,&e8);
		if(e1=='0'){
			e2 = e2 - '0';
			e3 = e3 - '0';
            e4 = e4 - '0';
            e5 = e5 - '0';
            e6 = e6 - '0';
            e7 = e7 - '0';
            e8 = e8 - '0';
          g =  ((e2 * 64) + (e3 * 32) + (e4 * 16) + (e5 * 8) + (e6 * 4) + (e7 * 2) + (e8 * 1));
		}
		  if(e1=='1'){
    		  e2 = e2 - '0';
              e3 = e3 - '0';
              e4 = e4 - '0';
              e5 = e5 - '0';
              e6 = e6 - '0';
              e7 = e7 - '0';
              e8 = e8 - '0';
            g =  ((e2 * 64) + (e3 * 32) + (e4 * 16) + (e5 * 8) + (e6 * 4) + (e7 * 2) + (e8 * 1)-128);
		  }
		  int sum2;
		  sum2 = f + g;//각각 십진수로 변환한 다음 십진수들의 합을 구함
		  if(sum2>=-128 && sum2<=127){ //8비트 이진수는 -128~127
		  
			  if(sum2>=0){
				
				if(sum2<=127&&sum2>=64){
					r2=sum2/64;
					sum2=sum2%64; 
					
				}
				else
					r2=0;
				if(sum2<=63&&sum2>=32){
					r3=sum2/32;
					sum2=sum2%32;
				}
				else
					r3=0;
				if(sum2<=31&&sum2>=16){
					r4=sum2/16;
					sum2=sum2%16;
				}
				else
					r4=0;
				if(sum2<=15&&sum2>=8){
					r5=sum2/8;
					sum2=sum2%8;
				}
				else
					r5=0;
				if(sum2<=7&&sum2>=4){
					r6=sum2/4;
					sum2=sum2%4;
				}
				else
					r6=0;
				if(sum2<=4&&sum2>=2){
					r7=sum2/2;
					sum2=sum2%2;
				}
				else
					r7=0;
				if(sum2<=1&&sum2>=1){
					r8=sum2/1;
					sum2=sum2%1;
				}
				else
					r8=0;
			printf("결과는 이진수로0%d%d%d%d%d%d%d이고, 십진수로 %d입니다.", r2,r3,r4,r5,r6,r7,r8, f+g);
			  }	  
		  
		  if(sum2<0){
			 sum2 = sum2+128;
			 if(sum2<=127&&sum2>=64){
				 r2=sum2/64;
				 sum2=sum2%64;
			 }
			 else
				 r2=0;
			 if(sum2<=63&&sum2>=32){
				 r3=sum2/32;
				 sum2=sum2%32;
			 }
			 else
				 r3=0;
			 if(sum2<=31&&sum2>=16){
				 r4=sum2/16;
				 sum2%=16;
			 }
			 else
				 r4=0;
			 if(sum2<=15&&sum2>=8){
				 r5=sum2/8;
			 	sum2%=8;
			 }
			 else
				 r5=0;
			 if(sum2<=7&&sum2>=4){
				 r6=sum2/4;
				 sum2%=4;
			 }
			 else
				 r6=0;
			 if(sum2<=3&&sum2>=2){
				 r7=sum2/2;
				 sum2%=2;
			 }
			 else
				 r7=0;
			 if(sum2<=1&&sum2>=1){
				 r8=sum2/1;
				 sum2%=1;
			 }
			 else
				 r8=0;
		 
			printf("결과는 이진수로 1%d%d%d%d%d%d%d이고, 십진수로 %d입니다.", r2,r3,r4,r5,r6,r7,r8,f+g);
		  }
		  }
		  if(sum2>127||sum2<-128){
		  	if(sum2>127){
				sum2-=256;
				sum2+=128;
					if(sum2<=127&&sum2>=64){
						r2=sum2/64;
					sum2=sum2%64;
					}
					else
						r2=0;
				if(sum2<=63&&sum2>=32){
					r3=sum2/32;
					sum2%=32;
				}
				else
					r3=0;
				if(sum2<=31&&sum2>=16){
					r4=sum2/16;
					sum2%=16;
				}
				else
					r4=0;
				if(sum2<=15&&sum2>=8){
					r5=sum2/8;
					sum2%=8;
				}
				else
					r5=0;
				if(sum2<=7&&sum2>=4){
					r6=sum2/4;
					sum2%=4;
				}
				else
					r6=0;
				if(sum2<=3&&sum2>=2){
					r7=sum2/2;
					sum2%=2;
				}
				else
					r7=0;
				if(sum2<=1&&sum2>=1){
					r8=sum2/1;
					sum2%=1;
				}
				else
					r8=0;
			printf("결과로 이진수로 1%d%d%d%d%d%d%d이고, 십진수로 %d입니다.", r2,r3,r4,r5,r6,r7,r8,f+g-256);
			}
		if(sum2<-128){
			sum2+=256;
			if(sum2<=127&&sum2>=64){
				r2=sum2/64;
				sum2%=64;
			}
			else
				r2=0;
			if(sum2<=63&&sum2>=32){
				r3=sum2/32;
				sum2%=32;
			}
			else
				r3=0;
			if(sum2<=31&&sum2>=16){
				r4=sum2/16;
				sum2%=16;
			}
			else
				r4=0;
			if(sum2<=15&&sum2>=8){
				r5=sum2/8;
				sum2%=8;
			}
			else
				r5=0;
			if(sum2<=7&&sum2>=4){
				r6=sum2/4;
				sum2%=4;
			}
			else
				r6=0;
			if(sum2<=3&&sum2>=2){
				r7=sum2/2;
				sum2%=2;
			}
			else
				r7=0;
			if(sum2<=1&&sum2>=1){
				r8=sum2/1;
				sum2%=1;
			}
			else
				r8=0;
printf("결과는 이진수로 0%d%d%d%d%d%d%d이고, 십진수로 %d입니다.", r2,r3,r4,r5,r6,r7,r8,f+g+256);
		  }
		   
	}
	}

	
		  
	if(a==3){
		int min;
		printf("첫 번째 8비트 이진수를 입력하세요 : ");
		while((op=getchar())==' ')
			;
		scanf("%c%c%c%c%c%c%c%c", &d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8);
		if(d1=='0'){
		d2 = d2 - '0';
		d3-='0';
		d4-='0';
		d5-='0';
		d6-='0';
		d7-='0';
		d8-='0';
		f=((d2*64)+(d3*32)+(d4*16)+(d5*8)+(d6*4)+(d7*2)+(d8*1));
		}
		if(d1=='1'){
			d2-='0';
			d3-='0';
			d4-='0';
			d5-='0';
			d6-='0';
			d7-='0';
			d8-='0';
			f=((d2*64)+(d3*32)+(d4*16)+(d5*8)+(d6*4)+(d7*2)+(d8*1)-128);
		}
		printf("두 번째 8비트 이진수를 입력하세요 : ");
		while((op=getchar())== ' ')
			;
		scanf("%c%c%c%c%c%c%c%c",&e1,&e2,&e3,&e4,&e5,&e6,&e7,&e8);
		if(e1=='0'){
			e2-='0';
			e3-='0';
			e4-='0';
			e5-='0';
			e6-='0';
			e7-='0';
			e8-='0';
			g=((e2*64)+(e3*32)+(e4*16)+(e5*8)+(e6*4)+(e7*2)+(e8*1));
	}
		if(e1=='1'){
			e2-='0';
			e3-='0';
			e4-='0';
			e5-='0';
			e6-='0';
			e7-='0';
			e8-='0';
			g=((e2*64)+(e3*32)+(e4*16)+(e5*8)+(e6*4)+(e7*2)+(e8*1)-128);
		}
		min = f - g;
	if(min<=127&&min>=-128){
		if(min>=0){
			if(min<=127&&min>=64){
				r2=min/64;
				min%=64;
			}
			else
				r2=0;
			if(min<=63&&min>=32){
				r3=min/32;
				min%=32;
			}
			else
				r3=0;
			if(min<=31&&min>16){
				r4=min/16;
				min%=16;
			}
			else
				r4=0;
			if(min<=15&&min>=8){
				r5=min/8;
				min%=8;
			}
			else
				r5=0;
			if(min<=7&&min>=4){
				r6=min/4;
				min%=4;
			}
			else
				r6=0;
			if(min<=3&&min>=2){
				r7=min/2;
				min%=2;
			}
			else
				r7=0;
			if(min<=1&&min>=1){
				r8=min/1;
				min%=1;
			}
			else
				r8=0;
			printf("결과는 이진수로 0%d%d%d%d%d%d%d이고, 십진수로 %d입니다.", r2,r3,r4,r5,r6,r7,r8,f-g);
		}
		if(min<0){
			min+=128;
			if(min<=127&&min>=64){
				r2=min/64;
				min%=64;
			}
			else
				r2=0;
			if(min<63&&min>=32){
				r3=min/32;
				min%=32;
			}
			else
				r3=0;
			if(min<=31&&min>=16){
				r4=min/16;
			min%=16;
			}
			else
				r4=0;
			if(min<=15&&min>=8){
				r5=min/8;
				min%=8;
				}
			else
				r5=0;
			if(min<=7&&min>=4){
				r6=min/4;
				min%=4;
			}
			else
				r6=0;
			if(min<=3&&min>=2){
				r7=min/2;
				min%=2;
			}
			else
				r7=0;
			if(min<=1&&min>=1){
				r8=min/1;
				min%=1;
			}
			else
				r8=0;
			printf("결과는 이진수로 1%d%d%d%d%d%d%d이고, 십진수로 %d입니다.", r2,r3,r4,r5,r6,r7,r7,f-g);
		}
	}
		if(min>127||min<-128){
			if(min>127){
             min=min-256; //오버플로우 생겼으니까 마이너스로 바꿔주기
				min=min+128; //마이너스면 계산 못하니까 
			if(min<=127&&min>=64){
				r2=min/64;
				min%=64;
			}
			else
				r2=0;
			if(min<=63&&min>=32){
				r3=min/32;
				min%=32;
			}
			else
				r3=0;
			if(min<=31&&min>=16){
				r4=min/16;
				min%=16;
			}
			else
				r4=0;
			if(min<=15&&min>=8){
				r5=min/8;
				min%=8;
			}
			else
				r5=0;
			if(min<=7&&min>=4){
				r6=min/4;
				min%=4;
			}
			else
				r6=0;
			if(min<=3&&min>=2){
				r7=min/2;
				min%=2;
			}
			else
				r7=0;
			if(min>=1&&min<=1){
				r8=min/1;
				min%=1;
			}
			else
				r8=0;
			printf("결과는 이진수로 1%d%d%d%d%d%d%d이고, 십진수로 %d입니다.", r2,r3,r4,r5,r6,r7,r8, f-g-256);
			}
			if(min<-128){
				min+=256;
				if(min<=127&&min>=64){
					r2=min/64;
					min%=64;
				}
				else
					r2=0;
				if(min<=63&&min>=32){
					r3=min/32;
					min%=32;
				}
				else
					r3=0;
				if(min<=31&&min>=16){
					r4=min/16;
					min%=16;
				}
				else
					r4=0;
				if(min<=15&&min>16){
					r5=min/8;
					min%=8;
				}
				else
					r5=0;
				if(min<=7&&min>=4){
					r6=min/4;
					min%=4;
				}
				else
					r6=0;
				if(min<=3&&min>=2){
					r7=min/2;
					min%=2;
				}
				else
					r7=0;
				if(min<=1&&min>=1){
					r8=min/1;
					min%=1;
				}
				else
					r8=0;
				printf("결과는 이진수로 0%d%d%d%d%d%d%d이고, 십진수로 %d입니다.", r2,r3,r4,r5,r6,r7,r8,f-g+256);
			}
	}
	}
	return 0;
	
	}
