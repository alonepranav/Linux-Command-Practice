### `cd` — Change Directory

* **Purpose:** Changes your current working directory to another directory.

---

### Basic Usage

```bash
cd directory_path
```

This moves you into the directory specified by `directory_path`.

---

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

### Tips

* Use `pwd` (print working directory) to check where you currently are:

  ```bash
  pwd
  ```

* Paths can be:

  * **Absolute**: starts from root `/` like `/home/user/projects`
  * **Relative**: relative to current directory, like `../folder`

--- 