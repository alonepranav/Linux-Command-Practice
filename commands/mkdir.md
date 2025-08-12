## 📁 `mkdir` — Make Directories (Folders)

* **Purpose:** Creates one or more directories in the filesystem.

---

### 🧾 Basic Usage

```bash
mkdir directory_name
```

Creates a new folder named `directory_name` in the current directory.

---

### 📁 Examples

* Create a single folder:

```bash
mkdir projects
```

* Create several folders at once:

```bash
mkdir dir1 dir2 dir3
```

* Create a nested folder structure (with parents):

```bash
mkdir -p /home/user/code/python/project
```

If any of these folders don't exist, `-p` makes them.

---

### ⚙️ Useful Options

| Option | What it does                          | Example              |
| ------ | ------------------------------------- | -------------------- |
| `-p`   | Create parent directories as needed   | `mkdir -p a/b/c`     |
| `-v`   | Show messages for each created folder | `mkdir -v newfolder` |

Output for `-v`:

```
mkdir: created directory 'newfolder'
```

---

### ✅ Summary

* `mkdir` makes folders.
* Use `-p` for nested or deep paths.
* Use `-v` to see what’s being created.
* Create multiple directories in one command.
