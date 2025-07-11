Sure! Here's the scoop on the `stat` command in Linux and what you can do in Windows PowerShell for similar info.

---

### `stat` Command (Linux)

**Purpose:**
Displays detailed information about a file or directory, including size, permissions, timestamps, inode number, and more.

---

### Basic Usage:

```bash
stat filename.txt
```

---

### Sample output:

```
  File: filename.txt
  Size: 1024            Blocks: 8          IO Block: 4096   regular file
Device: 802h/2050d      Inode: 131073      Links: 1
Access: 2025-07-10 12:34:56.000000000 +0000
Modify: 2025-07-09 15:30:20.000000000 +0000
Change: 2025-07-09 15:30:20.000000000 +0000
 Birth: -
```

* **Size:** file size in bytes
* **Access:** last accessed time
* **Modify:** last modified time
* **Change:** last status change time (metadata)

---

### Windows PowerShell Equivalent

PowerShell doesn’t have a direct `stat` command, but you can get similar info using `Get-Item` or `Get-ChildItem` (alias `ls` or `dir`) and querying its properties.

---

### Example:

```powershell
Get-Item filename.txt | Format-List *
```

This will display all properties of the file, including:

* Length (file size)
* CreationTime
* LastAccessTime
* LastWriteTime
* Attributes (permissions and flags)
* Mode (file type and permissions)

---

### Example output snippet:

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

If you want just a few key properties, you can select them explicitly:

```powershell
Get-Item filename.txt | Select-Object Name, Length, CreationTime, LastAccessTime, LastWriteTime
```

---

Need help with more file commands or scripting tips?
