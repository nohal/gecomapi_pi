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

------------------------------------------------------

Version 0.3 beta of the GE plugin is available

Changes since the 0.2 beta:
- Added config options to control more aspects of the behavior
- Added the possibility to save the current view as .JPG image.
- The plugin tries to disconnect from the chart viewport semi-intelligently when the user starts to fiddle with the GE view
- The boat position can be transferred to the GE window
- New plugin icon
- Fixed all the crashes found here

Known problems in this version:
- Disabling the plugin in toolbox while it's window is open leaves the pane on screen
- Toolbar icon state on enabling the plugin is wrong
- Plugin window size resets to default when it's reopened
- AUI code generally needs rework

Feature wise the plugin is approaching what I've planned for now. The window sizing and docking logic generally sucks - the wxAuiManager author was probably born on a different planet than me :) - the fixes will be in the next version, if I experience a bit of an enlightenment...
As I'm in armchair mode right now and don't even have a NMEA simulator installed, all the logic dealing with boat movement is absolutely untested.
This version also brings a few internal optimizations trying to save a few CPU cycles. This logic will need some tuning not to be annoying, any feedback appreciated.

Important note for GE offline use GE tries to connect to the internet on startup and if it's not available it waits for some time (about a minute on my machine), hoping the connection will come alive. There is nothing that could be done about it, so you have to be patient waiting for the plugin to start in this scenario. After another while, GE displays two dialogs telling you, that there's no internet connection and whether you want to troubleshoot the problem. Answering No to the question is the thing to do. Unfortunately while displaying these dialogs, GE "steals" the focus and mouse wheel events don't get to OpenCPN anymore. To reclaim the mouse for OpenCPN, resize the GE plugin view a little bit and you are set again. This is inconvenient, I know, but currently I can't find any other workaround.

Populating the GE cache for offline use Google Earth is designed with a permanent highspeed connection to the internet in mind, but can be used offline if the necessary imagery data is available in the local cache on disk.
To make the data available locally, it's necessary to visit all the places we want to see before the computer is disconnected from the internet.
Fortunately we are not the only people facing this problem and several tools exist, helping to simplify this process. Probably the best for our use is GoogleEarth Voyager - read about it and find the download links at [URL="http://freegeographytools.com/2009/google-earth-caching-programs-iii-google-earth-voyager"]Google Earth Caching Programs III[/URL]
GEV comes with a comprehensive documentation covering the whole problem - definitely worth reading to understand what's going on.

Installation and usage instructions
It does NOT work with OpenCPN 2.3.1 as it relies on the API extensions introduced in version 2.4

Before you use it:
- Make sure you are using Microsoft Windows. Sorry, there is no chance to get this running on any normal operating system
- Download OpenCPN, version 2.4.0310 beta from [URL="http://www.opencpn.org/download"]Download OpenCPN | Official OpenCPN Homepage[/URL] and install it
- To make the view sizing work reasonably, run Google Earth and turn off the toolbar and the sidebar in the View menu or Ctrl + Alt + T and Ctrl + Alt + B respectively
- Download the attached file gecomapi_pi.doc, change the extension to .dll and place it into the plugin directory in your OpenCPN installation

Run OpenCPN, go to Toolbox and enable the GE plugin on the Plugins tab
The plugin icon appears in the toolbar

------------------------------------------------------

Version 0.5 beta of the GE plugin is available

Changes since the 0.3/0.4 beta:

[LIST]
[*]The plugin kills and restarts GE if it's running when the plugin window is first shown
[*]Changed the viewport disconnection logic completely to handle course-up and similar scenarios
[*]Added even more logging to be able to debug problems (the log grows quite big with this version)
[*]Window properly cleaned up on plugin shutdown
[*]Boat displays correctly with OpenCPN 2.4.324 and above
[*]Fixed all the crashes found here
[/LIST]

Known problems in this version:

[LIST]
[*]Course-up mode does not work as expected (Dave, what's PlugIn_ViewPort.rotation? Thought it will be degrees from north-up, but never get anything outside -5/+5 range as far as I can tell...)
[*]While displaying the boat in GE, Google Earth keeps eating memory all the time (with no limit, after hours of operation it will be really a lot). The reason for that is that we can't delete the objects we once create through the API and can just set them invisible. Google crippled the API in this way for "security reasons" in GE 4.02. There are basically three possible ways to do the boat display differently.
[/LIST]
[INDENT]
[LIST=1]
[*]Simulate a COM port and emit NMEA to it, so GE can have the GPS data as well. Definitely not going to implement it - if you want it, use external tool like PolarCOM or MMG
[*]Implement a WEBSERVER :banghead: in the plugin to circumvent another crippled part of GE's design disallowing it to use <NetworkLinkControl> with local URLs
[*]Try to simulate user's keyboard input to GE
[/LIST]
[/INDENT][INDENT]I have to say I like neither... Currently the updates were reduced to one per second so the growth got slower,  but the problem is still there of course.
[/INDENT]
[LIST]
[*]Toolbar icon state on enabling the plugin is wrong
[*]Plugin window size resets to default when it's reopened - I'm slowly but surely running out of places where I can try to force AuiManager not to resize the window to a size it chooses :(
[*]AUI code generally needs rework
[/LIST]
 Important note for GE offline use GE tries to connect to the internet on startup and if it's not available it waits for some time (about a minute on my machine), hoping the connection will come alive. There is nothing that could be done about it, so you have to be patient waiting for the plugin to start in this scenario. After another while, GE displays two dialogs telling you, that there's no internet connection and whether you want to troubleshoot the problem. Answering No to the question is the thing to do. Unfortunately while displaying these dialogs, GE "steals" the focus and mouse wheel events don't get to OpenCPN anymore. To reclaim the mouse for OpenCPN, resize the GE plugin view a little bit and you are set again. This is inconvenient, I know, but currently I can't find any other workaround.

Populating the GE cache for offline use Google Earth is designed with a permanent highspeed connection to the internet in mind, but can be used offline if the necessary imagery data is available in the local cache on disk.
To make the data available locally, it's necessary to visit all the places we want to see before the computer is disconnected from the internet.
Fortunately we are not the only people facing this problem and several tools exist, helping to simplify this process. Probably the best for our use is GoogleEarth Voyager - read about it and find the download links at [URL="http://freegeographytools.com/2009/google-earth-caching-programs-iii-google-earth-voyager"]Google Earth Caching Programs III[/URL]
GEV comes with a comprehensive documentation covering the whole problem - definitely worth reading to understand what's going on.

Installation and usage instructions
It does NOT work with OpenCPN 2.3.1 as it relies on the API extensions introduced in version 2.4

Before you use it:

[LIST]
[*] Make sure you are using Microsoft Windows. Sorry, there is no chance to get this running on any normal operating system
[*] Download OpenCPN, version 2.4.324 beta or later from [URL="http://www.opencpn.org/download"]Download OpenCPN | Official OpenCPN Homepage[/URL] and install it
[*] To make the view sizing work reasonably, run Google Earth and turn off the toolbar and the sidebar in the View menu or Ctrl + Alt + T and Ctrl + Alt + B respectively
[*] Download the attached file gecomapi_pi.doc, change the extension to .dll and place it into the plugin directory in your OpenCPN installation
[/LIST]
 
Run OpenCPN, go to Toolbox and enable the GE plugin on the Plugins tab
The plugin icon appears in the toolbar

------------------------------------------------------

Version 0.6 beta of the GE plugin is available

Netbook users (generaly anybody with the screen resolution below 1024x768), please read carefuly the note after the list of changes and known problems.

Changes since the 0.5 beta:

[LIST]
[*]Fixed the crash on startup without GE installed
[*]Reimplemented the boat display in GE completely, now it looks and works almost the same as if you have GPS connected directly to GE - tested just with GE 6
[*]Fixed course-up screen rotation
[*]A much more defensive way of synchronizing the views is now used. It results in a much decreased resource consumption and increases the responsivness of the whole system, but sometimes it takes a bit of time before GE view catches up with the chart display just be patient and let me know if it's acceptable.
[*]Small experimantal changes were done to the GE startup process, let's see if it resolves the problems for people unable to use the older versions
[/LIST]

Known problems in this version:

[LIST]
[*]GE sometimes starts to think, that the boat position info is not available, especially when a lot of other applications are used at the same time. Investigating on that. To reenable the tracking, go to the plugin settings, turn Show boat in GE and then go back and turn it on again.
[*]Toolbar icon state on enabling the plugin is wrong
[*]Plugin window size resets to default when it's reopened - I'm slowly but surely running out of places where I can try to force AuiManager not to resize the window to a size it chooses :(
[*]AUI code generally needs rework
[/LIST]

[B]IMPORTANT NOTE for netbook users (and generaly anybody with the screen resolution below 1024x768)[/B]
When you start Google Earth on a computer with the screen resolution lower than 1024x768 pixels, it displays a warning dialog on startup. This dialog prevents the plugin from acquiring the GE view, so you have to take the following steps:

[LIST]
[*]Start GE normally
[*]When the warning dialog appears, [I]tick the checkbox on the bottom left[/I] saying, that you don't want to see the warning again
[*]Click on the OK button
[/LIST]
 After that you can start using the plugin.
[B]
Installation and usage instructions[/B]
It does NOT work with OpenCPN 2.3.1 as it relies on the API extensions introduced in version 2.4 and the boat display doesn't work with OpenCPN before 2.4.324

Before you use the plugin:
[LIST]
[*] Make sure you are using Microsoft Windows. Sorry, there is no chance to get this running on any normal operating system
[*] Download OpenCPN, version 2.4.324 beta or later from [URL="http://www.opencpn.org/download"]Download OpenCPN | Official OpenCPN Homepage[/URL] and install it
[*] To make the view sizing work reasonably, run Google Earth and turn off the toolbar and the sidebar in the View menu or Ctrl + Alt + T and Ctrl + Alt + B respectively
[*] Download the attached file gecomapi_pi.doc, change the extension to .dll and place it into the plugin directory in your OpenCPN installation
[/LIST]
 
Run OpenCPN, go to Toolbox and enable the GE plugin on the Plugins tab
The plugin icon appears in the toolbar

[B]Important note for GE offline use [/B]
GE tries to connect to the internet on startup and if it's not available it waits for some time (about a minute on my machine), hoping the connection will come alive. There is nothing that could be done about it, so you have to be patient waiting for the plugin to start in this scenario. After another while, GE displays two dialogs telling you, that there's no internet connection and whether you want to troubleshoot the problem. Answering No to the question is the thing to do. Unfortunately while displaying these dialogs, GE "steals" the focus and mouse wheel events don't get to OpenCPN anymore. To reclaim the mouse for OpenCPN, resize the GE plugin view a little bit and you are set again. This is inconvenient, I know, but currently I can't find any other workaround.
[B]
Populating the GE cache for offline use[/B]
Google Earth is designed with a permanent highspeed connection to the internet in mind, but can be used offline if the necessary imagery data is available in the local cache on disk.
To make the data available locally, it's necessary to visit all the places we want to see before the computer is disconnected from the internet.
Fortunately we are not the only people facing this problem and several tools exist, helping to simplify this process. Probably the best for our use is [I]GoogleEarth Voyager[/I] - read about it and find the download links at [URL="http://freegeographytools.com/2009/google-earth-caching-programs-iii-google-earth-voyager"]Google Earth Caching Programs III[/URL]
GEV comes with a comprehensive documentation covering the whole problem - definitely worth reading to understand what's going on.
Phiggins wrote a tool called [I]GERoute[/I], which can populate the cache from a GPX route. You can get the tool from [URL="http://www.gdayii.ca/index.php?p=1_2_Downloads"]his website[/URL] - don't forget to read the password to decompress the archive at the top of the page ;)

