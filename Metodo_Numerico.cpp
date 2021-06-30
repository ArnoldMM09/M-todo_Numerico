/**
*author arnold márquez
*project Método Numéricos
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>
//Libreria Extra
//#include <SFML/Graphics.hpp>



void Screen();//Función de Mi ventana Logotipo
void thema();//Función de los Temas
void EjA();//Función de los Ejercios
void Biseccion();//Método de Bisección

//Variable globales - Arreglos Bidemensionales
int va[5][2];

//Arrgelos con Enteros
int fx[20];

//Variable globales - Normal
int i,count = 0,k,t;

int main(){
	//Extra
	window.clear(Color::White);
	window.display();
	//Inicio de mi proyecto
	Screen();
	/**
	*Navbar
	*/
	int op = 0;
	do{
		system("cls");
		system("color 07");
		system("title Método Numérico");
		printf("\n\n\n\n\n\n\n\n\n");
		printf("\t\t\t\t\t\t|||||||||||||||||||||||||\n");
		printf("\t\t\t\t\t\t||   Metodo Numerico   ||\n");
		printf("\t\t\t\t\t\t|||||||||||||||||||||||||");
		printf("\n\n\t\t\t\t\t\t||  [1] Metodos        ||");
		printf("\n\t\t\t\t\t\t||  [2] Acerca de..    ||");
		printf("\n\t\t\t\t\t\t||  [3] Configuracion  ||");
		printf("\n\t\t\t\t\t\t||  -----------------  ||");
		printf("\n\t\t\t\t\t\t||  [4] Salir          ||");
		printf("\n\n\t\t\t\t\t\t|| Tu opcion >>\t");
		scanf("%i",&op);
		switch(op){
			case 1: thema(); break;
			case 2: break;
			case 3: break;
			case 4: 
				if(MessageBox(0,"¿Deseas salir de la Aplicación?","Salir",MB_OKCANCEL + MB_ICONQUESTION) == 1){
					printf("\n\n\n\n\n\n");
					printf("Saliendo de la aplicacion...");
				}else{
					op = 0;
				}
			break;
			default: MessageBox(0,"Algo salio mal, intentalo de nuevo","Error",MB_OK + MB_ICONERROR); 
				system("color 0C");
			break;
		}
	}while(op != 4);	
}

//Funciones

/* Inicio de mi pantalla */ 
void Screen(){
	system("title Método Numérico");
	printf("\n\n\n\n\n\n\n");
	printf("\n\t\t\t\t               //                                    ");
	printf("\n\t\t\t\t||\\    //|| |||||| |||||||| ||||||| ||||||   |||||||");
	printf("\n\t\t\t\t|| \\  // || ||        ||    ||   || ||   ||  ||   ||");
	printf("\n\t\t\t\t||  \\//  || ||||||    ||    ||   || ||    || ||   ||");
	printf("\n\t\t\t\t||       || ||        ||    ||   || ||   ||  ||   ||");
	printf("\n\t\t\t\t||       || ||||||    ||    ||||||| ||||||   |||||||");
	printf("\n\n\t\t\t\t\t\t\tNumerico");
	printf("\n\n");
	printf("\t\t\t\t\t      Doble clic para continuar...");
	getchar();
	printf("\t\t\t\t\t\t\t  ");
	system("color 0f");
	getchar();
}
void thema(){
	int op = 0;
	do{
		system("title Métodos");//Titulo de Screen
		system("cls");//Limpia Pantalla
		system("color 07");//Cambio de Color
		printf("\n\n\n\n\n\n\n");
		printf("\t\t\t     |||||||||||||||||||||||||||||||| |||||||||||||||||||||||||||\n");
		printf("\t\t\t     ||                           Metodos                      ||\n");
		printf("\t\t\t     |||||||||||||||||||||||||||||||| |||||||||||||||||||||||||||\n\n");
		printf("\t\t\t     <<   [1] Teoria de Errores    >> <<    [A] Ayuda          >>\n");
		printf("\t\t\t     <<   [2] Metodo Biseccion     >> <<    [B] Novedades      >>\n");
		printf("\t\t\t     --------------------------------\n");
		printf("\t\t\t     <<   [3] Regresar           <<>>                            \n\n");
		printf("\t\t\t     ||   Tu opcion >>\t");
		scanf("%i",&op);
		switch(op){
			case 1: EjA();/*Teoria de Errores*/break;
			case 2:	Biseccion();break;
			case 3: break;
			default: MessageBox(0,"Algo salio mal, intentalo de nuevo","Error",MB_OK + MB_ICONERROR); 
			/*Cambio de color*/ system("color 0C"); break;
		}
	}while(op != 3);
}
//Teoria de Errores
void EjA(){
	int op;
	float exa, est, rexa, rest;
	do{
		system("title Teoria de Errores");//Titulo de Screen
		system("cls");
		printf("\n\n\n\n\n");
		printf("\t\t\t\t|||||||||||||||||||||||||||| |||||||||||||||||||||||||||||||\n");
		printf("\t\t\t\t||    Teoria de Errores   || ||         Formulario        ||\n");
		printf("\t\t\t\t|||||||||||||||||||||||||||| |||||||||||||||||||||||||||||||\n\n");
		printf("\t\t\t\t<<    Agregar Valores     >> <<        Error absoluto     >>\n\n");
		printf("\t\t\t\t<<Valor Exacto:\t");
		scanf("%f",&exa);
		printf("\t\t\t\t<<Valor Estimado:\t");
		scanf("%f",&est);
		//Operaciones ocupadas con las formula
		rexa = exa - est;
		rest = (rexa / exa) * 100;
		printf("\n\t\t\t\t ------------------------ \n");
		printf("\t\t\t\tEa = | %.2f - %.2f |\n",exa,est);
		printf("\t\t\t\tEa = %.3f\n",rexa);
		printf("\t\t\t\tEr = | %.2f - %.2f | / %.2f \n",exa,est,exa);
		printf("\t\t\t\tEr = %.2f %%",rest);
		printf("\n");
		printf("\t\t\t\t¿Deseas continuar?\t");
		scanf("%i",&op);
		getchar();
	}while(op != 0);
}
//Termina Teoria de Errores

