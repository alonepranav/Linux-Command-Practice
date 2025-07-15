## 📍 `pwd` — **Print Working Directory**

### 🔧 **Purpose:**

Displays the **absolute path** of the **current working directory** — where you're located in the file system.

---

## 🧱 **Syntax**

```bash
pwd [OPTION]
```

---

## 📥 **Options**

| Option | Description                                                                                  |
| ------ | -------------------------------------------------------------------------------------------- |
| `-L`   | (Logical) Prints the logical current directory (respects symlinks). This is the **default**. |
| `-P`   | (Physical) Prints the **real physical directory**, resolving symlinks.                       |

---

## 🧪 **Examples**

### ✅ Print current path:

```bash
pwd
```

### ✅ Show actual (physical) path without symlinks:

```bash
pwd -P
```

### ✅ Show logical path (default):

```bash
pwd -L
```

---

## 🧠 Tips

* Useful when scripting or debugging to **know your current directory**.
* Often used before running file commands like `ls`, `cd`, or `cp`.

---

## 📂 Example Output

```bash
/home/username/projects/myapp
```

This tells you that you're in the `myapp` folder located at `/home/username/projects`.
