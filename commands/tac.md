## 🔄 `tac` — Reverse the File Content Line-by-Line

The `tac` command is like `cat`, but **in reverse**.

---

### 📘 What is `tac`?

* `tac` stands for **“cat” spelled backward**.
* It prints the contents of a file **starting from the last line** and ending with the first.
* Useful for reading logs or files in reverse order.

---

### 🧾 Basic Syntax

```bash
tac filename
```

---

### 📂 Example

Let’s say `sample.txt` contains:

```
Line 1
Line 2
Line 3
```

Command:

```bash
tac sample.txt
```

**Output:**

```
Line 3
Line 2
Line 1
```

---

### 🔧 Uses Cases

* Quickly view the **last lines first** (like reading logs or output history).
* Reverse line order in any text file.
* Pipe output for further processing:

```bash
tac file.txt | grep "error"
```

---

### 🧠 Summary

| Command        | Result                      |
| -------------- | --------------------------- |
| `cat file.txt` | Shows content top to bottom |
| `tac file.txt` | Shows content bottom to top |
