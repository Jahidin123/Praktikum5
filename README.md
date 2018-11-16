# Praktikum5
		
	#Latihan1
		 
	
	-Mendeklarasikan int a sebagai nilai input.
	-mendeklrasikan int max sebagai nilai tertetinggi.
	-memasukan nilai a
	-membandingkan nilai a dengan max jika a < max max = a
			if (a>max)
			max=a;
-membandingkan inputan nilai a tidak sama dengan nilai 0 while(a!=0)
			do {
			cout<<"masukan angka:";
    			cin>> a;
      			if (a>max)
        		max=a;
			    }
    			while (a!=0);
-mencetak nilai tertinggi cout<< max;
2.Source Code C++
	int main()
{
   int a=0;
   int max=0;

  do{
    cout<<"masukan angka:";
    cin>> a;
      if (a>max)
        max=a;

    }
    while (a!=0);


    cout<<"nilai terbesar :"<< max;
}


#Latihan2#Menentukan Penjumlahan Bilangan Benar atau Salah
1.Alur Algoritmanya
	-Mendeklarasikan int a,b, dan c
	-Mendeklarasikan variabel a,b, dan c sebagai nilai input
	-Memasukan nilai inputan a,b,c
	-Membandingkan penjumlahan nilai a + b =c dan a+c=b dan c+b=a
```c++
	if( (a+b==c) || (a+c==b) )
		{
    		cout<<"BENAR";
		}
		else if((b+c==a))
		{
    		cout<<"BENAR";
		}
		else
    	{
    	cout<< "SALAH";
    ```
2.Sorce Code C++
int main()
{
    int a,b,c;

    cout<<"Masukan nilai ke 1:";
    cin>>a;
    cout<<"Masukan nilai ke 2:";
    cin>>b;
    cout<<"Masukan nilai ke 3:";
    cin>>c;

    if( (a+b==c) || (a+c==b) )
    {
        cout<<"BENAR";
    }
    else if((b+c==a))
    {
        cout<<"BENAR";
    }
    else
        {
        cout<< "SALAH";
        }
}



