echo $OSTYPE | grep --quiet ^darwin && OS=mac || OS=linux
ln -s .config/$OS/CMakePresets.json
cd .vscode
ln -s ../.config/$OS/launch.json
cd $OLDPWD
