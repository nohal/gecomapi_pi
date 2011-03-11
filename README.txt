to get the c stuff from the IDL use:
midl earth.idl

It does NOT work with OpenCPN 2.3.1 as it relies on the API extensions introduced in version 2.4

Before you use it:
- Make sure you are using Microsoft Windows. Sorry, there is no chance to get this running on any normal operating system :(
- Download OpenCPN, version 2.4.0310 beta from http://www.opencpn.org/download and install it
- To make the view sizing work reasonably, run Google Earth and turn of the toolbar and the sidebar in the View menu or Ctrl + Alt + T and Ctrl + Alt + B respectively
- Download the attached file gecomapi_pi.doc, change the extension to .dll and place it into the plugin directory in your OpenCPN installation

Run OpenCPN, go to Toolbox and enable the GE plugin on the Plugins tab
After a short while the plugin icon will appear on your toolbar - be a bit patient as GE has to be started and it takes time.
Enjoy

Plugin preferences:
The plugin can work in three modes of operation
Follow chart viewport - in this mode the plugin tries to display the same stuff you can see on the chart. The calculation used is very basic though - the height of the camera above ground is computed as half the width of the chart viewport, assuming that one minute longitude = 1852 meters. (Thank you Mr. Pythagoras) No it is not exact and no, it is not easy to make it better - no Mr. Mercator in GE...

Follow boat
Should follow the boat (untested as I'm sitting at the table and no events coming from the core)

Follow cursor
Follows your cursor on the chart

For the later two modes you can set GE view manually using the 3 sliders in the lower part of the settings dialog

