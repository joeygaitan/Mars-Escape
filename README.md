# Mars Escape
## Game Point

* The point of the game is to repair your crashed space ship using a assembler to 
repair your space craft in order to fix your space ship and return home. You have 
to assembly the right resources in order to fix your ship and repair your ship and 
leave

 ### Button Features:
* F display's game facts and traits of objects
* E mines and interacts with unique objects like the assembler and the rocket.

### Live Game Structure
* The game will be a 20 by 20 grid
* If Nullptr then it will be displayed as ground
   <br></br> 
    <strong>(World types and states)</strong>
* Player: @
* Ground: .
* Rocket escape exit: ^
* Resource: iron: +, copper: zero 0, gold: &, Cobalt: #
* Rocket Components for assembler: cpu:*, booster: !, engine:%
* Assembler: $

### Development environment
* 20x20 grid to play around with random generation and to see how game states 
* changes over time.
* Additional auto win in the inventory selection.

### How To Run the Game

#### first option

* git clone this project onto your computer and run the Main.exe file. 

#### second option 

* install visual studio code.
* add c++ to your computer and add in cmake extension into visual studio code
* create a build folder in the root repo (folder). 
* then go inside of that folder and run cmake ../
* then run make
* then run ./Project

#### Fourth option 

* install visual studio
* import the projec in the visual studio folder and run it in visual studio.