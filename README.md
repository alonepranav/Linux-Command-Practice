# 🐧 Linux Command Practice

This repository contains my **Linux command line practice**, that I've done when I was learning about linux commands.
 
## 📚 Commands List

| Command                              | Description                                                                                               |
| ------------------------------------ | --------------------------------------------------------------------------------------------------------- |
| [`cat`](./commands/cat.md)           | View or concatenate file contents                                                                         |
| [`cd`](./commands/cd.md)             | Change the current working directory                                                                      |
| [`cp`](./commands/cp.md)             | Copy files or directories                                                                                 |
| [`curl`](./commands/curl.md)         | Transfer data from or to a URL                                                                            |
| [`del`](./commands/del.md)           | Delete files *(Windows)*                                                                                  |
| [`dir`](./commands/dir.md)           | List directory contents *(Windows)*                                                                       |
| [`echo`](./commands/echo.md)         | Display a message or variable value                                                                       |
| [`file`](./commands/file.md)         | Show file type information                                                                                |
| [`head`](./commands/head.md)         | Display the first lines of a file                                                                         |
| [`ipconfig`](./commands/ipconfig.md) | Display IP configuration of the system *(Windows)*                                                        |
| [`ls`](./commands/ls.md)             | List directory contents                                                                                   |
| [`man`](./commands/man.md)           | Display manual pages for commands                                                                         |
| [`mkdir`](./commands/mkdir.md)       | Create a new directory                                                                                    |
| [`more`](./commands/more.md)         | View file contents one screen at a time                                                                   |
| [`mv`](./commands/mv.md)             | Move or rename files/directories                                                                          |
| [`nano`](./commands/nano.md)         | Command-line text editor                                                                                  |
| [`pwd`](./commands/pwd.md)           | Show the current working directory path                                                                   |
| [`rev`](./commands/rev.md)           | Reverse the order of characters in each line                                                              |
| [`rm`](./commands/rm.md)             | Remove files or directories                                                                               |
| [`rmdir`](./commands/rmdir.md)       | Remove an empty directory                                                                                 |
| [`stat`](./commands/stat.md)         | Display detailed file or filesystem information                                                           |
| [`tac`](./commands/tac.md)           | Display file contents in reverse order                                                                    |
| [`tail`](./commands/tail.md)         | Display the last lines of a file                                                                          |
| [`taskkill`](./commands/taskkill.md) | Terminate processes by ID or name *(Windows)*                                                             |
| [`tasklist`](./commands/tasklist.md) | Show a list of running processes *(Windows)*                                                              |
| [`touch`](./commands/touch.md)       | Create an empty file or update its timestamp                                                              |
| [`tree`](./commands/tree.md)         | Display directories and subdirectories in a tree structure *(Windows: built-in; Linux: may need install)* |
| [`type`](./commands/type.md)         | Display the contents of a file *(Windows)*                                                                |

---
 
  
## 🔄 Compatibility Notes
- See compatibility [`here`](./compatibility.md)
- **Git Bash** supports many standard Linux utilities via the **MSYS2** or **MinGW** environments.
- **PowerShell** often uses **aliases** or **cmdlets** instead of native Linux binaries.  
  Example:
  - `ls` → alias for `Get-ChildItem`
  - `rm` → alias for `Remove-Item`
- Some commands (`grep`, `man`, `vim`) may need separate installation in Windows or Git Bash.