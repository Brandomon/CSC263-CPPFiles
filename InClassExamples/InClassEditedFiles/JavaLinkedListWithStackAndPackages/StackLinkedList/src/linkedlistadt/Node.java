/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package linkedlistadt;

/**
 *
 * @author speciosr
 */
public class Node<T>
{
    private Node<T> next;
    private Node<T> previous;
    private T value;
    
    public Node()
    {
        next = previous = null;
        value = null;
    }
    
    public Node(Node<T> next, Node<T> previous, T value)
    {
        this.next = next;
        this.previous = previous;
        this.value = value;
    }

    public Node<T> getNext() {
        return next;
    }

    public void setNext(Node next) {
        this.next = next;
    }

    public Node<T> getPrevious() {
        return previous;
    }

    public void setPrevious(Node previous) {
        this.previous = previous;
    }

    public T getValue() {
        return value;
    }

    public void setValue(T value) {
        this.value = value;
    }
    
    
}
