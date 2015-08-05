# libgit2Example
* Use the visual studio 2008.
* The example for libgit2, it implements the commands
 + ```git init```
 + ```git clone```
 + ```git fetch```
 + ```git merge origin/master```
 + ```git add . ```
 + ```git commit -a -m "automessage"```
 + ```git push```
* Don't use  ```argv```and write the parameter fiexed.

#How to use the example
* Create the ```password.txt```, and write username and password in it. The context of password.txt like this:
```
sprintf(username, "%s", "account");
sprintf(password, "%s", "password");
```

* Replace the macro ```LOCALGIT```and ```ORIGINURL``` for your own.