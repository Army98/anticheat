Note: I'm not saying that kernel level anticheats do a perfect job (actually most of what I do here is easily bypassable with a hypervisor if u want to go overkill, a driver manually loaded, which i can detect with page walking, but can't stop obv cuz real drivers and even patchgaurd does write to non image sections), but I do think they prevent the ability of a paycheat dev to make a lifetime cheat, and forces them to charge more for the said cheat. 
---------------------------------------------------------------------------------------------------------------
Run the following to compile: 

bcdedit /debug on  
bcdedit /dbgsettings local  
bcdedit /set testsigning ON  
Then reboot.  
And also if I missed anything and for some reason it doesn't compile then figure it out on your own...
