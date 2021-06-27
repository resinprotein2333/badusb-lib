## badusb-code
![](https://img.shields.io/badge/Github-resinprotein2333-green.svg) ![](https://badgen.net/github/stars/resinprotein2333/badusb-code) ![](https://badgen.net/github/license/resinprotein2333/badusb-code)

这里包含着一些自己写的一些badusb配合msf，cobaltskite的一些攻击代码，旨在弥补国内相关方面的文献缺失。

## 测试环境
* 软件
  * CobaltStrike 4.0
  * Metasploit Framwork（MSF）
* 攻击机系统环境
  * Ubuntu 20.04
  * Kali
  * Parrot OS 
* 靶机系统环境
  * Windows 10
  * Windows 7 
## 指令加密
* 由于powershell的-enc参数只能解析由powershell创建的base64参数所以找到了一个脚本来完成这项任务
```sh
# 以管理员身份进入powershell
$PSVersionTable
# 查看powershell版本
cd [指令加密脚本所在的目录]
# 进入脚本所在目录
set-executionpolicy remotesigned
# 修改powershell的策略使其可以执行脚本
./powershell-base64-coding.ps1
# 执行ps1脚本
```

## 其他

* 文件托管:[fail.io](https://www.file.io/)
* 木马免杀框架:[Veil-Framework](https://github.com/Veil-Framework/Veil-Evasion)

## 最后
呵呵，东西给的这么详细了，给个星星★不过分吧
