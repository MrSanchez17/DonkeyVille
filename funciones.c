#include <stdio.h>

// Variables globales

int personaje;
int opcion;
int opcion2;
int FlorRoja;
int FlorAmarilla;
int HerraduraAzul;
int lugar;
int lugarMenu;
int escena;
int encontradaNota;
int recoger;
int hablar;
int faroEncendido;
int UsarHerradura;
int entregadaFlorAmarilla;
int entregadaFlorRoja;

// Funciones

int JuegoFinalizado()
{
    
    if (UsarHerradura == 1)
    {
        printf("Juego Finalizado\n");
        return 1; 
    }
    else
    {        
        return  0;
    }
}
void Usar ()
{
    if( escena == 2 && FlorAmarilla == 1 && FlorRoja == 1)
    {
        printf("Se ha dipositodo la medicina en el buzon || el farero se ha recuperado y ha encendido el faro.\n");
        faroEncendido = 1;
        entregadaFlorAmarilla = 1;
        entregadaFlorRoja = 1;

    }

    if ( escena == 3 && HerraduraAzul == 1)
    {
        printf("Le has puesto la herradura al BlueDonkey || te llevara al tesoro!\n");
        UsarHerradura = 1;
        
    }



}

void HablarKaneda   ()
{
    if (escena == 0)
    {
        printf("---------------------\n");
        printf("Kaneda: Estoy preocupado por el farero.\n");
        printf("---------------------\n");
    }
    if(escena == 1)
    {
        printf("---------------------\n");
        printf("Kaneda: Hola viajero, yo soy Kaneda, si estas buscando al farero del pueblo esta enfermo, tendras que ir a a su casa para poder hablar con el .\n");
        printf("---------------------\n");
    }
    if ( escena == 3 || escena == 4)
    {
        printf("---------------------\n");
        printf("Kaneda: Se rumorea que a veces el BlueDonkey viene a beber pero solo si el el faro esta encendido .\n");
    }
}


void HablarMadeline ()
{
    
    if( escena == 1)
    {
        printf("---------------------\n");
        printf("Madeline: Hace un buen dia.\n");
        printf("---------------------\n");
    
    }
    else if( escena == 2)
    {
        printf("---------------------\n");
        printf("Madeline: Hay una nota en la puerta en la que dice que el farero esta enfermo y que se obtenemos la medicina que se la dejemos en el buzon.\n");
        encontradaNota = 1;

    }
    else if (escena == 6 ) 
    {
        printf("---------------------\n");
        printf("Madeline: Se comenta que hay una herradura azul escondida en el bosque norte.\n");
        hablar = 1;        
    }
    
}

void HablarEsparrou ()
{   
    if (escena == 0)
    {
        printf("---------------------\n");
        printf("Esparrou: Deberias ir a un lugar.\n");
    }
    if(escena == 1)
    {
        printf("---------------------\n");
        printf("Esparrou: Deberias hablar con alguien.\n");
    }

    if(escena == 2 )
    {
        if(HerraduraAzul == 1)
        {
            printf("---------------------\n");
            printf("Esparrou: Creo que encontraremos el BlueDonkey en algun lago.\n");
        }
        else
        {
            printf("Esparrou: La medicina se encuentra por los bosques.\n");
        }
    }

    if (escena == 3)
    {
        printf("Esparrou:tendras que depositar los objetos recogidos para que el farero se cure y encienda el faro.\n");
    }
    if (escena == 4)
    {
        printf("---------------------\n");
        printf("Esparrou: Creo que le falta una herradura.\n");
    }
    if (escena == 6)
    {
        printf("---------------------\n");
        printf("Esparrou: Alguien sabe de cosas escondidas del bosque.\n");
    }
}



void Recoger ()
{
    if(escena == 5 )
    {
            
        if ( FlorAmarilla == 1)
        {
            printf("Ya has recogido la flor amarilla!\n");
        }
        else
        {
            printf ("Estas observando una flor amarilla, quieres recogerla?\n");
            printf("---------------------\n");
            printf ("1.-Si\n");
            printf ("2.-NO\n");
            printf("---------------------\n");
            scanf("%d", &recoger);
        
        
            if( recoger == 1)
            {
                printf ("Has recogido la flor amarilla!\n");
                FlorAmarilla= 1;
            
            }
            
            if (recoger == 2)
            {
                printf("No has recogiodo la flor amarilla!\n");
            }
        }
    }

                  
    

    if(escena == 6)
    {
        if ( FlorRoja == 1 )
        {
            printf("Ya has recogido la flor roja!\n");
            printf("---------------------\n");
        }
        else
        {
            printf ("Estas observando una flor roja, quieres recogerla?\n");
            printf("---------------------\n");
            printf ("1.-Si\n");
            printf ("2.-NO\n");
            printf("---------------------\n");
            scanf("%d", &recoger);
        

            if( recoger == 1)
            {
                printf ("Has recogido la flor roja!\n");
                FlorRoja= 1;
            }
            if(recoger == 2)  
            {

            printf("No has recogiodo la flor roja!\n");

            }
        }

    }

            
        if(escena == 6 && hablar == 1)
            {
                if ( escena == 6 && HerraduraAzul == 1)
                {
                    printf("Ya has recogido la herradura azul!\n");
                    printf("---------------------\n");
                }
                else
                {
                    printf ("Estas observando una herradura azul, quieres recogerla?\n");
                    printf("---------------------\n");
                    printf ("1.-Si\n");
                    printf ("2.-NO\n");
                    printf("---------------------\n");
                    scanf("%d", &recoger);
                

                    if( recoger == 1)
                    {
                        printf ("Has recogido la herradura azul!\n");
                        HerraduraAzul= 1;
                    }
                    if ( recoger == 2)
                    {
                        printf("No has recogiodo la herradura azul!\n");
                    }
                }
            }
}

