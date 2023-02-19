//gcc -o chart project.c && ./chart
#include <stdio.h>
#include <string.h>
#include <stdbool.h>



int containsSend(int argc, char* argv[]);
int containsReceive(int argc, char* argv[]);
int containsFile(int argc, char* argv[]);
int containsSocket(int argc, char* argv[]);

int main(int argc, char* argv[])
{
    if(strcmp(argv[0],"./chart")!=0)
    {
        printf("Hiba! A generált fájl neve nem chart!\n");
        return 1;
    }
    if(argc == 1)
    {
        printf("send üzemmód, file kommunikáció mód");
        return 0;
    }

    if(containsSend(argc,argv)==0)
    {
        printf("send üzemmód, ");
        if(containsFile(argc,argv)==0 &&containsSocket(argc,argv)==0)
        {
            printf("először file, utána socket mód.");
            return 0;
        }
        else if(containsFile(argc,argv)==0)
        {
            printf("file mód.");
            return 0;
        }
        else if(containsSocket(argc,argv)==0)
        {
            printf("socket mód.");
            return 0;
        }
        else if(containsFile(argc,argv)==1 && containsSocket(argc,argv)==1)
        {
            printf("file mód.");
            return 0;
        }
    }
    else if(containsReceive(argc,argv)==0)
    {
        printf("receive üzemmód, ");
        if(containsFile(argc,argv)==0 &&containsSocket(argc,argv)==0)
        {
            printf("először file, utána socket mód.");
            return 0;
        }
        else if(containsFile(argc,argv)==0)
        {
            printf("file mód.");
            return 0;
        }
        else if(containsSocket(argc,argv)==0)
        {
            printf("socket mód.");
            return 0;
        }
        else if(containsFile(argc,argv)==1 && containsSocket(argc,argv)==1)
        {
            printf("file mód.");
            return 0;
        }
    }
    else if(containsReceive(argc,argv)==1 && containsSend(argc,argv)==1)
    {
        printf("send üzemmód, ");
        if(containsFile(argc,argv)==0 &&containsSocket(argc,argv)==0)
        {
            printf("először file, utána socket mód.");
            return 0;
        }
        else if(containsFile(argc,argv)==0)
        {
            printf("file mód.");
            return 0;
        }
        else if(containsSocket(argc,argv)==0)
        {
            printf("socket mód.");
            return 0;
        }
        else if(containsFile(argc,argv)==1 && containsSocket(argc,argv)==1)
        {
            printf("file mód.");
            return 0;
        }
    }

    if(strcmp(argv[1],"--version")==0)
    {
        printf("1.0\n");
        printf("2/19/2023\n");
        printf("Kiss Máté\n");
        return 0;
    }
    if(strcmp(argv[1],"--help")==0 || (containsReceive(argc,argv)==1 && containsReceive(argc,argv)==1 && containsFile(argc,argv)==1 && containsSocket(argc,argv)==1))
    {
        printf("lehetséges indítási parancsok:\n");
        printf("--version (kiírja a program verziószámát, elkészülésének idejét és a készítő nevét.)\n");
        printf("-send\n");
        printf("-receive\n");
        printf("-file\n");
        printf("-socket\n");
        return 0;
    }






    printf("A program lefutott.");
    return 0;
}

int containsSend(int argc, char* argv[])
{
    for(int i = 0;i<argc;i++)
    {
        if(strcmp(argv[i],"-send")==0)
        
        return 0;
    }
    return 1;
}

int containsReceive(int argc, char* argv[])
{
    for(int i = 0;i<argc;i++)
    {
        if(strcmp(argv[i],"-receive")==0)
        
        return 0;
    }
    return 1;
}

int containsFile(int argc, char* argv[])
{
    for(int i = 0;i<argc;i++)
    {
        if(strcmp(argv[i],"-file")==0)
        
        return 0;
    }
    return 1;
}
int containsSocket(int argc, char* argv[])
{
    for(int i = 0;i<argc;i++)
    {
        if(strcmp(argv[i],"-socket")==0)
        
        return 0;
    }
    return 1;
}