#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<windows.h>
void SetColor(int ForgC);
 int main()
{
     int x=0;
    char name[50];
    char celeb;
char z[200][3];
int i=0;
SetColor(10);
printf("***************************************************************************\n");
printf("                             MIND READER                                     \n");
printf("***************************************************************************\n");

printf("\nENTER YOUR NAME:\n");
scanf("%s",name);

SetColor(11);
    printf("\n LET'S PLAY A GAME %s ! \n\n",name);
 while(i<4)
    {
SetColor(12);


      printf("instruction for game\n1.for celebrity");
           printf("\n2.for food\n3.for object\n");
    printf("CHOOSE ANYONE OF THEM\n");
    scanf("%d",&x);
switch(x)
{
case 1:
    {

printf("\nKINDLY CHOOSE YOUR A CELEBRITY IN YOUR MIND!");

    printf("1.AMITABH BACCHAN\n\n2.KAREENA KAPOOR\n\n3.VARUN DHAWAN\n\n4.AKSHAY KUMAR\n\n5.DEEPIKA PADUKOUN\n\n6.RANBIR KAPOOR\n\n7.PRIYANKA CHOPRA JONAS\n\n8.SIDDHARTH MALHOTRA\n\n");
    printf("9.VICKY KAUSHAL\n\n10.BHUMI PENDEKAR\n\n11.SONAM KAPOOR\n\n12.YAMI GAUTAMI\n\n13.HRITIK ROSHAN\n\n14.DISHA PATANI\n\n15.GOVINDA\n\n16.KATRINA KAIF\n\n");

 char gender;
 SetColor(13);
 printf("ANSWER THE FOLLOWING QUESTION COORECTLY \n ");
 printf("IS IT A FEMALE CELEBRITY ? \n");
SetColor(14);
 scanf("%s",&gender);
 if((gender=='n')||(gender=='N'))
 {
    char marry;

    printf("IS YOUR ACTOR MARRIED?\n");

    scanf("%s",&marry);
    if((marry=='y')||(marry=='Y'))//checks marriage
    {
       char kg;
       printf("Is YOUR ACTOR IN KABHI KHUSHI KABHI GHUM?\n");
       scanf("%s",&kg); //checks k3g
       if((kg=='y')||(kg=='Y'))
        {
            char age;
            printf("IS YOUR ACTOR'S AGE ABOVE 50?\n");
            scanf("%s",&age);
                                                        // checks age
            if((age=='y')||(age=='Y'))
            {  printf(" IS HE THE CURRENT HOST OF KAUN BANEGA CROREPATI?\n");
            scanf("%s",z[1]);

            printf("WAS HE IN MOVIE SHOLAY?\n");
            scanf("%s",z[2]);
            printf("Did he play a ghost in any film?\n");
            scanf("%s",z[5]);

             printf("AMITABH BACHCHAN!!\n");


            }
             else if((age=='n')||(age=='N'))
             {
                  printf("WAS HE IN MOVIE -ZINDAGI NA MILEGI DOBARA?\n");
             scanf("%s",z[3]);
             printf("Is he the most handsome man in Bollywood?\n");
            scanf("%s",z[4]);
            printf(" His father is a filmmaker?\n");
            scanf("%s",z[6]);
            printf("He played the role of Anand kumar in a film?\n");
            scanf("%s",z[7]);

             printf("HRITHIK ROSHAN!!\n");
            }
        }
        else if((kg=='n')||(kg=='N'))
        {
            char holi;
            printf("IS YOUR ACTOR IN MOVIE HOLIDAY ?\n");
            scanf("%s",&holi); //check holiday movie NIMP
             if((holi=='y')||(holi=='Y'))
            {  char award;
                printf("HAS YOUR ACTOR RECIEVED NATIONAL AWARD?\n");
                scanf("%s",&award); // checks award
                if((award=='y')||(award=='Y'))
                    {
                        printf(" Was he in the famous song tip tip barsa pani?\n");
            scanf("%s",z[8]);
            printf("Was he a chef\n");
            scanf("%s",z[9]);
            printf("Did he marry Twinkle Khanna\n");
            scanf("%s",z[10]);
            printf("Is he a Punjabi?\n");
            scanf("%s",z[11]);

                    printf("AKSHAY KUMAR!!\n");
                    }
                else if ((award=='n')||(award=='N'))
                    {
                        printf("Is he famous for his iconic dance moves?\n");
            scanf("%s",z[12]);
            printf("has he acted in movie PARTNER?\n");
            scanf("%s",z[13]);
            printf("Is your actor famous for his comedy roles?\n");
            scanf("%s",z[14]);
            printf("Is he a south indian actor?\n");
            scanf("%s",z[15]);

                          printf("GOVINDA!!\n");
                    }
            }
            else if((holi=='n')||(holi=='N'))
            {
             printf("I THINK YOU FORGOT YOUR ACTOR!!\n");
            }
        }

    }
    else if((marry=='n')||(marry=='N'))
    {
        char soty;
      printf("HAS YOUR ACTOR WORKED IN MOVIE STUDENT OF THE YEAR?\n");   //checks movie
       scanf("%s",&soty);
       if((soty=='Y')||(soty=='y'))
       {
           char height;
           printf("IS HE TALLER THAN 6 FEET?\n");
           scanf("%s",&height);
           if((height=='Y')||(height=='y'))
           {
               printf("His debut film director was David Dhawan?\n");
            scanf("%s",z[16]);
            printf("Does his family have roots in Bollywood?\n");
            scanf("%s",z[17]);
            printf("Has he worked with Varun Dhawan?\n");
            scanf("%s",z[18]);
            printf("Is he the lead in the upcoming biopic on captain Vikram Batra?\n");
            scanf("%s",z[19]);

               printf("SIDDHARTH MALHOTRA!!\n");
           }
           else if((height=='n')||(height=='N'))
           {
               printf("His father is a bollywood Actor?\n");
            scanf("%s",z[20]);
            printf(" Has he shared the screen with king of romance shah rukh khan?\n");
            scanf("%s",z[21]);
            printf("Did he do more than 3 films with alia bhatt?\n");
            scanf("%s",z[22]);
            printf(" Was he in ABCD?\n");
            scanf("%s",z[23]);

               printf("VARUN DHAWAN!!\n");
           }
       }
       else if((soty=='n')||(soty=='N'))
       { char sanju;
           printf("HAS HE WORKED IN MOVIE - SANJU?\n");
           scanf("%s",&sanju);
           if((sanju=='Y')||(sanju=='y'))
           { char awd;
               printf("IS HE RECIEVED NATIONAL AWARD?\n");
               scanf("%s",&awd);
                if((awd=='y')||(awd=='Y'))
                    {
                        printf("Was His debut film Masaan?\n");
            scanf("%s",z[24]);
            printf("Did he work with Katrina Kaif?\n");
            scanf("%s",z[25]);
            printf("Had he played the role of an army officer?\n");
            scanf("%s",z[26]);
            printf(" Is his father a director in Bollywood?\n");
            scanf("%s",z[27]);

                    printf("VICKY KAUSHAL!!\n");
                    }
                else if ((awd=='n')||(awd=='N'))
                    {
                        printf("Did The indian film industry started with his family?\n");
            scanf("%s",z[28]);
            printf("Is Rishi Kapoor his uncle?\n");
            scanf("%s",z[29]);
            printf(" His cousin is married to a nawab?\n");
            scanf("%s",z[30]);
            printf("Did he ever shared screen with amitabh bachchan? \n");
            scanf("%s",z[31]);

                      printf("RANBIR KAPOOR!!\n");
                    }

           }
           else if((sanju=='n')||(sanju=='N'))
           {
               printf("I THINK YOU FORGOT YOUR ACTOR!!\n");
           }
       }
    }

}

else if((gender=='y')||(gender=='Y'))
{
char marryf;
    printf("IS YOUR ACTRESS MARRIED?\n");
    scanf("%s",&marryf);
    if((marryf=='y')||(marryf=='Y'))//checks marriage
    {
       char vdv;
       printf("Is YOUR ACTRESS IN MOVIE- VEERE DI WEDDING?\n");
       scanf("%s",&vdv); //checks k3g
       if((vdv=='y')||(vdv=='Y'))
        {
            char kid;
            printf("DOES YOUR ACTRESS HAS KIDS?\n");
            scanf("%s",&kid);
                                                        // checks age
            if((kid=='y')||(kid=='Y'))
            {
                printf(" Is she is Married to a nawab?\n");
            scanf("%s",z[32]);
            printf("She is the brand ambassador of L'oreal?\n");
            scanf("%s",z[33]);
            printf("Is she one of the highest paid actor in bollywood?\n");
            scanf("%s",z[34]);
            printf("Has the actor worked in movie KABHI KHUSHI KABHI GUM?\n");
            scanf("%s",z[35]);
            printf("Was your actress in DILWALE DHULHANIA LE JAYENGE\n");
            scanf("%s",z[36]);
             printf("KAREENA KAPOOR!!\n");
            }
             else if((kid=='n')||(kid=='N'))
             {
                 printf("She played the role of Neerja bhanot?\n");
            scanf("%s",z[37]);
            printf("She married a bollywood personality?\n");
            scanf("%s",z[38]);
            printf(" Is ranbir kapoor his brother?\n");
            scanf("%s",z[39]);
            printf("Has she worked in any hollywood movie?\n");
            scanf("%s",z[40]);
            printf(" Her Uncle is boney Kapoor?\n");
            scanf("%s",z[41]);
             printf("SONAM KAPOOR!!\n");
            }
        }
        else if((vdv=='n')||(vdv=='N'))
        {
            char baji;
            printf("IS YOUR ACTRESS IN MOVIE BAJIRAO MASTANI?\n");
            scanf("%s",&baji); //check holiday movie NIMP
             if((baji=='y')||(baji=='Y'))
            {  char world;
                printf("HAS YOUR ACTRESS BEEN TITLED MISS WORLD??\n");
                scanf("%s",&world); // checks award
                if((world=='y')||(world=='Y'))
                    {
                        printf("Her husband is a very famous American singer?\n");
            scanf("%s",z[42]);
            printf("She was named as UNICEF Goodwill ambassador?\n");
            scanf("%s",z[43]);
            printf("Has she won the Padma Shri?\n");
            scanf("%s",z[44]);
            printf("She was named as UNICEF Goodwill ambassador?\n");
            scanf("%s",z[45]);
                    printf("PRIYANKA CHOPRA!!\n");
                    }
                else if ((world=='n')||(world=='N'))
                    {
                        printf(" Is her father a bollywood star?\n");
            scanf("%s",z[46]);
            printf(" She has played the role of acid attack survivor Malti?\n");
            scanf("%s",z[47]);
            printf("She is a former national level badminton player? \n");
            scanf("%s",z[48]);
            printf("Has she ever worked with salman khan?\n");
            scanf("%s",z[49]);
                          printf("DEEPIKA PADUKOUN!!\n");
                    }
            }
            else if((baji=='n')||(baji=='N'))
            {
             printf("I THINK YOU FORGOT YOUR ACTRESS!!\n");
            }
        }

    }
    else if((marryf=='n')||(marryf=='N'))
    {
        char bala;
      printf("HAS YOUR ACTOR WORKED IN MOVIE BALA ?\n");   //checks movie
       scanf("%s",&bala);
       if((bala=='Y')||(bala=='y'))
       {
           char weight;
           printf("HAS YOUR ACTRESS GAINED WEIGHT FOR A PARTICULAR MOVIE?\n");
           scanf("%s",&weight);
           if((weight=='Y')||(weight=='y'))
           {
               printf("Has she worked with Salman khan?\n");
            scanf("%s",z[50]);
            printf("Was her debut film with Akshay Kumar?\n");
            scanf("%s",z[51]);
            printf("She has done atleast 3 films with Ayushman khurana?\n");
            scanf("%s",z[52]);
            printf("Did she have any roots in Bollywood?\n");
            scanf("%s",z[53]);

               printf("BHUMI PENDEKAR!!\n");
           }
           else if((weight=='n')||(weight=='N'))
           {
               printf("Her debut film was with Ayushman khurana?\n");
            scanf("%s",z[54]);
            printf("Is she the brand ambassador for fair & lovely?\n");
            scanf("%s",z[55]);
            printf("Did she worked in tv serials before movies?\n");
            scanf("%s",z[56]);
            printf(" Has she played the role of a Disabled character?\n");
            scanf("%s",z[57]);

               printf("YAMI GAUTAMI!!\n");

           }
       }
       else if((bala=='n')||(bala=='N'))
       {
           char bhaghi;
           printf("HAS SHE WORKED IN MOVIE - BHAGHI 2 ? \n");
           scanf("%s",&bhaghi);
           if((bhaghi=='Y')||(bhaghi=='y'))
           {
               printf("Does she come from a filmy background?\n");
            scanf("%s",z[58]);
            printf(" Have she worked in the telugu cinema?\n");
            scanf("%s",z[59]);
            printf("Has she shared the screen with global action star Jackie Chan?\n");
            scanf("%s",z[60]);
            printf("Was her Hindi debut film the biopic of MS Dhoni?\n");
            scanf("%s",z[61]);

                          printf("DISHA PATANI!!\n");
            }


           else if((bhaghi=='n')||(bhaghi=='N'))
           { printf("Does she own a beauty brand?\n");
            scanf("%s",z[62]);
            printf("Has she worked with the khan's of bollywood?\n");
            scanf("%s",z[63]);
            printf("Is her nationality indian?\n");
            scanf("%s",z[64]);
            printf("Did she work in the south indian films? \n");
            scanf("%s",z[65]);

               printf("KATRINA KAIF!!\n");
           }
       } }
    }
break;

    }
 //SECOND CATEGORY OF FOOD STARTS FROM HERE!
case 2:
    {


printf(" \n CHOOSE A DISH FROM THE BELOW LIST IN YOUR MIND!\n");
 printf("ANSWER THE FOLLOWING QUESTION COORECTLY \n ");
printf("1.CHOLE BHATURE\n\n2.VADA PAV\n\n3.PASTA\n\n4.MANCHURIAN\n\n5.BURGER\n\n6.PAV BHAJI\n\n7.PAKODE\n\n8.PIZZA\n\n");
printf("9.SANDWICH\n\n10.DHOKLA\n\n11.BAKED VEG\n\n12.POHA\n\n13.FRENCH FRIES\n\n14.CHOLE TIKKI\n\n15.DOUGHNUT\n\n16.BHEL\n\n");

 char fry;
 printf("IS YOUR DISH FRIED?\n");
 scanf("%s",&fry);
 if((fry=='n')||(fry=='N'))
 {
    char cheese;
    printf("DOES YOUR DISH CONTAINS CHEESE?\n");
    scanf("%s",&cheese);
    if((cheese=='y')||(cheese=='Y'))//checks marriage
    {
       char italy;
       printf("IS IT A ITALIAN DISH?\n");
       scanf("%s",&italy); //checks k3g
       if((italy=='y')||(italy=='Y'))
        {
            char sweet;
            printf("DOES IT TASTE LITTLE SWEET?\n");
            scanf("%s",&sweet);
                                                        // checks age
            if((sweet=='y')||(sweet=='Y'))
            {
                printf("IS IT SOMETIMES SERVED WITH BREAD\n??");
            scanf("%s",z[66]);
               printf("Is it served hot?\n");
            scanf("%s",z[67]);
            printf("Is it very popular in indore?\n");
            scanf("%s",z[68]);
            printf("Can you eat it with chopsticks?\n");
            scanf("%s",z[69]);

             printf("BAKED VEG!");
            }
             else if((sweet=='n')||(sweet=='N'))
             {
                 char round;
                 if((round=='y')||(round='Y'))
                 {

            printf("Is it considered healthy food?\n");
            scanf("%s",z[71]);
            printf("Is it a street food?\n");
            scanf("%s",z[72]);
            printf("Can you eat with spoon?\n");
            scanf("%s",z[73]);
            printf("Is it very famous among youngsters?\n");
            scanf("%s",z[70]);
                     printf("PIZZA!!\n");
                 }
                 else if((round=='n')||(round=='N'))
                 {
                        printf("does it have different types like Red and White?\n");
            scanf("%s",z[71]);
            printf("is it served as side dish?\n");
            scanf("%s",z[72]);
            printf("Is it very famous among elder people?\n");
            scanf("%s",z[73]);

                     printf("PASTA!!\n");
                 }

            }
        }
        else if((italy=='n')||(italy=='N'))
        {
            char sand;
            printf("CAN YOU EAT IT AS BREAKFAST ??\n");
            scanf("%s",&sand); //check sandwhcih NIMP
             if((sand=='y')||(sand=='Y'))
            {      printf("is there a movie named on this food starring Govinda ?\n");
            scanf("%s",z[74]);
            printf("Is it stuffed with fillings?\n");
            scanf("%s",z[75]);
            printf("can it be served grilled?\n");
            scanf("%s",z[76]);
          ;
                printf("SANDWICH!!\n ");


            }
            else if((sand=='n')||(sand=='N'))
            {
             printf("ARE YOU ALREADY DROOLING? BECAUSE \n I THINK YOU FORGOT YOUR DISH!!\n");
            }
        }

    }
    else if((cheese=='n')||(cheese=='N'))
    {
        char breakfast;
      printf("CAN THE DISH BE CONSUMED AS BREAKFAST?\n");   //checks movie
       scanf("%s",&breakfast);
       if((breakfast=='Y')||(breakfast=='y'))
       {
           char indore;
           printf("IS IT MOST CONSUMED BREAKFAST IN INDORE?\n");
           scanf("%s",&indore);
           if((indore=='Y')||(indore=='y'))
           {   printf("is this dish most liked in indore?\n");
            scanf("%s",z[77]);
            printf("is it made up of rice?\n");
            scanf("%s",z[78]);
            printf("Is it usually eaten in breakfast?\n");
            scanf("%s",z[79]);

               printf("POHA!!\n");
           }
           else if((indore=='n')||(indore=='N'))
           {   printf("Is it consumed by most of the Gujaratis?\n");
            scanf("%s",z[80]);
            printf("Is it usually served with chutney and green chillies?\n");
            scanf("%s",z[81]);
            printf("Is it usually eaten in breakfast?\n");
            scanf("%s",z[82]);

               printf("DHOKLA!!\n");
           }
       }
       else if((breakfast=='n')||(breakfast=='N'))
       { char even;
           printf("DO YOU EAT IT IN EVENING?\n");
           scanf("%s",&even);
           if((even=='Y')||(even=='y'))
           { char bread;
               printf("DOES IT REQUIRES ANY SORT OF BREAD OR BUN ?\n");
               scanf("%s",&bread);
                if((bread=='y')||(bread=='Y'))
                    {   printf("Is it a mix of bashed and spiced vegetables in a gravy ?\n");
            scanf("%s",z[83]);
            printf("Do you need fork to eat it?\n");
            scanf("%s",z[84]);
            printf("It has a bright orange color \n");
            scanf("%s",z[85]);
            printf("is it a popular street food?\n");
            scanf("%s",z[86]);
                    printf("PAV BHAJI!!\n");
                    }
                else if ((bread=='n')||(bread=='N'))
                    {   printf("Is it a tangy Indian snack \n");
            scanf("%s",z[87]);
            printf("is it a popular street food?\n");
            scanf("%s",z[88]);
            printf("Can you eat it with fork?\n");
            scanf("%s",z[89]);

                      printf("BHEL!!\n");
                    }

           }
           else if((even=='n')||(even=='N'))
           {
               printf("ARE YOU ALREADY DROOLING? BECAUSE \n I THINK YOU FORGOT YOUR DISH!!\n");
           }
       }
    }

}
//CHECKS FRIED FOOD
else if((fry=='y')||(fry=='Y'))
{
char indian;
    printf("IS IT A INDIAN DISH?\n");
    scanf("%s",&indian);
    if((indian=='y')||(indian=='Y'))
    {
       char pea;
       printf("DOES YOUR DISH CONTAIN CHICKPEAS IN IT??\n");
       scanf("%s",&pea); //checks k3g
       if((pea=='y')||(pea=='Y'))
        {
            char maida;
            printf("DOES YOUR FOOD CONTAINS- ALL PURPOSE FLOUR(MAIDA)?\n");
            scanf("%s",&maida);
                                                        // checks age
            if((maida=='y')||(maida=='Y'))
            {   printf("is it generally eaten as breakfast dish?\n");
            scanf("%s",z[90]);
            printf("is it usually served with onions and pickles?\n");
            scanf("%s",z[91]);
            printf("does this dish comes from northern part of india?\n");
            scanf("%s",z[92]);

             printf("CHOLE BHATURE!!\n");
            }
             else if((maida=='n')||(maida=='N'))
             {   printf("is it usually served on roadside stalls?\n");
            scanf("%s",z[93]);
            printf("is it served with the toppings tamarind chutney,yoghurt or sev?\n");
            scanf("%s",z[94]);
            printf("can it be eaten as dinner meal?\n");
            scanf("%s",z[95]);

             printf("CHOLE TIKKIA!!\n");
            }
        }
        else if((pea=='n')||(pea=='N'))
        {
            char  snack;
            printf("CAN YOU EAT THIS DISH AS A EVENING SNACK ?\n");
            scanf("%s",&snack); //check holiday movie NIMP
             if((snack=='y')||(snack=='Y'))
            {  char shape;
                printf("DOES YOUR DISH HAS A DEFINITIE SHAPE?\n");
                scanf("%s",&shape); // checks award
                if((shape=='y')||(shape=='Y'))
                    {
                           printf("is it a native dish to the state of maharastra?\n");
            scanf("%s",z[96]);
            printf("is it also called 'bombay burger'?\n");
            scanf("%s",z[96]);
            printf("is it usually served with red chilli powder and green chilli?\n");
            scanf("%s",z[98]);

                    printf("VADA PAV!!\n");
                    }
                else if ((shape=='n')||(shape=='N'))
                    {   printf("Do people loves to eat this in rainy season?\n");
            scanf("%s",z[99]);
            printf("is it a type of snack?\n");
            scanf("%s",z[100]);
            printf("Do this comes in different stuffings?\n");
            scanf("%s",z[101]);

                          printf("PAKODE!!\n");
                    }
            }
            else if((snack=='n')||(snack=='N'))
            {
             printf("ARE YOU ALREADY DROOLING? BECAUSE \n I THINK YOU FORGOT YOUR DISH!!!\n");
            }
        }

    }
    else if((indian=='n')||(indian=='N'))
    {
        char aloo;
      printf("DOES YOUR DISH HAS POTATOES IN IT?\n");   //checks movie
       scanf("%s",&aloo);
       if((aloo=='Y')||(aloo=='y'))
       {
           char bun;
           printf("DOES YOUR DISH CONTAINS ANY TYPE OF BUN??\n");
           scanf("%s",&bun);
           if((bun=='Y')||(bun=='y'))
           {   printf("is this dish the centre of attraction in McDonalds restaurant?\n");
            scanf("%s",z[102]);
            printf("is this food originated from Germany?\n");
            scanf("%s",z[103]);
            printf("is this dish usually eaten with cheese stuffing?\n");
            scanf("%s",z[104]);
                           printf("BURGER!!\n");
           }
           else if((bun=='n')||(bun=='N'))
           {   printf("is this dish is very famous in McDonalds menu?\n");
            scanf("%s",z[105]);
            printf("can it be served with ketchup, vinegar, mayonnaise, tomato sauce?\n");
            scanf("%s",z[106]);
            printf("do this usually comes in form of sticks?\n");
            scanf("%s",z[107]);
                         printf("FRENCH FRIES!!\n");
           }
       }
       else if((aloo=='n')||(aloo=='N'))
       {
           char mod;
           printf("CAN IT BE EATEN AS DESSERT?\n");
           scanf("%s",&mod);
           if((mod=='Y')||(mod=='y'))
           {   printf("is it usually ring-shaped?\n");
            scanf("%s",z[108]);
            printf("is it a type of dessert food?\n");
            scanf("%s",z[109]);
            printf("is it served both hot and cold?\n");
            scanf("%s",z[109]);

               printf("DOUGHNUT!!\n");
           }
           else if((mod=='n')||(mod=='N'))
           {   printf("are they roughly spherical in shape?\n");
            scanf("%s",z[110]);
            printf("is it a street food?\n");
            scanf("%s",z[111]);
            printf("is it served dry and with gravy both?\n");
            scanf("%s",z[112]);

               printf("MANCHURIAN!!\n");
           }
       }

      }
    }
    break;
    }

    //THIRD CATEGORY OBJECTS
case 3:
    {


    printf("\n THINK OF AN OBJECT FROM THE BELOW LIST IN YOUR MIND!\n");
     printf("ANSWER THE FOLLOWING QUESTION COORECTLY \n ");
printf("1.REFRIGERATOR\n\n2.LAPTOP\n\n3.PENCIL\n\n4.INDUCTION\n\n5.IRON\n\n6.GUITAR\n\n7.MIRCROWAVE\n\n8.MOISTURIZER\n\n");
printf("9.BAG\n\n10.GYSER\n\n11.PEN\n\n12.BOOKS\n\n13.AIR CONDITIONER\n\n14.FLUTE\n\n15.MIXER\n\n16.SHAMPOO\n\n");

 char elect;
 printf("IS IT AN ELECTRONIC ITEM?\n");
 scanf("%s",&elect);
 if((elect=='Y')||(elect=='y'))
 {
    char kitchen;
    printf("IS IT USED AS AN KITCHEN APPLIANCE?\n");
    scanf("%s",kitchen);
    if((kitchen=='y')||(kitchen=='Y'))//checks kitchen
    {
       char rotate ;
       printf("DOES IT ROTATE??\n");
       scanf("%s",&rotate); //checks k3g
       if((rotate=='y')||(rotate=='Y'))
        {
            char grind;
            printf("IS IT USED TO GRIND FOOD??\n");
            scanf("%s",&grind);
                                                        // checks age
            if((grind=='y')||(grind=='Y'))
            {
                printf("Can we mix stuff with it?\n");
            scanf("%s",z[113]);
            printf("Can we use it to cut?\n");
            scanf("%s",z[114]);
            printf("Does it serves to prepare smoothie/Juice?\n");
            scanf("%s",z[115]);
            printf(" Does it have Blades?\n");
            scanf("%s",z[116]);
            printf("Do we find it in a bedroom?\n");
            scanf("%s",z[117]);
               printf("MIXER!!");
            }
             else if((grind=='n')||(grind=='N'))
             {
                 printf(" Can we switch it off?\n");
            scanf("%s",z[118]);
            printf("Can we hold it with a single hand?\n");
            scanf("%s",z[119]);
            printf("Dies it have wheel?\n");
            scanf("%s",z[120]);
            printf("Can it be opened or closed?\n");
            scanf("%s",z[121]);
            printf("Can we use it to make cake?\n");
            scanf("%s",z[122]);
                 printf("MICROWAVE");

             }
        }
        else if((rotate=='n')||(rotate=='N'))
        {
            char cooling;
            printf("IS IT USED FOR COOLING PURPOSE??\n");
            scanf("%s",&cooling); //   check sandwhcih NIMP
             if((cooling=='y')||(cooling=='Y'))
            {
                printf("Is it heavy?\n");
            scanf("%s",z[199]);
            printf("Dies it belong to bedroom?\n");
            scanf("%s",z[198]);
            printf("Does it touch the floor?\n");
            scanf("%s",z[197]);
            printf("Does it contain gas?\n");
            scanf("%s",z[196]);
            printf("Can it store food?\n");
            scanf("%s",z[195]);

            printf("REFRIGERATOR!\n ");
            }
            else if((cooling=='n')||(cooling=='N'))
            {
                printf("Is is connected to a wire?\n");
            scanf("%s",z[194]);
            printf("Can we put something on top of it?\n");
            scanf("%s",z[193]);
            printf("Can it be used to cook food?\n");
            scanf("%s",z[192]);
            printf("Does it emit heat?\n");
            scanf("%s",z[191]);
            printf("INDUCTION!!\n");
            }
        }

    }
    else if((kitchen=='n')||(kitchen=='N'))
    {
        char heat;
      printf("DOES YOUR OBJECT NEEDS TO BE HEATED?\n");   //checks heat
       scanf("%s",heat);
       if((heat=='Y')||(heat=='y'))
       {
           char cloths;
           printf("IS IT FOR CLOTHS?\n");
           scanf("%s",&cloths);
           if((cloths=='Y')||(cloths=='y'))
           {
               printf("Does it make noise?\n");
            scanf("%s",z[184]);
            printf("Do we use it after laundry?\n");
            scanf("%s",z[183]);
            printf("Is it hot?\n");
            scanf("%s",z[182]);
            printf("Does it possess clothes?\n");
            scanf("%s",z[181]);
            printf("Can we hold it in a single hand?\n");
            scanf("%s",z[180]);

               printf("IRON!!\n");
           }
           else if((cloths=='n')||(cloths=='N'))
           {
               printf("Does it have a relationship with water?\n");
            scanf("%s",z[179]);
            printf("Does it have a relation with heat?\n");
            scanf("%s",z[178]);
            printf(" Is it mostly used in winter's?\n");
            scanf("%s",z[177]);
            printf("Can we use it in a living room?\n");
            scanf("%s",z[176]);
            printf("Is it found in a bathroom?\n");
            scanf("%s",z[175]);
               printf("GYESER!!\n");
           }
       }
       else if((heat=='n')||(heat=='N'))
       { char cool;
           printf("IS IT USED FOR COOLING PURPOSE?\n");
           scanf("%s",&cool);
           if((cool=='Y')||(cool=='y'))
           {
               printf("Is it heavy?\n");
            scanf("%s",z[174]);
            printf("Mostly found in a bedroom/Hall?\n");
            scanf("%s",z[173]);
            printf(" Is it Rectangular?\n");
            scanf("%s",z[172]);
            printf(" Do we fix it on the walls\n");
            scanf("%s",z[171]);


                    printf("AIR CONDITIONER!!\n");
           }
           else if((cool=='n')||(cool=='N'))
           {
               printf("Can we put it in a bag?\n");
            scanf("%s",z[190]);
            printf("Can we use it to play video games?\n");
            scanf("%s",z[189]);
            printf("Does it have a screen?\n");
            scanf("%s",z[188]);
            printf("Can it be used for programming?\n");
            scanf("%s",z[187]);
            printf("Does it have a keyboard?\n");
            scanf("%s",z[186]);

               printf("LAPTOP!!\n");
           }
       }
    }

}
//CHECKS NON -ELETRONIC OBJECT
else if((elect=='n')||(elect=='N'))
{
char school;
    printf("IS IT A SCHOOL/COLLEGE SUPPLY??\n");
    scanf("%s",&school);
    if((school=='y')||(school=='Y'))
    {
       char write;
       printf("IS THIS OBJECT USED FOR WRITING PURPOSE??\n");
       scanf("%s",&write); //checks k3g
       if((write=='y')||(write=='Y'))
        {
            char erase;
            printf("TEXT WRITTEN FROM THIS OBJECT CAN BE ERASED EASILY??\n");
            scanf("%s",&erase);
                                                        // checks age
            if((erase=='y')||(erase=='Y'))
            {
                printf("Is it hard?\n");
            scanf("%s",z[185]);
            printf("Is it bigger than a foot?\n");
            scanf("%s",z[184]);
            printf("can we write with it?\n");
            scanf("%s",z[183]);
            printf("Is it made of metal?\n");
            scanf("%s",z[182]);
            printf("can it be made from wood?\n");
            scanf("%s",z[181]);
             printf("PENCIL!!\n");
            }
             else if((erase=='n')||(erase=='N'))
             {
                 printf("Have you ever borrowed this from someone ?\n");
            scanf("%s",z[180]);
            printf("Is it erasable?\n");
            scanf("%s",z[179]);
            printf("Can it get leaked?\n");
            scanf("%s",z[178]);


             printf("PEN!!\n");
            }
        }
        else if((write=='n')||(write=='N'))
        {
            char keep;
            printf("IS IT USED TO KEEP ALL THE SCHOOL SUPPLIES IN IT ??\n");
            scanf("%s",&keep); //check holiday movie NIMP
             if((keep=='y')||(keep=='Y'))
            {
                printf("Can we buy it?\n");
            scanf("%s",z[170]);
            printf(" Can it be opened or closed?\n");
            scanf("%s",z[169]);
            printf(" Do we store something in it?\n");
            scanf("%s",z[168]);
            printf("Can we find books in it?\n");
            scanf("%s",z[167]);
            printf(" Does it have a liquid content?\n");
            scanf("%s",z[166]);

                printf("BAG!!\n");
            }
            else if((keep=='n')||(keep=='N'))
            {
                printf("Is it made of paper?\n");
            scanf("%s",z[165]);
            printf("Is it only for adults?\n");
            scanf("%s",z[164]);
            printf("Do we use it for teaching?\n");
            scanf("%s",z[163]);
            printf("Do we find it in a university?\n");
            scanf("%s",z[162]);
            printf("BOOK!!\n");
        }
        }

    }
    else if((school=='n')||(school=='N'))
    {
        char instrument;
      printf("IS IT A MUSICAL INSTRUMENT\n");   //checks movie
       scanf("%s",&instrument);
       if((instrument=='n')||(instrument=='N'))
       {
           char bath;
           printf("IS IT USED DURING BATHING?\n");
           scanf("%s",&bath);
           if((bath='Y')||(bath='y'))
           {
               printf(" Does it have a liquid content?\n");
            scanf("%s",z[161]);
            printf(" Does it smell good?\n");
            scanf("%s",z[160]);
            printf("Do Hairdressers use it to do their job?\n");
            scanf("%s",z[159]);

               printf("SHAMPOO!!\n");
           }
           else if((bath=='n')||(bath=='N'))
           {
               printf("Can it be found in stores?\n");
            scanf("%s",z[158]);
            printf(" Does it serve to remove hair?\n");
            scanf("%s",z[157]);
            printf("Is it out on foot or hand?\n");
            scanf("%s",z[156]);
            printf(" Does it soften dry skin?\n");
            scanf("%s",z[155]);
            printf(" Is it white?\n");
            scanf("%s",z[154]);
            printf("MOISTURIZER!!\n");
           }
       }
       else if((instrument=='y')||(instrument=='Y'))
       {
           char stri;
           printf("DOES IT HAVE STRINGS IN IT?\n");
           scanf("%s",&stri);
           if((stri=='Y')||(stri=='y'))
           {
               printf("Do most people have it?\n");
            scanf("%s",z[153]);
            printf("Does it have more than 4 strings?\n");
            scanf("%s",z[152]);
            printf("Does it have a long neck?\n");
            scanf("%s",z[151]);
            printf("Can it be made of wood?\n");
            scanf("%s",z[150]);
            printf("Can it be found in recording studio?\n");
            scanf("%s",z[149]);
            printf("Does it have types?\n");
            scanf("%s",z[148]);
               printf("GUITAR!!\n");
           }
           else if((stri=='n')||(stri=='N'))
           {
               printf("Can we put it to mouth?\n");
            scanf("%s",z[147]);
            printf("Does it have holes?\n");
            scanf("%s",z[146]);
            printf("Can it be made of metal/wood\n");
            scanf("%s",z[145]);
            printf(" Is it long?\n");
            scanf("%s",z[144]);

               printf("FLUTE!!\n");
           }
       }

      }
    }
    }

}
i++;
}

getch();

}
void SetColor(int ForgC)
{
     WORD wColor;
     //This handle is needed to get the current background attribute

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     //csbi is used for wAttributes word

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          //To mask out all but the background attribute, and to add the color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
}

