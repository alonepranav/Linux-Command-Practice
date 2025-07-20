## 🔼 `head` — View the First Lines of a File

The `head` command is used to **display the first few lines** of a file. By default, it shows the **first 10 lines**.

---

### 📘 Basic Syntax

```bash
head [options] filename
```

---

### 📂 Examples

📝 **View the first 10 lines of a file:**

```bash
head notes.txt
```

🧮 **Show the first 5 lines:**

```bash
head -n 5 notes.txt
```

📦 **Use with a command pipeline:**

```bash
ls -l | head -n 3
```

➡️ Shows the first 3 lines of the `ls -l` output.

---

### ⚙️ Useful Options

| Option | Description                   |
| ------ | ----------------------------- |
| `-n N` | Show the first **N lines**    |
| `-c N` | Show the first **N bytes**    |
| `-v`   | Always show file name headers |
| `-q`   | Never show file name headers  |

---

### 🧠 Summary

* `head` = top part of a file
* Default = first 10 lines
* Use `-n` to change number of lines
* Great for previewing files, logs, and outputs

---