## 🌳 The `tree` Command — See Your Directory Structure at a Glance!

---

### 🧐 What’s `tree`?

`tree` is your Linux **folder explorer** in the terminal —
it visualizes directories and files in a neat, branching tree format, showing how everything is nested inside folders.

---

### 🚀 Basic Usage:

```bash
tree
```

*Runs in the current directory and shows all files and folders recursively.*

---

### 🎛️ Handy Options to Know

| Option       | What It Does                                     | Example                     |
| ------------ | ------------------------------------------------ | --------------------------- |
| `-L <level>` | Limit depth of tree levels displayed             | `tree -L 2` (2 levels deep) |
| `-a`         | Show **all** files, including hidden (dot) files | `tree -a`                   |
| `-d`         | Show **only directories**                        | `tree -d`                   |
| `-f`         | Show **full path** prefix for each file          | `tree -f`                   |
| `-h`         | Show file sizes in **human-readable** format     | `tree -h`                   |

---

### 💡 Example Command:

```bash
tree -L 2 -a
```

*Show all files & folders, including hidden ones, up to 2 levels deep.*

---

### 🛠️ Installing `tree`

If you don’t have it yet, install it like this:

| Distro        | Install Command             |
| ------------- | --------------------------- |
| Debian/Ubuntu | `sudo apt-get install tree` |
| Fedora        | `sudo dnf install tree`     |
| Arch Linux    | `sudo pacman -S tree`       |

---

### 🌟 Bonus

Want to **save your directory tree to a file?**

```bash
tree -L 2 > directory_structure.txt
```
