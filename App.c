#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{    
    // SIGMA Variables
    int k = 2, x, value = 0; // Variables for 1st Algorithm of Sigma Calculator
    int j = 1, g, result = 0; // Variables for 2nd Algorithm of Sigma Calculator
    float n, c, a = 1.1, answer = 0; // Variables for 3rd Algorithm of Sigma Calculator

    // PI VARIABLES
    int op = 0, pp, u = 1; // Variables for 1st Algorithm of Pi Calculator
    float dhoni = 2.1, apple, mango = 1; // Variables for 2nd Algorithm of Pi Calculator
    float pineapple = 0.1, cat, dog = 1; // Variables for 3rd Algorithm of Pi Calculator

    system("clear");

    printf("------------------------------------------\n");
    printf("|WELCOME TO PIMA CALCULATOR               |\n");
    printf("..........................................|\n");
    printf("|Following are the options :              |\n");
    printf("|Press 1 for ∑ menu.                      |\n");
    printf("|Press 2 for π menu.                      |\n");
    printf("|Press 0 to exit.                         |\n");
    printf("------------------------------------------\n");

    int choice;
    scanf("%d", &choice);


    switch (choice)
    {
    case 1: // ∑ Calculation logic
        system("clear"); // Screen gets clear after choosing 1 for better experience 

        // Starts the Sigma Things :
        printf("You chose to ∑ Calculator\n\a");
        printf("-------------------------\n");
        printf("Here are few algorithms, Which one you want to calculate \?\n\n");
        // Problem 1 for sigma :
        printf("Press 1 for answer of this Algorithm :\n");
        printf("--------------------------------------\n");
        printf("4\n");
        printf("∑(k^2 - 3kx + 1)\n");
        printf("k=2\n\n\n");
        // Problem 2 for sigma :
        printf("Press 2 for answer of this Algorithm :\n");
        printf("--------------------------------------\n");
        printf("4\n");
        printf("∑ j*g\n");
        printf("j=2\n\n\n");
        // Problem 3 for sigma :
        printf("Press 3 for answer of this Big Algorithm :\n");
        printf("--------------------------------------\n");
        printf("8.5\n");
        printf("∑(c^n + 5c + a^a)\n");
        printf("a=1.1\n\n\n");


        int sigmaChoice; // For nested switch to choose which algorithm to calculate
        scanf("%d", &sigmaChoice);

        // Starts a New Switch case for SIGMA Calculation :
        switch (sigmaChoice)
        {
        case 1: // Algorithm 1 of Sigma 
        system("clear");

            printf("WE ARE SOLVING :\n\n\a");
            printf("----------------------\n");
            printf("4\n");
            printf("∑(k^2 - 3kx + 1)\n");
            printf("k=2\n");
            printf("----------------------\n\n");

            printf("Enter value for x\n");
            scanf("%d", &x);

            while (k<=4)
            {
                value += (k*k - 3*k*x + 1);
                k++;
            }
            printf("Value = %d\n\a", value);
            
            break;


        case 2: // Algorithm 2 of Sigma
        system("clear");

            printf("WE ARE SOLVING :\n\n\a");
            printf("----------------------\n");
            printf("4\n");
            printf("∑ j*g\n");
            printf("j=2\n");
            printf("----------------------\n\n");

            printf("Enter value for g\n");
            scanf("%d", &g);

            while (j <= 4)
            {
                result += j*g;
                j++;
            }
    
            printf("Value = %d\n\a", result);

            break;

        case 3: // Algorithm 3 of Sigma
        system("clear");

            printf("WE ARE SOLVING :\n\n\a");
            printf("----------------------\n");
            printf("8.5\n");
            printf("∑(c^n + 5c + a^a)\n");
            printf("a=1.1\n\n\n");
            printf("----------------------\n\n");

            printf("Enter c\n");
            scanf("%f", &c);
            printf("Enter the power for c\n");
            scanf("%f", &n);

            while (a<= 8.5)
            { 
                answer += pow(c, n) + 5*c + pow(a, a);
                a++;
            }
    
            printf("Value = %f\n\a", answer);
            
            break;
        default:
            break;
        } 
        // End of Switch SIGMA Calculator

        case 2: // PI calculator logic

        system("clear");

        printf("You chose to π Calculator\n\a");
        printf("-------------------------\n");
        printf("Here are few algorithms, Which one you want to calculate \?\n\n");
        // Problem 1 for pi :
        printf("Press 1 for answer of this Algorithm :\n");
        printf("--------------------------------------\n");
        printf("3\n");
        printf("π(n + x\n");
        printf("n=0\n\n\n");
        // Problem 2 for pi :
        printf("Press 2 for answer of this Algorithm :\n");
        printf("--------------------------------------\n");
        printf("4.0\n");
        printf("π j*g\n");
        printf("j=2.1\n\n\n");
        // Problem 3 for pi :
        printf("Press 3 for answer of this Big Algorithm :\n");
        printf("--------------------------------------\n");
        printf("9.1\n");
        printf("π(5c + a^a)\n");
        printf("a=0.1\n\n\n");

        int PiChoice;
        scanf("%d", &PiChoice);


        switch (PiChoice)
        {
        case 1:
        system("clear");

            printf("WE ARE SOLVING :\n\n\a");
            printf("----------------------\n");
            printf("3\n");
            printf("π(n + x\n");
            printf("n=0\n\n");

            printf("Enter x :\n");
            scanf("%d", &pp);

            while (op <= 3)
                {
                    u *= op + pp;
                    op++;
                }

                    printf("Value = %d\n", u);

            break;

        case 2:
        system("clear");

            printf("WE ARE SOLVING :\n\n\a");
            printf("----------------------\n");
            printf("4.0\n");
            printf("π j*g\n");
            printf("j=2.1\n\n");

            printf("Enter g :\n");
            scanf("%f", &apple);

            while (dhoni <= 4.0)
                {
                    mango *= dhoni*apple;
                    dhoni++;
                }

                printf("Value = %.4f\n", mango);

            break;

        case 3:
        system("clear");

            printf("WE ARE SOLVING :\n\n\a");
            printf("----------------------\n");
            printf("9.1\n");
            printf("π(5c + a^a)\n");
            printf("a=0.1\n\n");

            printf("Enter c :\n");
            scanf("%f", &cat);

            while (pineapple <= 9.1)
            {
                dog *= 5*cat + pow(pineapple,pineapple);
                pineapple++;
            }
    
                printf("Value = %.4f\n", dog);


            break;
        
        default:
            break;
        }// END OF PI CALCULATOR



            break;
    
    default:
        break;
    }

    return 0;
}