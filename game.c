#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <unistd.h>


int main () {
    char name[10], attack[10];
    int h,m;
    h = 100;
    m = 100;
    printf("Giliran 1");
    printf("\n\nLIST KARAKTER:");
    printf("\ngeo\ncalvin\ntio\nluis");
    printf("\n\nPilih karakter anda = ");
    scanf("%s", &name);
    if (strcmp(name, "geo") == 0) {
        printf("mantep bre spawn as geo momen");
        printf("\nhealth geo = %d", h);
    }
    else if(strcmp(name, "calvin") == 0) {
        printf("kok kamu nt bamh");
        printf("\nhealth calvin = %d", h);
    }
    else if(strcmp(name, "luis") == 0) {
        printf("fortinayt ila babayji");
        printf("\nhealth luis = %d", h);
    }
    else {
        printf("bjir bogor");
        printf("\nhealth tio = %d", h);
    }
    sleep(2);
    printf("\n\npada suatu hari %s bertemu dengan monster slime, dan mereka bertarung seperti anak bogor", name);
    sleep(6);
    printf("\n\nPilih Serangan yang ingin kamu pilih: \n\nSlash\nFire\nBlizzard");
    printf("\n\nSeranganmu: ");
    scanf("%s", &attack);
    if ((strcmp(attack, "Slash") == 0)|| (strcmp(attack, "slash") == 0)) {
        printf("Darah slime berkurang 10");
        sleep(2);
        m = m - 10;
    }
    else if ((strcmp(attack, "Fire") == 0)|| (strcmp(attack, "fire") == 0)) {
        printf("Darah slime berkurang 20");
        sleep(2);
        m = m - 20;
    }
    else if ((strcmp(attack, "Blizzard") == 0)|| (strcmp(attack, "blizzard") == 0)) {
        printf("Darah slime berkurang 25");
        sleep(2);
        m = m - 25;
    }
    sleep(2);
    printf("\nsisa darah slime = %d", m);
    sleep(2);


    printf("\n\nGiliran 2: ");
    printf("\n\nSlime Menyerang %s \ndarah %s berkurang 10", name,name);
    sleep(2);
    h = h - 10;
    printf("\nsisa darah %s = %d", name,h);
    sleep(2);
    
    
    printf("\n\nGiliran 3:");
    printf("\n\nPilih Serangan yang ingin kamu pilih: \n\nSlash\nFire\nBlizzard");
    printf("\n\nSeranganmu: ");
    scanf("%s", &attack);
    if ((strcmp(attack, "Slash") == 0)|| (strcmp(attack, "slash") == 0)) {
        printf("Darah slime berkurang 10");
        sleep(2);
        m = m - 10;
    }
    else if ((strcmp(attack, "Fire") == 0)|| (strcmp(attack, "fire") == 0)) {
        printf("Darah slime berkurang 20");
        sleep(2);
        m = m - 20;
    }
    else if ((strcmp(attack, "Blizzard") == 0)|| (strcmp(attack, "blizzard") == 0)) {
        printf("Darah slime berkurang 25");
        sleep(2);
        m = m - 25;
    }
    sleep(2);
    printf("\nsisa darah slime = %d", m);
    sleep(2);


    printf("\n\nGiliran 4: ");
    printf("\n\nSlime Menyerang %s \ndarah %s berkurang 20", name,name);
    sleep(2);
    h = h - 20;
    printf("\nsisa darah %s = %d", name,h);
    sleep(2);
    

    printf("\n\nGiliran 5:");
    printf("\n\nPilih Serangan yang ingin kamu pilih: \n\nSlash\nFire\nBlizzard");
    printf("\n\nSeranganmu: ");
    scanf("%s", &attack);
    if ((strcmp(attack, "Slash") == 0)|| (strcmp(attack, "slash") == 0)) {
        printf("Darah slime berkurang 10");
        sleep(2);
        m = m - 10;
    }
    else if ((strcmp(attack, "Fire") == 0)|| (strcmp(attack, "fire") == 0)) {
        printf("Darah slime berkurang 20");
        sleep(2);
        m = m - 20;
    }
    else if ((strcmp(attack, "Blizzard") == 0)|| (strcmp(attack, "blizzard") == 0)) {
        printf("Darah slime berkurang 25");
        sleep(2);
        m = m - 25;
    }
    sleep(2);
    printf("\nsisa darah slime = %d", m);
    sleep(2);


    printf("\n\nGiliran 6: ");
    printf("\n\nSlime Menyerang %s \ndarah %s berkurang 20", name,name);
    sleep(2);
    h = h - 20;
    printf("\nsisa darah %s = %d", name,h);
    sleep(2);


    printf("\n\nGiliran 7:");
    printf("\n\nPilih Serangan yang ingin kamu pilih: \n\nSlash\nFire\nBlizzard");
    printf("\n\nSeranganmu: ");
    scanf("%s", &attack);
    if ((strcmp(attack, "Slash") == 0)|| (strcmp(attack, "slash") == 0)) {
        printf("Darah slime berkurang 10");
        sleep(2);
        m = m - 10;
    }
    else if ((strcmp(attack, "Fire") == 0)|| (strcmp(attack, "fire") == 0)) {
        printf("Darah slime berkurang 20");
        sleep(2);
        m = m - 20;
    }
    else if ((strcmp(attack, "Blizzard") == 0)|| (strcmp(attack, "blizzard") == 0)) {
        printf("Darah slime berkurang 25");
        sleep(2);
        m = m - 25;
    }
    sleep(2);
    printf("\nsisa darah slime = %d", m);
    if (m <= 0) {
        printf("\n---VICTORY!!!!!---");
    }
    else {
        printf("\n\nGiliran 8");
        printf("\n\nSlime Menyerang %s \ndarah %s berkurang 20", name,name);
        sleep(2);
        h = h - 25;
        printf("\nsisa darah %s = %d", name,h);
        sleep(2);


        printf("\n\nGiliran 9:");
        printf("\n\nPilih Serangan yang ingin kamu pilih: \n\nSlash\nFire\nBlizzard");
        printf("\n\nSeranganmu: ");
        scanf("%s", &attack);
        if ((strcmp(attack, "Slash") == 0)|| (strcmp(attack, "slash") == 0)) {
        printf("Darah slime berkurang 10");
        sleep(2);
        m = m - 10;
        }
        else if ((strcmp(attack, "Fire") == 0)|| (strcmp(attack, "fire") == 0)) {
        printf("Darah slime berkurang 20");
        sleep(2);
        m = m - 20;
        }
        else if ((strcmp(attack, "Blizzard") == 0)|| (strcmp(attack, "blizzard") == 0)) {
        printf("Darah slime berkurang 25");
        sleep(2);
        m = m - 25;
        }
        if (m <= 0) {
            printf("\n---VICTORY!!!!!---");
        }
        else {
        sleep(2);
        printf("\nsisa darah slime = %d", m);
        sleep(2);
        
        
        printf("\n\nGiliran 10");
        printf("\n\nSlime Menyerang %s \ndarah %s berkurang 20", name,name);
        printf("\n---GAME OVER!!!!!---");
        }
    }
    sleep(2); 

    if(m > 0) {
        printf("\n\ngit gud");
    }
    else {
        printf("\n\nDan akhirnya %s berakhir dengan bahagia dan pulang ke tempat favoritnya yaitu bogor", name);
    }

    getch();
    return 0;
}