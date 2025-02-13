#  Morse code translator
This is just a fun little project that I finished in two hours.
A simple text to morse code translator. 

```
This is the input.  =>  - .... .. ...   .. ...   - .... .   .. -. .--. ..- - .-.-.-
Another input!      => .- -. --- - .... . .-.   .. -. .--. ..- - -.-.--
```

#  How to use
You can simply run `make` to compile the program. Two files will be created <strong>morse</strong> and <strong>morse.a</strong>.
<strong>morse</strong> is an executable that you can feed any string to from within the terminal. Example:
```bash
./morse "This is a test input." "All arguments are printed on their own line."
```

The <strong>morse.a</strong> file is a static library that you can compile into your own projects.

#  Translation table
```
A or a    =>    .-
B or a    =>    -...
C or a    =>    -.-.
D or a    =>    -..
E or a    =>    .
F or a    =>    ..-.
G or a    =>    --.
H or a    =>    ....
I or a    =>    ..
J or a    =>    .---
K or a    =>    -.-
L or a    =>    .-..
M or a    =>    --
N or a    =>    -.
O or a    =>    ---
P or a    =>    .--.
Q or a    =>    --.-
R or a    =>    .-.
S or a    =>    ...
T or a    =>    -
U or a    =>    ..-
V or a    =>    ...-
W or a    =>    .--
X or a    =>    -..-
Y or a    =>    -.--
Z or a    =>    --..
0         =>    -----
1         =>    .----
2         =>    ..---
3         =>    ...--
4         =>    ....-
5         =>    .....
6         =>    -....
7         =>    --...
8         =>    ---..
9         =>    ----.
.         =>    .-.-.-
,         =>    --..--
?         =>    ..--..
!         =>    -.-.--
-         =>    -....-
_         =>    ..--.-
/         =>    -..-.
@         =>    .--.-.
(         =>    -.--.
)         =>    -.--.-
'         =>    .----.
"         =>    .-..-.
:         =>    ---...
;         =>    -.-.-.
=         =>    -....-
+         =>    .-.-.
$         =>    ...-..-
&         =>    .-...
```

#  Possible improvements
What I plan on doing in the near future is adding functionality for custom short (.) and long (-) signals. That means a code could look like this: :::: : :*:: :*:: ***