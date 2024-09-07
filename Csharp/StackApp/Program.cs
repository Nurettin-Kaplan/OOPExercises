using StackApp.Models;

var numbers = new int[] {1, 2, 3};

var stack_numbers = new LinkedListStack<int>(numbers);
stack_numbers.Push(10);

System.Console.WriteLine(stack_numbers.Peek() + "");

var cities = new List<String>()
{
    "İstanbul", "Ankara", "Samsun"
};

var stack_cities = new ListStack<string>(cities);

System.Console.WriteLine(stack_cities.Peek() + "");
