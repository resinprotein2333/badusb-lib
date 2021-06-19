$fileContent = ‘请将我替换为你所需要加密的指令’
$bytes = [System.Text.Encoding]::Unicode.GetBytes($fileContent)
$encodedCommand = [Convert]::ToBase64String($bytes)
echo $encodedCommand
