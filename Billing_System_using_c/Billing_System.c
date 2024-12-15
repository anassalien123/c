#include <stdio.h>

int main()
{

    char name[50];
    int phone_number;
    int customer_id;

    int body_soap;
    int hair_cream;
    int hair_spray;
    int body_spray;

    int sugar;
    int tea;
    int coffee;
    int rice;
    int wheat;

    int pepsi;
    int sprite;
    int coke;
    int mojitos;
    int thumbs_up;

    int total;
    int cosmetics_total;
    int grocery_total;
    int beverage_total;

    printf("------------------\n");
    printf("BILLING SYSTEM\n");
    printf("-------------------\n");
    printf("Customer Details\n\n");

    printf("Customer Name : ");
    scanf("%d", &name);
    printf("Customer Number : ");
    scanf("%d",&phone_number);
    printf("Customer Id : ");
    printf("%d",&customer_id);

    printf("--------------------\n");

    printf("COSMETICS\n\n");

    printf("Body Soap ( RS 10 ) : ");
    scanf("%d", &body_soap);
    printf("Hair Cream ( RS 25 ) : ");
    scanf("%d", &hair_cream);
    printf("Body Spray ( RS 50 )");
    scanf("%d", &body_spray);
    printf("Hair Spray ( RS 50 ) :");
    scanf("%d", &hair_spray);

    printf("----------------------\n");

    printf("GROCERIES\n\n");

    printf("Sugar ( RS 100 ) : ");
    scanf("%d", &sugar);
    printf("Tea ( RS 15 ) : ");
    scanf("%d",&tea);
    printf("Rice ( RS 150 ) : ");
    scanf("%d", &rice);
    printf("Wheat ( RS 160 ) : ");
    scanf("%d", &wheat);

    printf("--------------------\n");

    printf("BEVERAGES\n\n");

    printf("Pepsi ( RS 30 ) : ");
    scanf("%d", &pepsi);
    printf("Sprite ( RS 35 )");
    scanf("%d", &sprite);
    printf("Mojitos ( RS 35 ) : ");
    scanf("%d", &mojitos);
    printf("Thumbs Up ( RS 35 ) : ");
    scanf("%d", &thumbs_up);

    printf("----------------------\n");

    int boso;
    int hs;
    int hc;
    int bosp;

    boso = 10 * body_soap;
    hc = 25 * hair_cream;
    hs = 50 * hair_spray;
    bosp = 50 * body_spray;
    cosmetics_total = boso + hc + hs + bosp;

    printf("Body Soap : ");
    printf("%d RS\n", boso);
    printf("Hair Cream : ");
    printf("%d RS\n", hc);
    printf("Hair Spray : ");
    printf("%d RS \n", hs);
    printf("Body Spray : ");
    printf("%d RS\n", bosp);
    printf("Total Cosmetic Price : ");
    printf("%d RS \n", cosmetics_total);

    printf("-----------------------\n");

    int s;
    int t;
    int c;
    int r;
    int w;

    s = 100 * sugar;
    t = 15 * tea; 
    c = 50 * coffee;
    r = 150 * rice;
    w = 160 * wheat;
    grocery_total = s + t + c + r + w;

    printf("Sugar : ");
    printf("%d RS\n", s);
    printf("Tea : ");
    printf("%d RS\n",t);
    printf("Coffee : ");
    printf("%d RS\n", c);
    printf("Rice : ");
    printf("%d RS\n",r);
    printf("Whaet : ");
    printf("%d RS\n", w);
    printf("Total Grocery Price : ");
    printf("%d RS\n", grocery_total);

    printf("-------------------------\n");

    int pep;
    int spr;
    int cok;
    int moj;
    int thu;

    pep = 30 * pepsi;
    spr = 35 * sprite;
    cok = 30 * coke;
    moj = 25 * mojitos;
    thu = 35 * thumbs_up;
    beverage_total = pep + spr + cok + moj + thu;

    printf("Pepsi : ");
}
