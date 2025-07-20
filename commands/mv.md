## 🚚 `mv` — Move or Rename Files and Folders in Linux

The `mv` command is used to **move files/directories** from one location to another or to **rename** them. It's like cutting and pasting — the original is moved, not copied.

---

### 🧾 Basic Syntax

```bash
mv [options] source destination
```

* `source`: The file or folder you want to move or rename.
* `destination`: The new location or name.

---

### 🧪 Examples

📁 **Move a file to another directory:**

```bash
mv file.txt /home/user/documents/
```

📄 **Rename a file:**

```bash
mv oldname.txt newname.txt
```

📄📁 **Move and rename at once:**

```bash
mv file.txt /home/user/docs/newfile.txt
```

📦 **Move multiple files to a folder:**

```bash
mv file1.txt file2.txt /home/user/backup/
```

---

### ⚙️ Common Options

| Option | Description                               |
| ------ | ----------------------------------------- |
| `-i`   | Interactive — prompt before overwriting   |
| `-v`   | Verbose — show what is being moved        |
| `-f`   | Force — do not prompt, overwrite silently |

---

### 🧠 Notes & Tips

* `mv` **does not leave a copy** — it removes the original.

* You can rename **directories** just like files:

  ```bash
  mv oldFolder newFolder
  ```

* If the destination exists, it will be **overwritten without warning**, unless you use `-i`.

---

### ✅ Summary

* `mv` is for **moving** and **renaming**
* Use `-i` to stay safe
* Use `-v` to see what’s happening
* It’s efficient — no duplication involved