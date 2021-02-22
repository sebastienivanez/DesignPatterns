BUILD_DIRECTORY=Build
cd ~/DesignPatterns/StrategyPattern
if [ -d $BUILD_DIRECTORY ]
then
	rm -rf Build
fi
doxygen Doxyfile
cmake -H. -BBuild
cmake --build Build
clear
./Build/StrategyPattern
