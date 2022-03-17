#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<process.h>
#include<stdio.h>
#include<math.h>
#define pi 0.017
#define g 9.8
#define boz 13.6
#define R 8.314

 void RI();
 void btf();
 void Lens_Maker();
 void Trajectory();

 void maths();
 void chemistry();
 void physics();
 void menu();

 void AE();
 void EGBO();
 void FC();
 void vhf();
 void mole();

 void root();
 void probab();
 void log();
 void pytha();

 void main()
{   clrscr();
    char ch,q;
    cout<<"\n\n                Click(Y/y) to enter FORMULA PLANET\t";
yy: cin>>ch;
    while(( ch=='Y')||(ch=='y'))
    { clrscr();
      do
     {  cout<<"\n\n\n               Welcome to FORMULA PLANET";
	cout<<"\n       Welcome!!This is the menu!!!!";
	cout<<"\n            1. Maths \n            2. Chemistry ";
	cout<<"\n      	    3. Physics \n";
	cout<<"            4. Exit \n\n";
	int ch_;
  xx: ch_=0;
      cout<<"\n          Enter your choice:  ";
      cin>>ch_;
      switch(ch_)
      { case 1:   clrscr();
		  cout<<"\n        This is the section of MATHEMATICS!!!\n\n";
		  maths();
		  break;
	case 2:   clrscr();
		  cout<<"\n        This is the section of CHEMISTRY!!!\n\n";
		  chemistry();
		  break;
	case 3:   clrscr();
		  cout<<"\n        This is the section of PHYSICS!!!\n\n";
		  physics();
		  break;
	case 4:   clrscr();
		  exit(0);
	default:  cout<<"\n        Sorry!!You aren't allowed to ACCESS THIS DATA\n\n";
		  goto xx;

      }
      cout<<"\n Want to enter more in main menu (y/n) ? \t";
      cin>>q;
      clrscr();
     } while(q=='y'||q=='Y');
      cout<<"           \nI hope you enjoyed the session!!!";
      cout<<"\n          Want to Reenter into FORMULA PLANET (y/n)!!\t";
      goto yy;
    }
  }


void maths()
 { char op,q;
  do
 { cout<<"\nHere are the list of formulae :-";
   cout<<"\n 1. Quadratic Equation ";
   cout<<"\n 2. Probablity ";
   cout<<"\n 3. Logarithm ";
   cout<<"\n 4. Pythagoras Theorem \n";
   cout<<"\n enter your choice(1,2,3,4)\t";
r: cin>>op;
   switch(op)
   {case '1': clrscr();
	      root();
	      break;
    case '2': clrscr();
	      probab();
	      break;
    case '3': clrscr();
	      log();
	      break;
    case '4': clrscr();
	      pytha();
	      break;
    default: cout<<"wrong choice enter again\t";
	     goto r;

   }
   cout<<"\n Want to enter more in mathematics section (y/n) ? \t";
   cin>>q;
   clrscr();
 }while(q=='y'||q=='Y');
}


void chemistry()
 { char op,q;
   do
 {  cout<<"\nHere are the list of formulae :-";
    cout<<"\n 1. mole ";
    cout<<"\n 2. Formal Charge ";
    cout<<"\n 3. Vanthoff Factor ";
    cout<<"\n 4. Energy Gap Between Orbitals  ";
    cout<<"\n 5. Arrhenius Equation \n";
    cout<<"\n enter your choice(1,2,3,4,5) \t";
 r: cin>>op;
   switch(op)
   {case '1': clrscr();
	      mole();
	      break;
    case '2': clrscr();
	      FC();
	      break;
    case '3': clrscr();
	      vhf();
	      break;
    case '4': clrscr();
	      EGBO();
	      break;
    case '5': clrscr();
	      AE();
	      break;
       default: cout<<"wrong choice enter again\a\t";
	     goto r;
   }
   cout<<"\n Want to enter more in chemistry section (y/n)  ?\t";
   cin>>q;
   clrscr();
 }while(q=='y'||q=='Y');
 }


 void physics()
 {
   cout<<"\nHere are the list of formulae:-";
   char c;
   char q;
   do
 { cout<<"\n\nSelect the formula :";
   cout<<"\n1. Buoyant Force ";
   cout<<"\n2. Lens Makers Formula ";
   cout<<"\n3. Trajectory of parabola ";
   cout<<"\n4. Refractive Index \n";
   cout<<"\nenter your choice(1,2,3,4) \t";
 r:  cin>>c;
   switch(c)
   { case '1' :   clrscr();
		  btf();
		  break;
     case '2' :   clrscr();
		  Lens_Maker();
		  break;
     case '3':    clrscr();
		  Trajectory();
		  break;
     case '4':    clrscr();
		  RI();
		  break;
     default :    cout<<"wrong choice enter again";
		  goto r;

   }
   cout<<"\n\nWant to try again in physics section (y/n) ? ";
   cin>>q;
 }   while (q=='y'||q=='Y') ;
 }



