The `del` command in PowerShell is used to delete files. It's an alias for the `Remove-Item` cmdlet when targeting files.

### Basic usage:

```powershell
del filename.txt
```

This deletes the file named `filename.txt` in the current directory.

### Equivalent long form:

```powershell
Remove-Item filename.txt
```

---

### Examples:

* Delete a single file:

```powershell
del C:\temp\file1.txt
```

* Delete multiple files using wildcard:

```powershell
del *.log
```

* Delete files without prompt:

```powershell
del *.txt -Force
```

---

### Notes:

* To delete folders, you need to use `Remove-Item` with `-Recurse` parameter.
* `del` is a shorthand and less flexible than `Remove-Item`.

If you want, I can help with examples for deleting folders or other specific scenarios!
