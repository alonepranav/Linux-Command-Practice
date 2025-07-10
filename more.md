`more` is a Linux command used to **view the contents of a text file one screen at a time**. It’s helpful when a file is too long to fit in one terminal screen.

---

### Basic usage:

```bash
more filename.txt
```

This will display the contents of `filename.txt` page by page.

---

### How it works:

* Press **Space** to go to the **next page**.
* Press **Enter** to go to the **next line**.
* Press **q** to **quit** and exit the `more` viewer.

---

### Example:

```bash
more /var/log/syslog
```

will show the system log file one screen at a time.

---

### Note:

`more` is simple, but it has fewer features than `less`, which is a more advanced pager program.

Want me to explain `less` or some other file viewing commands?