void Puedeir ()
{

        printf("---------------------\n");
        if ( escena == 0)
        {
            printf ("1.- DonkeyVille\n");
        }

        if(escena == 2 || escena == 3 || escena == 6)
        {
            printf ("1.- DonkeyVille\n");
        }


        if( escena == 1)
        {
            printf ("2.- Casa del farero\n");
        }
        if( escena == 1 || escena == 4 || escena == 5)
        {
            printf ("3.- Lago Toga\n");
        }
        if(escena == 3)
        {
            printf ("4.- Faro\n");
        }
        if(escena == 3)
        {
            printf ("5.- Bosque sur\n");
        }
        if(escena == 1)
        {
            printf ("6.- Bosque norte\n");
        }
        printf("0.- Salir\n");
        printf("---------------------\n");
        scanf("%d", &opcion);

        if (opcion == 1)
        {
            escena = 1;
        }
        if (opcion == 2)
        {
            escena = 2;
        }

        if (opcion == 3)
        {
            escena =3;
        }
         if (opcion == 4)
        {
            escena =4;
        }
         if (opcion == 5)
        {
            escena =5;
        }
        if (opcion == 6)
        {
            escena =6;
        }
    

    
}



void DescribeEscenario() // Describe el escenario de la opcion que se ha seleccionado y te llevara a MenuLugares
{
    if(escena == 0)
    {
        printf("---------------------\n");
        printf("Nos encontramos en Donkey Ville una villa llena de vida y tranqulidad, donde la gente siempre es amable.\n ");
        printf("---------------------\n");
    }
    if (escena == 1) // Donkey Ville
    {
        printf("---------------------\n");
        printf("Donkey Ville. Un sitio tan desconococido por el personaje y no sabe por donde ir.\n ");
        printf("---------------------\n");
    }
    
    else if (escena == 2) // Casa del farero
    {
        printf("---------------------\n");
        printf("Casa del farero. Se escucha el mar desde mucha distancia, con una suave brisa que transmite tranquilidad.\n");
        printf("---------------------\n");
    }
    else if (escena == 3) // Faro
    {
        printf("---------------------\n");
        printf("El faro. Gran edificio con una luz resplandeciente\n");
        printf("---------------------\n");

    }
      else if (escena == 4) // Lago toga
    {
        printf("---------------------\n");
        printf("Lago Toga. Un estanque hermoso en el que se siente tranquilidad\n");
        printf("---------------------\n");

    }
    else if (escena == 5) // Bosque sur
    {
        printf("---------------------\n");  
        printf("Bosque Sur. Bosque lleno de flores que te quedas cautivado de lo maravillosas que son. \n");
        printf("---------------------\n");
    }
    else if (escena == 6) // Bosque norte
    {
        printf("---------------------\n");  
        printf("Bosque Norte. Bosque lleno de arboles altos en el que te puedes perder. \n");
        printf("---------------------\n");
    }
}

void MostrarMenu()
{
    printf ("1.- Hablar Kaneda\n");
    printf ("2.- Hablar Madeline\n");
    printf ("3.- Hablar Sparrou\n");
    printf ("4.- Puede ir\n");
    printf ("5.- Usar\n");
    printf ("6.- Recoger\n");
    printf ("0.- Salir\n");
}

// Funciones principales

void main ()
{
    escena = 0;

    opcion = -1;

    while(JuegoFinalizado() == 0 && opcion !=0)
    {
        
        DescribeEscenario();

        MostrarMenu();

        printf("Opcion?\n");
        printf("---------------------\n");
        scanf("%d", &opcion);

        if(opcion==1)
        {   
            HablarKaneda ();
        }
        else if (opcion==2)
        {
            HablarMadeline();
        }
        else if(opcion==3)
        {
            HablarEsparrou ();
        }
        else if(opcion==4)
        {
            Puedeir ();
        }
        else if(opcion==5)
        {
            Usar();
        }
        else if(opcion==6)
        {
            Recoger();
        }
    }
}