void mole()
{
   float m,M,n;
   char n1,s;
   int j=0;
x1: ofstream fout("mole",ios::app);
      cout<<"\t Number of Moles =  Given Mass    \n";
      cout<<"\t                   -------------  \n";
      cout<<"\t                    Molar Mass    \n";
R1:   cout<<"\nEnter your choice?\t";
      cout<<"\n1.Enter value\n2.See saved results\n3.exit\n";
      cin>>n1;
      clrscr();
   if(n1=='1')
    { cout<<"\n enter molar mass of the species\n";
      cin>>M;
      cout<<"\n enter weight of the species\n";
      cin>>m;
      n=m/M;
      cout<<"\n number of mole is:\t";
      cout<<n;

	 cout<<"\nDo you want to save these results (y/n):\t";
R2:      cin>>s;
      if(s=='y'||s=='Y')
      {  fout<<M<<"\t"<<m<<"\t"<<n<<"\n";
	 fout.close();
	 clrscr();
	 goto x1;
      }
      else if(s=='n'||s=='N')
      {  clrscr();
	 cout<<"\nThank you\n\n";
	 system("pause");
	 clrscr(); goto x1;
      }
      else
      {  cout<<"\nInvalid choice! Renter:\t";
	 goto R2;
      }
   }
      else if(n1=='3')
      {  clrscr();
	 cout<<"\nThank you\n\n";
	 system("pause");
      }
      else if(n1=='2')
      {  clrscr();
	 ifstream fin("mole",ios::in);
	 fin.seekg(0);
	 fin>>M>>m>>n;
	 while(!fin.eof())
	 {  j++;
	    cout<<"\nresult "<<j;
	    cout<<"\nNumber of moles of species of given mass = ";
	    cout<<m<<" and molar mass = "<<M<<" is "<<n<<" moles\n";
	    fin>>M>>m>>n;
	 }
	 fin.close();
	 system("pause");
	 j=0; clrscr(); goto x1;
      }
      else
      {  cout<<"\nInvalid choice! Renter:\t";
	 goto R1;
      }

}

