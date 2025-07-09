## 🔄 `cd` — *Change Directory*

The `cd` command is used to **navigate between directories** (folders) in the Linux file system.

### 📌 **Syntax**

```bash
cd [directory_path]
```

If you run `cd` without any arguments:

```bash
cd
```

It will take you to your **home directory** (like `/home/username`).

---

### 📂 **Examples of `cd` Usage**

#### 1. **Go into a specific directory**

```bash
cd Documents
```

Changes to the `Documents` folder inside your current directory.

#### 2. **Go back to the parent directory**

```bash
cd ..
```

Moves **up one level** in the directory structure.

#### 3. **Go back two levels**

```bash
cd ../..
```

Moves **up two levels**.

#### 4. **Go to your home directory**

```bash
cd
```

or

```bash
cd ~
```

#### 5. **Go to the root directory**

```bash
cd /
```

Takes you to the **root** of the file system.

#### 6. **Use absolute path**

```bash
cd /home/username/Desktop
```

Goes directly to `Desktop` using the **full path**.

#### 7. **Use relative path**

```bash
cd foldername/subfolder
```

Navigates from your current location **into a folder inside another folder**.

#### 8. **Go to previous directory**

```bash
cd -
```

Switches to the **last directory you were in**.

---

### 🔍 **Check your location**

Use:

```bash
pwd
```

This shows your **current working directory**.

---

### ⚠️ Common Errors

| Error                       | Reason                                         |
| --------------------------- | ---------------------------------------------- |
| `No such file or directory` | You typed a wrong path or folder doesn't exist |
| `Permission denied`         | You don’t have access to that directory        |

---

### 🧠 Tips

* Use `Tab` to **autocomplete folder names**.
* Use `ls` before `cd` to **see what directories are available**.

---

Let me know if you want an **interactive exercise**, or if you’d like to learn about `cd` with **bash scripting** or shortcuts like aliases!
