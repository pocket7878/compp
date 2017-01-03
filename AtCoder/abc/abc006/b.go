package main

import (
    "fmt"
)

var memo = make(map[int]int, 0)

func trib(n int) int {
    if n == 1 {
        return 0
    } else if n == 2 {
        return 0
    } else if n == 3 {
        return 1
    } else {
        n1, ok := memo[n - 1]
        if !ok {
            n1 = trib(n - 1) % 10007
            memo[n - 1] = n1
        }
        n2, ok := memo[n - 2]
        if !ok {
            n2 := trib(n - 2) % 10007
            memo[n - 2] = n2
        }
        n3, ok := memo[n - 3]
        if !ok {
            n3 := trib(n - 3) % 10007
            memo[n - 3] = n3
        }
        memo[n] = (n1 + n2 + n3) % 10007
        return n1 + n2 + n3
    }
}

func main() {
    var n int
    fmt.Scan(&n)
    
    res := trib(n) % 10007
    fmt.Printf("%d\n", res)
}