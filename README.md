# Technical Writing Portfolio

![Git](https://img.shields.io/badge/VCS-Git-F05032?style=for-the-badge&logo=git&logoColor=white)
![GitHub](https://img.shields.io/badge/Platform-GitHub-181717?style=for-the-badge&logo=github&logoColor=white)
![LaTeX](https://img.shields.io/badge/Typesetting-LaTeX-474A8A?style=for-the-badge&logo=latex&logoColor=white)
![Doxygen](https://img.shields.io/badge/Docs-Doxygen-2C415C?style=for-the-badge)

A practical portfolio documenting the tools, techniques, and workflows explored in the **Technical Writing** course for Semester III, B.Tech Computer Science and Engineering, **MNIT Jaipur**.

**Student:** Sudeep Abraham Ajith  
**GitHub:** [sudeep-gh29](https://github.com/sudeep-gh29)  
**Course:** Technical Writing  
**Institution:** Malaviya National Institute of Technology Jaipur

---

## Portfolio Modules

| Module | Topic | Description | Source & Output |
| :--- | :--- | :--- | :--- |
| **01. Git & GitHub** | Version Control | Repository setup, staging, commits, branches, remotes, and collaboration workflows | [Documentation](./docs/git/README.md) |
| **02. LaTeX** | Scientific Typesetting | Structured technical reports, mathematical expressions, tables, figures, and references | [Source & PDF](./docs/latex/) |
| **03. Beamer** | Presentations | Presentation slides created with LaTeX Beamer, frames, sections, themes, and lists | [Source & PDF](./docs/beamer/) |
| **04. Doxygen** | Code Documentation | Structured C/C++ comments, documentation tags, configuration, and generated HTML | [Source & Guide](./docs/doxygen/) |
| **05. Google Docs** | Collaborative Writing | Document styles, heading hierarchy, tables of contents, review tools, and PDF export | [Guide](./docs/googledocs/README.md) |

---

## Verification & Compilation Commands

The following commands are intended to be run from a terminal. Install the relevant tools before compiling.

### 1. Compile the LaTeX report
```bash
cd docs/latex
pdflatex report.tex
```

### 2. Compile the Beamer presentation
```bash
cd docs/beamer
pdflatex slides.tex
```

### 3. Generate Doxygen documentation
```bash
cd docs/doxygen
doxygen Doxyfile
```
Open `docs/doxygen/html/index.html` in a web browser after generation.

### 4. Git workflow
```bash
git status
git add .
git commit -m "Describe the work completed"
git push origin main
```

---

## Repository Structure

```text
Technical-Writing-Portfolio/
├── README.md
└── docs/
    ├── git/
    │   └── README.md
    ├── latex/
    │   ├── report.tex
    │   └── report.pdf
    ├── beamer/
    │   ├── slides.tex
    │   └── slides.pdf
    ├── doxygen/
    │   ├── Doxyfile
    │   ├── math_ops.h
    │   ├── README.md
    │   └── html/
    └── googledocs/
        └── README.md
```

---

## Learning Approach

Each module is organised around the purpose of the tool, essential concepts, practical source files, instructions to reproduce the output, and notes explaining the workflow. The repository is intended to be both a record of course learning and a reproducible technical-writing portfolio.

*Source files are maintained alongside generated outputs wherever practical so that the work can be inspected and rebuilt.*
