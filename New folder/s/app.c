#include <stdio.h>
#include <conio.h>

int main() {
    int choice, choix1, choix2, choix3;
    float total = 0;
    char conf;

    do {
        printf("---- Menu ----\n");
        printf("1 ===> Plats\n");
        printf("2 ===> Desserts\n");
        printf("3 ===> Entrees\n");
        printf("4 ===> Total a payer\n");
        printf("5 ===> Confirme le commende \n");
        printf("0 ===> Sortir\n");
        printf("Faites votre choix : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("1 - Poulet 30Dh\n");
                printf("2 - Tacos 25Dh\n");
                printf("3 - Pizza 35Dh\n");
                printf("Faites votre choix : ");
                scanf("%d", &choix1);
                switch (choix1) {
                    case 1:
                        total += 30;
                        break;
                    case 2:
                        total += 25;
                        break;
                    case 3:
                        total += 35;
                        break;
                    default:
                        printf("Choix invalide.\n");
                        break;
                }
                break;

            case 2:
                printf("1 - Fruits 15 Dh\n");
                printf("2 - Glace 18 Dh\n");
                printf("3 - Cafe 10 Dh\n");
                printf("Faites votre choix : ");
                scanf("%d", &choix2);
                switch (choix2) {
                    case 1:
                        total += 15;
                        break;
                    case 2:
                        total += 18;
                        break;
                    case 3:
                        total += 10;
                        break;
                    default:
                        printf("Choix invalide.\n");
                        break;
                }
                break;

            case 3:
                printf("1 - Soupe 14 Dh\n");
                printf("2 - Salade 10 Dh\n");
                printf("3 - Citron 9 Dh\n");
                printf("Faites votre choix : ");
                scanf("%d", &choix3);
                switch (choix3) {
                    case 1:
                        total += 14;
                        break;
                    case 2:
                        total += 10;
                        break;
                    case 3:
                        total += 9;
                        break;
                    default:
                        printf("Choix invalide.\n");
                        break;
                }
                break;

            case 4:
                printf("Total a payer : %f Dh\n", total);
                break;

            case 5:
                printf("Confirm your command, press Y/N: ");
                scanf(" %c", &conf);

                if (conf == 'Y' || conf == 'y') {
                    printf("Your command is confirmed.\n");
                } else if (conf == 'N' || conf == 'n') {
                    printf("Ok.\n");
                } else {
                    printf("Invalid choice. Please enter a valid choice.\n");
                }
                break;

            default:
                printf("Choix invalide. Veuillez saisir un choix valide.\n");
                break;
        }
    } while (choice != 0);

    getch();
    return 0;
}
