// NOTE-I am only 11 year old child

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // checking variables
    int age;
    int gender;
    int phone_number;
    int animal_code;
    // giving variable
    const int male = 1;
    const int female = 2;
    // policy
    const int age_limit = 10;
    // animal code
    // wild animals
    const int tiger = 1200; 
    const int lion = 1000; 
    const int chetaah = 9009; 
    // aquatic animal
    const int starfish = 8643;
    const int jellyfish = 6464;
    const int crocodile = 2222; 
    const int whale = 3233; 
    const int shark = 1010; 
    // pet animals
    const int dog = 1111;
    const int cat = 2222;
    const int cow = 1221;
    const int horse = 5050;
    const int elephant = 2199; 
    const int bird = 3434;
    const int flimango = 1234;
    const int fish = 6045;
    // others
    const int duck = 1021; 
    const int dear = 9999; 
    const int gorilla = 1909;
    const int koyala = 5656; 
     const int bull = 9889;
    const int dolphin = 1010; 
    const int champanzee = 6575;
    const int rabbit = 2190;

    // welcome
    printf("Welcome to Life Simulator\n");
    // adjusting the game
    printf("Enter your age to adjust the game for you\n");
    scanf("%d", &age);
    /* 
    if age is less than 10 you can't play 
    because this game contan some serious crimes 
    */
    if (age < age_limit)
    {
        printf("Sorry but you are small to play\n");
    }
    else
    {
        // choose your gender
        printf("What is your gender (male for 1 and female for 2)\n");
        scanf("%d", &gender);
        switch (gender)
        {
            // if gender is male
        case male:
            printf("You born as a Male\n");
            printf("Enter your phone number\n");
            scanf("%d", &phone_number);
            // if we enter invalid number(number not less than 1000000000)
            if (phone_number == 1000000000)
            {
                printf("The number you enterd is Invaild please try again later\n");
            }
            // You finally enter the game
            else
            {
                printf("You are enterd to Game\n");
            }
            break;
            // if you are female
        case female:
            printf("You born as a Female\n");
            printf("Enter your phone number\n");
            scanf("%d", &phone_number);
            // if we enter invalid number(number not less than 1000000000)
            if (phone_number <= 1000000000)
            {
                printf("The number you enterd is Invaild please try again later\n");
            }
            // You finally enter the game
            else
            {
                printf("You finally are enterd to Game\n");
            }
            break;
        
        default:
        // if you are an animal by error
            printf("An error you born as a animal\n");
            // enter 4 digit code to become a animal
            printf("Try to enter a random 4 digits code to become a animal\n");
            scanf("%d", &animal_code);
            switch (animal_code)
            {
            case tiger:
                printf("You born as a tiger\n");
                break;
            case lion:
                printf("You born as a lion\n");
                break;
            case elephant:
                ("You born as a elephant");
                break;
            default:
                break;
            }
            break;
        }
    }
    
    return 0;
}
