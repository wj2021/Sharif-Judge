# Fork 说明
原版已不再更新，在此fork并修复了部分bug：
- mysql的TEXT类型初始化问题
- 对上传文件进行utf-8编码转换，避免后续问题（例如moss无法使用、代码无法查看等问题）
- 对上传代码文件做删除BOM的预处理，避免编译问题

功能完善：
- 新增本地latex数学公式的渲染（内网可渲染）（在assert/js目录下添加MathJax3.1.2目录以实现本地渲染）
  在problem编辑页面开头引用以下代码以实现本地数学公式渲染
    ```javascript
    <script>MathJax = {tex: {inlineMath: [['$', '$'], ['\\(', '\\)']]}};</script>
    <script id="MathJax-script" async src="/assets/js/MathJax3.1.2/tex-mml-chtml.js"></script>
    ```
- 更新Easysandbox(下载新的easysandbox文件覆盖tester/easysandbox)
- 修复topbar、assignments、all submissions页面font-awesome图标显示问题（CSS .class选择器少空格）
- 在top_bar上添加[RaiseHand](https://github.com/wj2021/RaiseHand)项目的链接（修改application/views/templates/top_bar.twig文件）
# Sharif Judge

[Sharif Judge](https://github.com/mjnaderi/Sharif-Judge) is a free and open source online judge for C, C++, Java and Python programming courses.

The web interface is written in PHP (CodeIgniter framework) and the main backend is written in BASH.

Python in Sharif Judge is not sandboxed yet. Just a low level of security is provided for python.
If you want to use Sharif Judge for python, USE IT AT YOUR OWN RISK or provide sandboxing yourself.

The full documentation is at https://github.com/mjnaderi/Sharif-Judge/tree/docs

Download the latest release from https://github.com/mjnaderi/Sharif-Judge/releases

## Features
  * Multiple user roles (admin, head instructor, instructor, student)
  * Sandboxing _(not yet for python)_
  * Cheat detection (similar codes detection) using [Moss](http://theory.stanford.edu/~aiken/moss/)
  * Custom rule for grading late submissions
  * Submission queue
  * Download results in excel file
  * Download submitted codes in zip file
  * _"Output Comparison"_ and _"Tester Code"_ methods for checking output correctness
  * Add multiple users
  * Problem Descriptions (PDF/Markdown/HTML)
  * Rejudge
  * Scoreboard
  * Notifications
  * ...

## Requirements

For running Sharif Judge, a Linux server with following requirements is needed:

  * apache2 webserver
  * Webserver running PHP version 5.3 or later with `mysqli`, `mbstring` extension
  * PHP CLI (PHP command line interface, i.e. `php` shell command)
  * MySql or PostgreSql database
  * PHP must have permission to run shell commands using [`shell_exec()`](http://www.php.net/manual/en/function.shell-exec.php) php function (specially `shell_exec("php");`)
  * Tools for compiling and running submitted codes (`gcc`, `g++`, `javac`, `java`, `python2` and `python3` commands)
  * It is better to have `perl` installed for more precise time and memory limit and imposing size limit on output of submitted code.

## Installation

  1. Download the latest release from [download page](https://github.com/mjnaderi/Sharif-Judge/releases) and unpack downloaded file in your public html directory.
  2. **[Optional]** Move folders `system` and `application` somewhere outside your public directory. Then save their full path in `index.php` file (`$system_path` and `$application_folder` variables).
  3. Create a MySql or PostgreSql database for Sharif Judge. Do not install any database connection package for C/C++, Java or Python.
  4. Set database connection settings in `application/config/database.php`.
  5. Make `application/cache/Twig` writable by php.
  6. Open the main page of Sharif Judge in a web browser and follow the installation process.
  7. Log in with your admin account.
  8. **[IMPORTANT]** Move folders `tester` and `assignments` somewhere outside your public directory. Then save their full path in `Settings` page. **These two folders must be writable by PHP.** Submitted files will be stored in `assignments` folder. So it should be somewhere not publicly accessible.
  9. **[IMPORTANT]** [Secure Sharif Judge](https://github.com/mjnaderi/Sharif-Judge/blob/docs/v1.4/security.md)

## After Installation

  * Read the [documentation](https://github.com/mjnaderi/Sharif-Judge/tree/docs)

## License

GPL v3
