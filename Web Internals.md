### **Internal Examination: Web Technologies**

#### **Q1. Explain the following tags/concepts with example: (i) Hypertext Link (ii) MIME (iii) URL (iv) Image.**

**Answer:**

**(i) Hypertext Link** A hypertext link is a fundamental component of the Web that allows users to navigate from one document to another or to specific sections within the same document. In XHTML, links are created using the `<a>` (anchor) tag. The `href` attribute is used to specify the destination URL of the link. Links can also generate events such as `onclick`, `onfocus`, and `onblur` for user interaction.

- **Example:** `<a href="http://www.cs.usc.edu/styles/wbook.css">Style Sheet</a>.`

**(ii) MIME (Multipurpose Internet Mail Extensions)** MIME is a standard used to identify the type of data sent over the Internet. It is essential for ensuring that browsers, servers, and email systems handle files correctly. A MIME type indicates to the browser whether a file is an HTML page, an image, a video, or an application file.

- **Format:** The format is `type/subtype`.
- **Categories:**
    - `text/*`: Readable text files (e.g., `text/html`, `text/css`).
    - `image/*`: Image files (e.g., `image/jpeg`).
    - `application/*`: Files requiring specific processing (e.g., `application/pdf`, `application/json`).

**(iii) URL (Uniform Resource Locator)** A URL is the address used to locate resources on the Internet. It specifies the protocol used for communication and the location of the resource on a web server.

- **Structure:** `Protocol://Domain:Port/Path?Query#Fragment`.
    - **Protocol:** Defines communication method (e.g., `http`, `https`).
    - **Domain:** The server address (e.g., `www.example.com`).
    - **Path:** The specific location of the resource on the server.
- **Example:** `https://www.example.com:443/products?id=20#details`.

**(iv) Image** Images are embedded in web pages using the `<img>` tag. This element allows visual content to be displayed within the document flow. The `src` attribute specifies the URL of the image file, and the `alt` attribute provides alternative text.

- **Attributes:** `src`, `alt`.
- **Styling:** Images can be manipulated using CSS properties like `float` to wrap text around them (e.g., `float: right`).
- **Example:** `<img src="bit.jpg" alt="Picture of BIT" />`.

---

#### **Q2. Create an HTML page that provides information about your department which contains images and tables.**

**Answer:** To display department information, we use the `<img>` tag for visuals and the `<table>` tag for structured data like course details or faculty lists.

**Program Code:**

```html
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.1//EN" "http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
    <title>Department Information</title>
</head>
<body>
    <h1>Department of Computer Science</h1>
    <!-- Image with float property -->
    <p>
        <img src="dept_building.jpg" alt="Department Building" style="float: right" />
        Welcome to the Computer Science Department. We offer various programs including BE, MCA, and MBA.
    </p>

    <!-- Table for Course Details -->
    <table border="5">
        <caption>Course Offerings</caption>
        <tr>
            <th>Program Name</th>
            <th>Duration</th>
        </tr>
        <tr>
            <td>B.E. (CSE)</td>
            <td>4 Years</td>
        </tr>
        <tr>
            <td>MCA</td>
            <td>2 Years</td>
        </tr>
    </table>
</body>
</html>
```

**Trace/Explanation:**

1. **Image:** The `<img>` tag embeds "dept_building.jpg". The `style="float: right"` property ensures the text flows to the left of the image.
2. **Table:** A table is created with a border of 5 pixels (`<table border="5">`).
3. **Caption:** The `<caption>` tag adds a title "Course Offerings" above the table.
4. **Rows/Cells:** `<tr>` defines rows, `<th>` defines header cells (bold and centered), and `<td>` defines standard data cells.

---

#### **Q3. Explain about audio video tags with examples.**

**Answer:** In Web Technologies, handling multimedia is defined by MIME types which tell the browser how to process audio and video files. While modern HTML uses specific tags, the underlying mechanism relies on identifying the correct content type.

**Concepts:**

