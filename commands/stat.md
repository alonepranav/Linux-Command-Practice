## 📁 File Info Showdown: Linux `stat` vs Windows PowerShell

---

## 🐧 Linux: The Mighty `stat`

> **What is it?**
> `stat` gives you the **full backstage pass** to a file or folder, revealing size, permissions, timestamps, inode, and more.

---

### 🔧 How to Use It:

```bash
stat filename.txt
```

---

### 🎯 Sample Output Snapshot:

```
  File: filename.txt
  Size: 1024            Blocks: 8          IO Block: 4096   regular file
Device: 802h/2050d      Inode: 131073      Links: 1
Access: 2025-07-10 12:34:56.000000000 +0000
Modify: 2025-07-09 15:30:20.000000000 +0000
Change: 2025-07-09 15:30:20.000000000 +0000
 Birth: -
```

---

### 🗝️ Key Info Breakdown

| Field      | What It Means                                  |
| ---------- | ---------------------------------------------- |
| **Size**   | File size in bytes                             |
| **Access** | Last time file was read or opened              |
| **Modify** | Last time file content was changed             |
| **Change** | Last time file metadata or permissions changed |

---

## 🪟 Windows PowerShell: The File Inspector

PowerShell doesn’t have a `stat` command per se, but `Get-Item` or `Get-ChildItem` will give you **equally juicy details** about your files.

---

### 🔧 How to Get File Details:

```powershell
Get-Item filename.txt | Format-List *
```

---

### 🎯 Example Output Snippet:

```
PSPath        : Microsoft.PowerShell.Core\FileSystem::C:\path\to\filename.txt
PSIsContainer : False
Mode          : -a----
BaseName      : filename
Length        : 1024
CreationTime  : 7/9/2025 3:30:20 PM
LastAccessTime: 7/10/2025 12:34:56 PM
LastWriteTime : 7/9/2025 3:30:20 PM
Attributes    : Archive
```

---

### 🎨 Customize What You See

Want only the essentials? Try:

```powershell
Get-Item filename.txt | Select-Object Name, Length, CreationTime, LastAccessTime, LastWriteTime
```

---

## 🏆 Quick Comparison

| Feature          | Linux `stat`                            | Windows PowerShell    |
| ---------------- | --------------------------------------- | --------------------- |
| File size        | `Size`                                  | `Length`              |
| Last accessed    | `Access`                                | `LastAccessTime`      |
| Last modified    | `Modify`                                | `LastWriteTime`       |
| Creation time    | Not always shown (`Birth` may be empty) | `CreationTime`        |
| Permissions info | Detailed mode and inode                 | `Mode` & `Attributes` |

---

## 💡 Pro Tip:

* In Linux, `stat` is your go-to for quick, detailed file stats.
* In PowerShell, pipe `Get-Item` to `Format-List` for the full story, or selectively pull only the fields you care about.