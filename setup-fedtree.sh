WORKING_DIR="$HOME/Desktop/fedtree"	# Folder for FedTree, and NTL

# Tested on Ubuntu 22.04.4 LTS

############################################################################
# Dependencies and gRPC installation

export MY_INSTALL_DIR=$HOME/.local
mkdir -p $MY_INSTALL_DIR
export PATH="$MY_INSTALL_DIR/bin:$PATH"

sudo apt install -y cmake libgmp3-dev build-essential autoconf libtool pkg-config

git clone --recurse-submodules -b v1.50.0 --depth 1 --shallow-submodules https://github.com/grpc/grpc
cd grpc
mkdir -p cmake/build
pushd cmake/build
cmake -DgRPC_INSTALL=ON -DgRPC_BUILD_TESTS=OFF -DCMAKE_INSTALL_PREFIX=$MY_INSTALL_DIR ../..
make -j 4
make install
popd

###############################################################################
# Following with FedTree

if [ -d "$WORKING_DIR" ]; then rm -Rf $WORKING_DIR; fi

mkdir "$WORKING_DIR"
cd $WORKING_DIR

# from fedtree.readthedocs.io/en/latest/installation.html
wget https://libntl.org/ntl-11.5.1.tar.gz
tar -xvf ntl-11.5.1.tar.gz
cd ntl-11.5.1/src
./configure SHARED=on
make
make check
sudo make install

# clone install submodules
cd $WORKING_DIR
git clone https://github.com/Xtra-Computing/FedTree.git
cd FedTree
git submodule init
git submodule update

# build on linux
mkdir build && cd build
cmake .. -DDISTRIBUTED=OFF	# Not using distributed default is ON
make -j
##############################################################################

# run training
cd $WORKING_DIR/FedTree/
./build/bin/FedTree-train ./examples/vertical_example.conf
