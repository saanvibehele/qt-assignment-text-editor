# qt-assignment-text-editor
sEdit is a text editor with simple functionalities. It is built using QT Creator. It is inspired from Ubuntu’s Gedit and hence its interface and icon positioning is very similar to gedit. 


## The features covered are:
1. Open existing file
2. Save existing file
3. Save as a new file (if you open an existing file and save it as a new file, sEdit will save both the files :)
4. New File
5. Go to line (specified by a line number)
6. Full Screen view
7. Exit full screen view
8. Help
9. About sEdit
10. About me (Saanvi Behele’s resume)


## How to Run the code
1. Download the zip file
2. Extract it
3. Open the folder: build-sEdit-Desktop-Debug
4. Simply double click the 'sEdit' executable file              
   or                       
   Open the 'build-sEdit-Desktop-Debug' folder in terminal and run the following code:            
   $ ./sEdit              
5. Play with the app and use all the functionalities of text files.

## What has been done
Use of various object oriented concepts to implement this text editor.      
Use of many classes and GUI widgets provided by QT Creator.      
Implementation with understanding of how QT Creator works.          
Use of signal and slots.         
Use of pointers.      
Use of heap as well as stack.        
Use of dialog boxes.        
Use of resource files.          

## Issues/Challenges
1. I was trying to define a new class for text formatting like bold, superscript, subscript and also use the concept of friend class. But I struggled to make it happen.
2. I struggled with the ‘save as’ functionality. When I was trying to save the edited file, the previous copy would be lost. To solve this issue I used the concept of pointers. So that both the files would be saved locally.
3. I struggled with the renaming of the window title. I was unable to rename the window title if the user decides to keep it untitled. Then I solved it by adding another condition to ‘if’. 
4. Overall, I enjoyed making sEdit. It was fun to explore so many new classes, tools, signals, slots and how you link it with each other! This was my very first QT Project. I had to learn how Qt Creator works, but since my c++ is pretty good, I easily grasped it.

