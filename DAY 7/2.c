#include <stdio.h>
int main(){
    int a,b;
    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press for 3 for gujarti\n");

    printf("Enter  any key");
    scanf("%d",&a);

    switch (a)
    {
        case 1:
            printf("English");
            printf("Press 1 for Internet Recharge\n");
            printf("Press 2 for Top-up Recharge\n");
            printf("Press 3 for Special Recharge\n");
            printf("Enter your numbre");

            scanf("%d",&b);

            switch (b)
            {
            case 1: printf("successfully tp re\n"); 
                    break;

            case 2: printf("successfully in re\n"); 
                    break;

            case 3: printf("successfully sp re\n"); 
                    break;
            
            default: printf("Invelid Number");
                    break;
            }

    break;



            case 2:
            printf("Hindi\n");
            printf("Internet Recharge ke liye 1 dabaiye\n");
            printf("Top-up Recharge ke liye 2 dabaiye\n");
            printf("Special Recharge ke liye 3 dabaiye\n");
            printf("Enter your numbre");

            scanf("%d",&b);

            switch (b)
            {
            case 1: printf("successfully Internet Recharge\n"); 
                    break;

            case 2: printf("successfully Top-up Recharge\n"); 
                    break;

            case 3: printf("successfully Special Recharge\n"); 
                    break;
            
            default: printf("Invelid Number");
                    break;
            }


            break;


            case 3:
            printf("Gujarti\n");
            printf("Internet Recharge mate 1 dabavo\n");
            printf("Top-up Recharge mate 2 dabavo\n");
            printf("Special Recharge mate 3 dabavo\n");
            printf("Enter your numbre");

            scanf("%d",&b);

            switch (b)
            {
            case 1: printf("successfully Internet Recharge\n"); 
                    break;

            case 2: printf("successfully Top-up Recharge\n"); 
                    break;

            case 3: printf("successfully Special Recharge\n"); 
                    break;
            
            default: printf("Invelid Number");
                    break;
            }

            break;

            default: printf("invelide number");
            break;
    }

}