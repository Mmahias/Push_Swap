# Push_Swap
Project: Push_swap | 42. This project aims to sort data on a stack, with a limited set of instructions, using
the smallest possible number of actions.

Succeeded with: _(To be validated at 80% minimum)_

[![jaeskim's 42Project Score](https://badge42.herokuapp.com/api/project/mmahias/push_swap)](https://github.com/Mmahias/badge42)

--------------------------------------------------------------------------------------------------------------------------------

## Rules:
  
  * **sa** : _swap a_ - swap the first 2 elements at the top of stack a.
  * **sb** : _swap b_ - swap the first 2 elements at the top of stack b.
  * **ss** : _sa_ and _sb_ at the same time.
  * **pa** : _push a_ - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
  * **pb** : _push b_ - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
  * **ra** : _rotate a_ - shift up all elements of stack a by 1. The first element becomes
the last one.
  * **rb** : _rotate b_ - shift up all elements of stack b by 1. The first element becomes
the last one.
  * **rr** : _ra_ and _rb_ at the same time.
  * **rra** : _reverse rotate a_ - shift down all elements of stack a by 1. The last element becomes the first one.
  * **rrb** : _reverse rotate b_ - shift down all elements of stack b by 1. The last element becomes the first one.
  * **rrr** : _rra_ and _rrb_ at the same time.

-------------------------------------------------------------------------------------------------------------------------------

## Usage:

```bash
$>./push_swap 2 1 3 6 5
```

* With ```wc -l```:

```bash
$>ARG="2 1 3 6 5"; ./push_swap $ARG | wc -l
```

* With checker:

```bash
$>ARG="2 1 3 6 5"; ./push_swap $ARG | ./checker_linux $ARG
```
