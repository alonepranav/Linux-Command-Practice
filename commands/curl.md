## 🌐 `curl` — Transfer Data from the Command Line

**Purpose:**
`curl` (Client URL) lets you **send and receive data** from a server using many different internet protocols.

---

### 🧾 Basic Syntax

```bash
curl [options] [URL]
```

---

### 🔧 Supported Protocols

* `HTTP`, `HTTPS` — web requests
* `FTP`, `FTPS` — file transfers
* `SFTP`, `SCP` — secure file transfers
* `SMTP`, `POP3`, `IMAP` — email
* ...and more

---

### ⚙️ Common Options

| Option          | Description                             | Example                                                        |
| --------------- | --------------------------------------- | -------------------------------------------------------------- |
| `-X`            | HTTP method (GET, POST, PUT, DELETE...) | `curl -X POST https://example.com`                             |
| `-d`            | Send POST data (form-encoded)           | `curl -d "user=admin&pass=123" https://example.com/login`      |
| `-H`            | Add HTTP headers                        | `curl -H "Auth: Bearer TOKEN" https://api.example.com/data`    |
| `-i`            | Show response headers too               | `curl -i https://example.com`                                  |
| `-v`            | Verbose mode (debugging)                | `curl -v https://example.com`                                  |
| `-o`            | Save output to file                     | `curl -o file.txt https://example.com/file.txt`                |
| `-L`            | Follow redirects                        | `curl -L http://short.url`                                     |
| `-u`            | Use basic auth                          | `curl -u user:pass https://example.com`                        |
| `--data-binary` | Send raw data as-is                     | `curl --data-binary @data.json https://api.example.com/upload` |

---

### 📁 Common Examples

#### 1. **Simple GET Request**

```bash
curl https://api.github.com
```

#### 2. **POST Data to a Server**

```bash
curl -X POST -d "username=john&password=1234" https://example.com/login
```

#### 3. **Add Custom Headers (e.g., for APIs)**

```bash
curl -H "Authorization: Bearer YOUR_TOKEN" https://api.example.com/data
```

#### 4. **Download a File**

```bash
curl -o image.jpg https://example.com/pic.jpg
```

#### 5. **Follow Redirects Automatically**

```bash
curl -L http://bit.ly/some-short-url
```

---

### 🧠 Notes

* `curl` is **pre-installed** on most Unix/Linux/macOS systems.
* Available on **Windows 10+** by default (or install via `winget`, `choco`, etc).
* Use `curl --help` or `man curl` to explore all options.

---

### ✅ Summary

| Task                | Command Example                                 |
| ------------------- | ----------------------------------------------- |
| GET a webpage       | `curl https://example.com`                      |
| POST form data      | `curl -d "a=1&b=2" https://site.com/form`       |
| Add custom headers  | `curl -H "Key: Value" https://api.com`          |
| Save output to file | `curl -o file.txt https://example.com/file.txt` |
| Follow redirects    | `curl -L http://short.link`                     |
