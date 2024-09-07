using StackApp.Contract;

namespace StackApp.Models;

public class ListStack : IStack
{
    private List<object> _collection;
    private int _lastIndex => _collection.Count - 1;

    public ListStack(){
        _collection = new List<object>();
    } 

    public object Peek()
    {
        return _collection[_lastIndex];
    }

    public object Pop()
    {
        var temp = _collection[_lastIndex];
        _collection.RemoveAt(_lastIndex);
        return temp;
    }

    public void Push(object item)
    {
        _collection.Add(item);
    }
}