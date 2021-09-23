

***Captcha*** 

---
##Usage
---

```cpp

***cap test;***
***test.changetype(n);*** // the captcha type, now is 1, or 2
***test.use();*** // calling a captcha
***test.check(n);***  // check answer for captcha
```
---
##Example
---
```cpp
    int i;
    cap test;
    test.changetype(1);
    test.use();
    cin >> i;
    if (test.check(i))
        cout << "Susseful";
     else
        cout << "Failed";
```
