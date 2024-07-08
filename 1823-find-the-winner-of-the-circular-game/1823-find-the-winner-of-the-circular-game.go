func findTheWinner(n int, k int) int {
    ans := 0
    for i:=1; i <= n; i++ {
        ans = (ans+k) % i
    }
    return ans + 1
}