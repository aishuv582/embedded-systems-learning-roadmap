# Day Learning – C Programming Loops

Today I learned about **loops in C programming**, specifically the **for loop** and **while loop**. Loops are used to execute a block of code repeatedly until a condition becomes false. They help reduce code repetition and make programs more efficient.

---

## 1. For Loop

The **for loop** is used when the number of iterations is known. It combines initialization, condition checking, and increment/decrement in a single line.

### Syntax

```c
for(initialization; condition; increment/decrement)
{
    // statements
}
```

### Example Program

```c
#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
```

### Output

```
1
2
3
4
5
```

### Explanation

* **Initialization**: `i = 1`
* **Condition**: `i <= 5`
* **Increment**: `i++`

The loop prints numbers from **1 to 5**.

---

## 2. While Loop

The **while loop** is used when the number of iterations is not fixed. The loop continues running as long as the condition is true.

### Syntax

```c
while(condition)
{
    // statements
}
```

### Example Program

```c
#include <stdio.h>

int main()
{
    int i = 1;

    while(i <= 5)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
```

### Output

```
1
2
3
4
5
```

### Explanation

* **Initialization**: `i = 1`
* **Condition**: `i <= 5`
* **Increment**: `i++` inside the loop

---

## Difference Between For Loop and While Loop

| Feature             | For Loop                           | While Loop                          |
| ------------------- | ---------------------------------- | ----------------------------------- |
| Initialization      | Inside the loop                    | Before the loop                     |
| Increment/Decrement | Inside the loop header             | Inside the loop body                |
| Usage               | When number of iterations is known | When iterations depend on condition |

---

## Key Takeaways

* Loops help avoid writing repetitive code.
* **For loop** is best when the number of iterations is known.
* **While loop** is useful when the loop depends on a condition.
* Both loops can achieve similar results but are used based on the problem requirement.

---

✅ **Today's Learning Outcome:**
Understanding how to use **for loops** and **while loops** in C to control program flow and repeat tasks efficiently.
