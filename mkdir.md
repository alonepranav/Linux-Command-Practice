### `mkdir` — Make Directory

* **Purpose:** Creates one or more new directories (folders) in the filesystem.

---

### Basic Usage

```bash
mkdir directory_name
```

This command creates a new directory called `directory_name` in the current working directory.

---

### Examples

* Create a directory called `projects`:

  ```bash
  mkdir projects
  ```

* Create multiple directories at once:

  ```bash
  mkdir dir1 dir2 dir3
  ```

---

### Useful Options

* `-p` (parents): Creates parent directories as needed.
  Example:

  ```bash
  mkdir -p /home/user/workspace/project
  ```

  This creates all directories in the path if they don’t exist yet.

* `-v` (verbose): Shows a message for each created directory.

  ```bash
  mkdir -v newfolder
  ```

  Output:

  ```
  mkdir: created directory 'newfolder'
  ```

---

### Summary

* `mkdir` creates folders.
* Use `-p` for nested directories.
* You can create multiple folders at once.

---
 