void AE()
{ float E,T,c,k,A;
  char n,s;  int j=0;
x1:  ofstream fout("ae",ios::app);
     cout<<"\n\n\n ARRHENIUS EQUATION :-   \n";
     cout<<"\t\t log k = log A  -    E(a)    \n";
     cout<<"\t\t                  -----------\n";
     cout<<"\t\t                   2.303*R*T \n";
     cout<<"\t\t where A    = Arrhenius Constant ,\n";
     cout<<"\t\t       E(a) = Activation Energy , \n";
     cout<<"\t\t       R    = Universal Gas Constant ,\n";
     cout<<"\t\t       T    = Temprature ( in Kelvin )\n";
     cout<<"Enter your choice?\t";
     cout<<"\n1.Enter value\n2.See saved results\n3.exit\n";
 R1:   cin>>n;
      clrscr();
     if(n=='1')
      {  cout<<"\n Enter Activation Energy in joules \n";
	 cin>>E;
	 cout<<"\n Enter temprature in kelvin \n";
	 cin>>T;
	 cout<<"\n Enter Arrhenius constant \n";
	 cin>>A;
	 c=(E/(R*T));
	 k=A*(pow(2.71,c));
	 cout<<"\n Value of rate constant k is : "<<k;
	 cout<<"\nDo you want to save these results (y/n):\t";
R2:      cin>>s;
       if(s=='y'||s=='Y')
	{  fout<<E<<"\t"<<T<<"\t"<<A<<"\t"<<k<<"\n";
	   fout.close();
	   clrscr();
	   goto x1;
	}
       else if(s=='n'||s=='N')
	{  clrscr();
	   cout<<"\nThank you\n\n";
	   system("pause");
	   clrscr(); goto x1;
	}
      else
	{  cout<<"\nInvalid choice! Renter:\t";
	   goto R2;
	}
   }
      else if(n=='3')
      {  clrscr();
	 cout<<"\nThank you\n\n";
	 system("pause");
      }
      else if(n=='2')
      {  clrscr();
	 ifstream fin("ae",ios::in);
	 fin.seekg(0);
	 fin>>E>>T>>A>>k;
	 while(!fin.eof())
	 {  j++;
	    cout<<"\nresult "<<j;
	    cout<<"\n Rate constant of equation having activation energy = ";
	    cout<<E<<" Joules, Temprature = "<<T<<" Kelvin, Arrhenius ";
	    cout<<"constant = "<<A<<" is equal to "<<k<<" minute inverse\n";
	    cout<<"\n\n";
	    fin>>E>>T>>A>>k;
	 }
	 fin.close();
	 system("pause");
	 j=0; clrscr(); goto x1;
      }
      else
      {  cout<<"\nInvalid choice! Renter:\t";
	 goto R1;
      }
}
void EGBO()
{
      float E;
      float n1,n2,Z;
      char n,s;
      int j=0;
x1:   ofstream fout("egbo",ios::app);
      cout<<"\n\n ENERGY GAP BETWEEN TWO ORBITS IN AN ATOM :-   \n";
      cout<<"\t\t E = 2.18 * 10E-18 * Z^2 * (    1     -     1     ) \n";
      cout<<"\t\t                             --------    --------    \n";
      cout<<"\t\t                              N(i)^2      N(f)^2   \n";
      cout<<"\t\t where N(i) = Initial orbit , \n";
      cout<<"\t\t       N(f) = Final orbit   , \n";
      cout<<"\t\t       Z    = Atomic Number   \n";
      cout<<"Enter your choice?\t";
      cout<<"\n1.Enter value\n2.See saved results\n3.exit\n";
R1:   cin>>n;
      clrscr();
     if(n=='1')
      {  cout<<"Enter N(i) ,N(f) and Z \n";
	 cin>>n1>>n2>>Z;
	 E=((1/(n1*n1))-(1/(n2*n2)))*Z*Z*boz;
	 cout<<"Energy gap between orbital is "<<E<<" eV\n";
	 cout<<"or "<<(E*1.6)<<" 10E-19 Joules";
	 cout<<"\nDo you want to save these results (y/n):\t";
R2:      cin>>s;
       if(s=='y'||s=='Y')
	{  fout<<n1<<"\t"<<n2<<"\t"<<Z<<"\t"<<E<<"\n";
	   fout.close();
	   clrscr();
	   goto x1;
	}
       else if(s=='n'||s=='N')
	{  clrscr();
	   cout<<"\nThank you\n\n";
	   system("pause");
	   clrscr(); goto x1;
	}
      else
	{  cout<<"\nInvalid choice! Renter:\t";
	   goto R2;
	}
   }
      else if(n=='3')
      {  clrscr();
	 cout<<"\nThank you\n\n";
	 system("pause");
      }
      else if(n=='2')
      {  clrscr();
	 ifstream fin("egbo",ios::in);
	 fin.seekg(0);
	 fin>>n1>>n2>>Z>>E;
	 while(!fin.eof())
	 {  j++;
	    cout<<"\nresult "<<j;
	    cout<<"\nEnergy gap between orbitals "<<n1<<" and "<<n2;
	    cout<<" of atomic number "<<Z<<" is "<<E<<" Joules\n";
	    fin>>n1>>n2>>Z>>E;
	 }
	 fin.close();
	 system("pause");
	 j=0; clrscr(); goto x1;
      }
      else
      {  cout<<"\nInvalid choice! Renter:\t";
	 goto R1;
      }

}
void FC()
{
      char n,s;
      int j=0;
      float f;
      int n1,n2,n3,z;
x1:   ofstream fout("fc",ios::app);
      cout<<"\n\n\n FORMAL CHARGE ON AN ATOM IN LEWIS STRUCTURE :- \n\n\n";
      cout<<"\t FORMAL CHARGE     Total number     Total number   1 * Total  \n";
      cout<<"\t (FC) on an atom = of Valence    -  of non      - ---  number \n";
      cout<<"\t in a Lewis        electrons in     bonding        2     of   \n";
      cout<<"\t Structure         the free         (lone)             bonding \n";
      cout<<"\t                   atom             electrons         (shared) \n";
      cout<<"\t                                                      electron \n";
      cout<<"\nEnter your choice?\t";
      cout<<"\n1.Enter value\n2.See saved results\n3.exit\n";
R1:   cin>>n;
      clrscr();
     if(n=='1')
       {  cout<<"Enter atomic number of the element : ";
	  cin>>z;
	  cout<<"Enter Total number of valence electron in free atom \n";
	  cin>>n1;
	  cout<<"Enter Total number of non bonding electron \n";
	  cin>>n2;
	  cout<<"Enter total number of bonding electrond \n";
	  cin>>n3;
	  f=n1-n2-((1/2)*n3);
	  cout<<"Formula charge on atom is "<<f<<"\n";
	  cout<<"\nDo you want to save these results (y/n):\t";
R2:       cin>>s;
       if(s=='y'||s=='Y')
	 {  fout<<n1<<"\t"<<n2<<"\t"<<n3<<"\t"<<f<<"\t"<<z<<"\n";
	    fout.close();
	    clrscr();
	    goto x1;
	 }
       else if(s=='n'||s=='N')
	 {  clrscr();
	    cout<<"\nThank you\n\n";
	    system("pause");
	    clrscr(); goto x1;
	 }
      else
	 {  cout<<"\nInvalid choice! Renter:\t";
	    goto R2;
	 }
   }
      else if(n=='3')
      {  clrscr();
	 cout<<"\nThank you\n\n";
	 system("pause");
      }
      else if(n=='2')
      {  clrscr();
	 ifstream fin("fc",ios::in);
	 fin.seekg(0);
	 fin>>n1>>n2>>n3>>f>>z;
	 while(!fin.eof())
	 {  j++;
	    cout<<"\nresult "<<j;
	    cout<<"\nFormal charge on atom with atomic number "<<z;
	    cout<<" having total no. of free electrons in free state = "<<n1;
	    cout<<" \nno. of bonded electrons = "<<n2<<" and no. ofnon";
	    cout<<" bonded electrons = "<<n3<<" is = "<<f<<"\n\n\n";
	    fin>>n1>>n2>>n3>>f>>z;
	 }
	 fin.close();
	 system("pause");
	 j=0; clrscr(); goto x1;
      }
      else
      {  cout<<"\nInvalid choice! Renter:\t";
	 goto R1;
      }


}

