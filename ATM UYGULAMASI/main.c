#include <stdio.h>
#include <stdlib.h>

void anamenu()
{
	printf("\t1-HESAP BAKIYE SORGULAMA\t 2-KREDI ISLEMLERI\n");
	printf("\t3-HESAP GORUNTULE\t         4-EFT/HAVALE ISLEMLERI\n");
    printf("\t5-SANS OYUNLARI\n");
    printf("lutfen yapacaginiz islemin numarasini giriniz:");
}



int main() {
	
	char kart,yenisifre;
	char card=('K');
	char sifre;
	char ksifre='S';
	int secim,kreditutari,cikis,iddiasecim,iddiatutari;
	int mevcutbakiye=15500;
	int cekim,paracekilecektutar,taksitsecenegi;
    float taksitodemesi=0;
	char  eftkisibilgisi;
	char R,I;
	int eftgonderilecektutar;
	char eftgonderilecekkisiibani[20];
	char temp;
	
	
	printf("*****POLAT ATMYE HOSGELDINIZ******\n\n\n");
    
while (1) { 
        printf("LUTFEN BURAYA KARTINIZI TAKINIZ:");
        scanf("%s",&kart);

        if (kart != card) {
            printf("Lutfen kartinizi takiniz.\n");
        } else {
            while (1) { 
                printf("\n\nLutfen sifrenizi giriniz:");
                scanf("%s",&sifre);

                if (sifre != ksifre) {
                    printf("Sifreniz yanlis, lutfen tekrar giriniz.\n");
                } else {
                    break; 
                }
            }

            printf("\nLutfen bekleyiniz...\n\nSifreniz dogru.\n\nHesabiniza giris yapiliyor...\n\n");
            break; 
        }
    }
    
    bas:
    	
	anamenu();
    scanf("%d",&secim);
    
    printf("\n");
	        
			
    switch(secim)
{
	
case 1:printf("Mevcut Bakiyeniz: %d\n",mevcutbakiye);
	   printf("islemden cikmak istiyorsaniz 9'yi ana menuye donmek icin 0'i tuslayiniz.");
	     scanf("%d",&cikis);
		if(cikis==0)
	{
		goto bas;
	}
	else if(cikis==9)
	{
		printf("kartinizi almayi unutmayiniz.");
	}

	    break;
	    
case 2:printf("\t1-PARA CEKME\t 2-KREDI CEKME\n");
	    scanf("%d",&cekim);
	
	switch(cekim)
	{
		case 1:printf("Lutfen hesabinizdan cekmek istediginiz tutari giriniz:");
		      scanf("%d",&paracekilecektutar);
		      mevcutbakiye=mevcutbakiye-paracekilecektutar;
		
		  if(paracekilecektutar>mevcutbakiye)
	  {
			  printf("Bakiyeniz yetersiz\n");
			  
			  printf("islemden cikmak istiyorsaniz 9'yi ana menuye donmek icin 0'i tuslayiniz.");
	             scanf("%d",&cikis);
		  if(cikis==0)
    	{
		  goto bas;
	    }
	      else if(cikis==9)
    	 {
		  printf("kartinizi almayi unutmayiniz.");
	     }
	  }
		 else
		  {
		   	  printf("Hesabinizdan %d TL tutarinda para cekilmistir.Mevcut bakiyeniz %d TL\n",paracekilecektutar,mevcutbakiye);
		   	  
		   	  printf("islemden cikmak istiyorsaniz 9'yi ana menuye donmek icin 0'i tuslayiniz.");
	             scanf("%d",&cikis);
		 if(cikis==0)
	{
		 goto bas;
	}
	     else if(cikis==9)
	 {
		      printf("kartinizi almayi unutmayiniz.");
	 }
		  }  
		       break;
		       
        case 2: 
		      printf("Lutfen kredi cekmek istediginiz tutari giriniz:");
		       scanf("%d",&kreditutari);
		       mevcutbakiye=(mevcutbakiye) + (kreditutari);
		      printf("%d tutarindaki krediniz icin 2, 4, 6, 8, 12 taksit secenekleri mevcuttur.\nLutfen mevcut taksit seceneklerinden birini seciniz:",kreditutari);
		       scanf("%d",&taksitsecenegi);
		     
		  switch(taksitsecenegi)
		  {
		  	case 2:  taksitodemesi=kreditutari/taksitsecenegi; 
			  printf("aylik taksit odemeniz %2.f tutarindadir.Toplamda %d aylik taksit odemeniz mevcuttur",taksitodemesi,taksitsecenegi);
			  
			  printf("\nislemden cikmak istiyorsaniz 9'yi ana menuye donmek icin 0'i tuslayiniz.");
	             scanf("%d",&cikis);
		if(cikis==0)
	{
		goto bas;
	}
	else if(cikis==9)
	{
		printf("kartinizi almayi unutmayiniz.");
	}
			  
			  break;
			  
			  case 4:taksitodemesi=kreditutari/taksitsecenegi; 
			  printf("aylik taksit odemeniz %2.f tutarindadir.Toplamda %d aylik taksit odemeniz mevcuttur",taksitodemesi,taksitsecenegi);
			  
			  printf("\nislemden cikmak istiyorsaniz 9'yi ana menuye donmek icin 0'i tuslayiniz.");
	             scanf("%d",&cikis);
		if(cikis==0)
	{
		goto bas;
	}
	else if(cikis==9)
	{
		printf("kartinizi almayi unutmayiniz.");
	}
			  
			  break;
			  
			  case 6:taksitodemesi=kreditutari/taksitsecenegi; 
			  printf("aylik taksit odemeniz %2.f tutarindadir.Toplamda %d aylik taksit odemeniz mevcuttur",taksitodemesi,taksitsecenegi);
			  
			  printf("\nislemden cikmak istiyorsaniz 9'yi ana menuye donmek icin 0'i tuslayiniz.");
	             scanf("%d",&cikis);
		if(cikis==0)
	{
		goto bas;
	}
	else if(cikis==9)
	{
		printf("kartinizi almayi unutmayiniz.");
	}
			  
			  break; 
			  
			  case 8:taksitodemesi=kreditutari/taksitsecenegi; 
			  printf("aylik taksit odemeniz %2.f tutarindadir.Toplamda %d aylik taksit odemeniz mevcuttur",taksitodemesi,taksitsecenegi);
			  
			  
			  printf("\nislemden cikmak istiyorsaniz 9'yi ana menuye donmek icin 0'i tuslayiniz.");
	             scanf("%d",&cikis);
		if(cikis==0)
	{
		goto bas;
	}
	else if(cikis==9)
	{
		printf("kartinizi almayi unutmayiniz.");
	}
			  
			  break;
			  
			  case 12:taksitodemesi=kreditutari/taksitsecenegi; 
			  printf("aylik taksit odemeniz %2.f tutarindadir.Toplamda %d aylik taksit odemeniz mevcuttur",taksitodemesi,taksitsecenegi);
			  
			  printf("\nislemden cikmak istiyorsaniz 9'yi ana menuye donmek icin 0'i tuslayiniz.");
	             scanf("%d",&cikis);
		if(cikis==0)
	{
		goto bas;
	}
	else if(cikis==9)
	{
		printf("kartinizi almayi unutmayiniz.");
	}
			  break;
			  	
		  }
		  break;
	}
	break;
       case 3:printf("UMUT RAHMAN POLAT\nTR504323573811280233060\nMEVCUT BAKIYE: %d",mevcutbakiye);
       
       printf("\nislemden cikmak istiyorsaniz 9'yi ana menuye donmek icin 0'i tuslayiniz.");
	             scanf("%d",&cikis);
		if(cikis==0)
	{
		goto bas;
	}
	else if(cikis==9)
	{
		printf("kartinizi almayi unutmayiniz.");
	}
       
          break;
     
       case 4:printf("Lutfen para gondereceginiz kisinin kayitli adini giriniz\nKayitli kisi yoksa 'IBAN' yaziniz:");
     scanf("%s",&eftkisibilgisi);
     
     switch(eftkisibilgisi)
     {
	   case 'R':
     
        	printf("gondereceginiz tutari giriniz:");
     	    scanf("%d",&eftgonderilecektutar);
     	
     	    if(eftgonderilecektutar>mevcutbakiye)
     	 {
     		printf("Bakiyeniz yetersiz. Isleminiz gerceklestirilemiyor.");
     		
     		printf("\nislemden cikmak istiyorsaniz 9'yi ana menuye donmek icin 0'i tuslayiniz.");
	             scanf("%d",&cikis);
		if(cikis==0)
	{
		goto bas;
	}
	else if(cikis==9)
	{
		printf("kartinizi almayi unutmayiniz.");
	}
		 }
		 else
		 {
		 	mevcutbakiye-=eftgonderilecektutar;
		 	printf("Isleminiz gerceklestirilmistir. %d degerinde tutari gonderdiniz. Mevcut bakiyeniz: %d",eftgonderilecektutar,mevcutbakiye);
		 	
		 	printf("\nislemden cikmak istiyorsaniz 9'yi ana menuye donmek icin 0'i tuslayiniz.");
	             scanf("%d",&cikis);
		if(cikis==0)
	{
		goto bas;
	}
	else if(cikis==9)
	{
		printf("kartinizi almayi unutmayiniz.");
	}
		 	
		 }
	        break;
	   case 'I':
	
	 
	     	printf("eft gondereceginiz kisinin iban numarasini giriniz:");
	 	    scanf("%s",&eftgonderilecekkisiibani);
    	 	printf("gondereceginiz tutari giriniz:");
         	scanf("%d",&eftgonderilecektutar);
     	
     	   if(eftgonderilecektutar>mevcutbakiye)
     	 {
     		printf("Bakiyeniz yetersiz. Isleminiz gerceklestirilemiyor.");
     		
     		printf("\nislemden cikmak istiyorsaniz 9'yi ana menuye donmek icin 0'i tuslayiniz.");
	             scanf("%d",&cikis);
		if(cikis==0)
	{
		goto bas;
	}
	else if(cikis==9)
	{
		printf("kartinizi almayi unutmayiniz.");
	}
     		
		 }
		 else
		 {
		 	mevcutbakiye= (mevcutbakiye) - (eftgonderilecektutar);
		 	printf("Isleminiz gerceklestirilmistir. %d degerinde tutari gonderdiniz. Mevcut bakiyeniz: %d",eftgonderilecektutar,mevcutbakiye);
		 	
		 	printf("\nislemden cikmak istiyorsaniz 9'yi ana menuye donmek icin 0'i tuslayiniz.");
	             scanf("%d",&cikis);
		if(cikis==0)
	{
		goto bas;
	}
    	else if(cikis==9)
	{
		printf("kartinizi almayi unutmayiniz.");
	}
		 	
	     }
      
}
         break;
         
   
	case 5: printf("Lutfen para yuklemek istediginiz bahis sirketini seciniz.\n");
	        printf("1- Bilyoner A.S.	2-Misli A.S.\n");
	        printf("3-Tuttur A.S.    	4-Nesine A.S.");
	          scanf("%d",&iddiasecim);
	          switch(iddiasecim)
	          {
	          	bas2:
	          	case 1: printf("Yuklemek istediginiz tutari giriniz:");
	          	          scanf("%d",&iddiatutari);
	          	             if(mevcutbakiye<iddiatutari)
	          	              {
	          	              	printf("Bakiyeniz yetersiz lutfen tekrar deneyiniz.");
	          	              	goto bas2;
							  }
							  else
							  {
							  	printf("Isleminiz gerceklestiriliyor...\nIsleminiz gerceklestirilmistir.");
							  	mevcutbakiye=(mevcutbakiye)-(iddiatutari);
							  	printf("Mevcut Bakiyeniz: %d\n",mevcutbakiye);
							  	
							  	printf("islemden cikmak istiyorsaniz 9'yi ana menuye donmek icin 0'i tuslayiniz.");
	     scanf("%d",&cikis);
		if(cikis==0)
	{
		goto bas;
	}
	else if(cikis==9)
	{
		printf("kartinizi almayi unutmayiniz.");
	}

							  }
							  break;
				case 2: bas3:	
				        printf("Yuklemek istediginiz tutari giriniz:");
	          	          scanf("%d",&iddiatutari);
	          	             if(mevcutbakiye<iddiatutari)
	          	              {
	          	              	printf("Bakiyeniz yetersiz lutfen tekrar deneyiniz.");
	          	              	goto bas3;
							  }
							  else
							  {
							  	printf("Isleminiz gerceklestiriliyor...\nIsleminiz gerceklestirilmistir.");
							  	mevcutbakiye=(mevcutbakiye)-(iddiatutari);
							  	printf("Mevcut Bakiyeniz: %d\n",mevcutbakiye);
							  	
							  	printf("islemden cikmak istiyorsaniz 9'yi ana menuye donmek icin 0'i tuslayiniz.");
	     scanf("%d",&cikis);
		if(cikis==0)
	{
		goto bas;
	}
	else if(cikis==9)
	{
		printf("kartinizi almayi unutmayiniz.");
	}

							  }	  
							  break;
				case 3: bas4:
						printf("Yuklemek istediginiz tutari giriniz:");
	          	          scanf("%d",&iddiatutari);
	          	             if(mevcutbakiye<iddiatutari)
	          	              {
	          	              	printf("Bakiyeniz yetersiz lutfen tekrar deneyiniz.");
	          	              	goto bas4;
							  }
							  else
							  {
							  	printf("Isleminiz gerceklestiriliyor...\nIsleminiz gerceklestirilmistir.");
							  	mevcutbakiye=(mevcutbakiye)-(iddiatutari);
							  	printf("Mevcut Bakiyeniz: %d\n",mevcutbakiye);
							  	
							  	printf("islemden cikmak istiyorsaniz 9'yi ana menuye donmek icin 0'i tuslayiniz.");
	     scanf("%d",&cikis);
		if(cikis==0)
	{
		goto bas;
	}
	else if(cikis==9)
	{
		printf("kartinizi almayi unutmayiniz.");
	}

							  }	  
							  break;
				case 4: bas5:			  
						printf("Yuklemek istediginiz tutari giriniz:");
	          	          scanf("%d",&iddiatutari);
	          	             if(mevcutbakiye<iddiatutari)
	          	              {
	          	              	printf("Bakiyeniz yetersiz lutfen tekrar deneyiniz.");
	          	              	goto bas5;
							  }
							  else
							  {
							  	printf("Isleminiz gerceklestiriliyor...\nIsleminiz gerceklestirilmistir.");
							  	mevcutbakiye=(mevcutbakiye)-(iddiatutari);
							  	printf("Mevcut Bakiyeniz: %d\n",mevcutbakiye);
							  	
							  	printf("islemden cikmak istiyorsaniz 9'yi ana menuye donmek icin 0'i tuslayiniz.");
	     scanf("%d",&cikis);
		if(cikis==0)
	{
		goto bas;
	}
	else if(cikis==9)
	{
		printf("kartinizi almayi unutmayiniz.");
	}

							  }	  	
							  break;		  
			  }	
}
	return 0;
}
