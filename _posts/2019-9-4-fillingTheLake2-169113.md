---
layout: post
title:  "fillingTheLake2"
categories: [number-theory, math]
code: 169113
src: [cpp]
difficulty: medium
ads_more: 1
---

Bài này mình ra :))

Bài này yêu cầu đếm số ước của `N^3`. Tuy nhiên vì `N` lớn, do đó không thể vét duyệt căn(N^3) được.

Công thức tính số ước của một số `N` khi được biểu diễn thành các thừa số nguyên tố `N = a1^p1 * a2^p2 * ... * an^pn` là `(p1+1) * (p2+1) * ... * (pn+1)`

Có thể chứng minh công thức này dễ dàng. Vì một ước số của `N` luôn có dạng `N = a1^t1 * a2^t2 * ... * an^tn` với (`0 <= ti <= pi`)

Mỗi vị trí `i` có `pi+1` cách chọn. do đó có được công thức trên.

Khi `N^3`, ta cũng sẽ có `N^3 = a1^3p1 * a2^3p2 * ... * an^3pn`

Do đó số ước là `(3p1+1) * (3p2+1) * ... * (3pn+1)`

Do đó phân tích `N` ra thừa số nguyên tố để tính các giá trị `pi`, từ đó dễ dàng có được số ước cần tìm.

Tham khảo bài dễ hơn: [fillingTheLake1](https://vnspoj.github.io/code-learn/?q=fillingTheLake1)
