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

------------------------------------------------------

Version 0.2 beta of the GE plugin is available

Changes since the 0.1 beta:
- The plugin starts GE at the time it's needed for the first time, not while the plugin is loaded by OpenCPN
- Added config option to always start hidden, ignoring the state when OpenCPN was closed last time
- Added the possibility to save the current view as .kml file to be used in GE directly.
- GE now scrolls to the needed position requested by OpenCPN instantly
- Added a lot of debugging output written to the log
- Fixed all the crashes I've experienced on my system
- Mouse wheel should be returned to OpenCPN in all cases besides the one described bellow

Known problems in this version:
- Disabling the plugin in toolbox while it's window is open leaves the pane on screen
- Toolbar icon state on enabling the plugin is wrong
- We should handle "intelligently" the case when the GE view parameters are changed by the user, not reset it to the config settings on every update
- Plugin window size resets to default when it's reopened
- AUI code generally needs a bit of a rework
- Camera tilt and azimuth don't work in follow cursor/boat mode

Important note for GE offline use
GE tries to connect to the internet on startup and if it's not available it waits for some time (about a minute on my machine), hoping the connection will come alive. There is nothing that could be done about it, so you have to be patient waiting for the plugin to start in this scenario. After another while, GE displays two dialogs telling you, that there's no internet connection and whether you want to troubleshoot the problem. Answering No to the question is the thing to do. Unfortunately while displaying these dialogs, GE "steals" the focus and mouse wheel events don't get to OpenCPN anymore. To reclaim the mouse for OpenCPN, resize the GE plugin view a little bit and you are set again. This is inconvenient, I know, but currently I can't find any other workaround.

Populating the GE cache for offline use
Google Earth is designed with a permanent highspeed connection to the internet in mind, but can be used offline if the necessary imagery data is available in the local cache on disk.
To make the data available locally, it's necessary to visit all the places we want to see before the computer is disconnected from the internet.
Fortunately we are not the only people facing this problem and several tools exist, helping to simplify this process. Probably the best for our use is GoogleEarth Voyager - read about it and find the download links at http://freegeographytools.com/2009/google-earth-caching-programs-iii-google-earth-voyager
GEV comes with a comprehensive documentation covering the whole problem - definitely worth reading to understand what's going on.

Installation and usage instructions
It does NOT work with OpenCPN 2.3.1 as it relies on the API extensions introduced in version 2.4

Before you use it:
- Make sure you are using Microsoft Windows. Sorry, there is no chance to get this running on any normal operating system
- Download OpenCPN, version 2.4.0310 beta from http://www.opencpn.org/download and install it
- To make the view sizing work reasonably, run Google Earth and turn off the toolbar and the sidebar in the View menu or Ctrl + Alt + T and Ctrl + Alt + B respectively
- Download the attached file gecomapi_pi.doc, change the extension to .dll and place it into the plugin directory in your OpenCPN installation

Run OpenCPN, go to Toolbox and enable the GE plugin on the Plugins tab
The plugin icon appears in the toolbar