void vhf()
{
      char n,s;
      int j=0;
      float n1,n2;
      float v;
x1:   ofstream fout("vhf",ios::app);
      cout<<"\n\n\n\nVanthoff Factor (i) :- \n";
      cout<<"\t  i =  Experimental value of colligative property\n";
      cout<<"\t      --------------------------------------------     (when solution \n";
      cout<<"\t        Calculated value of colligative property        behaves ideally)\n\n\n";
      cout<<"\t                   OR\n\n";
      cout<<"\t  i =   Normal molecular mass\n";
      cout<<"\t      -------------------------\n";
      cout<<"\t       Observed molecular mass\n";
      cout<<"Enter your choice?\t";
      cout<<"\n1.Enter value\n2.See saved results\n3.exit\n";
R1:   cin>>n;
      clrscr();
      if(n=='1')
       {  cout<<"Enter Experimental value of colligative property or Normal molecular mass  \n";
	  cin>>n1;
	  cout<<"Enter Calculated value of colligative property or Observed molecular mass \n";
	  cin>>n2;
	  v=n1/n2;
	  cout<<"vanthoff factor is "<<v<<"\n";
	  cout<<"\nDo you want to save these results (y/n):\t";
R2:       cin>>s;
       if(s=='y'||s=='Y')
	 {  fout<<n1<<"\t"<<n2<<"\t"<<v<<"\n";
	    fout.close();
	    clrscr();
	    goto x1;
	 }
       else if(s=='n'||s=='N')
	 {  clrscr();
	    cout<<"\nThank you\n\n";
	    system("pause");
	    clrscr(); goto x1;
	 }
      else
	 {  cout<<"\nInvalid choice! Renter:\t";
	    goto R2;
	 }
   }
      else if(n=='3')
      {  clrscr();
	 cout<<"\nThank you\n\n";
	 system("pause");
      }
      else if(n=='2')
      {  clrscr();
	 ifstream fin("vhf",ios::in);
	 fin.seekg(0);
	 fin>>n1>>n2>>v;
	 while(!fin.eof())
	 {  j++;
	    cout<<"\nresult "<<j;
	    cout<<"\nVanthoff factor for compound having ( experimental ";
	    cout<<"value of colligative property )/( normal molecular mass )";
	    cout<<" = "<<n1<<"\n and ( calculated value of colligative property )/";
	    cout<<"( observed molecular mass ) = "<<n2<<"  is = "<<v<<"\n\n\n";
	    fin>>n1>>n2>>v;
	 }
	 fin.close();
	 system("pause");
	 j=0; clrscr(); goto x1;
      }
      else
      {  cout<<"\nInvalid choice! Renter:\t";
	 goto R1;
      }


}


