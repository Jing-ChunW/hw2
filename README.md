# hw2
in main.cpp
in line 28 to 101
first part is to set the freq and show on the screen, 
use the method of Lab5 to control the output of LCD, 
and use Analogin to get the button signal to control the information show on the screen.
in line 107 to 139
then we need to create a specific triangle waveform, take it as input of RC filter, 
I divide it into two part, one is go up from 0 to 3, the other is from 3 to 0.
After we create a input triangle waveform, we can get a output result.
Use picoscope to get the waveform.
Finally, using analogin to read the signal, then sampling it, and compare the result of original one and the one doing FFT.
in FFT.py
It is the process of doing FFT.

FFT做完的結果可以看到頻率有對到我特定的頻率，週期也會跟著改變，以fc = 360為例，一個周期的時間大約是0.0028s，換成F會是357Hz符合我的頻率，在下方的頻率軸上突起的位置也能對應到我的頻率。
還有在時間那塊的波形於低頻的時候(低於fc)，三角波較完整還有在時間那塊的波形於低頻的時候(低於fc)，三角波較完整，超過fc以後尖角就會變得比較圓。
用picoscope測量，波形雖然過比較久才出現，但出來的結果，以時間軸去測量一個週期，換算頻率，結果也能對應到我設的100Hz、360Hz(fc)、550Hz。
