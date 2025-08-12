## 🗑️ `del` — Delete Files in PowerShell

**Purpose:**
Deletes files in PowerShell. It’s an alias for the `Remove-Item` cmdlet when targeting files.

---

### 🧾 Basic Usage

```powershell
del filename.txt
```

This deletes the file named `filename.txt` from the current directory.

---

### 🔄 Equivalent Long Form

```powershell
Remove-Item filename.txt
```

Both `del` and `Remove-Item` do the same thing when deleting files.

---

### 📁 Examples

* Delete a single file:

```powershell
del C:\temp\file1.txt
```

* Delete multiple files with a wildcard:

```powershell
del *.log
```

* Force delete files without any prompt:

```powershell
del *.txt -Force
```

---

### ⚠️ Notes

* To delete a directory, use `Remove-Item` with the `-Recurse` flag.
* `del` is a simpler alias but **less flexible** compared to `Remove-Item`.

---

### ✅ Summary

* `del` is a shorthand for deleting files.
* Use `-Force` to bypass confirmation prompts.
* For directories, switch to `Remove-Item -Recurse`.
