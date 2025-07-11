
### `cp` — Copy Files and Directories

* **Purpose:** Copies files or directories from one location to another.

---

### Basic Usage

```bash
cp source_file destination
```

This copies `source_file` to the `destination`.

---

### Examples

* Copy a file to the current directory with a new name:

  ```bash
  cp file1.txt copy_of_file1.txt
  ```

* Copy a file to another directory:

  ```bash
  cp file1.txt /home/user/documents/
  ```

* Copy multiple files to a directory:

  ```bash
  cp file1.txt file2.txt /home/user/documents/
  ```

---

### Copy directories

* To copy a directory and all its contents, use the `-r` (recursive) option:

  ```bash
  cp -r folder1/ folder2/
  ```

---

### Useful options

* `-i` : Interactive mode — asks before overwriting existing files.

  ```bash
  cp -i file.txt /some/path/
  ```

* `-v` : Verbose — shows what’s being copied.

  ```bash
  cp -v file.txt /some/path/
  ```

---

### Summary

* `cp` copies files or folders.
* Use `-r` to copy directories recursively.
* Use `-i` to avoid accidental overwrites.
* Use `-v` to see details of the copy process.

---

Want me to guide you through a copying task or explain more file commands?
