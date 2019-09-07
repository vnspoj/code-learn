---
layout: post
title:  "isTwoSameSequences"
categories: [dp, brute-force, implementation, array]
code: 159729
src: [cpp]
difficulty: easy
contestId: 137518
taskId: 159729
order: A
---

***Author: @speechlessz***

Bài này chúng ta có thể sử dụng prefix sum để tính sẵn `sum(a[1->i])`, do đó có thể đếm nhanh và kiểm tra nhanh trong `O(N)`.
