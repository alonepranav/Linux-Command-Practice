## 📂 `dir` — Quick Directory Listing

The `dir` command shows you the files and folders inside a directory, giving a simple list of what’s there.

---

### 🧾 Basic Usage

```bash
dir
```

* Lists everything in the current directory, one item per line.

---

### 📁 Examples

* List contents of the current folder:

```bash
dir
```

* List contents of a specific folder:

```bash
dir /home/user/Documents
```

---

### ⚡ How `dir` differs from `ls`

* `dir` lists files simply, one per line.
* `ls` offers more features and prettier output on many systems.
* On some setups, `dir` acts like `ls -C -b` (columns with escaped characters).

---

### ⚙️ Useful Options

| Option | What it does                          | Example  |
| ------ | ------------------------------------- | -------- |
| `-l`   | Long list (permissions, size, date)   | `dir -l` |
| `-a`   | Show hidden files (starting with `.`) | `dir -a` |

---

### ✅ Summary

* `dir` is a straightforward way to see what’s in a folder.
* Less fancy than `ls`, but works well for quick checks.
* Supports options like long listing and showing hidden files.
