## 📄 PowerShell `Type` Command — Quickly View File Contents

---

### 🛠️ What is `Type`?

In PowerShell, **`Type`** is a shortcut (alias) for the `Get-Content` cmdlet, used to **display the contents of text files** right in your console.

---

### ⚙️ Basic Syntax

```powershell
Type <file_path>
```

---

### 🎯 Example

```powershell
Type C:\Users\Example\file.txt
```

*This will print out the content of `file.txt` in your terminal window.*

---

### 🔄 Equivalent Full Cmdlet

```powershell
Get-Content C:\Users\Example\file.txt
```

*Both commands do the same thing — read and display text file contents.*

---

### 💡 Bonus Tips

* Use `Get-Content -Tail <number>` to display only the last few lines of a file.
* Use `Get-Content -Wait` to **monitor a file live**, useful for log files.
* Combine with `Select-String` to **search inside files**.
