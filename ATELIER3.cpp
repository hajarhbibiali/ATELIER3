//exercice 1:------------------------------------------------------------------------------
#include <iostream>
using namespace std ;
string name;
     class MyClass{ //definition de la classe MyClass
    string name; //declaration d'une variable globale
    public:
     MyClass(); //creation du constructeur
    ~MyClass ();//creation du destructeur
};
MyClass ::MyClass(){ // Appel du constructeur en dehors de la classe
    cout <<"enter your name"<<endl; // demande de l'utilisateur d'entrer un nom
    cin >> name; //afichage du nom entrer 
    cout << "Hello :" << name <<endl;   
}   
MyClass ::~MyClass(){ // Appel du desstructeur en dehors de la classe

     cout << "Good bye :" << name <<endl;
}
int main(){
    MyClass c1 ; //creation d'un objet de la classe MyClass
    return 0;
}
//exercice 2 :----------------------------------------------------------------------------------
#include<iostream>
using namespace std ;
class shape {//definition de la classe shape
    public:
    float hauteur; // declaration d'un float nomme hauteur
    float largeur ;// declaration d'un float nomme largeur
    shape(float a ,float b){ //creation du constructeur de la classe shape
    hauteur=a; // initialisation du variable hauteur 
    largeur=b;}//initialisation du variable largeur  
};
class Rectangle : public shape{  //definition de sous class Rectangle de la classe shape
    public:
      Rectangle(float a ,float b): shape(a,b){}//constrcteur de la sous classe Rectangle
    float area(){ //fonction qui calcul l'air de rectangle
        return hauteur*largeur; //Retourn l'air de rectangle
    }
};
class Triangle : public shape{ //definition de sous class Triangle de la classe shape
    public:
     Triangle(float a ,float b): shape(a,b) {} //constrcteur de la sous classe Triangle 
    
    float area(){ //fonction qui calcul l'air de triangle
        return hauteur*largeur/2; //retourne l'air de traingle
    }
};
int main(){
    Rectangle rectangle (2,3); //creation de variable rectangle
    Triangle triangle (2,3);//creation de variable triangle 
    cout<< "l'air de rectangle est:"<<rectangle.area()<<endl; //l'appel du fonction area dans le variable rectangle
    cout<<"l'air de triangle est :"<<triangle.area()<<endl;//l'appel du fonction area dans le variable triangle 
    return 0 ;
}
 //exercice 3 :------------------------------------------------------------------------------------------------------------------
 #include<iostream>
 using namespace std;
class complex {  // definition de la classe complex 
private :
  int choix,R,I,r1,r2,im1,im2;// declaration des variables de type int 
public :
complex(){ //contructeur de la classe complex 
        cout << "entrer la partie imaginaire du premier complexe"<<endl;
        cin >> im1 ; 
        cout << "entrer la partie reele du premier complexe"<<endl;
        cin >> r1 ;
        cout << "complex 1: "  << r1<< "+ i* " << im1 << endl;
        cout << "entrer la partie imaginaire du deuxieme complexe"<<endl;
        cin >> im2 ;
        cout << "entrer la partie reele du deuxieme complexe"<<endl;
        cin >> r2 ;
        cout << "complex 2: "  << r2<< "+ i* " << im2 << endl;
        cout << "veuillez choisir une operation du menu suivant :"<<endl;
        //creation d'un menu pour les operations :
        string menu[4];   //Déclaration du tableau
        menu[0] = "1. +" ;  //Remplissage de la première case
        menu[1] = "2. -";  //Remplissage de la deuxième case
        menu[2] = "3. * ";   //Remplissage de la troisième case
        menu[3] = "4. / ";   //Remplissage de la quatrième case

        for(int i(0); i<4; ++i)
        { cout << menu[i] << endl;}
        cin >> choix ;
       }
    void operation() //fonction qui va rependre aux choix de l'utilisateur 
     {
     if (choix == 1 ){ //condition 1
            R = r1+r2 ; // fait la somme des parties reelles des  deux complexes
            I = im1+im2 ; //fait la somme des parties imaginaires des  deux complexes
           cout << "SOMME EST : " << R<< "+ i* " << I << endl; //affiche la somme des deux nombres complexes 
     }
       else if (choix == 2){ //condition 2
           R = r1-r2 ;// fait la soustraction des parties reelles des  deux complexes
           I = im1-im2 ;//fait la soustraction des parties imaginaires  des  deux complexes 
          cout << "SOUSTRACTION EST : " << R<< "+ i* " << I << endl;  //affiche la soustraction des deux nombres  complexes 
     }  
      else if (choix == 3)//condition 3
        {   R = r1*r2 - im1* im2 ; //fait le produit des parties reelles des  deux complexes
            I = r1*im2+im1*r2 ;//fait le produit des parties imaginaires des  deux complexes
            cout << "PRODUIT EST : " << R<< "+ i* " << I << endl; //affiche le produit des deux nombres  complexes 
        }
      else //condition 4 
       { R = r1*r2+im1*im2 / r1^2+im2^2;  //fait la division des parties reelles des  deux complexes
        I = im1*r2 -r1*im2 /r1^2+im2^2;  //fait la division des parties imaginaires des  deux complexes
           cout << "LA DIVISION EST : " << R<< "+ i* " << I << endl;  //affiche la division  des deux nombres  complexes 
        }
    }
};
int main(){
    complex c1 ; // creation d'un objet de la classe complex nomme c1
    c1.operation(); // appel de la fonction operation par l'objet cree 
    return 0;
} 
//exercice 4 :---------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std ;
class  mere { //definition de la classe mere 
    public :
    void display() // la methode diplay()
    {
        cout<<"bonjour mere"<<endl; //affichage du message 
    }
};
class fille : public mere {//  definition de la classe fille herite 
    public:
    void display(){// la methode diplay()
        cout<<"bonjour mere"<<endl;//affichage du message
    }
}

