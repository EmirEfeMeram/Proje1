Soru 1:
#include <iostream>

using namespace std;


int main()
{
    int yil=0;
    int yuzyil=0;
    cout << "Yili Giriniz: " ;
    cin >> yil ;

    if(yil<100){
        yuzyil=1;
    }
    else{
        int kalan=0;
        kalan=yil%100;
        yuzyil=(yil-kalan)/100;
        yuzyil++;
    }
    cout << yuzyil <<" Yüzyildasınız"<< endl;

    return 0;
}

soru2:

#include <iostream>
#include <string.h>
#include<string>

using namespace std;

int main(){
    string isim;
    string palindrom;
    int i, len;


    cout << "İsmi giriniz: "; cin >> isim;

    len = isim.length();

    for(i=0;i < len ;i++){
        if(isim[i] == isim[len-i-1]){
            palindrom=" plaindrom kelimedir";}
        else{
            palindrom=" palindrom kelime değildir";
        }
}


    cout << isim << palindrom << endl;
    system("pause");
    return 0;
}
soru 3:
#include <iostream>
#include <string.h>
#include<string>

using namespace std;

int main(){
    int dizi[6] = {1,3,6,32,9,2};
    int sonucdizi[2];
    int i=0;
    int dizisize = sizeof(dizi)/sizeof(dizi[0]);
    int eskideger=0;
    int toplam=0;
    int eskitoplam=0;

    for (i=0;i<dizisize;i++)
    {
        toplam = dizi[i] + eskideger;
        if(toplam>eskitoplam){
            eskitoplam=toplam;
            sonucdizi[0]=eskideger;
            sonucdizi[1]=dizi[i];
        }
        eskideger=dizi[i];
    }
    cout << sonucdizi[0] << " "<< sonucdizi[1] << endl;

soru 4:

#include <iostream>
#include <string.h>
#include<string>


using namespace std;

int main(){
    int saat=0;
    int gsaat=0;
    int fark;
    int tarih[3]={1,2,3};
    int dogum[3]={1,2,3};

    cout <<"Şu an ki tarihi G/A/Y şeklinde giriniz: ";
    cin >> tarih[0] ;
    cout<< "/";
    cin >> tarih[1];
    cout<< "/";
    cin >> tarih[2] ;

    cout <<"Doğum tarihinizi G/A/Y şeklinde giriniz: ";
    cin >> dogum[0] ;
    cout<< "/";
    cin >> dogum[1];
    cout<< "/";
    cin >> dogum[2] ;

    for(int i=0;i<3;i++){
        if(i==0){
            saat=tarih[i]*24;
            gsaat=dogum[i]*24;
        }
        else if (i==1){
            saat+=tarih[i]*30*24;
            gsaat=dogum[i]*30*24;
        }
        else if (i==2){
            saat+=tarih[i]*365*24;
            gsaat+=dogum[i]*365*24;
        }
    }
    cout << saat-gsaat << "saattir yaşıyorsunuz." << endl;



    }

soru 5:
#include <iostream>
#include <string.h>
#include<string>

using namespace std;

int main(){
    int dizi[6] = {14,5,7,9,3,12};
    int sonucdizi[6];
    int i=0,ort=0,toplam=0;
    int dizisize = sizeof(dizi)/sizeof(dizi[0]);
    int eskideger=0;
    int eskitoplam=0;

    for (i=0;i<dizisize;i++){
        toplam+=dizi[i];
    }
    ort=toplam/dizisize;
    for (i=0;i<dizisize;i++){
        if(dizi[i]>ort){
            sonucdizi[i]=dizi[i];
        }
        else {
            sonucdizi[i]=0;
        }

    }
    for (i=0;i<6;i++){
        cout << sonucdizi[i]<< endl;
    }

}
soru 6:
#include <iostream>
#include <string.h>
#include<string>
#include<math.h>
#include<cmath>

using namespace std;

int karealma(int x){
    int kare=0;
    return kare= x*x;

}
int power(int x){
    int kare=0;
    return kare=pow(x,2);
}

int main(){

    int dizi[6] = {14,5,7,9,3,12};
    int sonucdizi[6];
    int i=0,x=0;
    int dizisize = sizeof(dizi)/sizeof(dizi[0]);


    for (i=0;i<dizisize;i++){
        if ((i%2)==0){
            sonucdizi[i]=karealma(dizi[i]);
        }
        else{
            sonucdizi[i]=power(dizi[i]);
        }
    }
    for (i=0;i<6;i++){
        cout << sonucdizi[i]<< endl;
    }

}

soru 7:
#include <iostream>
#include <string.h>
#include<string>
#include<math.h>
#include<cmath>

using namespace std;



int main(){

    int dizi1[6] = {14,5,7,9,3,12};
    int dizi2[6]= {5,7,9,6,23,21};
    int sonucdizi[20];
    int i=0,x=0;
    int dizisize = sizeof(dizi1)/sizeof(dizi1[0]);
    int dizisize2 = sizeof(dizi2)/sizeof(dizi2[0]);

    for (i=0;i<(dizisize+dizisize2);i++){
        sonucdizi[i*2]=dizi1[i];
        sonucdizi[(i*2)+1]=dizi2[i];
    }
    for (i=0;i<12;i++){
        cout << sonucdizi[i]<< endl;
    }

}

soru9:

#include <iostream>
#include <string.h>
#include<string>
#include<cmath>
#include<math.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a=0,b=0;
    int dizi[3] = {1,2,3};
    int dizisize = sizeof(dizi) / sizeof(dizi[0]);

    for(a = 0; a < dizisize; a++){
       cout << dizi[a];
       for( b = 0; b < dizisize; b++){
         if(a != b){
             cout << dizi[b];
         }
       cout << endl;
       cout << dizi[a];

       for(int c=dizisize-1;c>=0;c--){
            if(a!=c){
                 cout << dizi[c];
             }
         }
              cout << endl;
       }

     }


    }


soru 10:
#include <iostream>
#include <string.h>
#include<string>
#include<cmath>
#include<math.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a=0,eskideg=9999,deger=0;
    int dizi[6] = {100,4,200,1,3,2};
    int dizisize = sizeof(dizi) / sizeof(dizi[0]);

    sort(dizi,dizi+dizisize);

    for (int i = 0; i < dizisize; ++i){
        deger=dizi[i];
        if((deger-eskideg)==1){
            a++;
        }
        eskideg=dizi[i];
    }
        cout << a+1 << " ";


}



