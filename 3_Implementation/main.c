#include <stdio.h>
#include <stdlib.h>
#include"election.h"

// define macroname charseq
// total no of the contestants
#define total_no_of_parties
#define party_no_1 "Honda"
#define party_no_2 "Yamaha" 
#define party_no_3 "Ducati" 
#define party_no_4 "KTM"

int vote_Count1 = 0,
    vote_Count2 = 0,
    vote_Count3 = 0,
    vote_Count4 = 0,
    invalid_votes = 0;

void castVote(){

    int choice;
    printf("\n \n <#> <#> <#> <#> Please chooose your Candidate <#> <#> <#> <#> \n \n");
    printf("\n 1. %s", party_no_1);
    printf("\n 2. %s", party_no_2);
    printf("\n 3. %s", party_no_3);
    printf("\n 4. %s", party_no_4);
    printf("\n 5. %s", "None of the above");

    printf("\n \n Input your choice ( 1 - 4 ) : ");
    scanf("%d", &choice);

    switch (choice){
        case 1:
        vote_Count1++;
        break;
        case 2:
        vote_Count2++;
        break;
        case 3:
        vote_Count3++;
        break;
        case 4:
        vote_Count4++;
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
    printf("\n \n #_#_#_#_# Voting Statics #_#_#_#_#");
    printf("\n %s - %d", party_no_1, vote_Count1);
    printf("\n %s - %d", party_no_2, vote_Count2);
    printf("\n %s - %d", party_no_3, vote_Count3);
    printf("\n %s - %d", party_no_4, vote_Count4);
    printf("\n %s - %d", "Spoiled Votes", invalid_votes);

}

void getLeadingCandiate(){
    printf("\n \n #_#_#_#_# Leading Candiate #_#_#_#_#");
    if(vote_Count1 > vote_Count2 && vote_Count1 > vote_Count3 && vote_Count1 > vote_Count4){
        printf("The Leading Candiate is %s", party_no_1);
    }else if(vote_Count2 > vote_Count1 && vote_Count2 > vote_Count3 && vote_Count2 > vote_Count4){
        printf("The Leading Candiate is %s", party_no_2);
    }else if(vote_Count3 > vote_Count2 && vote_Count3 > vote_Count1 && vote_Count3 > vote_Count4){
        printf("The Leading Candiate is %s", party_no_3);
    }else if(vote_Count4 > vote_Count2 && vote_Count4> vote_Count3 && vote_Count4 > vote_Count1){
        printf("The Leading Candiate is %s", party_no_4);
    }else {
        printf("+++++++++++++ Warning!!!!!!!!! No Win-Win Situation ++++++++++++++");
    }
}

int main(){
    int choice;
    do{
        printf("\n \n #_#_#_#_#_# WELCOME TO ELECTION / VOTING 2022 A.D #_#_#_#_#_#");
        printf("\n \n 1. Cast the Vote.");
        printf("\n \n 2. Find the Vote Count.");
        printf("\n \n 3. Find the Leading Candidate.");
        printf("\n \n 0. Exit.");

        printf("\n \n Please Enter Your Choice : ");
        scanf("%d", &choice);

        switch(choice){
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
        printf("\n Error: Invalid Choice !!!");
        }

    } while (choice!=0);

getchar();
}
