<?php

class CharFreq
{
    public function ASCII($message)
{
    echo "ASCII Method";
    echo "<br>";
    $freq = array_fill(0, 128, 0);
    for ($i = 0; $i < strlen($message); $i++) {
        $current_char = (int)$message[$i];
        $freq[$current_char]++;
    }

    for ($i = 0; $i < 128; $i++) {
        if ($freq[$i] > 0) {
            echo chr($i). " : ". $freq[$i]. "<br>";
        }
    }
}
}