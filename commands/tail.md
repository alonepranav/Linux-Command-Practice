## 🔽 `tail` — View the Last Lines of a File

**Purpose:**
Displays the **end of a file** — useful for logs, data files, and monitoring real-time updates.

---

### 🧾 Basic Syntax

```bash
tail [options] filename
```

By default, it shows the **last 10 lines**.

---

### 📁 Examples

📄 **Show last 10 lines:**

```bash
tail logfile.txt
```

🔢 **Show last 5 lines:**

```bash
tail -n 5 logfile.txt
```

📦 **Use in a pipeline:**

```bash
ps aux | tail -n 3
```

➡️ Shows the last 3 lines of `ps aux` output.

---

### 📡 Live Monitoring

```bash
tail -f /var/log/syslog
```

* `-f` = **Follow** mode
* Keeps displaying new lines as the file grows
* Common for watching logs in real-time

```bash
tail -F /var/log/syslog
```

* `-F` = Like `-f` but also handles **log rotation** (when logs are renamed or replaced)

---

### ⚙️ Useful Options

| Option | What it does                    |
| ------ | ------------------------------- |
| `-n N` | Show the last **N lines**       |
| `-c N` | Show the last **N bytes**       |
| `-f`   | **Follow** the file as it grows |
| `-F`   | Follow file and handle rotation |

---

### ✅ Summary

* **`tail` shows the bottom** of a file
* Default = **last 10 lines**
* Use `-f` for **live file updates**
* Great for logs, system monitoring, and real-time output
