#!/bin/bash

set -ex

function sudo_up {
  if [ "$EUID" != 0 ]; then
    sudo -E "$@" "$@"
    exit $?
  fi
}

LIBDIR=/usr/local/torch/install/lib
LUALIBDIR=${LIBDIR}/lua/5.1

sudo_up

cp ${LIBDIR}/libTHC.so ${LIBDIR}/libTHC.so.original
cp ${LUALIBDIR}/libcutorch.so ${LUALIBDIR}/libcutorch.so.original

luarocks make rocks/cutorch-scm-1.rockspec

cp ${LIBDIR}/libTHC.so ${LIBDIR}/libTHC.so.profile
cp ${LUALIBDIR}/libcutorch.so ${LUALIBDIR}/libcutorch.so.profile

ln -s ${LIBDIR}/libTHC.so.original ${LIBDIR}/libTHC.so
ln -s ${LUALIBDIR}/libcutorch.so.original ${LUALIBDIR}/libcutorch.so
