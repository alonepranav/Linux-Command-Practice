## 🐱 `cat` — **Concatenate and display files**

The `cat` (short for **concatenate**) command is used to **read, display, combine, and create text files**.

---

## 🧱 **Syntax**

```bash
cat [OPTION]... [FILE]...
```

* You can provide **zero or more files**.
* If no file is provided, `cat` reads from **standard input (keyboard)**.

---

## ⚙️ **Options / Flags**

| Option      | Description                                                                 |
| ----------- | --------------------------------------------------------------------------- |
| `-A`        | Show **all characters**, including non-printing characters (same as `-vET`) |
| `-b`        | Number **non-blank** lines                                                  |
| `-e`        | Show end of each line with `$`, and non-printing characters (same as `-vE`) |
| `-E`        | Show `$` at the end of each line                                            |
| `-n`        | Number **all** lines                                                        |
| `-s`        | Squeeze **multiple blank lines** into one                                   |
| `-T`        | Show tabs as `^I`                                                           |
| `-v`        | Show **non-printing characters**, except tabs and line endings              |
| `--help`    | Show help                                                                   |
| `--version` | Show version info                                                           |

---

## 📂 **Common Use Cases**

### ✅ 1. **View contents of a file**

```bash
cat file.txt
```

### ✅ 2. **View multiple files**

```bash
cat file1.txt file2.txt
```

### ✅ 3. **Combine files into one**

```bash
cat file1.txt file2.txt > combined.txt
```

### ✅ 4. **Append contents to a file**

```bash
cat file3.txt >> existing.txt
```

### ✅ 5. **Create a new file**

```bash
cat > newfile.txt
```

Then type content, press `Ctrl+D` to save.

### ✅ 6. **Number lines in a file**

```bash
cat -n file.txt
```

### ✅ 7. **Display invisible characters**

```bash
cat -A file.txt
```

---

## 🧠 Notes

* `cat` is fast and works well for small to medium-sized files.
* For large files, prefer tools like `less`, `more`, or `tail`.

---