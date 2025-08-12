## 🖥 Linux Command Compatibility: PowerShell vs Git Bash

| Command       | Description                         | Git Bash           | PowerShell (Windows)                   |
| ------------- | ----------------------------------- | ------------------ | -------------------------------------- |
| `ls`          | List directory contents             | ✅                  | ✅ *(alias for `Get-ChildItem`)*        |
| `cd`          | Change directory                    | ✅                  | ✅                                      |
| `pwd`         | Print working directory             | ✅                  | ✅                                      |
| `cp`          | Copy files or directories           | ✅                  | ✅ *(alias for `Copy-Item`)*            |
| `mv`          | Move or rename files/directories    | ✅                  | ✅ *(alias for `Move-Item`)*            |
| `rm`          | Remove files or directories         | ✅                  | ✅ *(alias for `Remove-Item`)*          |
| `touch`       | Create an empty file                | ✅                  | ❌ *(use `New-Item`)*                   |
| `cat`         | View file contents                  | ✅                  | ✅ *(alias for `Get-Content`)*          |
| `echo`        | Display a message or variable value | ✅                  | ✅                                      |
| `mkdir`       | Create a new directory              | ✅                  | ✅                                      |
| `rmdir`       | Remove an empty directory           | ✅                  | ✅                                      |
| `clear`       | Clear terminal screen               | ✅                  | ✅ *(use `cls` as well)*                |
| `grep`        | Search text patterns in files       | ✅                  | ❌ *(use `Select-String`)*              |
| `find`        | Search for files                    | ✅                  | ✅ *(use `Get-ChildItem -Recurse`)*     |
| `man`         | Show command manual pages           | ✅ *(if installed)* | ❌ *(use `Get-Help`)*                   |
| `which`       | Locate a command’s executable path  | ✅                  | ❌ *(use `Get-Command`)*                |
| `chmod`       | Change file permissions             | ✅ *(POSIX style)*  | ❌ *(Windows ACLs differ)*              |
| `ssh`         | SSH into remote systems             | ✅                  | ✅ *(with OpenSSH installed)*           |
| `scp`         | Securely copy files between systems | ✅                  | ✅ *(with OpenSSH installed)*           |
| `curl`        | Transfer data from or to a URL      | ✅                  | ✅                                      |
| `wget`        | Download files from the web         | ✅                  | ✅ *(if installed)*                     |
| `nano`, `vim` | Terminal-based text editors         | ✅ *(if installed)* | ❌ *(use `notepad` or install editors)* |

---

### ⚡ Quick Notes

* **Git Bash** uses a Unix-like environment, so most Linux commands work natively.
* **PowerShell** often provides **cmdlets** (e.g., `Get-ChildItem`, `Remove-Item`) but keeps Linux-style aliases for convenience.
<!-- * For missing commands in PowerShell, you can: -->
<!-- 
  * Install them via [Windows Subsystem for Linux (WSL)](https://learn.microsoft.com/en-us/windows/wsl/)
  * Use Git Bash or [Cygwin](https://www.cygwin.com/)
  * Install via package managers like `choco` (Chocolatey) or `winget`. -->