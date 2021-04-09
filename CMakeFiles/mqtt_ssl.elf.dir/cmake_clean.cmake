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
  "CMakeFiles/mqtt_ssl.elf.dir/mqtt_eclipse_org.pem.S.o"
  "CMakeFiles/mqtt_ssl.elf.dir/project_elf_src.c.o"
  "mqtt_eclipse_org.pem.S"
  "mqtt_ssl.elf"
  "mqtt_ssl.elf.pdb"
  "project_elf_src.c"
)

# Per-language clean rules from dependency scanning.
foreach(lang ASM C)
  include(CMakeFiles/mqtt_ssl.elf.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
