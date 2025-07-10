In PowerShell, the command to copy files or folders is `Copy-Item`.

### Basic syntax:

```powershell
Copy-Item -Path <source> -Destination <destination>
```

### Example:

```powershell
Copy-Item -Path C:\Users\Example\file.txt -Destination C:\Backup\
```

This copies `file.txt` from `C:\Users\Example\` to `C:\Backup\`.

---

### Useful options:

* To copy recursively (folders and their contents), use `-Recurse`:

```powershell
Copy-Item -Path C:\SourceFolder -Destination C:\TargetFolder -Recurse
```

* To overwrite existing files, add `-Force`:

```powershell
Copy-Item -Path C:\file.txt -Destination C:\Backup\ -Force
```

---

If you want a quick alias, you can also use:

```powershell
cp <source> <destination>
```

because `cp` is an alias for `Copy-Item` in PowerShell.

---

Need a specific example or help copying something?
