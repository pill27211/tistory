
# [Platinum V] Parcel - 16287

[문제 링크](https://www.acmicpc.net/problem/16287)

### 문제 요약

<p> 서로 다른 4가지 원소의 합을 이용해 w를 표현할 수 있는지 판단해보자. </p>

### 제한

TL : 1sec, ML : 512 MB

10 ≤ w ≤ 799,994

4 ≤ n ≤ 5,000

1 ≤ n_i ≤ 200,000

### 성능 요약

메모리: 3604 KB, 시간: 48 ms

### 분류

다이나믹 프로그래밍(dp), 중간에서 만나기(mitm)

### comment

개인적으로 [여기](https://github.com/pill27211/Baekjoon/tree/main/Gold/DP/5624_%EC%A2%8B%EC%9D%80%20%EC%88%98)에서 다룬 문제를 먼저 풀고 이 문제를 풀었는데, 훨씬 수월했던 것 같다.

이 문제 역시 위에서 다룬 내용과 크게 다르지 않다.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

위에서 언급한 문제에선 a + b + c = k 인 쌍의 개수를 셋었다.

하지만 이 문제에선 a + b + c + d = k 인 쌍을 찾는 것과 동시에 조건이 조금 달라진다.

위와 달리 '서로 다른' 4가지 쌍의 원소를 사용해야 한다는 것이다.

a + b + c + d = k 는 다음과같이 표현할 수 있다.

a + b = k - (c + d)

이것을 이용해보자.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

수 하나하나(i)를 기준으로 잡아보며 쭈욱 스위핑해보자. 이 수를 기준으로 왼쪽에 있는 수가 위 식에서 좌변이 되며, 이를 바탕으로 우변에서 위 식을 만족하는 (c, d)쌍을 찾을 것이다.

좌변을 표시하기 위해 { j : 1, 2, ... i - 1 } 에 대해 c[a[i] + a[j]] 에 모두 마킹을 해보자. (이 표시는, 왼쪽에서 오른쪽으로 i가 스와핑 됨에 따라 계속해서 누적된다)

이후 우변을 만족하는 (c, d)쌍을 어떻게 찾아볼 수 있을까 ?

마킹 이후, 기준인 i에 대해 { j : i + 2, i + 3, ... n } 를 돌아보면, 우변을 k = w - a[i + 1] - a[j]; 와같이 표현할 수 있다.

이를 보고 두번째 항이 i + 2, i + 3, ... 일수도 있지 않겠냐고 생각할 수 있지만, 이는 어차피 다음번째 스위핑(i++)에서 저절로 고려될테니 전혀 문제되지 않는다.

이에 따라 k가 허용된 범위(0 ≤ n_i ≤ 400,000)임과 동시에 c[k]의 위치가 마킹이 돼있다면 위 식을 만족하는 쌍이 존재한다는 것이므로 "YES"를 출력해주면 된다.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

추가로 코드를 보면 입력된 수들을 모두 정렬 했는데, 이는 굳이 필요치 않긴 하다.

그러나 캐시 히트를 고려하는 동작으로써 약 12ms정도 빨라질 수 있다. (내 코드 기준)