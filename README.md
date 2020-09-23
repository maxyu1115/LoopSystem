# Loop Interface
Author: Max Yu, https://github.com/maxyu1115

This is a sketched design of a loop interface and groups. 
This is not functional and is only a high level design with many missing pieces.

Highlights:
- whenever a point where music allows for start or stops of loops, calling 
songUpdate in the Group class would make the change happen
- isolated music synchronization issues from the Loop interface, as that should 
happen in my opinion more on a base engine level. (For example, in Unity where
update() is periodically called. )
- Loop delegates majority of feedback to the FeedbackSystem, which should 
handle most visuals. 

**It is assumed that depending on how the user interacts with the game, 
the code in charge of the actual game logic will call the appropriate functions 
on Group and the current Loop**
