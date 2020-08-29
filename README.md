
# AppImageToDeb
Tool to convert Appimage to deb, allows to build deb packages with Appimage

Fork to [AppimageToDeb](https://gitee.com/deepin-community-store/AppimageToDeb) 


## Instrucciones de uso

  
1. Click the button to open the Appimage file or drag it in.

2. Checking and completing the information after reading some of it automatically.

3. Click on Pack to start packing

5. A deb file will be generated in the same directory as the Appimage file.

6. If you use "unpack and package", it may cause the software to fail and may significantly increase the packing time.

  

## Dependencies

  

1. **Dtk**：

- libdtkcore5

- libdtkgui5

- libdtkwidget5

### If using deepin 15.11 / ubuntu kylin

- libdtkcore2

- libdtkgui2

- libdtkwidget2

2. **qt**：

- libqt5core5a

- libqt5gui5

- libqt5svg5

- libqt5concurrent5

3. **other**：

- fakeroot

4. **note**

- If source code is compiled, use a -dev package such as libdtkcore2-dev
