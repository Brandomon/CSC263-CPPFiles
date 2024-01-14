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
public interface LinkedListInterface<T>
{
    public boolean isEmpty();
    public int size();
    
    public void append(T obj);
    public void addFront(T obj);
    
    /**
     * Adding to the list at any location
     * if index is zero then adding to front
     * if index is greater than the size then either
     *      Append to the end of the list
     *      Or throw exception  that index if out of bounds
     *      or return boolean where false means index beyond size of list
     * @param obj data to be stored
     * @param index location to insert data into the list
     */
    public void Insert(T obj, int index);
    
    /**
     * Keeping the list sorted. 
     * OBJ must have compareTo method
     * 
     * @param obj data to be stored
     */
    public void Insert(T obj);
    
    public boolean RemoveEnd();
    public boolean RemoveFront();
    public boolean RemoveAt(int index);
    public boolean Remove(T obj);
    public boolean RemoveAll(T obj);
    
    public T GetValue(int pos);
    public T GetValueEnd();
    public T GetValueFront();
    
}
