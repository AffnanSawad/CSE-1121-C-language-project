//PROJECT . CSE1122
//PROJECT NAME - ONLINE VOTING MACHINE.






#include <stdio.h>
#include <stdlib.h>

 char* candidates[4] = {
    "Candidate A",
    "Candidate B",
    "Candidate C",
    "Candidate D"
};

void displayCandidates() {
printf("Candidates:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d. %s\n", i + 1, candidates[i]);
    }
    printf("\n");
}

int main() {
    int votes[4] = {0};

    printf("Welcome to the Voting Machine!\n");
    displayCandidates();

    int voterId;
    int vote;

    for (int i = 0; i < 3 ; i++) {
        printf("Voter %d,  enter your voter ID (1-5): ", i + 1);
        scanf("%d", &voterId);

        if (voterId < 233001  || voterId > 233040) {
            printf("Invalid voter ID....\n");
            i--;
            continue;
        }

        printf("Hello, Voter %d! candidates selection... (1-%d): ", voterId, 4);
        scanf("%d", &vote);

        if (vote < 1 || vote > 4) {
            printf("Invalid choice\n");
            i--;
            continue;
        }

        votes[vote - 1]++;
        printf("Thank you, Voter %d! Your vote done.\n\n", voterId);
    }



// NAME : AFFNAN SAWAD
// ID - C233038
// PROJECT NAME :- ONLINE VOTING MACHINE..//
//TASK - FIND OUT THE WINNER !!!


int maxv = votes[0];

int winnerIndex = 0;


for (int i = 1; i < 4; i++) {
        if (votes[i] > maxv) {
            maxv = votes[i];
            winnerIndex = i;
        }
    }



    printf("Voting ended successfully Alhhamdulillah!!!\n\n\n\n");
    printf("Vote counts:- \n");
    for (int i = 0; i < 4; i++) {
        printf("%s: %d votes\n", candidates[i], votes[i]);
    }

    printf("\n%s is the winner with %d votes!\n", candidates[winnerIndex], maxv);



    return 0;

    }