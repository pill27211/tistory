# [Platinum III] United Cows of Farmer John - 21814

[문제 링크](https://www.acmicpc.net/problem/21814)

### 문제 요약

<p> 길이 $n$의 수열이 주어진다. 문제의 조건을 만족하는 쌍의 개수를 모두 구해보자. </p>

### 제한

TL : 1sec, ML : 512 MB

$1 ≤ n ≤ 2 * 10^5$

### 성능 요약

메모리: 3584 KB, 시간: 36 ms

### 분류

자료구조(data_structures), 세그먼트 트리(segtree)

### comment

$1 ≤ l < r ≤ n$ 이고 $l + 1, l + 2, ... r - 1$ 번째 수에서 $l$, $r$ 과 같은 수가 등장하지 않는 쌍의 수를 세는 문제이다.

웰노운 아닌 웰노운이긴 한데,, 임의의 수가 등장하는 마지막 인덱스를 저장해두면 간단히 해결할 수 있다.

단순한 형태의 세그로 해결할 수 있으므로 펜윅 트리를 사용하였다. 

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------