***INTRODUCTION:***<br/>
           This quiz game is played by students to check their knowledge and understand where they stand in the learning process.This helps studentsto work more on where they are lagging .It also enables teachers to understand their pupil  in terms of their studies.<br/>
***RESEARCH:***<br/>
          There are many quiz game present.This can be done mannually in class,but this game saves the time of the teacher and makes the scorelist.This game is also played for fun between students<br/>
           ***4 W'S AND 1H*** <br/>
           **WHO:**<br/>
                      Used by students,teachers anyone who want to test their knowledge.<br/>
           **WHEN:**<br/>
                      During testor while playing a game for fun.<br/>
           **WHAT:**<br/>
                      This is a quizgame played to test one's knowledge.<br/>
           **WHERE:**<br/>
                      This can be used by anyone who can acess the digital world.<br/>
           **HOW:**<br/>
                      This is accomplished by asking a set of predefined questions to the user<br/>
## High Level Requirements
| ID | Description | Status |
|--|--|--|
| HR01 |Main| Implemented |
| HR02 | start | Implemented |
| HR03 | help |  Implemented |
| HR04 | highscore |  Implemented |
| HR05 | exit |Implemented|
| HR06 | Graphical User Interface | Future |


## Low Level Requirements 

| ID | Description | HR ID | Status |
|--|--|--|--|
| LR01 |Main menu should consist 4 options: 1.Main, 2.Start, 3.Highscore,4.Exit  | HR01| Implemented |
| LR02 | Reading user input to select particular option | HR01| Implemented |
| LR03 | To display the instructions of the game  | HR03| Implemented |
| LR04 | Displaying the topscorers  | HR04| Implemented |
| LR05 |exiting the game after finishing it | HR05| Implemented |
| LR06 |A clean graphical user interface with all required buttons for ease of use  | HR06| Future |
## SWOT ANALYSIS:
![swot](https://user-images.githubusercontent.com/101057218/161398687-f2bbe1c7-3418-47fe-a26b-8151dddeaab8.jpg)
## BEHAVIOUR DIAGRAMS:
![behavioural diagrams](https://user-images.githubusercontent.com/101057218/161398819-a15f8a5b-165a-455c-a348-9b35b38d5383.jpg)
## STRUCTURE DIAGRAMS:
![strucural diagrams](https://user-images.githubusercontent.com/101057218/161398853-bbcf1ac2-1c24-4960-82a6-b72f1f8ec941.jpg)
## High Level Test plan
| ID | Description| Expected input |Expected output|Actual output|Type of test|
|--|--|--|--|--|--|
| HR_01|choice is displayed | enter choice | choice is displayed|displaying of choices|scenario based|
| HR_02 | start the game | press1 to start |questions are displayed |displaying the questions|Boundary based|
| HR_03 | help | press 3 to help  | instructions are displayed| instructiomns are displayed|Requirement based|

## Low Level Test plan 

| ID | Description | Expected input |Expected output |Actual output |Type of test|
|--|--|--|--|--|--|
| LR_01 |displaying the  answer | any answer of choice| displaying the answer is right or wrong| displaying the answer is right or wrong|Scenario based
| LR_02 | highscore |Press 2 for high score|top scorers| top scorers | Boundary based|
| LR_03 | exit  |press 0 | exit the game |exit the game|Requirement based|


