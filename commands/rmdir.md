## 🗑️ `rmdir` — Remove Empty Directories

**Purpose:**
Deletes directories — **but only if they’re empty**.

---

### 🧾 Basic Usage

```bash
rmdir directory_name
```

* Removes the folder if it’s empty.
* If the folder contains files or subfolders, it will **not** be deleted.

---

### 🚫 What if the directory isn’t empty?

`rmdir` won’t work on non-empty directories.
To delete a folder **with everything inside**, use:

```bash
rm -r directory_name
```

* `-r` = **recursive**
* Be careful — this removes **everything** inside the folder.

---

### 💡 Windows PowerShell Equivalent

| Task                     | PowerShell Command                           |
| ------------------------ | -------------------------------------------- |
| Delete empty directory   | `Remove-Item directory_name`                 |
| Delete folder + contents | `Remove-Item directory_name -Recurse -Force` |

> `-Recurse` deletes everything inside
> `-Force` removes hidden/read-only files without asking

---

### ⚠️ Be Careful with Recursive Deletes

* Recursive deletion is **permanent** — there’s no undo.
* Always double-check the folder name before running `rm -r`.

---

### ✅ Summary

| Task                     | Linux          | PowerShell                           |
| ------------------------ | -------------- | ------------------------------------ |
| Remove empty folder      | `rmdir folder` | `Remove-Item folder`                 |
| Remove folder + contents | `rm -r folder` | `Remove-Item folder -Recurse -Force` |