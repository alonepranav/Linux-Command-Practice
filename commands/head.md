## 🔼 `head` — View the First Lines of a File

**Purpose:**
Displays the **beginning** of a file — great for quickly previewing logs, data, or any text file.

---

### 🧾 Basic Syntax

```bash
head [options] filename
```

By default, it shows the **first 10 lines**.

---

### 📁 Examples

📝 **Show first 10 lines:**

```bash
head notes.txt
```

🧮 **Show the first 5 lines:**

```bash
head -n 5 notes.txt
```

📦 **Use with another command:**

```bash
ls -l | head -n 3
```

> Shows the top 3 lines of `ls -l` output.

🧠 **Show first 20 bytes of a file:**

```bash
head -c 20 filename.txt
```

---

### ⚙️ Useful Options

| Option | What it does                            |
| ------ | --------------------------------------- |
| `-n N` | Show the first **N lines**              |
| `-c N` | Show the first **N bytes**              |
| `-v`   | Show file name before content           |
| `-q`   | Hide file name even when using multiple |

---

### 📌 Multi-File Example

```bash
head -n 3 file1.txt file2.txt
```

* With `-v`: Shows headers for both files.
* With `-q`: Hides headers, just shows content.

---

### ✅ Summary

* **`head` shows the top** of a file.
* Default = **10 lines**
* Use `-n` for custom line count.
* Use `-c` for byte-level preview.
* Combine with pipes for quick data inspection.