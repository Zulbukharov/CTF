### Task:
```
We believe a certain individual uses this website for shady business.
Can you find out who that is and send him an email to check,
using the web site's functionality?
Note: The flag is not an e-mail address.
```

![img](https://github.com/Zulbukharov/CTF/blob/master/hdc/img/1.png "1")

```
Простая форма с login и password
Если покапаться в сурсах, можно увидеть, что для отправки запроса, используется
функция doProcess()
```
![img](https://github.com/Zulbukharov/CTF/blob/master/hdc/img/2.png "3")
![img](https://github.com/Zulbukharov/CTF/blob/master/hdc/img/4.png "4")
```
Объявление и определение данной функции находится в файле jquery-3.2.1.js
```
![img](https://github.com/Zulbukharov/CTF/blob/master/hdc/img/3.png "2")
```
Видно, что для параметров name1 и name2 используются неразбираемые параметры,
копируем и пытаемся войти с этим данными.
```
![img](https://github.com/Zulbukharov/CTF/blob/master/hdc/img/8.png "5")
```
Отлично, мы смогли войти
```
![img](https://github.com/Zulbukharov/CTF/blob/master/hdc/img/9.png "5")
```
Следующий шаг заключается в анализе сурсов всех вкладок, натыкаемся на
/secret_area_, доступа к которой у нас нет.
```
![img](https://github.com/Zulbukharov/CTF/blob/master/hdc/img/7.png "6")


![img](https://github.com/Zulbukharov/CTF/blob/master/hdc/img/5.png "5")
![img](https://github.com/Zulbukharov/CTF/blob/master/hdc/img/6.png "6")
