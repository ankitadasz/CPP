pointer is a variable used to adress the locatuion of a data
declaration int*p;
initializing  p=&a
dereferencing means going to that location and accesing the data
dereferencing  cout<<*p;

your code section which is inside int main can access heap directly ut it cant access stack so with the help of pointer you can access the heap memeory

when you create an array its memory got allocate in stack but if you want to access the memory in heap you have to use pointer
int a[5]={1,2,3,4} got allocated in stack memory
int a[3]={1,2 3,3}
int *p=new int [3] got allocated in heap memory

when memory is allocated in stack it automatically got deleted after caoming out of the scope 
but in case of heap memory you have dealllocate the memory then you have cut the access of the pointer

but you have to deallocate the memory then you have to caut the acees of the pointer to te heap memory you cannt do it before
because if you cut the acess of the pointer to the heap memory you cant delete the array which can cause the array to stay on heap and cause leakage of memory

system can crash if we dont use pointers carefully...pointers are very dangerious which can caus run time error
suppose you have a programme which has pointer and its showing run tym error and you give the software to another user and when he runs the programe its shows run time error to him which will make bad imression on the programmer
for example a company is selling his car and when the user purchase the car and use it they found some error in the car and they complained it which will make the product owner bad...same as pointer issue

problem caused when programmer carelessly use pointers:-
uninitialized pointer
memory leak//heap memory 
dangling pointer
when you dont want to use the pointer just simply assign it to null
in modern c++ its recommended to use nullptr instead of null
p=null not recommended
p=nullptr recommended