void root()
{
   float a,b,c,D;
   char n,s; int j=0;
x1:    ofstream fout("root",ios::app);
   cout<<"\nRoots of a quadratic equation (ax^2+bx+c) are\n\n";
   cout<<"\tx= -b+(b^2-4ac)^1/2 and x= -b-(b^2-4ac)^1/2\n";
   cout<<"\t   ----------------        ----------------\n";
   cout<<"\t          2a                     2a        \n\n";
   cout<<"Enter your choice?\t";
   cout<<"\n1.Enter value\n2.See saved results\n3.exit\n";
R1: cin>>n;
   clrscr();
   if(n=='1')
   {  cout<<"\nEnter the value of a\t";
      cin>>a;
      cout<<"Enter the value of b\t";
      cin>>b;
      cout<<"Enter the value of c\t";
      cin>>c;
      D=b*b-4*a*c;
      if(D<0)
      {  D=-1*D;
	 cout<<"\nRoots of the quadratic equation is";
	 cout<<"\nx="<<-b/2<<"+i"<<sqrt(D)/(2*a);
	 cout<<"\tand x="<<-b/2<<"-i"<<sqrt(D)/(2*a);
      }
      else
      {  cout<<"\nRoot of the quadratic equation are:";
	 cout<<"\n\tx="<<(-b+sqrt(D))/(2*a)<<"\tand\tx=";
	 cout<<(-b-sqrt(D))/(2*a);
      }
      cout<<"\nDo you want to save these results (y/n):\t";
R2:      cin>>s;
      if(s=='y'||s=='Y')
      {  fout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<D<<"\n";
	 fout.close();
	 clrscr();
	 goto x1;
      }
      else if(s=='n'||s=='N')
      {  clrscr();
	 cout<<"\nThank you\n\n";
	 system("pause");
	 clrscr(); goto x1;
      }
      else
      {  cout<<"\nInvalid choice! Renter:\t";
	 goto R2;
      }
   }
      else if(n=='3')
      {  clrscr();
	 cout<<"\nThank you\n\n";
	 system("pause");
      }
      else if(n=='2')
      {  clrscr();
	 ifstream fin("root",ios::in);
	 fin.seekg(0);
	 fin>>a>>b>>c>>D;
	 while(!fin.eof())
	 {  j++;
	    cout<<"\nresult "<<j;
	    cout<<"\nroots of"<<a<<"x^2+"<<b<<"x+"<<c;
	    cout<<"\n\tx="<<(-b+sqrt(D))/(2*a)<<"\tand\tx=";
	    cout<<(-b-sqrt(D))/(2*a)<<"\n";
	    fin>>a>>b>>c>>D;
	 }
	 fin.close();
	 system("pause");
	 j=0; clrscr(); goto x1;
      }
      else
      {  cout<<"\nInvalid choice! Renter:\t";
	 goto R1;
      }
}

void probab()
{
      char n,s;
      int j=0;
      double poss_;
      double total;
      double P;
x1:   ofstream fout("probab",ios::app);
      cout<<"    Probability is the study of chances.Probability is\n";
      cout<<"    used in gambling,government statistics and even in\n";
      cout<<"    the world of sports.";
      cout<<"\n\n P(E)=  No. of possible outcomes";     //where E is the event that will occur
      cout<<"\n         --------------------------";
      cout<<"\n           No. of total outcomes  ";
      cout<<"\n Enter your choice?\t";
      cout<<"\n1.Enter value\n2.See saved results\n3.exit\n";
R1:   cin>>n;
      clrscr();
    if(n=='1')
      {  cout<<"\n   Enter total outcomes:";
	 cin>>total;
	 cout<<"\n   Enter possible outcomes:";
	 cin>>poss_;
	  if(poss_<total)
	     { P=poss_/total;
	       cout<<"\n   P(E)="<<P;
	       cout<<"\n";
	       cout<<"Probability = "<<P;
	     }
	 else
	    { cout<<"\n Error!!";
	    }
      cout<<"\nDo you want to save these results (y/n):\t";
R2:      cin>>s;
      if(s=='y'||s=='Y')
      {  fout<<poss_<<"\t"<<total<<"\t"<<P<<"\n";
	 fout.close();
	 clrscr();
	 goto x1;
      }
      else if(s=='n'||s=='N')
      {  clrscr();
	 cout<<"\nThank you\n\n";
	 system("pause");
	 clrscr(); goto x1;
      }
      else
      {  cout<<"\nInvalid choice! Renter:\t";
	 goto R2;
      }
   }
      else if(n=='3')
      {  clrscr();
	 cout<<"\nThank you\n\n";
	 system("pause");
      }
      else if(n=='2')
      {  clrscr();
	 ifstream fin("probab",ios::in);
	 fin.seekg(0);
	 fin>>poss_>>total>>P;
	 while(!fin.eof())
	 {  j++;
	    cout<<"\nresult "<<j;
	    cout<<"\nProbability of "<<poss_<<" outcomes out of total ";
	    cout<<total<<" outcomes is = "<<P<<"\n\n";
	    fin>>poss_>>total>>P;
	 }
	 fin.close();
	 system("pause");
	 j=0; clrscr(); goto x1;
      }
      else
      {  cout<<"\nInvalid choice! Renter:\t";
	 goto R1;
      }


}

