text = name, 
    system.format {"hello, " name}.
print = system.compute 
{   name = system.input "print your name"
.   text (name) -> system.output
}.
print
