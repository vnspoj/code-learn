---
layout: page
title: About Us
permalink: /about
---

# Code Learn Solution

Hướng dẫn giải một số bài trên hệ thống [Code Learn](https://codelearn.io/Training/)

Trang web được host tại domain [https://vnspoj.github.io/code-learn](https://vnspoj.github.io/code-learn)

<p align="center">
<img src="./static/img/favicon.png" width="180px">
</p>

## Features

+ Phân loại giải thuật cho mỗi bài.
+ Hướng dẫn lời giải, đánh giá độ phức tạp.
+ Mã nguồn cho lời giải, sử dụng bằng 1 hoặc nhiều ngôn ngữ lập trình.

## Operation

Trang web được deploy lên github pages, gồm 2 repositories:

### Source codes

Tất cả lời giải cho các bài toán được commit lên repository [codelearn-solution](https://github.com/vnspoj/codelearn-solution), kho này được serve file tĩnh, cho phép các trang khác GET để lấy mã nguồn, hoặc gửi request để download trực tiếp source code thành file về máy.

Các lời giải sẽ được commit lên theo dạng thư mục cây phân loại theo ngôn ngữ sử dụng, ví dụ:

```bash
├── cpp
│   ├── 10185.cpp
│   ├── 69421.cpp
│   ├── 86094.cpp
│   └── 8821.cpp
├── cs
│   ├── 126130.cs
│   └── 22912.cs
├── java
│   └── 22912.java
├── js
│   └── 22912.js
├── py
│   ├── 118898.py
│   └── 22912.py
```

Mỗi problem trên Code Learn đều có 1 mã code để định danh, mã code này được sử dụng làm tên cho file chứa lời giải. Mỗi loại ngôn ngữ được để extension tương ứng và đưa vào folder tương ứng. Mỗi problem có thể có nhiều lời giải ở nhiều ngôn ngữ khác nhau, nhưng tối thiểu phải có 1 file lời giải, và mỗi ngôn ngữ sử dụng chỉ cho phép 1 lời giải.

### Tutorial

Repository thứ 2 nằm ở repo [code-learn](https://github.com/vnspoj/code-learn), chứa mã nguồn chính để deploy toàn bộ trang web được sử dụng Jekyll engine để build web tĩnh. Hướng dẫn chi tiết về cách build, run, deploy web tĩnh cho trang này được hướng dẫn [ở đây](https://github.com/vnspoj/vnspoj.github.io#development). Đối với việc viết tutorial cho các bài toán thì không cần quan tâm kỹ thuật này, chỉ cần làm theo các bước sau:

+ Thư mục `_posts` chứa các lời giải cho mỗi bài toán, mỗi file theo format markdown (`.md`), có syntax khi đặt tên theo dạng `yyyy-mm-dd-[ten_bai]-[ma_bai].md`, trong đó `[ten_bai]` là tên của problem, `[ma_bai]` là mã code của bài đó. Việc đặt ngày tháng năm cho tên file cũng là ngày tháng năm publish file này. Mỗi file trong thư mục này có header format như sau, ví dụ:

```bash
---
layout: post
title:  "findNumber"
categories: [greedy, array]
code: 118898
src: [py, cpp]
difficulty: medium
contestId: 120342
---
```

Bài `findNumber` có mã bài là `118898`, có lời giải bằng ngôn ngữ `python` và `c++` (lưu ý nếu chỉ có 1 ngôn ngữ thì vẫn để kiểu array, ví dụ `[cpp]`), độ khó theo CodeLearn đánh giá là `medium` và thuộc contest có id là `120342` (`contestId` có thể bỏ qua nếu không quan tâm).

Trong đó lưu ý như sau:

+ Các giá trị trong `categories` tương ứng phải có 1 file thuộc thư mục đó trong thư mục `category`, nếu chưa có file tương ứng, tạo một file như các file khác, đặt tên cho topic đó, ví dụ `binary-search` nằm ở `category/binary-search.md`:

```bash
---
layout: posts_by_category
categories: binary-search
title: Binary Search (Tìm kiếm nhị phân)
permalink: /category/binary-search
---
```

+ Thư mục `_contests` chứa các contest của Code Learn, cũng có format tương tự như `_posts`, và mỗi contest có id trên Code Learn. Mỗi post nếu có `contestId` thì giá trị này được map đến id trong thư mục `_contests`.

## Contributions

Cách contribute cho project này:

+ Fork 2 repositories này về repository cá nhân:
	+ [https://github.com/vnspoj/code-learn](https://github.com/vnspoj/code-learn)
	+ [https://github.com/vnspoj/codelearn-solution](https://github.com/vnspoj/codelearn-solution)

+ Clone 2 repository này về, tạo nhánh mới cho mỗi repo
+ Khi có bài viết mới cho một bài, tạo tutorial và solution như hướng dẫn ở trên, sau đó commit và push lên repo cá nhân
+ Tạo pull request đến repository gốc (repo này), chờ owner xét duyệt, merge về hoặc góp ý cải thiện bài viết.

**Lưu ý**: khi viết tutorial, nên để lại tên tác giả viết bài đó để tiện theo dõi.
