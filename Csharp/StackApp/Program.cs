using StackApp.Models;

var numbers = new int[] {1, 2, 3};

var stack_numbers = new LinkedListStack(numbers);
stack_numbers.Push("Ahmet");

System.Console.WriteLine(stack_numbers.Peek() + "");

var cities = new List<String>()
{
    "İstanbul", "Ankara", "Samsun"
};

var stack_cities = new ListStack(cities);

System.Console.WriteLine(stack_cities.Peek() + "");

