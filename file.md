The **`file`** command is super handy for figuring out what kind of file you’re dealing with.

---

### `file` — Identify File Type

* **Purpose:** Determines the type of a file by examining its contents, not just the file extension.

---

### Basic Usage

```bash
file filename
```

Example:

```bash
file myscript.sh
```

Output might be:

```
myscript.sh: Bourne-Again shell script, ASCII text executable
```

---

### What it does:

* Checks magic numbers, file headers, and other data inside the file to guess the type.
* Works on all sorts of files: text files, executables, images, archives, etc.

---

### Examples

* Check a text file:

```bash
file notes.txt
```

Output:

```
notes.txt: ASCII text
```

* Check an image:

```bash
file picture.jpg
```

Output:

```
picture.jpg: JPEG image data, JFIF standard 1.01
```

* Check a binary executable:

```bash
file /bin/ls
```

Output:

```
/bin/ls: ELF 64-bit LSB executable, x86-64
```

---

### Why useful?

* Sometimes extensions can be misleading or missing.
* Helps decide how to open or work with a file.

---
 