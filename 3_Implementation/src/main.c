#include <stdio.h>
#include <stdlib.h>

// define macroname charseq
// total no of the parties
#define total_no_of_parties
#define party_no_1 "Candidate Rahul"
#define party_no_2 "Candidate Dev" 
#define party_no_3 "Candidate Kumar" 
#define party_no_4 "Candidate Hari"

int vc1 = 0,
    vc2 = 0,
    vc3 = 0,
    vc4 = 0,
    invalid_votes = 0;

void castVote(){

    int c;
    printf("\n \n ** Please chooose your Candidate **** \n \n");
    printf("\n 1. %s", party_no_1);
    printf("\n 2. %s", party_no_2);
    printf("\n 3. %s", party_no_3);
    printf("\n 4. %s", party_no_4);
    printf("\n 5. %s", "None of the above");

    printf("\n \n Input your choice ( 1 - 4 ) : ");
    scanf("%d", &c);

    switch (c){
        case 1:
        vc1++;
        break;
        case 2:
        vc2++;
        break;
        case 3:
        vc3++;
        break;
         case 4:
        vc4++;
        break;
        case 5:
        invalid_votes++;
        break;
        default:
        printf(" \n Error: Wrong Chocie !! Please retry");
            // built in function for holding the screen.
            getchar();
    }
    printf(" \n Thanks for your vote !!");

}

void votesCount(){
    printf("\n \n ##### Voting Statics #####");
    printf("\n %s - %d", party_no_1, vc1);
    printf("\n %s - %d", party_no_2, vc2);
    printf("\n %s - %d", party_no_3, vc3);
    printf("\n %s - %d", party_no_4, vc4);
    printf("\n %s - %d", "Spoiled Votes", invalid_votes);

}

void getLeadingCandiate(){
    printf("\n \n ##### Leading Candiate #####");
    if(vc1 > vc2 && vc1 > vc3 && vc1 > vc4){
        printf("The Leading Candiate is %s", party_no_1);
    }else if(vc2 > vc1 && vc2 > vc3 && vc2 > vc4){
        printf("The Leading Candiate is %s", party_no_2);
    }else if(vc3 > vc2 && vc3 > vc1 && vc3 > vc4){
        printf("The Leading Candiate is %s", party_no_3);
    }else if(vc4 > vc2 && vc4> vc3 && vc4 > vc1){
        printf("The Leading Candiate is %s", party_no_4);
    }else {
        printf("+++++++++++++ Warning!!!!!!!!! No Win-Win Situation ++++++++++++++");
    }
}
int main(){
    int ch;
    do{
        printf("\n \n *** WELCOME TO ELECTION / VOTING 2022 A.D ***");
        printf("\n \n 1. Cast  Your Vote.");
        printf("\n \n 2. Find your Vote Count.");
        printf("\n \n 3. Find your Leading Candidate.");
        printf("\n \n 0. Exit.");

        printf("\n \n Please Enter Your Choice : ");
        scanf("%d", &ch);

        switch(ch){
        case 1:
        castVote();
        break;
        case 2:
        votesCount();
        break;
        case 3:
        getLeadingCandiate();
        break;
        default:
        printf("\n Error: Invalid Choice PLease cast your vote again!!!");
        }

    } while (ch!=0);

getchar();
}
