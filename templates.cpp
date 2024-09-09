//Defination
/*
A function is feature in cpp that allows functions and classes to operate with generic types enabling them to work on different data types
without being rewritten */

/*
A template function is a generic function that can work with any data type, it is define using the template keyword follow by template parameter
or written with a generic type placeholder which are replaced with specific types when the function is called

A syntax for defining a template function starts with the template keyword followed by a template parameter enclosed in angle brackets <>
 */
template <typename T>
T add (T a, T b) {
    return a + b;
}

/*
Similar to template function, a template class is a blueprint for creating classes that can handle any data type.
*/
template <typename T>
class Stack {
    T arr[100];
    int top;
    //class method ...
};

//General Rules for Template function and Template classes:

/*
Syntax:
The syntax for defining a template is "template <typename T> or template <class T>"

Type Inference
When calling a template function, the compiler can infer or deduce the type based on the arguments provided

Type Safety
Template function and classes are type-safe. This means that a function or class created for one data type will not accept another data
unless explicitly instantiated for it.

Code Reusability
with just a single function or class, the code can work for different data structures.
*/

//Example
/*
Question: Which of the following template function definition is/are correct for determining and returning the average of all values from the array?
*/
template <typename T>
T compAvg(T arr[], int n) {
    T sum = 0;
    for (int i=0; i<n; i++)
        sum += arr[i];
    return sum/n;
}
/*
This function correctly compute the sum of an array of type T and divides by n to get the average. T can be of floating-point type and n represent the number of arrays
*/
template <typename T>
T compAvg(T arr[], T n) {
    T sum = 0;
    for (int i=0; i<n; i++)
        sum += arr[i];
    return sum/n;
}
/*
This is wrong because n is define as type T rather than int, n represent the size of the array which is always int
since T is template parameter, if it is pass a float then the for loop which expects an int will cause problem. for(int i=0; i<n; i++)
*/
template <class T>
int compAvg(T arr[], int n){
    int sum = 0;
    for(int i = 0; i<n; i++)
        sum += arr[i];
    return sum/n;
}
/*
This function is incorrect because the the sum is declared as an int, since we are working with floating points the sum should also be float
*/

template <class T>
T compAvg(T arr[], int n){
    for (int i=0; i<n; i++)
        sum += arr[i];
    return sum/n;
}
//similar to a except it uses class template keyword

//Question
//Which of the following function calls is/are correct for the above context?
cout << compAvg<float>(arr, '5') << endl;
//'5' is a char instead of an int
cout << compAvg(arr, 5) << endl;
// this is correct because regardless of spicifying the type or not, the compiler can inteligently deduce the type from the template argument
cout << compAvg<int>(arr, 5) << endl;
//function call specifies int instead of float
cout << compAvg<float>(arr, 5) << endl;
//this is correct as the template call specifies a float and the array specifies a int number.


//Example
template <class T>
int countValue(T arr[], int n, T value) {
    int count = 0;
    for(int i = 0; i < n; i++)
        if (arr[i] == value)
            count++;
    return count;
}
/*
The loop iterate over the array and checks if each element equals the given value if so, it increment the count.
*/

template <typename T>
int countValue(T arr[], int n, T value) {
    int count = 0;
    for(int i = 0; i < n; i++)
        if (arr[i] == value)
            count++;
    return count;
}

//similar to the above except it uses typename instead of class
template <class T>
T countValue(T arr[], int n, T value) {
    T count = 0;
    for(int i = 0; i < n; i++)
        if (arr[i] == value)
            count++;
    return count;
}
//incorrect because count is declared as type T, which is incorrect since it should be an int indicating the number of matches

template <typename T>
int countValue(T arr[], T n, int value) {
    int count = 0;
    for(int i = 0; i < n; i++)
        if (arr[i] == value)
            count++;
    return count;
}
/*
incorrect because the parameter n is of type T but should be of type int since it  represent the size of the array.
*/

cout << countValue<string>(arr, '5', string("eat")) << endl;
//This function call is incorrect because it uses '5', a char, as the second argument. The function expects an int type for the array size.
cout << countValue(arr, 5, string("eat")) << endl;
//This function call is correct. The template type string is inferred from the array arr. The array size 5 is passed correctly as an int, and the value string("eat") is passed correctly as a string.
cout << countValue<int>(arr, 5, string("eat")) << endl;
//This function call is incorrect because it specifies int as the template type, while the array is of type string. There is a type mismatch.
cout << countValue<string>(arr, 5) << endl;
//This function call is incorrect because it is missing the third argument (value) that the function needs to count occurrences.


//Question
/*
In a template <typename T> declaration, what does T stand for?
*/
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    float m = 5.5, n = 10.5;
    cout << add(x, y);    // T is int
    cout << add(m, n);    // T is float
}
/*
In a template <typename T> declaration, T is a template parameter that represents a generic data type. It is a placeholder for any data type (such as int, float, char, string, etc.) 
that will be specified when the function or class template is instantiated. When you use T in a function or class, it will be replaced with the actual type that is passed during the 
function call or object creation. For example:
In this example, T is replaced with int in the first call to add and float in the second call.
*/

//What is the number of template arguments allowed in a function template?
template <typename T1, typename T2, typename T3>
T1 add(T2 a, T3 b) {
    return a + b;
}
/*
There is no strict limit on the number of template arguments allowed in a function template in C++. You can have as many template parameters as needed. However, in practice, a large 
number of template parameters can make the code complex and difficult to understand or maintain.
*/

//What is the scope of a template parameter?
template <typename T>
T square(T x) {
    return x * x;
}

// Outside the template definition, T is not recognized
// T someVariable;  // This would cause a compilation error
/*
The scope of template parameters is limited to the definition of the template itself. This means that template parameters can be used within the function or class 
template where they are defined but are not accessible outside of it.
*/