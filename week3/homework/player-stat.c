#include <stdio.h>

int main() {
  printf("\
\t\t\t ___________________________________\n\
\t\t\t|            |      |      |        |\n\
\t\t\t| Appearance | Goal | Wins | Losses |\n\
\t\t\t|     %d     |  %d  |  %d  |    %d   |\n\
\t\t\t|____________|______|______|________|\n",\
28, 17, 15, 3);

  printf("\n\
  Attack%34sTeam Play\n\
  Goals%33d  Assists%31d\n\
  Goals Per Match%23.2f  Passes%32.3f\n\
  Goals With Header%21d  Passes Per Match%22.2f\n\
  Goals With Right Foot%17d  Big Chances Created%19d\n\
  Goals With Left Foot%18d  Crosses%31d\n\
  Penalties Scored%22d\n\
  Goals From Freekick%19d\n\
  Shots%33d\n\
  Shots On Target%23d\n\
  Shooting Accuracy %%%18d%%\n\
  Hit Woodwork%26d\n\
  Big Chances Missed%20d\n\
  \n\
  Discipline%30sDefence\n\
  Yellow Cards%26d  Tackles%31d\n\
  Red Cards%29d  Blocked Shots%25d\n\
  Fouls%33d  Interceptions%25d\n\
  Offsides%30d  Clearances%28d\n\
%42sHeaded Clearance%22d\n",\
"", 17, 5, 0.61, 1.041, 4, 37.18, 11, 8, 2, 18, 2, 0, 115, 46, 40, 1, 18, "", 7, 10, 0, 32, 54, 10, 37, 22, "", 18);

  return 0;
}
