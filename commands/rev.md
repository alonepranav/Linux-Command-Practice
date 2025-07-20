## 🔁 `rev` — Reverse Characters in Each Line

The `rev` command takes input (a file or standard input) and **reverses the characters in each line**, not the order of lines.

---

### 📘 What It Does

* Unlike `tac`, which reverses **lines**, `rev` reverses the **characters within each line**.
* Think of it like flipping each sentence backward, one line at a time.

---

### 🧾 Basic Syntax

```bash
rev filename
```

Or use it with standard input:

```bash
echo "hello" | rev
```

---

### 📂 Example

Let’s say `sample.txt` contains:

```
hello
world
```

Command:

```bash
rev sample.txt
```

**Output:**

```
olleh
dlrow
```

---

### 💡 Use Cases

* Fun text transformations
* Reversing data for simple encoding
* Piping with other commands in scripts

---

### 🧠 Summary

| Command | Effect                               |
| ------- | ------------------------------------ |
| `rev`   | Reverses characters in **each line** |
| `tac`   | Reverses the **order of lines**      |
