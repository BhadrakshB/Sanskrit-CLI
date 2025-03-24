# Sanskrit Command-Line Interface (CLI)

Welcome to the Sanskrit Command-Line Interface (CLI), a unique environment where traditional command-line operations are mapped to Sanskrit commands. This interface allows users to interact with the system using Sanskrit terminology, providing an immersive experience for those interested in the language. 
A simple wrapper over our current command line to use Sanskrit keywords and execute. An attempt to run my hands through c++ and preserve the Sanskrit Language.

## Current Commands

Below is a list of currently supported Sanskrit commands and their corresponding standard command-line operations:

| Sanskrit Command                | Standard Command |
|---------------------------------|------------------|
| `sanchikah`                     | `ls`             |
| `vishodhanam`                   | `cls`            |
| `nirgachhatu`                   | `exit`           |
| `sahayyam`                      | `help`           |
| `samkaranam-drishyatam`         | `ver`            |
| `pratidhvani-darshayatu`        | `echo`           |
| `shirshakam-parivartayatu`      | `title`          |
| `pathah-parivartayatu`          | `cd`             |
| `sanchikanam-suchi`             | `dir`            |
| `navamaputam-srijatu`           | `md`             |
| `sanchikam-nishkasayatu`        | `rd`             |
| `nasham-kuruta`                 | `del`            |
| `anukriti-kuruta`               | `copy`           |
| `sthanantaram-kuruta`           | `move`           |
| `nama-parivartanam-kuruta`      | `ren`            |
| `tantrasya-vivaranam`           | `systeminfo`     |
| `tantra-vyavasthapanaya-ajna`   | `wmic`           |
| `karyasuchi-darshayatu`         | `tasklist`       |
| `karyam-nirasayatu`             | `taskkill`       |
| `sanganakanama-pradarshayatu`   | `hostname`       |
| `aham-kah`                      | `whoami`         |
| `sanjalasamyojanam-darshayatu`  | `ipconfig`       |
| `sanjalasamvadam-parikshanam-kuruta` | `ping`     |
| `marga-nirikshanam-kuruta`      | `tracert`        |
| `namasanketasya-anveshanam-kuruta` | `nslookup`     |
| `madhyamam-parikshanam-kuruta`  | `chkdsk`         |
| `madhyam-vibhagam-kuruta`       | `diskpart`       |
| `madhyam-rupanam-kuruta`        | `format`         |
| `upayogakartru-suchi-darshayatu`| `net user`       |
| `samuhasya-vivaranam-darshayatu`| `net group`      |
| `sanchikayah-gudhalekhanam-kuruta` | `cipher`       |
| `tantram-nishkriyam-kuruta`     | `shutdown`       |
| `urjavyavastha-nirdishtam-kuruta` | `powercfg`     |
| `tantrasamracana-parikshanam-kuruta` | `sfc /scannow` |
| `panji-sampadakam-udghatayatu`  | `regedit`        |

## Future Enhancements

We are committed to expanding the capabilities of the Sanskrit CLI. In future updates, we plan to introduce additional commands and functionalities to enrich the user experience. Stay tuned for upcoming features and improvements.

## Contributing

We welcome contributions from the community. If you have suggestions for new commands or enhancements, please feel free to submit your ideas.

---

*Note: This project is a work in progress. Some features may not be fully implemented at this time.* 


# Contributing Guide
## Fork the repository on GitHub, then clone your fork
 - git clone https://github.com/BhadrakshB/The-Sanskrit-Shell 
 - cd The-Sanskrit-Shell
## Create a branch for your contribution
 - git checkout -b feature/your-feature-name
 - Make Your Changes
 - Follow the code style guidelines
 - Update documentation as needed
   
## Submit a Pull Request
Push your changes to your fork
Submit a pull request from your branch to our main branch
Provide a clear description of the changes and any related issues
Keep functions focused and small (under 50 lines when possible)
Use meaningful variable and function names

### Commit Message Guidelines

We follow the [Conventional Commits](https://www.conventionalcommits.org/) specification:

```
<type>(<scope>): <description>

[optional body]

[optional footer(s)]
```

Types include:
- `feat`: A new feature
- `fix`: A bug fix
- `docs`: Documentation changes
- `style`: Code style changes (formatting, etc.)
- `refactor`: Code changes that neither fix bugs nor add features
- `test`: Adding or modifying tests
- `chore`: Changes to the build process or auxiliary tools

### Pull Request Process

1. Update the README.md or documentation with details of changes if appropriate
2. Update the CHANGELOG.md with details of changes
3. PRs require approval from at least one maintainer
4. Once approved, a maintainer will merge your PR
