#include <stdio.h>
int verigirisi(int m, int n);
//int x1,x2,x3;
//int dizi[][]={{1},{2},{3}};
//int dizi2[][]={{x1},{x2},{x3}};
int main()
{/*mian*/
    int m,n,devammi;
    printf("matrisin boyutlarini giriniz:\n");
    scanf("%d%3d",&m,&n);
     verigirisi(m,n);
     printf("-----------yeni bir matris girmek icin  1 'e\n\n\n-----------programdan cikmak icin  0 'a  basiniz.\n\n");
     scanf("%d",&devammi);
     
     if((devammi!=0)&&(devammi!=1)){/*if*/
       printf("yanlis tercih yaptiniz..\n\ntekrar giriniz..\n");
        scanf("%d",&devammi);
        }/*endof if*/
        
        
     switch(devammi){/*switch*/
                     case 1:
                          main();
                     case 0:
                          break;
                     }/*switch'in  sonu*/


}/*endof main*/


     
     
     int verigirisi(int a, int b)
     {
          float Array[a][b],temp1[b],temp2[b];
          float bolucu,k;
          int y,i,j,z,t,e,ti,tj;
          int kontrol;
           for(i=0; i<a; i++)
            for(j=0; j<b; j++)
               Array[i][j]=0;              
             
     printf("verileri giriniz:\n\n");
     printf("verilerin girisini satir satir sirayla yapiniz..\n");   
         for(i=0; i<a; i++)         
          for(j=0; j<b; j++){
               scanf("%f",&Array[i][j]);}
           printf("Girdiginiz Matris;\n");
          

          for(i=0; i<a; i++)         
          for(j=0; j<b; j++){
               printf("%f\t",Array[i][j]);
                 if(j==(b-1)){
                    printf("\n");}
                    }
         printf("\n\n\n");
        
        
        for(ti=0; ti<a; ti++)
          for(tj=0; tj<b; tj++){//for1
              i=ti;
              j=tj;
              t=j;
              z=i;
            if(i==j){//if1
                   bolucu=Array[i][i];  
                   if(bolucu==0)
                   {
              for(j=0; j<b; j++){/*for1*/
              temp1[j]=Array[i][j];}/*for1end*/
              for(i=(a-1); i>t; i--){/*for2*/
                   if(Array[i][t]!=0){/*if3*/
                   for(j=0; j<b; j++)
                   temp2[j]=Array[i][j];
                   break;
                   }/*if3end*/
                   }/*for2end*/
                   for(j=0; j<b; j++){/*for3*/
                   Array[z][j]=temp2[j];
                   Array[i][j]=temp1[j];
                   }/*for3end*/   
        
        
        printf("Yerdegistirme iterasyonu;\n");
          for(i=0; i<a; i++)
          for(j=0; j<b; j++){//for
             printf("%f\t",Array[i][j]);
             if(j==(b-1)){//if
                         printf("\n");}//ifend
                         }//forend
                        printf("\n\n\n");
                   
                 bolucu=Array[z][z];

                for(j=0; j<b; j++){//for2
                Array[z][j]=(Array[z][j]/bolucu);
            
                     if(j==(b-1)){//if2
                        printf("\n");}//if2end
                      }//for2end
           for(y=0; y<(a-1); y++){//for3
               if(y>=t){//if3
                  e=t;
                  k=Array[(y+1)][e];
                    for(e=0; e<b; e++){//for4
                       Array[(y+1)][e]=(-1)*k*Array[z][e]+Array[(y+1)][e];
                      
                                      }}//for3-4end   
                       printf("\n");
                       }//if3end
                    
          printf("Iterasyon sonucu;\n");
          for(i=0; i<a; i++)         
          for(j=0; j<b; j++){
               printf("%f\t",Array[i][j]);
                 if(j==(b-1)){
                    printf("\n");}
                    }
         printf("\n\n\n");
                      
                    
                    
                     
}//ifbolucuend           
              
              else
              {
                   
              for(j=0; j<b; j++){//for2
                Array[i][j]=(Array[i][j]/bolucu);
               
                     if(j==(b-1)){//if2
                        printf("\n");}//if2end
                      }//for2end
           for(y=0; y<(a-1); y++){//for3
               if(y>=t){//if3
                  e=t;
                  k=Array[(y+1)][e];
                    for(e=0; e<b; e++){//for4
                       Array[(y+1)][e]=(-1)*k*Array[i][e]+Array[(y+1)][e];
                      
                                      }}//for3-4end   
                       printf("\n");
                       }//if3end
                      
          printf("Iterasyon sonucu;\n");
          for(i=0; i<a; i++)         
          for(j=0; j<b; j++){
               printf("%f\t",Array[i][j]);
                 if(j==(b-1)){
                    printf("\n");}
                    }
         printf("\n\n\n");
                      
                      

                      
                       }//elseend
               }//if1end
                  }//for1end
         printf("ESELON FORM SONUCU;\n");
         for(i=0; i<a; i++)
          for(e=0; e<b; e++){//for
             j=e;
             printf("%.3f\t",Array[i][e]);
             if(e==(b-1)){//if
                         printf("\n");}//ifend
                         }//forend
    }//fonksiyonend
