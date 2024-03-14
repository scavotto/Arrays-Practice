// A high school is holding a recycling competition,
// and this program allows a user to enter a student's 
// year in school (1 through 4) and number of cans collected
// for recycling. Data is entered continually until the user
// enters 9 for the year.
// After headings, output is four lines --
// one for each school year class.
start
   Declarations
      num year
      num cans
      num SIZE = 4
      num QUIT = 9
      num collectedArray[4] = 0, 0, 0, 0
      string HEAD1 = "Can Recycling Report"
      string HEAD2 = "Year      Cans Collected"
   output "Enter year of student (1-4) or ", QUIT, " to quit "
   input year
   while year <> QUIT
    if year < 1 or year > 4
        output "Invaid year. Please enter a value between 1 and 4."
        continue
    endif

      output "Enter number of cans collected "
      input cans
      while can < 0
        output "Invalid input. Please enter a non-negative integer."
        input cans
      endwhile     

      collectedArray[year-1] = collectedArray[year-1] + cans

      output "Enter year of student (1-4) or ", QUIT, " to quit "
      input year
   endwhile

   output HEAD1
   output HEAD2

   year = 0
   while year < SIZE
      output year + 1, collectedArray[year]
      year = year + 1
   endwhile
   
stop         