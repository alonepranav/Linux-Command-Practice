## 🗑️ `rm` — Remove Files and Folders in Linux

The `rm` command is used to **delete files or directories** from the system. Once removed, they’re usually **gone for good** — so use it with care!

---

### 🧾 Basic Syntax

```bash
rm [options] target
```

* `target`: The file or directory you want to delete.

---

### 🔧 Basic Usage

📄 **Delete a single file:**

```bash
rm file.txt
```

📄 **Delete multiple files:**

```bash
rm file1.txt file2.txt file3.txt
```

---

### 📂 Deleting Directories

By default, `rm` won't delete folders unless you add the recursive `-r` option:

```bash
rm -r myFolder/
```

➡️ Deletes `myFolder` and everything inside it.

---

### ⚙️ Common Options

| Option | Description                                   |
| ------ | --------------------------------------------- |
| `-i`   | Ask before every deletion (interactive)       |
| `-f`   | Force delete — no warning, no errors          |
| `-r`   | Recursively delete directory and all contents |
| `-v`   | Show what’s being deleted (verbose)           |

---

### 📌 Example Commands

✅ **Delete a file with confirmation:**

```bash
rm -i file.txt
```

✅ **Delete a folder and everything in it (with force):**

```bash
rm -rf myFolder/
```

✅ **Delete and show progress:**

```bash
rm -rv myFolder/
```

---

### ⚠️ Warning

* `rm` **does not move files to Trash**.
* Using `rm -rf` can **wipe out entire folders instantly**.
* There is **no undo** unless you're using special recovery tools.
 