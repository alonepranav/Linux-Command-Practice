## 💥 Windows `taskkill` Command — Force Quit Processes Like a Pro!

---

### 🛠️ What is `taskkill`?

`taskkill` is your Windows **process terminator** — it lets you stop running programs or background processes by specifying their **name** or **Process ID (PID)**.

---

### ⚡ Basic Usage

* **Kill a process by name:**

```bash
taskkill /IM processname.exe /F
```

* **Kill a process by PID:**

```bash
taskkill /PID 1234 /F
```

---

### 🔍 What do the switches mean?

| Switch | Meaning                                     |
| ------ | ------------------------------------------- |
| `/IM`  | Image Name — the exact process name (exe)   |
| `/PID` | Process ID — unique number of the process   |
| `/F`   | Force — kill the process even if it resists |

---

### 🎯 Examples in Action

* Kill **Notepad** by name (no more “Not Responding”!):

```bash
taskkill /IM notepad.exe /F
```

* Kill process with **PID 4567**:

```bash
taskkill /PID 4567 /F
```

---

### 💡 Pro Tips

* Use **Task Manager** or `tasklist` command to find process names or PIDs before killing them.
* Be careful with `/F` — forcing a process to close may cause unsaved data loss.
* You can combine `taskkill` with scripts to automate closing troublesome apps.

---