1. **Audio:** Audio files on the web are identified by MIME types such as `audio/*`. This ensures the browser knows to treat the file as sound.
2. **Video:** Video content is identified by MIME types such as `video/mp4`. When a browser receives this content type via HTTP headers, it attempts to play the video or prompt a download.

**MIME Type Examples:**

- **Audio:** `audio/mpeg`, `audio/wav`.
- **Video:** `video/mp4`, `video/quicktime`.

**Usage in Web:** Browsers request these files using URLs. When the server responds with a header like `Content-Type: video/mp4`, the browser invokes its media engine to render the frames and play the sound.

---

#### **Q4. Discuss Table tag and their attributes with an example.**

**Answer:** The `<table>` tag is used to arrange data into rows and columns. A standard table consists of rows (`<tr>`), headers (`<th>`), and data cells (`<td>`).

**Attributes and Styling:**

- **Border:** The `border` attribute creates a frame around the table (e.g., `<table border="5">`). Standard borders can be overridden by CSS properties like `border-style`, `border-width`, and `border-color`.
- **Caption:** The `<caption>` tag provides a title for the table.
- **Row/Cell Definition:** `<tr>` defines a row. `<th>` defines a header cell. `<td>` defines a data cell.

**Example Code:**

```html
<table border="5">
    <caption>Fruit Juice Drinks</caption>
    <tr>
        <th></th> <th>Apple</th> <th>Orange</th>
    </tr>
    <tr>
        <th>Breakfast</th> <td>0</td> <td>1</td>
    </tr>
</table>
```

**Explanation:**

1. A table is created with a 5-pixel border.
2. The caption "Fruit Juice Drinks" appears at the top.
3. The first row contains headers "Apple" and "Orange".
4. The second row begins with the header "Breakfast" followed by data values "0" and "1".

---

#### **Q5. Create an HTML page which include checkbox and radio buttons, select using forms.**

**Answer:** HTML Forms use input elements to collect user data.

**Key Concepts:**

- **Checkbox:** Allows multiple selections. They are grouped by name, forming an implicit array in the DOM (e.g., `dom.vehicles` for checkboxes named "vehicles").
- **Radio Button:** Allows only one selection from a group. All buttons in the group must share the same `name` attribute.
- **DOM Access:** JavaScript can access these elements via the `forms` array or `getElementById` to check properties like `.checked`.

**Example Code:**

```html
<form id="vehicleGroup">
    <!-- Checkboxes -->
    <input type="checkbox" name="vehicles" value="car" /> Car<br>
    <input type="checkbox" name="vehicles" value="bike" /> Bike<br>

    <!-- Radio Buttons -->
    <h4>Choose Model:</h4>
    <label>
        <input type="radio" name="planeButton" value="152" onclick="planeChoice(152)" /> Model 152
    </label>
    <label>
        <input type="radio" name="planeButton" value="172" onclick="planeChoice(172)" /> Model 172
    </label>
</form>
```

**Trace:**

1. The checkboxes allow selecting both "Car" and "Bike".
2. The radio buttons force a single choice between "Model 152" and "Model 172".
3. Clicking a radio button triggers the `planeChoice` function.

---

#### **Q6. Discuss the HTML5 Tags.**

**Answer:** While the specific term "HTML5 Tags" refers to semantic elements like `<article>` or `<section>`, the provided text focuses on the evolution of XHTML and multimedia handling found in modern HTML.

**Key HTML/XHTML Elements discussed:**

1. **Forms:** Enhanced input types and attributes for validation.
2. **Multimedia:** Identification of content via MIME types (`video/mp4`, `audio/mpeg`) which are fundamental to HTML5 media handling.
3. **Document Structure:** The standard hierarchy of `<html>`, `<head>`, and `<body>` remains the foundation for all HTML versions.
4. **Tables and Lists:** Standard tags `<table>`, `<ul>`, `<ol>` are used for structuring data.

---

#### **Q7. Discuss the basic structure of HTML Web page.**

**Answer:** An HTML (or XHTML) document has a hierarchical tree structure represented by the Document Object Model (DOM).

