You got it! Let’s break down **`mv`** — another essential command that’s all about moving and renaming files or directories.

---

### `mv` — Move or Rename Files and Directories

* **Purpose:** Moves files/directories to a new location or renames them.

---

### Basic Usage

```bash
mv source destination
```

* If `destination` is a directory, `source` is moved into it.
* If `destination` is a filename (or doesn’t exist), `source` is renamed.

---

### Examples

* Move a file to another directory:

  ```bash
  mv file.txt /home/user/documents/
  ```

* Rename a file:

  ```bash
  mv oldname.txt newname.txt
  ```

* Move and rename at the same time:

  ```bash
  mv file.txt /home/user/docs/newfile.txt
  ```

* Move multiple files into a directory:

  ```bash
  mv file1.txt file2.txt /home/user/backup/
  ```

---

### Useful options

* `-i` : Interactive mode — asks before overwriting.

  ```bash
  mv -i file.txt /some/path/
  ```

* `-v` : Verbose — shows what’s being moved.

  ```bash
  mv -v file.txt /some/path/
  ```

---

### Quick tip:

* Unlike `cp`, `mv` **does not** keep the original — it moves or renames it.
* To rename directories, `mv` works just the same as files.

---

Want to try renaming or moving something? Or shall I explain another command?
