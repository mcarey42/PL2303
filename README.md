***THIS IS NO LONGER MAINTAINED AS THE FOLKS AT THE MANUFACTURER HAVE DONE A LOVELY JOB OF FIXING AND UPDATING.***
***THIS REPO IS PRESERVED FOR HISTORICAL PURPOSES ONLY!***

PL2303
======

This is an Open Source PL2303 driver for recent versions of Mac OS X around 10.8-10.10.

This is a derivative work of BJA Electronics, Jeroen Arnoldus (opensource@bja-electronics.nl) nl.bjaelectronics.driver.PL2303 project.  

I have added the needed elements for power management on newer versions of Mac OS X and added a signed version you can download if you so desire.  

In order to use the binary version, you must download it, then extract it.

Use the Terminal application and do the following steps:

1. cd ~/Downloads (or wherever you put the binary)
2. tar -xvjf nl.bjaelectronics.driver.PL2303.kext.tar.bz2  (a number of files should fly by)
3. sudo chown -R root:root nl.bjaelectronics.driver.PL2303.kext (this makes it owned by the "root" user)
4. sudo mv nl.bjaelectronics.driver.PL2303.kext /Library/Extensions/ (this installs the extension).

That's it!  You should be good to go for using your PL2303 USB serial device.  I've tested this on my devices, and it works like a champ, however, there is no warranty, express or implied.  It's open source, so be aware that if this destroys something you're using it at your own risk!  Although, I will say, I've tested hot removal, reboot with the device installed, power management events, and several other normal test use cases for a USB device.  Please direct any questions or comments to me here at github.

  Enjoy :-).  It was spawned of neccessity, and I figured others could use it too.
  -M.
