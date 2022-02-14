#include <stdio.h>
void wordGenerator(  int number[] );
int main( void )
{
  int loop;
  int phnNumber[ 7 ] = { 0 };
 
 printf( "%s", "Enter a phone number one digit at a time" );

 // Loop fot to enter number 7 times by User
 for ( loop = 0; loop <= 6; ++loop )
 {
 printf( "%s", "? " );
 scanf( "%d", &phnNumber[ loop ] );
 // Condition If number btween 2 & 9
 while ( phnNumber[ loop ] < 2 || phnNumber[ loop ] > 9 )
 {
 printf( "%s", "\nInvalid number entered. Please enter again: " );
 scanf( "%d", &phnNumber[ loop ] );
 }
 }
 
wordGenerator( phnNumber ); // Func To Generate words From Number
}


void wordGenerator(  int number[] )
 {
      int loop; 
      int loop1; 
      int loop2; 
      int loop3; 
      int loop4;
      int loop5; 
      int loop6; 
      int loop7; 
     FILE *phnPtr;

  char *phnLetters[ 10 ] = { "", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PRS", "TUV", "WXY"} ;

  if ( ( phnPtr = fopen( "num.out", "w" ) ) == NULL ) {
  puts( "Output file was not opened." );  }
  else { // print all possible combinations
  for ( loop1 = 0; loop1 <= 2; ++loop1 )
  {
     
     for ( loop2 = 0; loop2 <= 2; ++loop2 )
     {
     for ( loop3 = 0; loop3 <= 2; ++loop3 )
     {
     for ( loop4 = 0; loop4 <= 2; ++loop4 )
     {
     for ( loop5 = 0; loop5 <= 2; ++loop5 )
     {
     for ( loop6 = 0; loop6 <= 2; ++loop6 )
     {
     for ( loop7 = 0; loop7 <= 2; ++loop7 )
     {
         fprintf( phnPtr, "%c%c%c%c%c%c%c\n",
         phnLetters[ number[ 0 ] ][ loop1 ],
         phnLetters[ number[ 1 ] ][ loop2 ],
         phnLetters[ number[ 2 ] ][ loop3 ],
         phnLetters[ number[ 3 ] ][ loop4 ],
         phnLetters[ number[ 4 ] ][ loop5 ],
         phnLetters[ number[ 5 ] ][ loop6 ],
         phnLetters[ number[ 6 ] ][ loop7 ] );
     }
     }
     }
     }
     }
     }
     }

 fputs( "\nPhone number is ", phnPtr ) ;

  for ( loop = 0; loop <= 6; ++loop )
  {
      if ( loop == 3 )
      {
          fprintf( phnPtr, "-" );
         
      }
     fprintf( phnPtr, "%d", number[ loop ] );
     
  }
 }
 fclose( phnPtr );
   
 }
