## 📂 `cd` — **Change Directory**

### 🔧 **Purpose:**

Changes the **current working directory** to the one specified.

---

## 🧱 **Syntax**

```bash
cd [OPTION] [directory]
```

* If no directory is specified, it goes to the **home directory**.
* `cd` is a **shell built-in command** (not an external program).

---

## 📁 **Path Types**

| Path Type     | Example           | Meaning                    |
| ------------- | ----------------- | -------------------------- |
| Absolute path | `/home/user/docs` | Starts from root `/`       |
| Relative path | `../folder`       | Based on current directory |
| Home shortcut | `~` or `$HOME`    | Your user's home directory |

---

## 🧪 **Examples**

```bash
cd documents/work        # Move into 'documents/work' (relative)
cd /var/log              # Go to '/var/log' (absolute)
cd ~                     # Go to home directory
cd                       # Also goes to home directory
cd -                     # Go back to the previous directory
cd ..                    # Go one level up (parent)
```

---

## ⚙️ **Options**

Though not often used, the POSIX `cd` can accept:

| Option | Description                                            |
| ------ | ------------------------------------------------------ |
| `-L`   | Follow symbolic links (default)                        |
| `-P`   | Use the **physical directory** (no symlink resolution) |

Example:

```bash
cd -P /some/path
```

---

## 🧠 **Tips & Notes**

* Use `pwd` to **confirm your current path**.
* You can use `cd ~/folder` to **jump to a folder in your home**.
* Use `cd --` to avoid confusion with folder names that begin with `-`.

---

Let me know the next command you'd like explained!

### Examples

* Go to a directory called `projects` inside your current folder:

  ```bash
  cd projects
  ```

* Go to your home directory (shortcut):

  ```bash
  cd
  ```

  or

  ```bash
  cd ~
  ```

* Go back to the previous directory you were in:

  ```bash
  cd -
  ```

* Go up one level (parent directory):

  ```bash
  cd ..
  ```

---
