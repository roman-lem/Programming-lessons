  #include <stdio.h>
  #include <stdlib.h>
  
  void danger_identification(int N, float (*slopes)[4], int *danger){
      int i, j;
      for(i = 0; i < N; i++){
          float max = slopes[i][0]; 
          float min = slopes[i][1];
          for(j = 0; j < 3; j++){
              if(max < slopes[i][j]) max = slopes[i][j];
              if(min > slopes[i][j]) min = slopes[i][j];
          }   
          if((slopes[i][3] <= max) && (slopes[i][3] >= min)) danger[i] = 1;
          else danger[i] = 0;
      }
  }