void log()
{
      char n,s;
      int j=0;
      double result;
      double x;
x1:   ofstream fout("log",ios::app);
      cout<<"     Logarithms are one one of the most beautiful\n";
      cout<<"     creations of mathematics.\n";
      cout<<"     It makes our calculations easy and the first\n";
      cout<<"     log table was designed by John Napier.\n\n";
      cout<<"Enter your choice?\t";
      cout<<"\n1.Enter value\n2.See saved results\n3.exit\n";
R1:   cin>>n;
      clrscr();
    if(n=='1')
     {   cout<<"     Enter value of x:";    //For log(x)
	 cin>>x;
	 result = log10(x);
	 printf("    The natural log of %lf is %lf\n", x, result);
	 cout<<"\nDo you want to save these results (y/n):\t";
R2:      cin>>s;
      if(s=='y'||s=='Y')
      {  fout<<x<<"\t"<<result<<"\n";
	 fout.close();
	 clrscr();
	 goto x1;
      }
      else if(s=='n'||s=='N')
      {  clrscr();
	 cout<<"\nThank you\n\n";
	 system("pause");
	 clrscr(); goto x1;
      }
      else
      {  cout<<"\nInvalid choice! Renter:\t";
	 goto R2;
      }
   }
      else if(n=='3')
      {  clrscr();
	 cout<<"\nThank you\n\n";
	 system("pause");
      }
      else if(n=='2')
      {  clrscr();
	 ifstream fin("log",ios::in);
	 fin.seekg(0);
	 fin>>x>>result;
	 while(!fin.eof())
	 {  j++;
	    cout<<"The Natural log of "<<x<<" is "<<result<<"\n";
	    fin>>x>>result;
	 }
	 fin.close();
	 system("pause");
	 j=0; clrscr(); goto x1;
      }
      else
      {  cout<<"\nInvalid choice! Renter:\t";
	 goto R1;
      }


}

void pytha()
{
      char n,s;
      int j=0;
      double result;
      double x;
      double y;
x1:   ofstream fout("pytha",ios::app);
      cout<<"    Phytagoras gave a powerful theorem of geometry\n";
      cout<<"    of right angled triangle, which states that:\n";
      cout<<"    H^2=P^2+B^2\n";          //B->Base,P->Perpendicular height
      cout<<"Enter your choice?\t";
      cout<<"\n1.Enter value\n2.See saved results\n3.exit\n";
R1:   cin>>n;
      clrscr();
    if(n=='1')
      {  cout<<"    Enter value of x(base): ";    // H->Hypotenuse*/
	 cin>>x;
	 cout<<"    Enter value of y(height): ";
	 cin>>y;
	 result = hypot(x, y);
	 printf("    The hypotenuse is: %lf\n", result);
	 cout<<"\nDo you want to save these results (y/n):\t";
R2:      cin>>s;
      if(s=='y'||s=='Y')
      {  fout<<x<<"\t"<<y<<"\t"<<result<<"\n";
	 fout.close();
	 clrscr();
	 goto x1;
      }
      else if(s=='n'||s=='N')
      {  clrscr();
	 cout<<"\nThank you\n\n";
	 system("pause");
	 clrscr(); goto x1;
      }
      else
      {  cout<<"\nInvalid choice! Renter:\t";
	 goto R2;
      }
   }
      else if(n=='3')
      {  clrscr();
	 cout<<"\nThank you\n\n";
	 system("pause");
      }
      else if(n=='2')
      {  clrscr();
	 ifstream fin("pytha",ios::in);
	 fin.seekg(0);
	 fin>>x>>y>>result;
	 while(!fin.eof())
	 {  j++;
	    cout<<"\n For a right angled triangle if base = "<<x;
	    cout<<"\n and height = "<<y;
	    cout<<"\n then its hypotenuse = "<<result<<"\n\n\n";
	    fin>>x>>y>>result;
	 }
	 fin.close();
	 system("pause");
	 j=0; clrscr(); goto x1;
      }
      else
      {  cout<<"\nInvalid choice! Renter:\t";
	 goto R1;
      }

}

