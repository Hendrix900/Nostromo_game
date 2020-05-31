#!/bin/bash

echo "Downloading Nostromo game"
if git clone https://github.com/Hendrix900/Nostromo_game.git &> Download.log; then
	echo "Game Downloaded"
else
	echo "Download failed"
	exit 1
fi


echo "Installing Nostromo"

if make install &> Installation.log; then
	if make re &> Installation.log; then
		echo "Installation successful"
		echo "See 'Installation.log' to see more details"
	else
		echo "Installation failed"
		echo "See 'Installation.log' to see more details"
		exit 1
	fi	
else
	echo "Installation failed"
	echo "See 'Installation.log' to see more details"
	exit 1
fi
