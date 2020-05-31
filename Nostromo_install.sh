#!/bin/bash

if [ -d ./Nostromo_game ]; then # si la carpeta existe entra en ella
	cd ./Nostromo_game/
else # si la carpeta no existe la descarga
	echo "Downloading Nostromo game"
	if git clone https://github.com/Antogor/Nostromo_game.git &> Download.log; then
		echo "Game Downloaded"
		cd ./Nostromo_game/
	else
		echo "Download failed"
		exit 1
	fi
fi


echo "Installing SDL2"
if [ $(id -u) = 0 ]; then # Si es el usuario root instala con este comando
	apt-get install -y libsdl2-dev libsdl2-2.0-0 libmikmod-dev libfishsound1-dev libsmpeg-dev liboggz2-dev libflac-dev libfluidsynth-dev libsdl2-mixer-dev libsdl2-mixer-2.0-0 libjpeg-dev libwebp-dev libtiff5-dev libsdl2-image-dev libsdl2-image-2.0-0 libfreetype6-dev libsdl2-ttf-dev libsdl2-ttf-2.0-0 
	else # si es otro usuario instala con este
		sudo apt-get install -y libsdl2-dev libsdl2-2.0-0 libmikmod-dev libfishsound1-dev libsmpeg-dev liboggz2-dev libflac-dev libfluidsynth-dev libsdl2-mixer-dev libsdl2-mixer-2.0-0 libjpeg-dev libwebp-dev libtiff5-dev libsdl2-image-dev libsdl2-image-2.0-0 libfreetype6-dev libsdl2-ttf-dev libsdl2-ttf-2.0-0
fi

echo "Installing Nostromo"
if make re &> ../Installation.log; then # Dentro de la carpeta hace el make
	mv Nostromo ../
	echo "Installation successful"
	echo "See 'Installation.log' to see more details"
else # En caso de que falle sale del script, en el .log pondran los errores
	echo "Installation failed"
	echo "See 'Installation.log' to see more details"
	exit 1
fi	