void Lens_Maker()
{
	char n,s;
	float f,r;
	float N;
	float r1, r2;
	int j=0;
x1:     ofstream fout("lens",ios::app);
	cout<<"\n\nFor calculating the focal length 'F' of a lens, of ";
	cout<<"\nrefractive index 'n'and radius of curvature R1 ";
	cout<<"\nR2, the relation is given as, ";
	cout<<"\n	 1/F = (n-1)*(1/R1-1/R2)    \n\n";
	cout<<"Enter your choice?\t";
	cout<<"\n1.Enter value\n2.See saved results\n3.exit\n";
R1:     cin>>n;
	clrscr();
	if(n=='1')
	 {      cout<<"\n\nEnter the R.I. of the lens ";
		cin>>N;
		cout<<"\nEnter the radius of curvature R1 (Take left hand side ";
		cout<<"\ndistances as negative and right hand side distances ";
		cout<<"\nas positive) ";
		cin>>r1;
		cout<<", ";
		cout<<"\nEnter the radius of curvature R1 (Take left hand side ";
		cout<<"\ndistances as negative and right hand side distances ";
		cout<<"\nas positive) ";
		cin>>r2;
		r = (r1*r2)/(r2-r1) ;
		f = r/(N-1) ;
		cout<<"\nThe focal length of the lens is "<<f;
	 cout<<"\nDo you want to save these results (y/n):\t";
R2:      cin>>s;
      if(s=='y'||s=='Y')
      {  fout<<r1<<"\t"<<r2<<"\t"<<r<<"\t"<<N<<"\t"<<f<<"\n";
	 fout.close();
	 clrscr();
	 goto x1;
      }
      else if(s=='n'||s=='N')
      {  clrscr();
	 cout<<"\nThank you\n\n";
	 system("pause");
	 clrscr(); goto x1;
      }
      else
      {  cout<<"\nInvalid choice! Renter:\t";
	 goto R2;
      }
   }
      else if(n=='3')
      {  clrscr();
	 cout<<"\nThank you\n\n";
	 system("pause");
      }
      else if(n=='2')
      {  clrscr();
	 ifstream fin("lens",ios::in);
	 fin.seekg(0);
	 fin>>r1>>r2>>r>>N>>f;
	 while(!fin.eof())
	 {  j++;
	    cout<<"\n Focal length of lens of radius of curvature R1 = "<<r1;
	    cout<<" ,R2 = "<<r2<<" and refractive index = "<<N;
	    cout<<"is equal to = "<<f<<"\n\n\n";
	    fin>>r1>>r2>>r>>N>>f;
	 }
	 fin.close();
	 system("pause");
	 j=0; clrscr(); goto x1;
      }
      else
      {  cout<<"\nInvalid choice! Renter:\t";
	 goto R1;
      }



 }

 void Trajectory()
 {
	char n,s;
	int j=0;
	float y;
	float u, x, a;
x1:     ofstream fout("trajectory",ios::app);
	cout<<"\n\nFor a general ground to ground parabolic motion of an ";
	cout<<"\nobject, the general equation of trajectory is given as ";
	cout<<"\n	   y = (x*tan(@))-(gx^2/2u^2cos^2(@)) ";
	cout<<"\nwhich can be used to calculate displacement of particle ";
	cout<<"\nin vertical sense. ";
	cout<<"\nwhere,    y = displacement of particle in vertical sense ";
	cout<<"\n	  x = displacement of particle in horizontal sense ";
	cout<<"\n	  @ = angle of projection ";
	cout<<"\n	  u = initial velocity of particle ";
	cout<<"Enter your choice?\t";
	cout<<"\n1.Enter value\n2.See saved results\n3.exit\n";
R1:     cin>>n;
	clrscr();
	if(n=='1')
	 { cout<<"\n\nEnter the initial velocity of particle (in m/s) ";
	   cin>>u;
	   cout<<"\nEnter the angle of projection (in degree) ";
	   cin>>a;
	   cout<<"\nEnter the horizontal position of x ";
	   cin>>x;
y = x*tan((174/10000)*a)-(g*pow (x, 2))/(2*pow(u, 2)*cos((174/10000)*a)*cos((174/10000)*a));
	   cout<<"\nThe displacement along vertical direction is "<<y;
	 cout<<"\nDo you want to save these results (y/n):\t";
R2:      cin>>s;
      if(s=='y'||s=='Y')
      {  fout<<u<<"\t"<<a<<"\t"<<x<<"\t"<<y<<"\n";
	 fout.close();
	 clrscr();
	 goto x1;
      }
      else if(s=='n'||s=='N')
      {  clrscr();
	 cout<<"\nThank you\n\n";
	 system("pause");
	 clrscr(); goto x1;
      }
      else
      {  cout<<"\nInvalid choice! Renter:\t";
	 goto R2;
      }
   }
      else if(n=='3')
      {  clrscr();
	 cout<<"\nThank you\n\n";
	 system("pause");
      }
      else if(n=='2')
      {  clrscr();
	 ifstream fin("trajectory",ios::in);
	 fin.seekg(0);
	 fin>>u>>a>>x>>y;
	 while(!fin.eof())
	 {  j++;
	    cout<<"\n Displacement of a particle along vertical direction ";
	    cout<<"thrown with initial speed "<<u<<" at an angle "<<a;
	    cout<<" (degre) with horizontal and having displacement "<<x;
	    cout<<" in horizontal direction is equal to "<<y<<"\n\n\n";
	    fin>>u>>a>>x>>y;
	 }
	 fin.close();
	 system("pause");
	 j=0; clrscr(); goto x1;
      }
      else
      {  cout<<"\nInvalid choice! Renter:\t";
	 goto R1;
      }



}


