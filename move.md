In PowerShell, the command to move files or folders is `Move-Item`.

### Basic syntax:

```powershell
Move-Item -Path <source> -Destination <destination>
```

### Example:

```powershell
Move-Item -Path C:\Users\Example\file.txt -Destination C:\Backup\
```

This moves `file.txt` from `C:\Users\Example\` to `C:\Backup\`.

---

### Useful options:

* To move folders and their contents, just specify the folder path as the source.
* To overwrite files at the destination, use the `-Force` flag:

```powershell
Move-Item -Path C:\file.txt -Destination C:\Backup\ -Force
```

---

You can also use the alias:

```powershell
mv <source> <destination>
```

because `mv` is an alias for `Move-Item` in PowerShell.

---

Want help moving something specific?
