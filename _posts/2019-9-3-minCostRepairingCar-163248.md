---
layout: post
title:  "minCostRepairingCar"
categories: [greedy]
code: 163248
src: [cpp, js, cs, py]
difficulty: easy
---

Bài này mình ra :))

Thực hiện chọn ra những con số nhỏ nhất từ 2 tập hợp A và B. Khi đó sẽ có 2 trường hợp xảy ra:

+ Các giá trị nhỏ nhất đến từ cả 2 tập, khi đó sum đó là tối ưu nhất vì đều chọn ra các phần tử từ 2 mảng.
+ Các giá trị nhỏ nhất đến từ chỉ 1 trong 2 tập. Lúc này rõ ràng chỉ cần tham lam bằng cách thay 1 phần tử từ tập còn lại vào sao cho tổng nhỏ nhất. Có thể duyệt qua một vòng lặp là tìm được phần tử cần thay thế.

Độ phức tạp `O(N)`