int main()  {
    fille f1;  // creation d'un objet de la classe fille  nomme f1
    fille.display() //  appel de la methode display() par l'objet f1 
    return 0 ;
}  
//exercice 5 :-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std ;
class Animal{// classe Animal 
    public :
    string nom= "kuku"; //delaration des variables 
    string nom1;
    int age ;
    int age1;
    void set_value(){ // la methode set_value()
        cout << " entrer nouveau nom et age :" <<endl ;
        cin >> nom1 ;//le nouveau nom
        cin >> age1 ;//le nouveau age
        nom  = nom1 ;
        age =age1 ;
 }
};
class Zebra : public Animal{ // definition classe Zebra  derivee de la classe Animal
public:
  Zebra(){ //initialisation de constructeur de la  classe Zebra
        string origine =" mali" ;
   set_value();
      cout << "le nom du zebra : " << nom1<< " et l'age du zebra est " << age1 << " et l'origine zebra est: " << origine << endl;
   }
};
class Dauphin : public Animal { //definition de la classe Dauphin derive de la classe Animal 
public:
   Dauphin(){ //constructeur de  la classe Dauphin 
       string origine =" canada" ;
       set_value(); //appel de la fonction set_value 
       cout << "Le nom  Du dauphin : " << nom1<< "et l'age du dauphinest " << age1 << "et l'origine dauphin est: " << origine << endl;    }
};
int main (){
   Zebra zebra ;//creation d'un objet de classe Zebrra nomee zebra
   Dauphin  dauphin ;//creation de la classe Dauphin nomee dauphin 
    return 0;
}

 
//exercice 6:--------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;
class Personne{ // definition de la classe principal
private:
string nom ;
string prenom;
string datedenaissance;
public:
Personne(string n,string p,string d  ):nom{n},prenom{p},datedenaissance{d}{
// constructeur de la classe Personne
}
 virtual void afficher() //la methode afficher() (polymorphe)
{
    cout<<"PRENOM: "<<nom<<endl<<"Nom: "<<prenom<<endl<<"la date de naissance : "<<datedenaissance<<endl;
    //affichage de donner de chaqque personne
 }
};
class Employe : Personne  //definition de la classe Employe derive de la classe  Personne 
{
  private:
   string salaire;
  public:
   Employe(string n,string p,string d,string s):Personne(n,p,d){ //constructeur de la classe derive Employe
       salaire = s;
   }
 void afficher(){ //redefinition de la methode afficher ()
       Personne::afficher();
         cout<<"Le salaire est : "<< salaire <<endl;
   }
};
class Chef : Employe{ //definition de la classe Chef derive de la classe  Empolye 
   private :
   string service ;
   public:
   //constructeur de la classe Chef
   Chef(string n,string p ,string d ,string s ,string ser):Employe(n,p,d,s){
      service=ser;
    }
  void  afficher(){ //redefinition de la methode afficher ()
Employe::afficher(); 
    cout<<"le service est : "<< service <<endl;
    }
};
class Directeur : Chef{ //definition de la classe Directeur derivee de la classe  Chef 
private:
     string societe;
     public:
     //constructeur de la classe Directeur 
     Directeur(string n,string p ,string d ,string s ,string ser,string soc):Chef(n,p,d,s,ser){
        societe=soc;
    }
   void  afficher(){ //redefinition de la methode afficher ()
         Chef::afficher();
         cout<<"La societe est : "<< societe <<endl;
  }
};
int main(){
   Directeur dir ("hajar","hbibiali","03/02/2000" ,"20000 DH","Marketing","BRICOMA"); // creation de l'objet
   dir.afficher();//appel de la methode afficher() par  l'objet
  return 0;
};

