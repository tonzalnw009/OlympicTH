		#include <stdio.h>
		int  main()
		{
			FILE    *fp;
			int        count  = 0, num;
			   int        sum = 0;
			   float     mean;
		       if  ((fp  =  fopen ("d:/dararat/test.dat", "r"))  ==  NULL)
			   {
				    printf ("Error  cannot open file\n");
				    exit (-1);
			    }
			    else
			    {
				 printf ("Now read data from file :\n");
				 fscanf (fp, "%d",  &num);
				 while  (!feof (fp) )
				 {
				       count++;
				       printf ("number #%d :  %d\n", count, num);
				       sum   +=  num;
				       fscanf (fp, "%d",  &num);
				   }
				   mean  =  (float)  sum / count;
				   printf ("sum  =   %d  ,  average   =  %6.2f\n", sum,  mean);
				  }
				 fclose (fp);
				 return 0;
	    }

