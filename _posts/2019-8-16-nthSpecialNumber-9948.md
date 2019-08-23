---
layout: post
title:  "nthSpecialNumber"
categories: [set, greedy, number-theory]
code: 9948
src: [cpp]
difficulty: medium
---

Thực hiện sinh `n` phần tử đầu tiên, đưa vào 1 set (set trong C++, Red Black Tree), mỗi lần cách sinh các phần tử tiếp theo là lấy phần tử nhỏ nhất trong các số sinh được, nhân thêm các ước `2`, `3`, `5`. Cách làm tham lam này đảm bảo phần tử được pop ra thứ `i` chính là phần tử nhỏ thứ `i`.
