BUILD_DIRECTORY=Build
cd ~/DesignPattern/CommandPattern
if [ -d $BUILD_DIRECTORY ]
then
	rm -rf Build
fi
doxygen Doxyfile
cmake -H. -BBuild
cmake --build Build
clear
./Build/CommandPattern
