#include <stdio.h>

int main(){

        printf("\n\n\n");
        printf("DDDDDDDDDDDDD       MMMMMMMM               MMMMMMMXXXXXXX       XXXXXXX     DDDDDDDDDDDDD     IIIIIIIIIPPPPPPPPPPPPPPPPP                CCCCCCCCCCCCC                lllllll\n");
        printf("D::::::::::::DDD    M:::::::M             M:::::::X:::::X       X:::::X     D::::::::::::DDD  I::::::::P::::::::::::::::P            CCC::::::::::::C                l:::::l\n");
        printf("D:::::::::::::::DD  M::::::::M           M::::::::X:::::X       X:::::X     D:::::::::::::::DDI::::::::P::::::PPPPPP:::::P         CC:::::::::::::::C                l:::::l\n");
        printf("DDD:::::DDDDD:::::D M:::::::::M         M:::::::::X::::::X     X::::::X     DDD:::::DDDDD:::::II::::::IPP:::::P     P:::::P       C:::::CCCCCCCC::::C                l:::::l\n");
        printf(" D:::::D    D:::::DM::::::::::M       M::::::::::XXX:::::X   X:::::XXX       D:::::D    D:::::DI::::I   P::::P     P:::::P      C:::::C       CCCCCC aaaaaaaaaaaaa   l::::l    cccccccccccccccc\n");
        printf(" D:::::D     D:::::M:::::::::::M     M:::::::::::M  X:::::X X:::::X          D:::::D     D:::::I::::I   P::::P     P:::::P     C:::::C               a::::::::::::a  l::::l  cc:::::::::::::::c\n");
        printf(" D:::::D     D:::::M:::::::M::::M   M::::M:::::::M   X:::::X:::::X           D:::::D     D:::::I::::I   P::::PPPPPP:::::P      C:::::C               aaaaaaaaa:::::a l::::l c:::::::::::::::::c\n");
        printf(" D:::::D     D:::::M::::::M M::::M M::::M M::::::M    X:::::::::X            D:::::D     D:::::I::::I   P:::::::::::::PP       C:::::C                        a::::a l::::lc:::::::cccccc:::::c\n");
        printf(" D:::::D     D:::::M::::::M  M::::M::::M  M::::::M    X:::::::::X            D:::::D     D:::::I::::I   P::::PPPPPPPPP         C:::::C                 aaaaaaa:::::a l::::lc::::::c     ccccccc\n");
        printf(" D:::::D     D:::::M::::::M   M:::::::M   M::::::M   X:::::X:::::X           D:::::D     D:::::I::::I   P::::P                 C:::::C               aa::::::::::::a l::::lc:::::c\n");
        printf(" D:::::D     D:::::M::::::M    M:::::M    M::::::M  X:::::X X:::::X          D:::::D     D:::::I::::I   P::::P                 C:::::C              a::::aaaa::::::a l::::lc:::::c\n");
        printf(" D:::::D    D:::::DM::::::M     MMMMM     M::::::XXX:::::X   X:::::XXX       D:::::D    D:::::DI::::I   P::::P                  C:::::C       CCCCCa::::a    a:::::a l::::lc::::::c     ccccccc\n");
        printf("DDD:::::DDDDD:::::D M::::::M               M::::::X::::::X     X::::::X     DDD:::::DDDDD:::::II::::::IPP::::::PP                 C:::::CCCCCCCC::::a::::a    a:::::al::::::c:::::::cccccc:::::c\n");
        printf("D:::::::::::::::DD  M::::::M               M::::::X:::::X       X:::::X     D:::::::::::::::DDI::::::::P::::::::P                  CC:::::::::::::::a:::::aaaa::::::al::::::lc:::::::::::::::::c\n");
        printf("D::::::::::::DDD    M::::::M               M::::::X:::::X       X:::::X     D::::::::::::DDD  I::::::::P::::::::P                    CCC::::::::::::Ca::::::::::aa:::l::::::l cc:::::::::::::::c\n");
        printf("DDDDDDDDDDDDD       MMMMMMMM               MMMMMMMXXXXXXX       XXXXXXX     DDDDDDDDDDDDD     IIIIIIIIIPPPPPPPPPP                       CCCCCCCCCCCCC aaaaaaaaaa  aaallllllll   cccccccccccccccc\n");
        printf("\n\n\n");

        int addr = 0; //DMX address
        int i;
        int j = 0;
        int k = 1;
        int s[8]; //switches (pos)
        int n[8] = {1, 2, 4, 8, 16, 32, 64, 128}; //values of switches
        char drawSwitches[5][17] =
                {
                        {'|',' ','|',' ','|',' ','|',' ', '|',' ','|',' ', '|',' ','|',' ', '|',},
                        {'|',' ','|',' ','|',' ','|',' ', '|',' ','|',' ', '|',' ','|',' ', '|',},
                        {'|','#','|','#','|','#','|','#', '|','#','|','#', '|','#','|','#', '|',},
                        {'|',' ','|',' ','|',' ','|',' ', '|',' ','|',' ', '|',' ','|',' ', '|',},
                        {'|',' ','|',' ','|',' ','|',' ', '|',' ','|',' ', '|',' ','|',' ', '|',},
                };

        for(i = 0; i <= 7; i++){
                printf("Enter 0 or 1 for switch #%d\n", i + 1);
                scanf("%d", &s[i]);
                if(s[i] == 0){
                        n[i] = 0;
                        for(j = 0; j < 2; j++){
                                drawSwitches[j][k] = '#';
                        }
                        k = k + 2;
                }
                if(s[i] == 1){                        
                        for(j = 3; j < 5; j++){
                                drawSwitches[j][k] = '#';
                        }
                        k = k + 2;
                }
                addr = addr + n[i];
        }

        printf("\nDMX Address = %d\n\n", addr);

        for (j = 0; j<5; j++){  //ver
                for (i = 0; i<17; i++){     //hor
                        printf("%c", drawSwitches[j][i]);
                }
                printf("\n");
        }
        return 0;
}
