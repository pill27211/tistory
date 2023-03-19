
# [Gold I] Pokemon Go Go - 16385

[문제 링크](https://www.acmicpc.net/problem/16385)

### 문제 요약

<p> 모든 포켓 스톱을 순회하는 최단 경로를 구해보자. </p>

### 제한

TL : 5sec, ML : 512 MB

$0 < n ≤ 20$

$−100 ≤ r, c ≤ 100$

### 성능 요약

메모리: 4592 KB, 시간: 44 ms

### 분류

다이나믹 프로그래밍(dp), 비트마스킹(bitmask), 비트필드 위에서의 다이나믹 프로그래밍(dp_bitfield), 외판원 순회 문제(tsp)

### comment

전형적인 외판원 순회 문제로 볼 수 있다.

$dp[i][j]$ : $i$번째 위치에 있고 방문한  상태가 $j$일 때 모든 포켓 스톱을 순회하는 최단 거리.

포켓몬의 이름이 같으면서 서로다른 위치에 주어질 수 있으니 이를 유의하자.