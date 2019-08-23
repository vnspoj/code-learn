---
layout: post
title:  "FunStringTransformation"
categories: [greedy, string]
code: 5924
src: [cpp]
difficulty: hard
ads_more: 1
---

### Nhận xét

Nhận xét vài này mức độ khó chỉ là `medium` thì hợp lý hơn.

### Hướng dẫn

Thứ tự các ký tự trong 2 chuỗi là không quan trọng. Rõ ràng chỉ xét tập hợp các ký tự của 2 chuỗi và kích thước 2 tập là `26` ký tự latinh từ `A` -> `Z` hay đơn giản hơn là `26` phần tử  index từ `0` -> `25`.

Cần chuyển từ tập 1 (các ký tự xâu A) sang tập 2 (các ký tự xâu B) trong ít bước nhất.

Một nhận xét tham lam: nếu như ký tự nào đó trên B và trên A là giống nhau thì không đổi nữa, vì nếu dùng ký tự đó trên A để đổi thành ký tự khác thì lại phải tốn ký tự khác để đổi lại.

Do đó duyệt từng ký tự, kiểm tra xem trên tập A có đủ trên B không, nếu đủ thì dùng lượng đó, phần còn lại thì chừa lại để đổi những thằng sau. Trong trường hợp trên A không đủ để bù cho B, cần dùng những ký tự trước đó còn thừa để bù lại. Rõ ràng dùng các ký tự gần nó để chuyển thì tốt hơn, tức duyệt lùi từng vị trí 1, nếu còn thừa thì bù vô cho đến khi đủ, nếu như đạt đến vị trí `0` (tức đã tới `A`) rồi mà vẫn không đủ bù, tiếp tục lùi sang `25` (ký tự `Z`) và lùi tiếp dù những ký tự này chưa được xét đến. Vì số lượng ký tự 2 tập là bằng nhau nên đảm bảo luôn có cách để làm cho ký tự đó về 0.

### Độ phức tạp

Độ phức tạp `O(N + 26*26)` với `N` là chiều dài 2 chuỗi, việc khởi tạo 2 map tốn `O(N)`, tham lam để tìm kết quả tốn `O(26*26)`.

Không gian `O(26)` để lưu trữ 2 map.
