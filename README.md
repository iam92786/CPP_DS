# cpp




### SCOEP RESOLUTION OPERATOR (::)
1. std::cout1
2. access global variable in function (when we already have one local var of same name)
3. IF WE WOULD LIKE TO DEFINE THE MEMBER FUNCTION of the class  OUTSIDE THE CLASS
4. SCOPE RESOLUTION OPERATOR IS USED TO ACCESS THE GLOBAL FUNCTIONS (eg: ::sum(25,25);)

5. ACCESS STSTIC MEMBER FUNCTION WITHOUT CREATING OBJECT






### HIDL HAL Interface Definition Language

* It define interfaces between hardware components and software frameworks in the Android operating system.
* HIDL uses a structured interface definition language.
*  It allows developers to define the capabilities and behaviors of hardware components in a platform-independent manner, enabling easy integration of different hardware implementations into the Android framework.
* HIDL is built around interfaces, Each interface is part of a package.
* The root directory for published HIDL packages is hardware/interfaces or vendor/vendorName  (e.g. vendor/google for Pixel devices).
* .hal file defines an interface.

* compiler : hidl-gen
* HIDL interfaces have client and server implementations:
    - A server is an implementation of a HIDL interface that receives calls from clients and returns results (if necessary).
        - Servers implement interfaces.
    - A client of a HIDL interface is the code that uses the interface by calling methods on it.
        - Clients call methods on interfaces.





# Status for serial console

I2C -> DONE
BUS -> DONE
SMEM -> DONE
SPI -> DONE
HWSPINLOCK -> DONE
SMD -> DONE
SERIAL -> 1 is conpleted
GPIO -> DONE

REGULATOR -> REGULATOR
CLK
CPU
PMIC -> Conti ..
RPM -> DONE
SPS -> DONE
PINCTRL -> DONE
SPM -> DONE



1. clk issue -> log error related clk

2. serial DTS node.
    - 1/3 done clearity

3. Machine model is coming into the log -> but it is picking right DTB image -> noard ID

4. CPU -> pending from our side.



# Profile Creation:
NAME - as per my space
exp 1+year experince

certifiaction : PGDESED
contribution : 
1. project- contribution
2. seminar- key speaker
3. publis research paper
else delete

### Prject details:
- not write client customer name

tools tech : rekated to this project only
Project Description : without any tech term, workflow, simple short , 
overview, what and how and where it is applicable

### Achivements career Highlite - NOT Mandotery
- recived any Award reward (last 1 to 2 year)

### career Highlite:
major contributer - acomplishment - innovative things
minimised the cost, 


###  Prf Summery
- writen by as a 3rd person - innominds tell clients
- summerise whole carrer experince
- can write nth number of points
- this points aline link with project. else write have knowledge of AI, ML
- 

### tech Tool - having hands on Exp

### indu domain
- 

//----------------------------------------------------//

This week DTS side:
1. PMIC Power managment IC.
    - worked on these two nodes - PMIC (@5b00 and @6000). verify in LA2.0 code and 
    -  smb1390 node. this node is belon to the /drivers/mfd/qcom-i2c-pmic.c  I enabled this node into kona-ganga.dtsi file. 
2. create the qfill image with all the new changes so that we can test our new code changes on target
    - Build Kernel, QSSI, Vendor , Kernel recompile, created Super image and created qfill.
3. Enable MMC related CONFIG.
2. Regulator Erro resolved (pending since very long Time)
    - Added proxy-consumer.c file in common kernel folder modified Kconfig and  Makefile accordingly also handled header dependencies.
3. Added debug point in LA1.0 setup.c, For seeing Machine model and back tracing it is in progress.
    - Build vendor images, super image and QFIL for new changes of proxy consumer driver compiled. and flashed on target, taken logs also.
4. Triggered shallow clone for LA2.0 qssi and vendor and Triggered build for qssi..Doing this process so that space can be saved and LA1.0 codebase can be synced here for adding debugging points and checking in target.
 5. Face issue in QFILL - sahara error. install required drivers and softwere. 


Certainly! Here's a revised version:

1. **PMIC Power Management IC:**
    - Investigated and worked on two nodes, namely PMIC (@5b00 and @6000), verifying in the LA2.0 code.
    - Modified the kona-ganga.dtsi file to enable the smb1390 node, located in /drivers/mfd/qcom-i2c-pmic.c.

2. **Create QFILL Image:**
    - Executed the following steps to test the new code changes on the target:
        - Built Kernel, QSSI, Vendor.
        - Recompiled Kernel.
        - Created a Super image.
        - Generated qfill.

3. **Enable MMC-Related CONFIG:**
    - Implemented the necessary configurations.

4. **Resolve Regulator Error:**
    - Resolved a long-pending regulator error by:
        - Adding the proxy-consumer.c file in the common kernel folder.
        - Modifying Kconfig and Makefile accordingly.
        - Handling header dependencies.

5. **Debugging LA1.0 Setup.c:**
    - Added debug points in LA1.0 setup.c for observing machine model and back tracing. Work in progress.
    - Compiled vendor images, super image, and QFIL for new changes in the proxy consumer driver. Successfully flashed on the target and captured logs.

6. **Sync LA1.0 Codebase with Shallow Clone:**
    - Triggered a shallow clone for LA2.0 qssi and vendor.
    - Initiated the build process for qssi, optimizing space usage. Syncing LA1.0 codebase for adding debugging points and checking on the target.

7. **QFILL Issue - Sahara Error:**
    - Encountered an issue in QFILL related to Sahara error.
    - Installed the required drivers and software to address the problem.

Please review these points, and let me know if you need any further clarification or adjustments!