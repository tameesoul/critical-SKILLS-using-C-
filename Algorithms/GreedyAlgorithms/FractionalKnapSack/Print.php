<?php

 function print_items($bag){
    echo "----------------------------";
    echo "<br>";
    echo "total value: " . $bag->totalValue;
    echo "<br>";
    echo "current capacity: " . $bag->currentCapacity;
    echo "<br>";
    echo "items:";
    echo "<br>";
    $arryLength = count($bag->items);
   echo "n v w<br>";
    for ($i = 0; $i < $arryLength; $i++) {
      echo $bag->items[$i]->name . " " . $bag->items[$i]->value . " " . $bag->items[$i]->weight;
      echo "<br>";
    }
  }

function print_array($items){
  $arryLength = count($items);
  echo "n v w r<br>";
  for ($i = 0; $i < $arryLength; $i++) {
    echo $items[$i]->name . " " . $items[$i]->value . " " . $items[$i]->weight . " " . $items[$i]->ratio . "<br>";
  }
}