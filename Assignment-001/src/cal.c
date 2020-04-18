#include<header.h>
void main()
{
   union {
      struct {
    	void (*add)(int *, int);
	void (*sub)(int *, int);
        void (*mul)(int *, int);
        void (*diva)(int *, int);
	void (*per)(int *,int);
   	    };
        }LIBI;
   union {
      struct {
	void (*add)(float *, float);
	void (*sub)(float *, float);
	void (*mul)(float *, float);
	void (*diva)(float *, float);
	void (*per)(float *, float);
	   };
	 }LFBF;
   union {
      struct {
	void (*add)(float *,int);
	void (*sub)(float *, int);
        void (*mul)(float *, int);
        void (*diva)(float *, int);
	void (*per)(float *,int);
	    };
	}LFBI;
   union {
      struct {
	void (*add)(int *,float);
	void (*sub)(int *, float);
        void (*mul)(int *, float);
        void (*diva)(int *, float);
	void (*per)(int *,float);
	    };
	}LIBF;

	LIBI.add = add1;
	LFBF.add = add2;
	LIBF.add = add3;
	LFBI.add = add4;

	LIBI.mul = mul1;
        LFBF.mul = mul2;
        LIBF.mul = mul3;
        LFBI.mul = mul4;

	LIBI.sub = sub1;
        LFBF.sub = sub2;
        LIBF.sub = sub3;
        LFBI.sub = sub4;

	LIBI.diva = diva1;
        LFBF.diva = diva2;
        LIBF.diva = diva3;
        LFBI.diva = diva4;
	
	LIBI.per = per1;
        LFBF.per = per2;
        LIBF.per = per3;
        LFBI.per = per4;
	int t=0;
	while(1) {
	   char *st=(char*)malloc(sizeof(char));
	   gets(st);
	 //scanf("%[^\n]s",st);
	   int n=strlen(st),k=0;
	   char temp[n];
	   char temp1[n];
		if(st[0]=='q') {
			exit(0);
		}
	   int flag=0,a=0,b=0,t,t1=0,t2=0;
	   int q1=0,q2=0;
	   float w1=0.0,w2=0.0;
	   char op;
	   for(int i=0;st[i]!='\0';i++) {
			if(st[i]=='0' || st[i]=='1' || st[i]=='2' || st[i]=='3' || st[i]=='4' || st[i]=='5'||st[i]=='6' || st[i]=='7' || st[i]=='8' || st[i]=='9' ||st[i]=='+' || st[i]=='-' || st[i]=='/' || st[i]=='*' || st[i]=='%' ||st[i]=='.') {
				int mg=0;
			     }
			else {
				printf("Invalid Input");
				break;
			      }
			if(st[0]=='+' || st[0]=='-' || st[0]=='/' || st[0]=='*' || st[0]=='%') {
				op=st[0];
				printf("Invalid Input\n");
				break;
				flag=1;
				}
			if(st[i]=='+' || st[i]=='-' || st[i]=='/' || st[i]=='*' || st[i]=='%') {
				op=st[i];
				if(t1==1)
				{
				float a1=("%4.2f",strtod(temp,NULL));
				w1=a1;
				k=0;
				}
				else {
					int a1=atoi(temp);
					q1=a1;
					k=0;
				      }
				flag=1;
				}
			else  {	
				if(flag==0) {	
					if(st[i]=='.') {
						t1=1;
					}
					temp[k]=st[i];
					k++;	
				}
				else {
					if(st[i]=='.') {
						t2=1;
					   }
					temp1[k++]=st[i];
				     }
			       }
			}
		if(t2==1) {
			float b1=("%4.2f",strtod(temp1,NULL));
			w2=b1;
			  }
		else {
			int b1=atoi(temp1);
			q2=b1;
	       	     }		
		switch(op) {
			case '+':
				if(t1==0 && t2==0) {				//q1,q2 two values intger
				LIBI.add(&q1,q2);	
				  }
				else if(t1==1 && t2==1)	{
					LFBF.add(&w1,w2);	//W1,W2 TWO Value is float
				}
				else if(t1==0 && t2==1)	{	//q1 is intger w2 is float
					LIBF.add(&q1,w2);
				}
				else {
					LFBI.add(&w1,q2); 		
				}
				break;
	
			case '-':
				if(t1==0 && t2==0) {		//q1,q2 two values intger
				LIBI.sub(&q1,q2);	
				}
				else if(t1==1 && t2==1) {
					LFBF.sub(&w1,w2);	//W1,W2 TWO Value is float
				}
				else if(t1==0 && t2==1) {		
					LIBF.sub(&q1,w2);    //q1 is intger w2 is float
				}
				else {
					LFBI.sub(&w1,q2); 		
				}
				break;
			case '*':
				if(t1==0 && t2==0) {
                                	LIBI.mul(&q1,q2);
                                }
				else if(t1==1 && t2==1) {
                                       LFBF.mul(&w1,w2);       //W1,W2 TWO Value is float
                                }else if(t1==0 && t2==1) {             //q1 is intger w2 is float
                                        LIBF.mul(&q1,w2);
                                }
                                else {
                                        LFBI.mul(&w1,q2);
				      }
				break;
			case '/':
				if(t1==0 && t2==0) {
                                LIBI.diva(&q1,q2);
                                }
				else if(t1==1 && t2==1) {
                                        LFBF.diva(&w1,w2);       //W1,W2 TWO Value is float
                                }
				else if(t1==0 && t2==1) {
                                                    //q1 is intger w2 is float
                                        LIBF.diva(&q1,w2);
                                }
                                else {
                                        LFBI.diva(&w1,q2);
				}
				break;
			case '%':
				if(t1==0 && t2==0) {
                                LIBI.per(&q1,q2);
                                }
				else if(t1==1 && t2==1) {       
                                        LFBF.per(&w1,w2);       //W1,W2 TWO Value is float
                                }
				else if(t1==0 && t2==1) {                 
                                        LIBF.per(&q1,w2);   //q1 is intger w2 is float
                                }
                                else {
                                        LFBI.per(&w1,q2);
				}
				
				break;	
		}
		free(st);
	}	
}
