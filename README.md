#ECE 3220 Personal Finance Project

Our goal was to allow the user to manipulate their bank statements to understand their spending habits. We decided to implement a program for personal bank statements in CSV format that allows the user to sort their statements into different tags.

Tags are similar to categories. Each tag will have an array of keywords associated with it. If the keyword of a certain tag exists in the description of a statement, then that statement will be assigned that tag. For example, adding the tag 'food' will allow us to add keywords to that tag, such as 'TACO BELL'. Every statement that has 'TACO BELL' in its description will then be tagged as food. The tags can be saved as an output CSV file and imported into the program to be used again.

Two main classes were created, Tag and Statement. Each class includes a vector as well as functions defined that allows you to read through the bank statement and perform different options depending on the user choice. You will be able to make an array of statements creating a sorted list. The Statement class will have an array of keywords as one of its variables. The functions of the program will check for certain associated keywords for each statement and will decide to sort the statement into certain lists based on those keywords. A Master Vector class was created to include all functions defined in the Tag and Statement classes to allow us to print the statement and output a CSV file of the statement modified by the user. 

To run the program, the user will compile using 'make'. They will be asked to enter a filepath to the bank statement file. After their input, they will then be asked for a filepath to a tag file or have the option to skip. The following option list will appear for the user to input their choice. 
```
Select an Option:
('q' to quit)	
(A)dd Lists, Tags, or Keywords
(V)iew Lists, Tags, or Keywords
(U)pdate Tags
(D)isplay all untagged Statements
(S)ave Account
```
If the user input was A or a, the following option list allows the user to choose between adding to list, tag and keyword. 
```
Enter 'L' to add a list, 'T' to add a tag, 'K' to add a keyword, or 'Q' to stop
```
If the user input was V or v, the following option list allows the user to choose between viewing list, tag and keyword.
```
Enter 'L' to view all lists, 'T' to view all tags, 'K' to view all keywords, or 'Q' to stop
```
If the user input was U or u, the program will update tags through the master vector. 

If the user input was D or d, the display the statements. 

If the user input was S or s, the following option list allows the user to save as a CSV file or save tags. 
```
Enter 'M' to save the master vector as a CSV, 'T' to save tags, or 'Q' to stop
```
The program will continue to run until the user chooses the option 'Q' to end the program. 
