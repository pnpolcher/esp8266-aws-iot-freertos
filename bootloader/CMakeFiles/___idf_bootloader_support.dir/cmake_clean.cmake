file(REMOVE_RECURSE
  "bootloader.bin"
  "bootloader.map"
  "config/sdkconfig.cmake"
  "config/sdkconfig.h"
  "project_elf_src.c"
  "CMakeFiles/___idf_bootloader_support"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/___idf_bootloader_support.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
