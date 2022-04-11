# 980mini
Blockboy AC980mini QMK keyboard folder

[AliExpress Product Link](https://www.aliexpress.com/item/1005003787162850.html)

![AC980mini](https://ae01.alicdn.com/kf/H2955001a66544ee1ac38a42b0632fe41m.png)

![AC980mini kle](https://imgur.com/prgMVo2.jpg)

# Current Status

## Key Matrix Working
![Matrix](https://i.imgur.com/yMAIrkg.png)
## RGB Matrix Determined
![RGB Matrix](https://i.imgur.com/zyE26ny.jpg)
## RGB Matrix Behaving Inconsistently


# Description of RGB Behavior

RGB Matrix appears to be behaving as though several keys are assigned to the wrong location. 
The [980mini.h LED matrix](https://github.com/rooski15/980mini/blob/main/980mini/980mini.h) appears to have the proper assignment, but several LEDs seem to behave as though they are in the wrong row. Behavior as observed from a vertical RGB gradient:
![RGB Behavior](https://i.imgur.com/Gi8yF45.jpg)
Animations are off center, and left to right animations begin at 5-Y-H-B-Cntrl and end at NumMns-4-T-G-V.
