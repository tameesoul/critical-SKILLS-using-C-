<?php
include 'sort.php';
include 'knapsack.php';
include 'print.php';
$values = array(4, 9, 12, 11, 6, 5);
$weights = array(1, 2, 10, 4, 3, 5);


$items = array();

for($i = 0; $i<count($values);$i++)
{
    $newItem = new Item($values[$i],$weights[$i]," # ".$i);
    array_push($items,$newItem);
}

$items = merge_sort($items);

$j = 0;
$knapsack = new Knapsack(12);
while($knapsack->currentCapacity<$knapsack->maxCapacity)
{
    $knapsack->addItem($items[$j]);
    $j++;
}
print_items($knapsack);