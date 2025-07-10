Great! Let’s talk about **`dir`** — it’s a simple but useful command related to listing directory contents.

---

### `dir` — List Directory Contents

* **Purpose:** Displays the files and folders inside the current directory or a specified directory.

---

### Basic Usage

```bash
dir
```

This lists files and directories in the current folder, similar to `ls`.

---

### Examples

* List files in the current directory:

  ```bash
  dir
  ```

* List files in a specific directory:

  ```bash
  dir /home/user/documents
  ```

---

### How is `dir` different from `ls`?

* `dir` and `ls` are similar, but:

  * `ls` has more options and is more commonly used.
  * `dir` outputs a simple list with one entry per line by default.
  * On some systems, `dir` behaves like `ls -C -b` (columns and escape non-printing characters).

---

### Common Options for `dir`

* `-l` : Long listing format (shows permissions, size, owner, date)

  ```bash
  dir -l
  ```

* `-a` : Shows hidden files (those starting with a dot)

  ```bash
  dir -a
  ```

---

### Quick Comparison:

| Command | Behavior                                        |
| ------- | ----------------------------------------------- |
| `ls`    | More versatile, colorful output on many systems |
| `dir`   | Simple list, one entry per line                 |

---

Want me to show you how to use `ls` next? Or maybe you want examples or exercises with `dir`?
