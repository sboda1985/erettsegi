Írjon C/C++ programot, amely beolvas billentyűzetről egy **n (n [ 2,10^2 ])** természetes számot, majd egy
**n** soros és **n** oszlopos kétdimenziós tömb elemeit, melyek természetes számok a **[ 0,10^9 ]**
intervallumból.
A program kiírja a képernyőre, egy-egy szóközzel elválasztva, a bal felső saroktól indulva,
az óramutató járásával ellentétes irányba haladva, az első koncentrikus négyzet elemeit,
ahogy a mellékelt ábra mutatja. Az első koncentrikus négyzet a tömb első és utolsó
sorából, valamint az első és utolsó oszlopából áll.
<pre>
1 3 1 8 6
2 9 2 7 4
3 5 8 5 2
4 1 6 3 0
5 6 7 8 9
</pre>

> Példa: ha n=5 és a tömb elemei a mellékelt ábrán levő értékek, kiírja a program a képernyőre
**1 2 3 4 5 6 7 8 9 0 2 4 6 8 1 3**