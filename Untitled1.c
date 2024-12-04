#include<reg51.h>

  sbit led	= P0^1;
  
  main()
  	{
  		P0=0x00;
  		
  		while(1)
  		{
  			P0=0x33;
		  }
	  }
