Sure! Here's the lowdown on `rmdir` in Linux and its Windows PowerShell counterpart.

---

### `rmdir` Command (Linux)

**Purpose:**
Remove (delete) empty directories.

---

### Basic Usage:

```bash
rmdir directory_name
```

* Deletes the directory only if it’s empty.
* If the directory contains files or subdirectories, `rmdir` will fail with an error.

---

### Remove a directory and its contents?

`rmdir` **does not** remove non-empty directories. To remove a directory with all contents, you usually use:

```bash
rm -r directory_name
```

`rm -r` recursively deletes files and subdirectories inside.

---

### Windows PowerShell Equivalent

---

#### To remove an **empty** directory:

```powershell
Remove-Item -Path directory_name
```

If the directory is empty, this works fine.

---

#### To remove a directory **and its contents recursively** (like `rm -r`):

```powershell
Remove-Item -Path directory_name -Recurse -Force
```

* `-Recurse` removes all child items (files and subdirectories).
* `-Force` suppresses prompts and removes read-only files.

---

### Summary

| Operation                    | Linux Command          | PowerShell Command                           |
| ---------------------------- | ---------------------- | -------------------------------------------- |
| Remove empty directory       | `rmdir directory_name` | `Remove-Item directory_name`                 |
| Remove directory recursively | `rm -r directory_name` | `Remove-Item directory_name -Recurse -Force` |

---

**Be careful** with recursive deletes—they remove everything inside without asking!

---

Want a demo or script examples for these commands?
