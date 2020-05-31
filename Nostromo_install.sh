#!/bin/bash

echo "Installing Nostromo"
if make install &> installation.log && make &> installation.log; then
	echo "Installation successful"
	echo "See 'Installation.log' to see more details"
else
	echo "Installation failed"
	echo "See 'Installation.log' to see more details"
fi