file(REMOVE_RECURSE
  "bootloader/bootloader.bin"
  "bootloader/bootloader.elf"
  "bootloader/bootloader.map"
  "config/sdkconfig.cmake"
  "config/sdkconfig.h"
  "mqtt_eclipse_org.pem.S"
  "mqtt_ssl.bin"
  "mqtt_ssl.map"
  "project_elf_src.c"
  "CMakeFiles/___idf_tcpip_adapter"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/___idf_tcpip_adapter.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
