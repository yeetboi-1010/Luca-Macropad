<h1>Luca's Macropad</h1>
<p>Hey there! I'm Luca and I made this macropad for a Hackclub project. I added my own little OLED screen, a rotary encoder, some LEDs, and three keyboard switches to make a nice and compact gadget customized for me.</p>
<p>I had tons of fun doing this, and I learned a ton about PCB design and on how to know my way around the command line when I was compiling the firmware. Here's a closer look at what exactly I did:</p>
<img src=images/Macropad-CAD-full.png height=auto width=500px>
<h2>KiCad Design</h2>
<p>I used KiCad for the first time to design my PCB.</p>
<p>Here's my schematic:</p>
<img src=images/Macropad-Schematic.png alt=Schematic height=auto width=700px>
<p>And my PCB:</p>
<img src=images/Macropad-PCB.png alt=PCB height=auto width=700px>
<br/>
<h2>Case CAD Design</h2>
<p>Moving onto the case for the project, I used Onshape as my software and cadded the whole case, inserting my KiCad PCB model and some models from GrabCad to help me test fit and show the concept of my idea.</p>
<p>Here's the top of my case:</p>
<img src=images/Macropad-CAD-top.png alt=TopCase height=auto width=600px>
<p>The bottom:</p>
<img src=images/Macropad-CAD-bottom.png alt=BottomCase height=auto width=600px>
<p>The fully-assembled case with the PCB:</p>
<img src=images/Macropad-CAD-noParts.png alt=BottomCase height=auto width=600px>
<p>And my test-fitted parts:</p>
<img src=images/Macropad-CAD-parts.png alt=BottomCase height=auto width=600px>
<img src=images/Macropad-CAD-full.png alt=BottomCase height=auto width=600px>
<br/>
<h2>Software</h2>
<p>I used QMK for my software! Was a bit tricky to learn but overall helped me vastly in gaining a better understanding of the command line along with other stuff.</p>
<br/>
<h2>BOM</h2>
<ul>
  <li>Seeed XIAO RP2040 - 1x</li>
  <li>Cherry MX Switches - 3x</li>
  <li>SSD1306 0.91in OLED 4pin 128x32 - 1x</li>
  <li>EC11 Rotary Encoder - 1x</li>
  <li>SK6812 MINI-E LEDs - 2x</li>
  <li>M3x16mm screws - 4x</li>
  <li>M3x5mx4mm heatset inserts - 4x</li>
  <li>QMK Software</li>
  <li>Top + Bottom Case CAD files to be printed</li>
</ul>
<br/>
<h2>Conclusion</h2>
<p>"This was super great to make and I can't wait to see what I can use what I've learned in the future! Thanks for reading :)"</p>