//exercice 7:------------------------------------------------------------------------------------------------------------------------

#include<iostream>
#include<cmath>
using namespace std;
class vecteur3d{ //definition de la classe vecteur3d
	
		float x,y,z;
		public:
		vecteur3d(float a=0,float b=0,float c=0){//le constricteur d'initialisation de la classe vecteur3d
			x=a; y=b; z=c;	
		}
		void afficher(){ //l'affichage du vecteur 
			cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
		}
		vecteur3d somme (const vecteur3d & v){  //la fonction qui calcule la somme des deux vecteurs 
			vecteur3d w;
		w.x=x+v.x;
		w.y=y+v.y;
		w.z=z+v.z;
		return w;//retourner vecteur3d(x+x.v,y+v.y,z+v.z)
	    }
	    float produit(const vecteur3d & v ){//le produit scalaire de deux vecteurs
	    	return x*v.x+y*v.y+z*v.z;
		}
		bool coincid(const vecteur3d & v){//tester si les deux vecteurs ont les memes composantes
			return (x==v.x && y==v.y && z==v.z);
		}
	   float norme() {
		return sqrt(x*x + y*y + z*z);//retourner la norme du vecteur
	    }
     	vecteur3d normax(vecteur3d v){//retourner le vecteur qui la plus grande norme: par valeur
			if (this->norme() > v.norme() )
			    return *this;
			
			return v;
		}
		vecteur3d * normax(vecteur3d * v){//retourner le vecteur qui la plus grande norme: par adresse
			if (this->norme() > v->norme())
			    return this;
		
			return v;
		}
		vecteur3d & normaxRE(vecteur3d &v){//retourner le vecteur qui la plus grande norme: par referance
			if (this->norme() > v.norme())
			return  *this;
			return v;
			
		}		
};
int main (){
	vecteur3d v1(1,6,5);
	cout<<"le vecteur 1 est:"<<endl;
	v1.afficher();
	vecteur3d v2(1,7,9);
	cout<<"le vecteur 2 est:"<<endl;
	v2.afficher();
	cout<<endl;
	cout<<"la somme des vecteurs est :"<<endl;
	(v1.somme(v2)).afficher();
	cout<<"le produit de deux vecteurs est :"<<endl;
	v1.produit(v2);
	cout<<endl;

	cout<<"la norme du vecteur est :"<<endl;
	v1.norme();
	cout<<endl;
	if (v1.coincid(v2))
	cout<<"les 2 vecteurs ont memes composantes"<<endl;
	else
	cout<<"les 2 vecteurs ont memes composantes"<<endl;
	cout<<endl;
	cout<<"le resultat est renvoye par valeur"<<endl;
	(v1.normax(v2)).afficher();
	cout<<endl;
	cout<<"le resultat est renvoye par adresse"<<endl;
	v1.normax(&v2)->afficher();
	cout<<endl;
	cout<<"le resultat est renvoye par referance"<<endl;
	v1.normax(v2).afficher();		
}
;		


//exercice 9------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std ;
class Test { //definition de la classe Test 
    public:
    	static int count ; // declaration d'une variable static nomme count de type int 
    Test(){};// constructeur de la classe Test
    void call(){ //la methode call()
        count++; //incrementation de count 
    }  
};
int Test::count =0; //initialisation du variable count par  0
int main() {
    Test t; //creation d'un objet de la class Test nomme t 
    t.call(); //appel de la methode call par l'objet t
    t.call();
    t.call(); 
    t.call();
    t.call();
    t.call();
     cout << "the count is :" <<t.count<< endl;
    return 0; 
}



       

        

