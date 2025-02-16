OS=linux
if echo $OSTYPE | grep -q ^darwin; then
    OS=mac
fi
ln -s .config/$OS/CMakePresets.json
ln -s .config/$OS/CMakeUserPresets.json
cd .vscode
ln -s ../.config/$OS/launch.json
cd $OLDPWD