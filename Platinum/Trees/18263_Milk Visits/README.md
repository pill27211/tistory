# [Platinum I] Milk Visits - 18263

[문제 링크](https://www.acmicpc.net/problem/18263)

### 문제 요약

<p> $N$개의 정점으로 이루어진 트리와 $Q$개의 단일 유형 쿼리가 주어진다. 각 쿼리의 결과로 만들어지는 문자열을 출력하자. </p>

### 제한

TL : 2sec, ML : 512 MB

$1 ≤ N, Q ≤ 100,000$

$1 ≤ C_i ≤ N$

### 성능 요약

메모리: 41124 KB, 시간: 412 ms

### 분류

자료 구조(data structures), 트리(trees), heavy-light 분할(heavy-light decomposition), 세그먼트 트리(segtree), 머지 소트 트리(merge-sort tree)

### comment

각 정점마다 정수가 하나씩 존재할 때, 쿼리는 다음과 같다.

$i$ $j$ $o$ : 정점 $i$와 $j$를 잇는 경로 상에 정수 $o$가 존재하는 정점이 있는가?

이는 hld + 머지 소트 트리로 간단하게 해결할 수 있다.

매 쿼리마다 체인 단위로 올려주며 구간 상에 $o$가 존재하면 즉시 $1$을 반환하도록 구성하자.

---------------------------------------------------------------------------------------------------------------------------------------------------------------------

별로 어려울만한 내용이 없어서 딱히 설명할 거리가 없다..

추가로 이 문제는 위처럼 머지 소트 트리 및 이분 탐색을 이용한 온라인 처리 이외에 set 및 unordered_set 자료 구조를 이용한 온라인 처리도 가능하다.

또 mo's 나 lca를 이용한 오프라인 처리도 가능하니 각자 처음 보이는 풀이 그대로 밀고 나가면 될 듯 하다.