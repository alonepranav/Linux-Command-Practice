Nice! The **`man`** command is one of the most important tools for any Linux user.

---

### `man` — Manual Pages

* **Purpose:** Displays the manual (help documentation) for other commands or programs.

---

### Basic Usage

```bash
man command_name
```

Example:

```bash
man ls
```

This opens the manual page for the `ls` command, showing you how to use it, options, examples, and more.

---

### What you get in a man page:

* **NAME:** The command name and short description
* **SYNOPSIS:** How to use the command with options
* **DESCRIPTION:** Details about what the command does
* **OPTIONS:** List of flags and what they do
* **EXAMPLES:** (Sometimes) Examples on how to use it
* **SEE ALSO:** Related commands

---

### Navigation inside `man`

* Use **Up/Down arrow keys** or **Page Up/Page Down** to scroll.
* Press **q** to quit and exit the manual.

---

### Handy tips

* If you want to search inside the man page, press `/`, type your search term, and hit Enter.
* To find commands related to a keyword, try:

  ```bash
  man -k keyword
  ```

  (Similar to `apropos keyword`)

---

### Example:

```bash
man mkdir
```

---
 