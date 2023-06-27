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


