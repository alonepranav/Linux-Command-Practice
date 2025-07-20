 

## 🧾 `cp` — Copy Files and Folders in Linux

Think of `cp` as a **digital photocopier** — it takes a file or folder and makes a copy somewhere else.

---

### 🔧 Basic Syntax

```bash
cp [options] source destination
```

* `source`: The file or folder you want to copy.
* `destination`: Where you want the copy to go.

---

### ✍️ Common Examples

📄 **Copy a single file:**

```bash
cp file.txt /home/user/Documents/
```

→ Makes a copy of `file.txt` in the `Documents` folder.

📑 **Copy and rename a file:**

```bash
cp file.txt backup.txt
```

→ Copies `file.txt` and names the copy `backup.txt`.

📂 **Copy an entire folder (recursively):**

```bash
cp -r myFolder/ /home/user/Backup/
```

→ Copies the entire `myFolder` and everything inside it.

📦 **Copy multiple files into a folder:**

```bash
cp a.txt b.txt /home/user/Notes/
```

→ Copies both files to the `Notes` folder.

---

### ⚙️ Useful Options

| Option | Description                           |
| ------ | ------------------------------------- |
| `-r`   | Copy directories and their contents   |
| `-i`   | Ask before overwriting existing files |
| `-u`   | Copy only if the source is newer      |
| `-v`   | Show each file as it's copied         |
| `-f`   | Force overwrite (no questions asked)  |

---

### 🧪 Practical Example

```bash
cp -ruv Project/ Backup/
```

* `-r`: Copy everything in `Project`
* `-u`: Only copy updated files
* `-v`: Show progress in the terminal

---

### 🧠 Quick Summary

* `cp` = copy
* Add `-r` to copy folders
* Add `-i` to be careful
* Add `-v` to see what's going on