//Método de Bisección
void Biseccion(){
	//Variables Neceasarias
	int op,xy,xr,xs; //Variables para opciones
	int a,b,c; //Variables para almacenar infomación
	//Inicia mi función
	do{
		system("title Método de Bisección");//Titulo de Screen
		system("cls"); //Limpia Pantalla
		system("color 07");//Cambio de Color
		printf("\n\n\n");
		printf("\t\t\t     |||||||||||||||||||||||||||||||| |||||||||||||||||||||||||||\n");
		printf("\t\t\t     ||                     Metodo de Biseccion                ||\n");
		printf("\t\t\t     |||||||||||||||||||||||||||||||| |||||||||||||||||||||||||||\n\n");
		printf("\t\t\t     << [1] Ecuacion               >>\n");
		printf("\t\t\t     --------------------------------\n");
		printf("\t\t\t     << [2] Regresar             <<>>\t");
		scanf("%i",&op);
		switch(op){
			case 1: 
				//Función Más largo
				printf("\n\t\t\t     || Tamano de Exponente: \t");
				scanf("%i",&a);
				if(a <= 4){
					//Creando una cadena, restando para disminuir
					t = a; //Valor de t: toma valor de a
					int it = t - 1; // Se crea una variable donde toma el valor de la variable y lo resta
					char ol[it]; //Se crea un arreglo donde el tamaño sera el valor de it

					//Agregar Números
					for(i = a; i >= 0; i--){ printf("\t\t\t");
						printf("     || X^%i :\t",i);	
						scanf("%i",&fx[i]);	
						count++;
					}
				
					//Agregar Operadores
					printf("\n\t\t\t     || Operadores\n");
					for(k = 0; k <= it; k++){ printf("\t\t\t");
						printf("     || [+] :\t");	
						scanf("%s",&ol[k]);
					} 
				
					//Recorriendo y mostrar ecuaciones
					printf("\n\t\t\t     || Tu Ecuacion es:\t");
					for(int j = a; j>=0; j--){
						if(fx[j] != 0){
							if(j != 0){
								printf(" %iX^%i",fx[j],j);
							}else{
								printf(" %i = 0",fx[j]);
							}
						}		
					}
					printf("\n\t\t\t");
					system("pause");
					
					//Inicia la Tabla
					if(count == 2){//Si mi contador solo cuenta 2 Movimientos
						for(int sim = 0; sim <= it; sim++){
							if(ol[sim] == '+'){//Tabla de un Signo[+]
								for(int in = 1; in >= 0; in--){
									if(fx[in] != 0){
										if(in != 0){
											printf("\n\t\t\t     X  |  y");
											printf("\n\t\t\t     -------");
											for(int r = 0; r <= 4; r++){
												int ta = fx[0]+(fx[1]*r);
												printf("\n\t\t\t     %i  |  %i",r,ta);	
											}
											count = 0;//Parte muy importante
										}
									}
								}
							}else{//Tabla de un Signo [-]
								for(int in = 1; in >= 0; in--){
									if(fx[in] != 0){
										if(in != 0){
											printf("\n\t\t\t     X  |  y");
											printf("\n\t\t\t     -------");
											for(int r = 0; r <= 4; r++){
												int tc = fx[0];
												int ta = (fx[1]*r) - tc;
												printf("\n\t\t\t     %i  |  %i",r,ta);	
											}
											count = 0;//Parte muy importante
										}
									}
								}
							}
						}
					}else if(count == 3){
						system("title Método de Bisección");//Titulo de Screen
						system("cls");//Limpiamos Pantalla por que
						//ya es más grande mi tabla.
						system("color 07");//Cambio de Color
						printf("\n\n\n");
						printf("\t\t\t     |||||||||||||||||||||||||||||||| |||||||||||||||||||||||||||\n");
						printf("\t\t\t     ||                     Metodo de Biseccion                ||\n");
						printf("\t\t\t     |||||||||||||||||||||||||||||||| |||||||||||||||||||||||||||\n\n");
						for(int simi = 0; simi <= 1; simi++){
							if(ol[simi] == '+'){//Tabla de un Signo[+]
								for(int ini = 2; ini >= 0; ini--){
									if(fx[ini] != 0){
										if(ini != 0){
											if(ol[simi] == '-'){
												printf("\n\t\t\t     X  |  y");
												printf("\n\t\t\t     -------");
												for(int r = 0; r <= 4; r++){
													int tr = fx[ini];
													printf("\n\t\t\t     %i  |  %i",r,tr);	
												}
												count = 0;//Parte muy importante
											}	
										}
									}
								}
							}/*else{//Tabla de un Signo [-]
								for(int in = 1; in >= 0; in--){
									if(fx[in] != 0){
										if(in != 0){
											printf("\n\t\t\t     X  |  y");
											printf("\n\t\t\t     -------");
											for(int r = 0; r <= 4; r++){
												int tc = fx[0];
												int ta = (fx[1]*r) - tc;
												printf("\n\t\t\t     %i  |  %i",r,ta);	
											}
											count = 0;//Parte muy importante
										}
									}
								}
							}*/
						}
					}
					
				}else{ MessageBox(0,"Algo salio mal, debe ser menor o igual a 10","Error",MB_OK + MB_ICONERROR); }
				break;
		}
	}while(op != 2);
}
//Termina Método de Bisección
