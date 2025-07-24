#include <stdio.h>
//consider a 5 by 20 array grades
//write a declaration for grades 
int grades[5][20] = {0};
int main(void){

// how many rows does the array have? 
 5

//how many columns?
 20

//how many elements does the array have? 
 100

//write the name of all the elements in the first column of the array
 grades[0][0], grades[1][0], grades[2][0], grades[3][0], grades[4][0]

//write the name of the element in the third row and second column
  grades[2][1]

//write a single statement to assign the value 100 to the element in the first row and second column
  grades[0][1] = 100;
 
//write a nested loop to get all the elements from a keyboard
  for(size_t i = 0; i < 5; ++i){
    for(size_t j = 0; j < 20; ++j){
      scanf("%d", grades[i][j]);	    
    }
  }

//write a nested for loop to initialize all the elements to zero
 for(size_t i = 0; i < 5; ++i){
   for(size_t j = 0; j < 20; ++j){
     grades[i][j] = 0;	   
   }
 }

//write a statement that copies the values from an array double mathgrades[20] into the first row of grades
  double mathgrade[20] = {23.0, 30.0, 30.0, 44.0, 50.0, 14.0, 41.0, 25.0, 10.0, 0.0, 36.0, 48.0, 27.0, 15.0, 36.0, 21.0, 50.0, 35.0, 17.0, 17.0};
  int grades[5][20] = {{0},{0},{0},{0},{0}};

  for(size_t i = 0; i < 20; ++i){
    grades[0][i] = mathgrades[i];
  }

//write a series of statements that determine and print the highest value first row of grades
  for(size_t i = 0, position, largest; i < 20; ++i){
    largest = 0; 
    if(grades[0][i] > largest){
      largest = grades[0][i];
      position = i;
    }
    printf("the largest number in the top row is %d which is in position %d.", largest, position)	  
  }

//write a statement to display the elements in column 2 of the array.
  for(size_t i = 0; i < 5; ++i){
    printf("%3d", grades[i][1]);
  }

//write a statement to calculate the average ofthe elements in the first row.
  int average;  
  for(size_t i = 0; i < 20; ++i){
    average += grade[0][i];
  }
  average = average / 20;

// write a series of statements that print the array grades in tabular formats. list the column subscripts as headings accross the top and list the row subscripts at
// the left side of the table 
  printf("the table is as follows:\n ");
  
  for(int i = 0; i < 20; ++i){
    printf("%3d", i);
  }
  printf("\n");  
  for(size_t i = 0; i < 5; ++i){
    printf("%zu", i);
    for(size_t j = 0; j < 20; ++j){
      printf("%3d", grades[i][j]);
    }
  printf("\n");
  }
}
