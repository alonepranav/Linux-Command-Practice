## 🔽 `tail` — View the Last Lines of a File

The `tail` command displays the **last few lines** of a file. By default, it shows the **last 10 lines**.

---

### 📘 Basic Syntax

```bash
tail [options] filename
```

---

### 📂 Examples

📄 **Show the last 10 lines of a file:**

```bash
tail logfile.txt
```

🔢 **Show the last 5 lines:**

```bash
tail -n 5 logfile.txt
```

📦 **Use with a pipeline:**

```bash
ps aux | tail -n 3
```

➡️ Shows the last 3 lines of the `ps aux` output.

---

### 🔄 Live Monitoring (Very Useful!)

```bash
tail -f /var/log/syslog
```

* The `-f` (follow) option **monitors a file in real-time**.
* Commonly used to watch logs as they’re updated.

---

### ⚙️ Useful Options

| Option | Description                              |
| ------ | ---------------------------------------- |
| `-n N` | Show the **last N lines**                |
| `-c N` | Show the **last N bytes**                |
| `-f`   | **Follow** the file as it grows          |
| `-F`   | Like `-f` but also handles file rotation |

---

### 🧠 Summary

* `tail` shows the **end** of a file.
* Default: last 10 lines.
* Use `-f` to **watch logs live**.
* Great for debugging, monitoring, and quick checks.

