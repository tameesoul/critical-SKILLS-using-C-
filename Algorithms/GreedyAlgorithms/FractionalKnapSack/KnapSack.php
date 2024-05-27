<?php


class Knapsack 
{
    public $maxCapacity = 0;
    public $currentCapacity = 0;
    public $totalValue = 0;
    public $items = array();
    public function __construct($maxCapacity)
    {
        $this->maxCapacity = $maxCapacity;
    }

    public function addItem($newItem)
    {
        if($newItem->weight>$this->maxCapacity - $this->currentCapacity)
        {
            $diff = $this->maxCapacity - $this->currentCapacity;
            $newItem->weight = $diff;
            $newItem->value = $diff * $newItem->ratio;
        }

        array_push($this->items,$newItem);
        $this->currentCapacity +=$newItem->weight;
        $this->totalValue += $newItem->value;  
    }
}
class Item
{
    public $name;
    public $value;
    public $weight;
    public $ratio;
    public function __construct( $value , $weight , $name)
    {
        $this->value = $value;
        $this->weight = $weight;
        $this->name = $name;
        $this->ratio = $value / $weight;
    }
}