void RI()
{
   float i,r,u;
   char n,s; int j=0;
x1:ofstream fout("refractive",ios::app);
   cout<<"\nrefractive index of a material is given by\n\n";
   cout<<"refractive index (u) = sin(i)\n";
   cout<<"                       ------\n";
   cout<<"                       sin(r)\n\n";
   cout<<"Enter your choice?\t";
   cout<<"\n1.Enter value\n2.See saved results\n3.exit\n";
R1:  cin>>n;
     clrscr();
   if(n=='1')
   {  cout<<"\n\nenter angle of incidence (in degrees)\t";
      cin>>i;
      cout<<"enter angle of refraction (in degrees)\t";
      cin>>r;
      u=sin(i*pi)/sin(r*pi);
      cout<<"refractive index of material is:";
      cout<<u;
   cout<<"\n\nDo you want to save these results (y/n):\t";
R2:  cin>>s;
   if(s=='y'||s=='Y')
      {  fout<<i<<"\t"<<r<<"\t"<<u<<"\n";
	 fout.close();
	 goto x1;
      }
      else if(s=='n'||s=='N')
      {  clrscr();
	 cout<<"\nThank you\n\n";
	 system("pause");
	 clrscr(); goto x1;
      }
      else
      {  cout<<"\nInvalid choice! Renter:\t";
	 goto R2;
      }
   }
      else if(n=='3')
      {  clrscr();
	 cout<<"\nThank you\n\n";
	 system("pause");
      }
      else if(n=='2')
      {  clrscr();
	 ifstream fin("refractive",ios::in);
	 fin.seekg(0);
	 fin>>i>>r>>u;
	 while(!fin.eof())
	 {  j++;
	    cout<<"\nresult "<<j;
	    cout<<"\nrefractive index(u) for angle of incidence\n";
	    cout<<i<<" degrees and angle of refraction ";
	    cout<<r<<" degrees is";
	    cout<<"\nu="<<u<<"\n\n";
	    fin>>i>>r>>u;
	 }
	 fin.close();
	 system("pause");
	 j=0; clrscr(); goto x1;
      }
      else
      {  cout<<"\nInvalid choice! Renter:\t";
	 goto R1;
      }
}

void btf()
{
       char n,s;
       int j=0;
       float B ;
       float r, V, b;
x1:    ofstream fout("btf",ios::app);
       cout<<"\n\nFor an arbitrary body of volume 'V' immersed in a liquid of ";
       cout<<"\ndensity 'r'(rho),the magnitude of buoyant force experinced by ";
       cout<<"\nit is given by,";
       cout<<"\n                  B = r*V*g\n\n";
       cout<<"Enter your choice?\t";
       cout<<"\n1.Enter value\n2.See saved results\n3.exit\n";
R1:    cin>>n;
       clrscr();
       if(n=='1')
	{ cout<<"\n\nEnter volume of body immersed (in m^3) ";
	  cin>>V;
	  cout<<"\nEnter density of the fluid (in kg/m^3) ";
	  cin>>r;
	  b = r*V*g;
	  cout<<"\nThe buoyant force is "<<b;
	  cout<<"\nDo you want to save these results (y/n):\t";
R2:       cin>>s;
	  if(s=='y'||s=='Y')
		{  fout<<r<<"\t"<<V<<"\t"<<b<<"\n";
		   fout.close();
		   clrscr();
		   goto x1;
		}
	 else if(s=='n'||s=='N')
		{  clrscr();
		   cout<<"\nThank you\n\n";
		   system("pause");
		   clrscr(); goto x1;
		}
	 else
		{  cout<<"\nInvalid choice! Renter:\t";
		   goto R2;
		}
	    }
	 else if(n=='3')
	    {  clrscr();
	       cout<<"\nThank you\n\n";
	       system("pause");
	    }
	 else if(n=='2')
	    {  clrscr();
	       ifstream fin("btf",ios::in);
	       fin.seekg(0);
	       fin>>r>>V>>b;
	  while(!fin.eof())
	   {  j++;
	      cout<<"\nresult "<<j;
	      cout<<"\nBouyant force experienced by a body of ";		      cout<<" volume "<<V<<" metre cube and density "<<r;
	      cout<<" Kg per metre cube immersed in water is equal to ";
	      cout<<b<<" Newton\n\n\n";
	      fin>>r>>V>>b;
	   }
	       fin.close();
	       system("pause");
	       j=0; clrscr(); goto x1;
	   }
       else
	{  cout<<"\nInvalid choice! Renter:\t";
	   goto R1;
	}
}

