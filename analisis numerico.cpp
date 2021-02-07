#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cmath>
using namespace std;
int o;
int op;
//Ecuacion de segundo grado 
double x,z,y,X,q,a,b,c,t,n,m;
//BISECION  
float Xr,Xa,Xb,Xr1;

////ERROR PORCENTUAL
 float L,H,I,U,E;

//  // //CALCULAR LA FUNCION de Ecuacion de segundo grado     
float T,W,A,X1,X2,X3,FX;

/////CALCULAR ECUACION DE FAlsa posicion 
float DD,Ax,Ee,Ff,Kk,Yy,Gg,Xd; 

////Fa*Fxr 
float Fa,Fxr,V;

 /////////gausss//////      
    float BX,BY,BU,BC,BB,BV,BT,BR;
    float RX,RY,RU,RC,RB,RV,RT,RR;
     float QX,QY,QU,QC,QB,QV,QT,QR;
     float TX,TY,TU,TC,TB,TV,TT,TR;

//     /////////jacodi////////
    float DX,DY,DU,DC,DB,DV,DT,DR;
    float WX,WY,WU,WC,WB,WV,WT,WR;
    float VX,VY,VU,VC,VB,VV,VT,VR;

     char conv;


int main(){
  do{  
    char conv;
    char ada;
    cout<<"BISECCION"<<endl;
    cout<<"1.ECUACION DE SEGUNDO GRADO"<<endl;
    cout<<"2.ECUACION DE BISECION"<<endl;
    cout<<"3.ERROR"<<endl;
    cout<<"4.CALCULAR FUNCION DE E.S.G:"<<endl;
    cout<<"5.CALCULAR FUNCION DE FA*Fxr:"<<endl;
    cout<<"6.ECUACION DE POSICION FALSA"<<endl;
    cout<<"7.ECUACION DE GAUSS SEDEN "<<endl;
    cout<<"8.ECUACION DE  JACODIT "<<endl;   
    cin>>conv;
       switch (conv) {
              
              
              case'1':
  //Ecuacion de segundo grado                    
cout<<"1.ECUACION DE SEGUNDO GRADO"<<endl;  

    printf("INTRODUSCA EL VALOR A\n");
    scanf("%f",&a);
    printf("INTRODUSCA EL VALOR B\n");
    scanf("%f",&b);
    printf("INTRODUSCA EL VALOR C\n");
    scanf("%f",&c);
    t=b*b;
    z=(t-4*a*c);
    y=(2*a);
    q=sqrt(z);
    n=-b+q;
    m=-b-q;
    x=n/y;
    X=m/y;

 printf("El x1 es = %.4f",X);
           printf("\n");
 printf("El x2 es =%.4f",x);
 
 

  printf("\n");
  
   printf("\n");
    break;
    
    case'2':
            //ECUACION DE BISECION 
     cout<<"2.ECUACION DE BISECION"<<endl;
    printf("INTRODUSCA EL VALOR A\n");
    scanf("%f",&Xa);
    printf("INTRODUSCA EL VALOR B\n");
    scanf("%f",&Xb);
    Xr1=Xa+Xb;
   Xr= Xr1/2;
   printf("LA SUMA es = %.2f",Xr1);
           printf("\n");
    printf("Xr es = %.2f",Xr);
           printf("\n");
    
    break;
    
    
      case'3':
              //ERROR PORCENTUAL
             cout<<"3.ERROR PORCENTUAL"<<endl;  
               
  
    printf("INTRODUSCA EL VALOR V\n");
    scanf("%f",&L);
 printf("INTRODUSCA EL VALOR Va\n");
    scanf("%f",&H);
     I=(L-H);
     U=I/L;
     E=U*100;
     
      printf("V-Va = %.2f",I);
 
 cout<<"      "<<endl;
 cout<<"      "<<endl;     
      printf("V-Va/V= %.2f",U);
 
 cout<<"      "<<endl; 
  cout<<"      "<<endl;    
 printf("ERROR PORCENTUAL es = %.2f",E);
 break;
 
 
  case'4':
           //CALCULAR LA FUNCION de Ecuacion de segundo grado                    
cout<<"4.CALCULAR FUNCION DE E.S.G:"<<endl;  
cout<<"ax2+dx+c:"<<endl;  

    printf("INTRODUSCA LA CONSTANTES a\n");
    scanf("%f",&T);
    printf("INTRODUSCA LA CONSTANTES b\n");
    scanf("%f",&W);
     printf("INTRODUSCA LA CONSTANTES c\n");
    scanf("%f",&A);
    printf("INTRODUSCA EL VALOR X1\n");
    scanf("%f",&X1);
    printf("INTRODUSCA EL VALOR X2\n");
    scanf("%f",&X2);
    
    FX=T*X1*X1+W*X2+A;
     
 printf("El Fx es = %.3f",FX);
           printf("\n");
           
 break;
 case'5':
      //Fa*Fxr                    
cout<<"5.CALCULAR FUNCION DE FA*Fxr:"<<endl;  
           cout<<"Fa*Fxr"<<endl;  

    printf("INTRODUSCA LA CONSTANTES Fa\n");
    scanf("%f",&Fa);
    printf("INTRODUSCA LA CONSTANTES Fxr\n");
    scanf("%f",&Fxr);
   
    V=Fa*Fxr;
    
    
     
 printf("El Fa*Fxr es = %.3f",V);
           printf("\n");
    break;
    case'6':
           // float DD,Ax,Ee,Ff,,,,Kk,Yy,Gg,Xd,XL;
      cout<<"6.ECUACION DE POSICION FALSA"<<endl;       
         cout<<"  " <<endl;
         cout<<"INGRESAR VALORES"<<endl;
         cout<<"Xa:";
         cin>>DD;
            cout<<"Xb:";   
             cin>>Ax;
            cout<<"F(Xa):";  
             cin>>Ee;
            cout<<"F(Xb):";  
             cin>>Ff;
             Kk=Ff*(DD-Ax);
             Yy=Ee-Ff;
             Gg=Kk/Yy;
             Xd=Ax-Gg;
                        cout<<"EL RESULTADO DE f(xb)*(xa-xb) ES "<<Kk<<endl;
                        cout<<"EL RESULTADO DE f(xa)-f(xb) Es "<<Yy<<endl;
                        cout<<"EL RESULTADO DE f(xb)*(xa-xb)/f(xa)-f(xb) ES "<<Gg<<endl;
             cout<<"EL RESULTADO DE Xr ES "<<Xd<<endl;
             printf("El RESULTADO Xr ES  = %.3f",Xd);
            
            
            break;
            case'7':
                     cout<<"7.ECUACION DE GAUSS SEDEN "<<endl;
   cout<<"   "<<endl;
    //////x1//////
    //float BX,BY,BU,BC,BB,BV,BT,BR;
      cout<<"////// X1//////////////  "<<endl;
    cout<<"Ingrese valores "<<endl;
     cout<<"X2:";
         cin>>BX;
            cout<<"X3:";   
             cin>>BY;
             cout<<"b1:";
         cin>>BU;
         cout<<"a11:";   
             cin>>BC;
            cout<<"a12:";   
             cin>>BB;
              cout<<"a13:";   
             cin>>BV;
             BT=BU-BB*BX-BV*BY;
             BR=BT/BC;
             cout<<"El resultado de b1-a12*x2-a13*x3 ="<<" "<<BT<<endl;
             printf("El RESULTADO X1 ES  = %.3f",BR);
             cout<<"   "<<endl;
             cout<<" "<<endl;
             cout<<" "<<endl;
            cout<<"////// X1//////////////  "<<endl;
             cout<<"   "<<endl;
             cout<<" "<<endl;
             cout<<" "<<endl;
                 
             //////////////X2//////////////
      cout<<"////// X2//////////////  "<<endl;
      cout<<"X1="<<BR<<endl;
    cout<<"X3="<<BY<<endl;
     cout<<"Ingrese valores "<<endl;
    
      //   cin>>BR;
           // cout<<"X3:";   
           //  cin>>BY;
             cout<<"b2:";
         cin>>RU;
         cout<<"a21:";   
             cin>>RC;
            cout<<"a22:";   
             cin>>RB;
              cout<<"a23:";   
             cin>>RV;
             RT=RU-RC*BR-RV*BY;
             RR=RT/RB;
             cout<<"El resultado de b2-a21*x1-a23*x3 ="<<" "<<RT<<endl;
             printf("El RESULTADO X2 ES  = %.3f",RR);
               cout<<"   "<<endl;
             cout<<" "<<endl;
             cout<<" "<<endl;
                cout<<"////// X2//////////////  "<<endl;
                cout<<"   "<<endl;
             cout<<" "<<endl;
             cout<<" "<<endl;
             //////////////X3//////////////       
  cout<<"////// X3//////////////  "<<endl;
 cout<<"X1="<<BR<<endl;
    cout<<"X2="<<RR<<endl;
    
  cout<<"Ingrese valores "<<endl;
//     cout<<"X1:";
//         cin>>BR;
//            cout<<"X2:";   
//             cin>>RR;
          cout<<"b3:";
         cin>>TU;
         cout<<"a31:";   
             cin>>TC;
            cout<<"a32:";   
             cin>>TB;
              cout<<"a33:";   
             cin>>TV;
             TT=TU-TC*BR-TB*RR;
             TR=TT/TV;
             cout<<"El resultado de b3-a31*x1-a33*x2 ="<<" "<<TT<<endl;
             printf("El RESULTADO X3 ES  = %.3f",TR);
             cout<<"   "<<endl;
             cout<<" "<<endl;
             cout<<" "<<endl;
cout<<"////// X3//////////////  "<<endl;
 cout<<" "<<endl;
 cout<<" "<<endl;
 cout<<" "<<endl;
 cout<<" "<<endl;
 cout<<" "<<endl;
 break;
case'8':
        cout<<"1..ECUACION DE jacodi "<<endl;
    cout<<"   "<<endl;
    //////x1//////
    //float DX,DY,DU,DC,DB,DV,DT,DR;
      cout<<"////// X1//////////////  "<<endl;
    cout<<"Ingrese valores "<<endl;
     cout<<"X2:";
         cin>>DX;
            cout<<"X3:";   
             cin>>DY;
             cout<<"b1:";
         cin>>DU;
         cout<<"a11:";   
             cin>>DC;
            cout<<"a12:";   
             cin>>DB;
              cout<<"a13:";   
             cin>>DV;
             DT=DU-DB*DX-DV*DY;
             DR=DT/DC;
             cout<<"El resultado de b1-a12*x2-a13*x3 ="<<" "<<DT<<endl;
             printf("El RESULTADO X1 ES  = %.3f",DR);
             cout<<"   "<<endl;
             cout<<" "<<endl;
             cout<<" "<<endl;
            cout<<"////// X1//////////////  "<<endl;
             cout<<"   "<<endl;
             cout<<" "<<endl;
             cout<<" "<<endl;
                 
             //////////////X2//////////////
              //float WX,WY,WU,WC,WB,WV,WT,WR;
      cout<<"////// X2//////////////  "<<endl;
   
     cout<<"Ingrese valores "<<endl;
     cout<<"X1:";
        cin>>WR;
            cout<<"X3:";   
             cin>>WY;
             cout<<"b2:";
         cin>>WU;
         cout<<"a21:";   
             cin>>WC;
            cout<<"a22:";   
             cin>>WB;
              cout<<"a23:";   
             cin>>WV;
             WT=WU-WC*WR-WV*WY;
             WX=WT/WB;
             cout<<"El resultado de b2-a21*x1-a23*x3 ="<<" "<<WT<<endl;
             printf("El RESULTADO X2 ES  = %.3f",WX);
               cout<<"   "<<endl;
             cout<<" "<<endl;
             cout<<" "<<endl;
                cout<<"////// X2//////////////  "<<endl;
                cout<<"   "<<endl;
             cout<<" "<<endl;
             cout<<" "<<endl;
             //////////////X3//////////////       
  cout<<"////// X3//////////////  "<<endl;

    //float VX,VY,VU,VC,VB,VV,VT,VR;
  cout<<"Ingrese valores "<<endl;
     cout<<"X1:";
         cin>>VX;
          cout<<"X2:";   
            cin>>RY;
          cout<<"b3:";
         cin>>VU;
         cout<<"a31:";   
             cin>>VC;
            cout<<"a32:";   
             cin>>VB;
              cout<<"a33:";   
             cin>>VV; 
             VT=VU-VC*VR-VB*VR;
             VR=VT/VV;
             cout<<"El resultado de b3-a31*x1-a33*x2 ="<<" "<<TT<<endl;
             printf("El RESULTADO X3 ES  = %.3f",VR);
             cout<<"   "<<endl;
             cout<<" "<<endl;
             cout<<" "<<endl;
cout<<"////// X3//////////////  "<<endl;
 cout<<" "<<endl;
 cout<<" "<<endl;
 cout<<" "<<endl;
 cout<<" "<<endl;
 cout<<" "<<endl;
 break;   
 
  
    
            cout<<"      "<<endl;
            cout<<"      "<<endl;
            cout<<"      "<<endl;
            cout<<"      "<<endl;
 
             }//cierre del switch
             

cout<<"            "<<endl;
cout<<"            "<<endl;
cout<<" Salir     1"<<endl;
cout<<"            "<<endl;
cout<<"continuar  2"<<endl;
cout<<"            "<<endl;
  cin>>o;

}//Cierre de do while

  while(o==2);
 
    
   
 }   
