1. wants to match %f. looking for a float. sees 1, ok. sees 2, ok. sees ., ok. sees 3, ok. sees space; can't be part of float, terminates and puts the space back. x == 12.3.
2. wants to match %d. looking for an int. sees space, skips. sees 4, ok. sees 5, ok. sees ., can't be part of int; terminates and puts the . back. i == 45.
3. wants to match %f. looking for a float. sees ., ok. sees 6, ok. sees space; can't be part of float, terminates and puts the space back. y == .6

