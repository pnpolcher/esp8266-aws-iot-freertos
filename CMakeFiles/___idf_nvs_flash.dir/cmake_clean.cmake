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
  "CMakeFiles/___idf_nvs_flash"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/___idf_nvs_flash.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
