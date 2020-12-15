Individual Work:
1. After implementing the changes, the print method of each respective shape executes.
The result is that all the information about each shape is printed. The shape pointer 
points to a circle - thus uses the circle's print method, same with triangle and rect.

2. It looks like "virtual" calls the derived class's version of the function. So the print 
method of each different type of shape is executed one by one.

3. The same thing is printed as before. The print method is an abstract method but it 
doesn't prevent the other print methods from being used since the abstract method is 
overwritten in other classes.
