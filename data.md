Here’s a list of **widely used Linux commands** that also work on **Windows** via **PowerShell** and **Git Bash**. The compatibility varies slightly, so I've indicated whether each command works in **PowerShell**, **Git Bash**, or both.

---

### ✅ Common Linux Commands Working in PowerShell and Git Bash

| Command       | Description                       | Git Bash         | PowerShell                  |
| ------------- | --------------------------------- | ---------------- | --------------------------- |
| `ls`          | List directory contents           | ✅                | ✅ (alias)                   |
| `cd`          | Change directory                  | ✅                | ✅                           |
| `pwd`         | Print working directory           | ✅                | ✅                           |
| `cp`          | Copy files/directories            | ✅                | ✅ (alias for `Copy-Item`)   |
| `mv`          | Move or rename files/directories  | ✅                | ✅ (alias for `Move-Item`)   |
| `rm`          | Remove files/directories          | ✅                | ✅ (alias for `Remove-Item`) |
| `touch`       | Create empty file                 | ✅                | ❌ (use `New-Item`)          |
| `cat`         | Concatenate/display file contents | ✅                | ✅                           |
| `echo`        | Display a line of text            | ✅                | ✅                           |
| `mkdir`       | Make directory                    | ✅                | ✅                           |
| `rmdir`       | Remove empty directory            | ✅                | ✅                           |
| `clear`       | Clear terminal                    | ✅                | ✅ (`cls` also works)        |
| `grep`        | Search text using patterns        | ✅                | ❌ (use `Select-String`)     |
| `find`        | Search for files (basic)          | ✅                | ✅ (`Get-ChildItem`)         |
| `man`         | Show manual pages                 | ✅ (if installed) | ❌                           |
| `which`       | Locate a command                  | ✅                | ❌ (use `Get-Command`)       |
| `chmod`       | Change file permissions           | ✅ (in Git Bash)  | ❌                           |
| `ssh`         | SSH into remote systems           | ✅                | ✅ (if OpenSSH is installed) |
| `scp`         | Secure copy                       | ✅                | ✅ (with OpenSSH)            |
| `curl`        | Transfer data from URLs           | ✅                | ✅                           |
| `wget`        | Download files from the web       | ✅                | ✅ (if installed)            |
| `nano`, `vim` | Text editors                      | ✅ (if installed) | ❌                           |

---

### 🔄 Notes on Compatibility

* **Git Bash** supports many standard Linux utilities via the MSYS2 or MinGW environments.
* **PowerShell** often uses **aliases** or **cmdlets**. Example:

  * `ls` → alias for `Get-ChildItem`
  * `rm` → alias for `Remove-Item`
* Some utilities (like `grep`, `man`, `vim`) might need to be installed separately on Windows or through Git Bash’s package manager (`pacman` or `apt-cyg`).

---

Would you like a downloadable cheat sheet or list comparing command usage between Linux, PowerShell, and Git Bash?