**Structure:**

1. **`<html>`**: The root element of the document.
2. **`<head>`**: Contains metadata, the document title (`<title>`), and scripts or style sheets (`<script>`, `<style>`, `<link>`) that are not directly displayed in the viewport.
3. **`<body>`**: Contains the visible content of the page, such as headings (`<h1>`), paragraphs (`<p>`), tables, and images.

**Example:**

```html
<html>
  <head>
    <title>DOM Tutorial</title>
  </head>
  <body>
    <h1>DOM Lesson one</h1>
    <p>Hello world!</p>
  </body>
</html>
```

**Explanation:** The browser renders the content inside `<body>` while using info in `<head>` for configuration.

---

#### **Q8. Explain the following HTML elements with suitable examples: i) Hypertext link ii) Blockquote tag iii) Image tag iv) Video tag**

**Answer:**

**(i) Hypertext link (`<a>`)** Used to navigate between pages.

- **Example:** `<a href="http://www.google.com">Google</a>`.

**(ii) Blockquote tag** (Note: While explicit syntax isn't in the provided text, standard HTML defines `<blockquote>` for long quotations. Based on general context in sources, text elements are styled via CSS).

**(iii) Image tag (`<img>`)** Embeds images.

- **Example:** `<img src="bit.jpg" alt="Picture of BIT" />`. Attributes include `src`, `alt`, and CSS float properties.

**(iv) Video tag** Content identified by video MIME types (e.g., `video/mp4`). Browsers allow embedding video content which requires a player engine to render frames.

---

#### **Q9 & Q10. Explain Ordered list and unordered list with an example.**

**Answer:** Lists group related items.

**1. Unordered List (`<ul>`):**

- Items are marked with bullets.
- **Style:** The `list-style-type` property changes the marker to `disc` (default), `circle`, or `square`. Custom images can be used via `list-style-image`.

**2. Ordered List (`<ol>`):**

- Items are numbered.
- **Style:** The `list-style-type` property sets the sequence format: `decimal` (1, 2, 3), `upper-roman` (I, II, III), `lower-alpha` (a, b, c), etc..

**Example:**

```html
<ul>
    <li class="square">Unordered Item (Square)</li>
</ul>
<ol>
    <li>Ordered Item (Decimal)
        <ol>
            <li>Nested Item</li>
        </ol>
    </li>
</ol>
```

.

---

#### **Q11. Develop a CSS program to illustrate different pseudo-classes and explain their functionality.**

**Answer:** Pseudo-classes specify a special state of an element.

**Key Pseudo-classes:**

1. **:hover**: Applies style when the mouse is over the element.
2. **:focus**: Applies style when the element (like an input) has the input focus (e.g., clicked inside).

**Program Code (`m2p1.html`):**

```html
<html>
<head>
<style type="text/css">
    input:hover { color: red; }   /* Red text on hover */
    input:focus { color: green; } /* Green text on click/focus */
</style>
</head>
<body>
    <form>
        <label>Your name: <input type="text" /></label>
    </form>
</body>
</html>
```

**Functionality Trace:**

- **Hover:** When the user moves the mouse over the text box, text inside turns red.
- **Focus:** When the user clicks inside to type, the text turns green.

---

#### **Q12. Discuss the following JavaScript dialog box methods with syntax, return values, and suitable examples: i) alert() ii) confirm()**

**Answer:** Dialog boxes are modal windows provided by the `window` object.

**(i) alert()**

- **Purpose:** Displays a message with an OK button.
- **Syntax:** `alert(message);`
- **Return Value:** None.
- **Example:** `alert("Form submitted!");`.

**(ii) confirm()**

- **Purpose:** Displays a message with OK and Cancel buttons.
- **Syntax:** `confirm(message);`
- **Return Value:** Returns `true` if OK is clicked; `false` if Cancel is clicked.
- **Example:**
    
    ```js
    let result = confirm("Delete file?");
    if (result) alert("Deleted");
    ```
    

.

---

#### **Q13. Develop a JavaScript program to generate the Fibonacci series for a given user-defined value N.**

**Answer:** This program uses a loop and `prompt` to generate the series.

**Program Code:**

```html
<!DOCTYPE html>
<html>
<head><title>Fibonacci</title></head>
<body>
<script type="text/javascript">
    var n = prompt("Enter the number of terms:", "10");
    var t1 = 0, t2 = 1;
    document.write("Fibonacci Series: <br />");

    for (var i = 1; i <= n; ++i) {
        document.write(t1 + ", ");
        var nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
</script>
</body>
</html>
```

**Trace:**

1. **Input:** User enters `n` (e.g., 5).
2. **Init:** `t1=0`, `t2=1`.
3. **Loop:**
    - Iter 1: Prints 0. `next=1`, `t1=1`, `t2=1`.
    - Iter 2: Prints 1. `next=2`, `t1=1`, `t2=2`.
    - Iter 3: Prints 1. `next=3`, `t1=2`, `t2=3`.
    - Iter 4: Prints 2.
    - Iter 5: Prints 3.
4. **Output:** 0, 1, 1, 2, 3 [Based on loop constructs 199 and prompt 37].

---

#### **Q14. Develop an HTML document to demonstrate different CSS font properties using an external style sheet.**

**Answer:** External style sheets allow styles to be defined in a separate file using the `.css` extension.

**HTML File (`m2p3.html`):**

```html
<html>
<head>
    <title>Font Properties</title>
    <link rel="stylesheet" type="text/css" href="styles.css" />
</head>
<body>
    <p class="major">Major Paragraph Text</p>
    <h2 class="fancy">Heading Text</h2>
</body>
</html>
```

**CSS File (`styles.css`):**

```css
p.major {
    font-size: 14pt;
    font-style: italic;
    font-family: 'Times New Roman';
}
h2.fancy {
    font-weight: bold;
    font-family: 'Courier New';
    font-size: 24pt;
}
```

**Explanation:** The `<link>` tag connects the HTML to `styles.css`. The paragraph uses Times New Roman (italic), and the heading uses Courier New (bold).

---

#### **Q15. Explain the different looping statements in JavaScript.**

**Answer:** JavaScript supports loops to execute code repeatedly.

1. **while Loop:**
    - Executes as long as the condition is true.
    - **Syntax:** `while (condition) { statements }`.
2. **for Loop:**
    - Includes initialization, condition, and increment in the header.
    - **Syntax:** `for (init; condition; increment) { statements }`.
3. **do-while Loop:**
    - Tests the condition at the end, guaranteeing at least one execution.
    - **Syntax:** `do { statements } while (condition);`.
4. **for-in Loop:**
    - Used to iterate over the properties of an object.
    - **Syntax:** `for (var prop in object) { ... }`.

---

#### **Q16. Develop a JavaScript function to display the browser name and browser version.**

**Answer:** The `navigator` object allows access to browser details.

**Program Code:**

```html
<!DOCTYPE html>
<html>
<body>
    <button onclick="showInfo()">Show Info</button>
    <script>
        function showInfo() {
            let name = navigator.appName;
            let version = navigator.appVersion;
            alert("Name: " + name + "\nVersion: " + version);
        }
    </script>
</body>
</html>
```

**Trace:**

1. `navigator.appName` returns the browser name (e.g., "Netscape").
2. `navigator.appVersion` returns version/OS details.
3. `alert()` displays these strings in a dialog box.

---

#### **Q17. Explain about Function definition, Function calling, Function parameter, return type with a suitable example in JavaScript.**

**Answer:** A function is a reusable code block.

1. **Definition:** Writing the logic with the `function` keyword.
    - _Syntax:_ `function name(params) { ... }`.
2. **Calling:** Invoking the function.
    - _Syntax:_ `functionName();`.
3. **Parameters:** Variables receiving input values. JS does not check type or number of parameters.
4. **Return Type:** The `return` statement sends a value back. If missing, `undefined` is returned.

**Example:**

```js
function square(num) {      // Definition with parameter 'num'
    return num * num;       // Return statement
}
let val = square(6);        // Calling
document.write(val);        // Output: 36
```

.

---

#### **Q18. Explain DOM with suitable example how you handle events from Text Box and Password field of a form.**

**Answer:** The DOM represents the document as a tree of objects. We can handle events like `blur` (lost focus) and `focus` (gained focus) for validation.

**Example: Password Validation** Checks if two passwords match when the user leaves the second field (`onblur`).

```js
function chkPasswords() {
    var init = document.getElementById("initial");
    var sec = document.getElementById("second");

    if (init.value != sec.value) {
        alert("Passwords do not match");
        init.focus();  // Put cursor back
        init.select(); // Highlight text
        return false;
    }
}
// Registering handler
document.getElementById("second").onblur = chkPasswords;
```

**Trace:**

1. `getElementById` accesses the input fields.
2. When the user leaves the "second" field, `chkPasswords` runs.
3. If values differ, `focus()` and `select()` guide the user to correct the error.

---

#### **Q19. Explain Document Object Model with suitable examples and code.**

**Answer:** The **Document Object Model (DOM)** is a programming interface that represents an HTML document as a tree structure. Every element (tags, text, attributes) is a **node** in this tree.

**Key Concepts:**

- **Nodes:** The document root, elements, and text are all nodes.
- **Access:** JS can access nodes using `getElementById`, `getElementsByTagName`, etc..
- **Modification:** JS can change content (`innerHTML`) and style (`style.color`).

**Example Code:**

```js
<html>
<body>
    <h2 id="msg">Hello</h2>
    <button onclick="changeText()">Change</button>
    <script>
        function changeText() {
            // Access element by ID and modify content
            document.getElementById("msg").innerHTML = "Welcome to DOM";
            // Modify Style
            document.getElementById("msg").style.color = "red";
        }
    </script>
</body>
</html>
```

**Trace:** Clicking the button finds the node with `id="msg"`, changes "Hello" to "Welcome to DOM", and turns it red.

---

#### **Q20. Explain the different ways of registering an event to an event handler?**

**Answer:** Event registration connects an event (action) to a handler (function).

**1. Inline Event Handler (HTML Attribute):**

- Written directly in the tag.
- _Example:_ `<button onclick="alert('Hi');">Click</button>`.
- _Drawback:_ Mixes HTML and JS.

**2. DOM Property Assignment:**

- Assigns the function to the event property of the element object.
- _Syntax:_ `object.onclick = functionName;`
- _Example:_ `document.getElementById("btn").onclick = showMsg;`.
- _Benefit:_ Separates HTML and JS.

**3. addEventListener() (Modern):**

- Allows multiple handlers.
- _Syntax:_ `element.addEventListener("click", function);`.

---

#### **Q21. Demonstrate with suitable examples Onclick and Onfocus event.**

**Answer:** **1. onclick Event:** Triggered when the user clicks an element (e.g., a button).

- **Example:**
    
    ```js
    <button onclick="alert('Button clicked')">Click Me</button>
    ```
    
    **Trace:** Clicking the button immediately shows the alert.

**2. onfocus Event:** Triggered when an element (like a text box) receives the cursor/input focus.

- **Example:**
    
    ```
    <input type="text" onfocus="this.style.backgroundColor='yellow'">
    ```
    
    **Trace:** Clicking inside the text box changes its background color to yellow.

---

#### **Q22. Develop a JavaScript program to show how the DOM is used to handle user events.**

**Answer:** This program captures a user's name from an input field when a button is clicked and displays a greeting.

**Program Code:**

```html
<!DOCTYPE html>
<html>
<body>
    <h3>DOM Event Handling</h3>
    <input type="text" id="name" placeholder="Enter name">
    <button id="btn">Submit</button>
    <p id="output"></p>

    <script>
        // Using addEventListener for cleaner separation
        document.getElementById("btn").addEventListener("click", function() {
            // DOM Access: Get value from input node
            let name = document.getElementById("name").value;
            // DOM Modification: Update content of paragraph node
            document.getElementById("output").innerHTML = "Hello " + name;
        });
    </script>
</body>
</html>
```

**Trace:**

1. User types "John".
2. User clicks "Submit".
3. The listener function triggers.
4. `document.getElementById("name").value` retrieves "John".
5. `document.getElementById("output").innerHTML` updates the `<p>` tag to "Hello John".

---

#### **Q23. Explain i. pre tag ii. Progress tag iii. Heading tag.**

**Answer:**

**(i) Pre Tag (`<pre>`)** (Note: While not explicitly defined in the provided source text, standard web technology defines `<pre>` as preformatted text which preserves whitespace).

**(ii) Progress Tag (`<progress>`)** (Note: Not explicitly detailed in provided sources).

**(iii) Heading Tag (`<h1>` to `<h6>`)** Heading tags define the titles and subtitles of a webpage. `<h1>` is the most important (largest), and `<h6>` is the least important.

- **Example:** `<h2>Chapter 2 Introduction</h2>`.
- **Styling:** Properties like `font-size` and `font-family` can be customized via CSS.

---

#### **Q24. Discuss and tags?**

**Answer:** These tags group elements for styling and DOM manipulation.

**1. `<span>` Tag:**

- An **inline** element used to style a specific part of a text line without breaking the flow.
- _Example:_ `Welcome <span style="color:red">User</span>`. Only "User" turns red.

**2. `<div>` Tag:**

- A **block-level** element defining a division. It creates a new line before and after itself.
- Used as a container for other elements to apply layouts or styles.
- _Example:_
    
    ```html
    <div class="box">
        <h2>Title</h2>
        <p>Text inside div</p>
    </div>
    ```
    

.

---

#### **Q25. Explain various operators and data types available in java script with examples.**

**Answer:**

**1. Data Types:** JavaScript is dynamically typed. Primitives include:

- **Number:** Double-precision floating-point (e.g., `72`, `7.2`, `NaN`).
- **String:** Characters in quotes (e.g., `"Hello"`).
- **Boolean:** `true` or `false`.
- **Null:** Represents "no value" (`null`).
- **Undefined:** A declared variable with no value.

**2. Operators:**

- **Numeric:** `+`, `-`, `*`, `/`, `%`. Increment `++` and decrement `--`.
- **String Catenation:** The `+` operator joins strings. (e.g., `"Aug" + 1997` -> `"Aug 1997"`).
- **Relational:** `==` (equal), `!=`, `<` , `>`, `===` (strict equal, checks type and value).
    - _Example:_ `"3" == 3` is true, but `"3" === 3` is false.
- **typeof:** Returns the type as a string (e.g., `typeof 5` returns `"number"`).

---

#### **Q26. Build a JavaScript program to convert temperature from Celsius to Fahrenheit and vice versa.**

**Answer:** This program uses functions and mathematical operators to perform the conversion.

- **Formulas:** $F = (C \times 9/5) + 32$ and $C = (F - 32) \times 5/9$.

**Program Code:**

```html
<!DOCTYPE html>
<html>
<body>
    <h3>Temperature Converter</h3>
    <script>
        function convertTemp(temp, type) {
            if (type === "C") {
                // Celsius to Fahrenheit
                let f = (temp * 9/5) + 32;
                document.write(temp + "°C is " + f + "°F<br>");
            } else if (type === "F") {
                // Fahrenheit to Celsius
                let c = (temp - 32) * 5/9;
                document.write(temp + "°F is " + c + "°C<br>");
            }
        }

        // Trace
        convertTemp(100, "C"); // 100*1.8 + 32 = 212
        convertTemp(212, "F"); // (212-32)*0.55 = 100
    </script>
</body>
</html>
```

**Trace:**

1. **Call 1:** `convertTemp(100, "C")` calculates $(100 \times 1.8) + 32 = 212$. Output: 212°F.
2. **Call 2:** `convertTemp(212, "F")` calculates $(212 - 32) \times 0.555 = 100$. Output: 100°C.