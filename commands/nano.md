## ✏️ `nano` — Simple Text Editor in the Terminal

The `nano` command opens a **lightweight, beginner-friendly text editor** right inside your terminal. Great for editing code, config files, or notes quickly.

---

### 🧾 Basic Syntax

```bash
nano filename
```

* If the file exists, it opens it.
* If it doesn’t, `nano` creates a new file with that name.

---

### 📁 Examples

1. **Create or open a file:**

```bash
nano notes.txt
```

2. **Edit a system config (with root):**

```bash
sudo nano /etc/hostname
```

---

### ⌨️ Basic Keyboard Shortcuts (Commands inside Nano)

> All shortcuts use the `Ctrl` key. `^` means Ctrl.

| Shortcut   | Action              |
| ---------- | ------------------- |
| `Ctrl + O` | Save (Write Out)    |
| `Ctrl + X` | Exit                |
| `Ctrl + K` | Cut current line    |
| `Ctrl + U` | Paste (Uncut) line  |
| `Ctrl + W` | Search text in file |
| `Ctrl + G` | Show help           |

---

### 🧠 Tip

* At the bottom of the screen, Nano shows useful shortcuts.
* You **must save** changes using `Ctrl + O` before exiting, or changes will be lost.

---

### ✅ Summary

* `nano` is a **simple terminal-based editor**.
* Great for quick edits or writing scripts.
* Easy to learn with shortcuts shown on-screen.
