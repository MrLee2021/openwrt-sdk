# Install script for directory: /home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "Release")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/polarssl" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/pbkdf2.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/pem.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/md.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/config.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/platform.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/openssl.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/entropy_poll.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/compat-1.2.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/bn_mul.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/memory.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/arc4.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/debug.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/oid.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/bignum.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/x509.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/dhm.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/camellia.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/pk.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/pkcs12.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/aes.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/ecdh.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/ccm.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/check_config.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/gcm.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/md4.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/cipher_wrap.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/ssl_cache.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/md2.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/error.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/ctr_drbg.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/xtea.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/x509_csr.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/certs.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/md_wrap.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/pkcs5.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/timing.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/base64.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/pk_wrap.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/asn1.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/sha1.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/havege.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/entropy.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/ecp.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/net.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/pkcs11.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/des.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/version.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/ripemd160.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/aesni.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/rsa.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/x509_crl.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/cipher.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/threading.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/ecdsa.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/memory_buffer_alloc.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/x509_crt.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/asn1write.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/sha512.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/hmac_drbg.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/ssl.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/md5.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/sha256.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/padlock.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/ssl_ciphersuites.h"
    "/home/ubuntu/openwrt-sdk/build_dir/target-mipsel_24kec+dsp_uClibc-0.9.33.2/polarssl-1.3.9/include/polarssl/blowfish.h"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

