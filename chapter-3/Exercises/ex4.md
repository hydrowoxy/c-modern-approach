They'll be:
- i == 10
- x == .3
- j == 5

Because first it's looking to match %d with something, so it's looking for an int. sees 1, good. sees 0, good. sees .; . can't be in an int. so it terminates and puts the . back. and i stores 10.

Then it resumes and is now looking to match %f so it wants a float. it sees ., good. sees 3, ok. sees space; space can't be in a float so it terminates and puts the space back? i guess. x stores 0.3.

now it is looking to match %d again. wants an int. sees a space, skip (ignores white space as it looks for the beginning of a number but doesn't ignore it at the end cuz it signals the end of a number). sees 5, good. sees space; can't be part of int. terminates and j == 5.