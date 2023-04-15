# Minimum operations! ➕➗2️⃣

<p>In a text file, there is a single character&nbsp;<code>H</code>. Your text editor can execute only two operations in this file:&nbsp;<code>Copy All</code> and&nbsp;<code>Paste</code>. Given a number&nbsp;<code>n</code>, write a method that calculates the fewest number of operations needed to result in exactly&nbsp;<code>n</code> <code>H</code> characters in the file.</p>
<ul>
    <li>Prototype:&nbsp;<code>def minOperations(n)</code></li>
    <li>Returns an integer</li>
    <li>If&nbsp;<code>n</code> is impossible to achieve, return&nbsp;<code>0</code></li>
</ul>
<p><strong>Example:</strong></p>
<p><code>n = 9</code></p>
<p><code>H</code> =&gt;&nbsp;<code>Copy All</code> =&gt;&nbsp;<code>Paste</code> =&gt;&nbsp;<code>HH</code> =&gt;&nbsp;<code>Paste</code> =&gt;<code>HHH</code> =&gt;&nbsp;<code>Copy All</code> =&gt;&nbsp;<code>Paste</code> =&gt;&nbsp;<code>HHHHHH</code> =&gt;&nbsp;<code>Paste</code> =&gt;&nbsp;<code>HHHHHHHHH</code></p>
<p>Number of operations:&nbsp;<code>6</code></p>
<pre><code>carrie@ubuntu:~/0x03-minoperations$ cat 0-main.py
#!/usr/bin/python3
&quot;&quot;&quot;
Main file for testing
&quot;&quot;&quot;

minOperations = __import__(&apos;0-minoperations&apos;).minOperations

n = 4
print(&quot;Min # of operations to reach {} char: {}&quot;.format(n, minOperations(n)))

n = 12
print(&quot;Min # of operations to reach {} char: {}&quot;.format(n, minOperations(n)))

carrie@ubuntu:~/0x03-minoperations$
</code></pre>

## Expected output 👀... 

<pre><code>carrie@ubuntu:~/0x03-minoperations$ ./0-main.py
Min number of operations to reach 4 characters: 4
Min number of operations to reach 12 characters: 7
carrie@ubuntu:~/0x03-minoperations$</code></pre>
