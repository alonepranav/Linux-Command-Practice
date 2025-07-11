 
---

### What is `curl`?

`curl` (Client URL) is a command-line tool used to transfer data to or from a server, using various protocols such as:

* HTTP / HTTPS
* FTP / FTPS
* SCP, SFTP
* LDAP
* SMTP, POP3, IMAP
* And others

It’s widely used for testing APIs, downloading files, or sending data from the terminal.

---

### Basic syntax

```bash
curl [options] [URL]
```

---

### Commonly used options

| Option          | Description                                                     | Example                                                         |
| --------------- | --------------------------------------------------------------- | --------------------------------------------------------------- |
| `-X <METHOD>`   | Specify HTTP method (GET, POST, PUT, DELETE, etc.)              | `curl -X POST https://api.example.com`                          |
| `-d <data>`     | Send data in a POST request (application/x-www-form-urlencoded) | `curl -d "name=John&age=30" https://api.example.com`            |
| `-H <header>`   | Add HTTP headers                                                | `curl -H "Authorization: Bearer TOKEN" https://api.example.com` |
| `-i`            | Include HTTP response headers in the output                     | `curl -i https://example.com`                                   |
| `-v`            | Verbose mode (shows detailed request/response info)             | `curl -v https://example.com`                                   |
| `-o <file>`     | Save output to a file                                           | `curl -o file.txt https://example.com/file.txt`                 |
| `-L`            | Follow redirects                                                | `curl -L http://short.url`                                      |
| `-u user:pass`  | Use basic authentication                                        | `curl -u username:password https://example.com`                 |
| `--data-binary` | Send data exactly as provided (for raw payloads)                | `curl --data-binary @file.json https://api.example.com`         |

---

### Examples

1. **GET request**

```bash
curl https://api.github.com
```

2. **POST request with data**

```bash
curl -X POST -d "username=john&password=1234" https://example.com/login
```

3. **GET with custom headers**

```bash
curl -H "Authorization: Bearer YOUR_TOKEN" https://api.example.com/data
```

4. **Download a file**

```bash
curl -o myfile.zip https://example.com/file.zip
```

5. **Follow redirects**

```bash
curl -L http://bit.ly/some-short-url
```

---

### Notes

* `curl` is available on most Unix/Linux/macOS systems by default. Windows users can install it separately or use Windows 10+ which includes it.
* It supports a wide range of protocols and features, making it a versatile tool for developers and sysadmins.
* You can use `man curl` or `curl --help` to see all options.

---

If you want, I can help generate a specific `curl` command for your needs. Just tell me what you want to do!
