---
layout: post
title:  "biggestRemainer"
categories: [greedy, sorting, array]
code: 127850_C
src: [cpp]
difficulty: easy
contestId: 127850
---


Để được remain tối đa, rõ ràng số lớn nhất trong mảng không được, nó không thể mod cho số nào khác, do đó kết quả là số lớn thứ 2 trong mảng, vì nó mod cho số lớn nhất sẽ được chính nó.

Sort hoặc dùng set để tìm 2 giá trị max trên mảng. XỬ lý các case đặc biệt.

Độ phức tạp `O(NlogN)`
