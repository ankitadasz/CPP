through inheritance we can achieve reusabillity in programe
inheritance means one class inheriting the property of another class 
basic syntax for writing inheritance is class derived : public your class name
dERIVED CLASS IS INHERITING FROM THE BASE CLASS
the class which is inheriting is known as child class where as the class from where the class is inheriting is known as parent class

Mode of inheritance:
if the mode is public in parent class while inheriting then the mode will remain same for child class also and it will be accessable outside it also

if you have mode private in parent class but making it publuc in child class it will not be accessable

if you have mode public in parent class but you have accessed it in child class as private then you can access it inside class only

in parent : public   in child:protected  then it will be protected
in parent:protected  in child:public     then it will be protected
in parent:protected  in child:rotected   then it will be protected
in parent:protected  in child:private    then it will be private

in parent:private  in child:public     then it will be not accessible
in parent:private  in child:rotected   then it will be not accessible
in parent:private  in child:private    then it will be not accessible

protected is kind of like private
you can access it inside a class and if you inherit a child class then also u can use it inside the child class

Types of Inheritance
-single
-multilevel
-multiple
-hirarichal
-Hybrid

Inheritance Ambiguity-
suppose we have a class c which is inheriting the calss a and b,,,and a and b both have function having same name ,so when we will make a object of c and call the function then which function it will call ? because we have same name function in that case scope is used
C.A::func1()
C.B::func1()