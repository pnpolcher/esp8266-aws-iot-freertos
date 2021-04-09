/*
 * Automatically generated file. DO NOT EDIT.
 * Espressif IoT Development Framework (ESP-IDF) Configuration Header
 */
#pragma once
#define CONFIG_IDF_TARGET_ESP8266 1
#define CONFIG_IDF_CMAKE 1
#define CONFIG_IDF_TARGET "esp8266"
#define CONFIG_SDK_TOOLPREFIX "xtensa-lx106-elf-"
#define CONFIG_BOOTLOADER_INIT_SPI_FLASH 1
#define CONFIG_LOG_BOOTLOADER_LEVEL_INFO 1
#define CONFIG_LOG_BOOTLOADER_LEVEL 3
#define CONFIG_BOOTLOADER_STORE_OFFSET 0x0
#define CONFIG_ESPTOOLPY_PORT "/dev/ttyUSB0"
#define CONFIG_ESPTOOLPY_BAUD_115200B 1
#define CONFIG_ESPTOOLPY_BAUD_OTHER_VAL 115200
#define CONFIG_ESPTOOLPY_BAUD 115200
#define CONFIG_ESPTOOLPY_COMPRESSED 1
#define CONFIG_ESPTOOLPY_FLASHMODE_QIO 1
#define CONFIG_ESPTOOLPY_FLASHMODE "dio"
#define CONFIG_SPI_FLASH_MODE 0x0
#define CONFIG_ESPTOOLPY_FLASHFREQ_40M 1
#define CONFIG_ESPTOOLPY_FLASHFREQ "40m"
#define CONFIG_SPI_FLASH_FREQ 0x0
#define CONFIG_ESPTOOLPY_FLASHSIZE_2MB 1
#define CONFIG_ESPTOOLPY_FLASHSIZE "2MB"
#define CONFIG_SPI_FLASH_SIZE 0x200000
#define CONFIG_ESPTOOLPY_BEFORE_RESET 1
#define CONFIG_ESPTOOLPY_BEFORE "default_reset"
#define CONFIG_ESPTOOLPY_AFTER_HARD_RESET 1
#define CONFIG_ESPTOOLPY_AFTER "hard_reset"
#define CONFIG_ESPTOOLPY_MONITOR_BAUD_74880B 1
#define CONFIG_ESPTOOLPY_MONITOR_BAUD_OTHER_VAL 74880
#define CONFIG_ESPTOOLPY_MONITOR_BAUD 74880
#define CONFIG_PARTITION_TABLE_SINGLE_APP 1
#define CONFIG_PARTITION_TABLE_CUSTOM_FILENAME "partitions.csv"
#define CONFIG_PARTITION_TABLE_OFFSET 0x8000
#define CONFIG_PARTITION_TABLE_FILENAME "partitions_singleapp.csv"
#define CONFIG_BROKER_URI "mqtts://user-endpoint.iot.eu-west-1.amazonaws.com:8883"
#define CONFIG_BROKER_CERTIFICATE_OVERRIDE ""
#define CONFIG_EXAMPLE_WIFI_SSID "ssid"
#define CONFIG_EXAMPLE_WIFI_PASSWORD "password"
#define CONFIG_COMPILER_OPTIMIZATION_LEVEL_DEBUG 1
#define CONFIG_COMPILER_OPTIMIZATION_ASSERTIONS_ENABLE 1
#define CONFIG_COMPILER_STACK_CHECK_MODE_NONE 1
#define CONFIG_APP_UPDATE_CHECK_APP_SUM 1
#define CONFIG_APP_COMPILE_TIME_DATE 1
#define CONFIG_ESP_TLS_USING_MBEDTLS 1
#define CONFIG_ESP8266_NMI_WDT 1
#define CONFIG_ESP8266_XTAL_FREQ_26 1
#define CONFIG_ESP8266_XTAL_FREQ 26
#define CONFIG_ESP8266_DEFAULT_CPU_FREQ_160 1
#define CONFIG_ESP8266_DEFAULT_CPU_FREQ_MHZ 160
#define CONFIG_ESP_FILENAME_MACRO_NO_PATH 1
#define CONFIG_USING_NEW_ETS_VPRINTF 1
#define CONFIG_ETS_PRINTF_EXIT_WHEN_FLASH_RW 1
#define CONFIG_SOC_IRAM_SIZE 0xC000
#define CONFIG_ESP_PANIC_PRINT_REBOOT 1
#define CONFIG_RESET_REASON 1
#define CONFIG_WIFI_PPT_TASKSTACK_SIZE 5120
#define CONFIG_ESP8266_CORE_GLOBAL_DATA_LINK_IRAM 1
#define CONFIG_ESP8266_TIME_SYSCALL_USE_FRC1 1
#define CONFIG_SCAN_AP_MAX 99
#define CONFIG_WIFI_TX_RATE_SEQUENCE_FROM_HIGH 1
#define CONFIG_ESP8266_WIFI_RX_BUFFER_NUM 16
#define CONFIG_ESP8266_WIFI_LEFT_CONTINUOUS_RX_BUFFER_NUM 16
#define CONFIG_ESP8266_WIFI_RX_PKT_NUM 7
#define CONFIG_ESP8266_WIFI_TX_PKT_NUM 6
#define CONFIG_ESP8266_WIFI_NVS_ENABLED 1
#define CONFIG_ESP8266_WIFI_CONNECT_OPEN_ROUTER_WHEN_PWD_IS_SET 1
#define CONFIG_ESP8266_WIFI_ENABLE_WPA3_SAE 1
#define CONFIG_ESP_PHY_CALIBRATION_AND_DATA_STORAGE 1
#define CONFIG_ESP_PHY_INIT_DATA_VDD33_CONST 33
#define CONFIG_ESP8266_PHY_MAX_WIFI_TX_POWER 20
#define CONFIG_ESP_ERR_TO_NAME_LOOKUP 1
#define CONFIG_ESP_SYSTEM_EVENT_QUEUE_SIZE 32
#define CONFIG_ESP_SYSTEM_EVENT_TASK_STACK_SIZE 2048
#define CONFIG_ESP_MAIN_TASK_STACK_SIZE 3584
#define CONFIG_ESP_TIMER_TASK_STACK_SIZE 3584
#define CONFIG_ESP_CONSOLE_UART_DEFAULT 1
#define CONFIG_ESP_CONSOLE_UART_NUM 0
#define CONFIG_ESP_CONSOLE_UART_BAUDRATE 74880
#define CONFIG_ESP_TASK_WDT 1
#define CONFIG_ESP_TASK_WDT_PANIC 1
#define CONFIG_ESP_TASK_WDT_TIMEOUT_15N 1
#define CONFIG_ESP_TASK_WDT_TIMEOUT_S 15
#define CONFIG_ESP_EVENT_POST_FROM_ISR 1
#define CONFIG_ESP_HTTP_CLIENT_ENABLE_HTTPS 1
#define CONFIG_HTTP_BUF_SIZE 512
#define CONFIG_HTTPD_MAX_REQ_HDR_LEN 512
#define CONFIG_HTTPD_MAX_URI_LEN 512
#define CONFIG_OTA_BUF_SIZE 256
#define CONFIG_FATFS_CODEPAGE_437 1
#define CONFIG_FATFS_CODEPAGE 437
#define CONFIG_FATFS_LFN_NONE 1
#define CONFIG_FATFS_FS_LOCK 0
#define CONFIG_FATFS_TIMEOUT_MS 10000
#define CONFIG_FATFS_PER_FILE_CACHE 1
#define CONFIG_FMB_COMM_MODE_TCP_EN 1
#define CONFIG_FMB_TCP_PORT_DEFAULT 502
#define CONFIG_FMB_TCP_PORT_MAX_CONN 5
#define CONFIG_FMB_TCP_CONNECTION_TOUT_SEC 20
#define CONFIG_FMB_MASTER_TIMEOUT_MS_RESPOND 150
#define CONFIG_FMB_MASTER_DELAY_MS_CONVERT 200
#define CONFIG_FMB_QUEUE_LENGTH 20
#define CONFIG_FMB_PORT_TASK_STACK_SIZE 4096
#define CONFIG_FMB_SERIAL_BUF_SIZE 256
#define CONFIG_FMB_PORT_TASK_PRIO 10
#define CONFIG_FMB_CONTROLLER_SLAVE_ID_SUPPORT 1
#define CONFIG_FMB_CONTROLLER_SLAVE_ID 0x00112233
#define CONFIG_FMB_CONTROLLER_NOTIFY_TIMEOUT 20
#define CONFIG_FMB_CONTROLLER_NOTIFY_QUEUE_SIZE 20
#define CONFIG_FMB_CONTROLLER_STACK_SIZE 4096
#define CONFIG_FMB_EVENT_QUEUE_TIMEOUT 20
#define CONFIG_FMB_TIMER_GROUP 0
#define CONFIG_FMB_TIMER_INDEX 0
#define CONFIG_FREERTOS_UNICORE 1
#define CONFIG_FREERTOS_NO_AFFINITY 0x7FFFFFFF
#define CONFIG_FREERTOS_HZ 100
#define CONFIG_FREERTOS_MAX_HOOK 2
#define CONFIG_FREERTOS_IDLE_TASK_STACKSIZE 1024
#define CONFIG_FREERTOS_ISR_STACKSIZE 512
#define CONFIG_FREERTOS_GLOBAL_DATA_LINK_IRAM 1
#define CONFIG_FREERTOS_TIMER_STACKSIZE 2048
#define CONFIG_TASK_SWITCH_FASTER 1
#define CONFIG_FREERTOS_WATCHPOINT_END_OF_STACK 1
#define CONFIG_LIBSODIUM_USE_MBEDTLS_SHA 1
#define CONFIG_LOG_DEFAULT_LEVEL_INFO 1
#define CONFIG_LOG_DEFAULT_LEVEL 3
#define CONFIG_LOG_COLORS 1
#define CONFIG_LWIP_LOCAL_HOSTNAME "espressif"
#define CONFIG_LWIP_DNS_SUPPORT_MDNS_QUERIES 1
#define CONFIG_LWIP_TIMERS_ONDEMAND 1
#define CONFIG_LWIP_MAX_SOCKETS 10
#define CONFIG_LWIP_SO_REUSE 1
#define CONFIG_LWIP_SO_REUSE_RXTOALL 1
#define CONFIG_LWIP_IP4_FRAG 1
#define CONFIG_LWIP_IP6_FRAG 1
#define CONFIG_LWIP_ESP_GRATUITOUS_ARP 1
#define CONFIG_LWIP_GARP_TMR_INTERVAL 60
#define CONFIG_LWIP_TCPIP_RECVMBOX_SIZE 32
#define CONFIG_LWIP_DHCP_DOES_ARP_CHECK 1
#define CONFIG_LWIP_DHCPS_LEASE_UNIT 60
#define CONFIG_LWIP_DHCPS_MAX_STATION_NUM 8
#define CONFIG_LWIP_NETIF_LOOPBACK 1
#define CONFIG_LWIP_LOOPBACK_MAX_PBUFS 8
#define CONFIG_LWIP_MAX_ACTIVE_TCP 16
#define CONFIG_LWIP_MAX_LISTENING_TCP 16
#define CONFIG_LWIP_TCP_MAXRTX 12
#define CONFIG_LWIP_TCP_SYNMAXRTX 6
#define CONFIG_LWIP_TCP_MSS 1440
#define CONFIG_LWIP_TCP_TMR_INTERVAL 250
#define CONFIG_LWIP_TCP_MSL 60000
#define CONFIG_LWIP_TCP_SND_BUF_DEFAULT 2880
#define CONFIG_LWIP_TCP_WND_DEFAULT 5760
#define CONFIG_LWIP_TCP_RECVMBOX_SIZE 6
#define CONFIG_LWIP_TCP_QUEUE_OOSEQ 1
#define CONFIG_LWIP_TCP_OVERSIZE_MSS 1
#define CONFIG_LWIP_TCP_RTO_TIME 3000
#define CONFIG_LWIP_MAX_UDP_PCBS 16
#define CONFIG_LWIP_UDP_RECVMBOX_SIZE 6
#define CONFIG_LWIP_TCPIP_TASK_STACK_SIZE 2048
#define CONFIG_LWIP_TCPIP_TASK_AFFINITY_NO_AFFINITY 1
#define CONFIG_LWIP_TCPIP_TASK_AFFINITY 0x7FFFFFFF
#define CONFIG_LWIP_IPV6_MEMP_NUM_ND6_QUEUE 3
#define CONFIG_LWIP_IPV6_ND6_NUM_NEIGHBORS 5
#define CONFIG_LWIP_MAX_RAW_PCBS 16
#define CONFIG_LWIP_DHCP_MAX_NTP_SERVERS 1
#define CONFIG_LWIP_SNTP_UPDATE_DELAY 3600000
#define CONFIG_LWIP_ESP_LWIP_ASSERT 1
#define CONFIG_MBEDTLS_INTERNAL_MEM_ALLOC 1
#define CONFIG_MBEDTLS_ASYMMETRIC_CONTENT_LEN 1
#define CONFIG_MBEDTLS_SSL_IN_CONTENT_LEN 16384
#define CONFIG_MBEDTLS_SSL_OUT_CONTENT_LEN 4096
#define CONFIG_MBEDTLS_HAVE_TIME 1
#define CONFIG_MBEDTLS_TLS_SERVER_AND_CLIENT 1
#define CONFIG_MBEDTLS_TLS_SERVER 1
#define CONFIG_MBEDTLS_TLS_CLIENT 1
#define CONFIG_MBEDTLS_TLS_ENABLED 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_RSA 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_DHE_RSA 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ELLIPTIC_CURVE 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDHE_RSA 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDHE_ECDSA 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDH_ECDSA 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDH_RSA 1
#define CONFIG_MBEDTLS_SSL_RENEGOTIATION 1
#define CONFIG_MBEDTLS_SSL_PROTO_TLS1 1
#define CONFIG_MBEDTLS_SSL_PROTO_TLS1_1 1
#define CONFIG_MBEDTLS_SSL_PROTO_TLS1_2 1
#define CONFIG_MBEDTLS_SSL_ALPN 1
#define CONFIG_MBEDTLS_CLIENT_SSL_SESSION_TICKETS 1
#define CONFIG_MBEDTLS_SERVER_SSL_SESSION_TICKETS 1
#define CONFIG_MBEDTLS_AES_C 1
#define CONFIG_MBEDTLS_RC4_DISABLED 1
#define CONFIG_MBEDTLS_CCM_C 1
#define CONFIG_MBEDTLS_GCM_C 1
#define CONFIG_MBEDTLS_PEM_PARSE_C 1
#define CONFIG_MBEDTLS_PEM_WRITE_C 1
#define CONFIG_MBEDTLS_X509_CRL_PARSE_C 1
#define CONFIG_MBEDTLS_X509_CSR_PARSE_C 1
#define CONFIG_MBEDTLS_ECP_C 1
#define CONFIG_MBEDTLS_ECDH_C 1
#define CONFIG_MBEDTLS_ECDSA_C 1
#define CONFIG_MBEDTLS_ECP_DP_SECP192R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_SECP224R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_SECP256R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_SECP384R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_SECP521R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_SECP192K1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_SECP224K1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_SECP256K1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_BP256R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_BP384R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_BP512R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_CURVE25519_ENABLED 1
#define CONFIG_MBEDTLS_ECP_NIST_OPTIM 1
#define CONFIG_ESP_AES 1
#define CONFIG_ESP_MD5 1
#define CONFIG_ESP_ARC4 1
#define CONFIG_MQTT_PROTOCOL_311 1
#define CONFIG_MQTT_TRANSPORT_SSL 1
#define CONFIG_MQTT_TRANSPORT_WEBSOCKET 1
#define CONFIG_MQTT_TRANSPORT_WEBSOCKET_SECURE 1
#define CONFIG_NEWLIB_STDOUT_LINE_ENDING_CRLF 1
#define CONFIG_NEWLIB_NANO_FORMAT 1
#define CONFIG_OPENSSL_ASSERT_DO_NOTHING 1
#define CONFIG_PTHREAD_TASK_PRIO_DEFAULT 5
#define CONFIG_PTHREAD_TASK_STACK_SIZE_DEFAULT 3072
#define CONFIG_PTHREAD_STACK_MIN 768
#define CONFIG_PTHREAD_TASK_NAME_DEFAULT "pthread"
#define CONFIG_SPIFFS_MAX_PARTITIONS 3
#define CONFIG_SPIFFS_CACHE 1
#define CONFIG_SPIFFS_CACHE_WR 1
#define CONFIG_SPIFFS_PAGE_CHECK 1
#define CONFIG_SPIFFS_GC_MAX_RUNS 10
#define CONFIG_SPIFFS_PAGE_SIZE 256
#define CONFIG_SPIFFS_OBJ_NAME_LEN 32
#define CONFIG_SPIFFS_USE_MAGIC 1
#define CONFIG_SPIFFS_USE_MAGIC_LENGTH 1
#define CONFIG_SPIFFS_META_LENGTH 4
#define CONFIG_SPIFFS_USE_MTIME 1
#define CONFIG_IP_LOST_TIMER_INTERVAL 120
#define CONFIG_TCPIP_ADAPTER_GLOBAL_DATA_LINK_IRAM 1
#define CONFIG_VFS_SUPPRESS_SELECT_DEBUG_OUTPUT 1
#define CONFIG_VFS_SUPPORT_TERMIOS 1
#define CONFIG_SEMIHOSTFS_MAX_MOUNT_POINTS 1
#define CONFIG_SEMIHOSTFS_HOST_PATH_MAX_LEN 128
#define CONFIG_WL_SECTOR_SIZE_4096 1
#define CONFIG_WL_SECTOR_SIZE 4096
#define CONFIG_LTM_FAST 1
#define CONFIG_WPA_MBEDTLS_CRYPTO 1

/* List of deprecated options */
#ifdef CONFIG_ESP_CONSOLE_UART
#define CONFIG_CONSOLE_UART CONFIG_ESP_CONSOLE_UART
#endif

#ifdef CONFIG_ESP_CONSOLE_UART_BAUDRATE
#define CONFIG_CONSOLE_UART_BAUDRATE CONFIG_ESP_CONSOLE_UART_BAUDRATE
#endif

#ifdef CONFIG_ESP_CONSOLE_UART_CUSTOM
#define CONFIG_CONSOLE_UART_CUSTOM CONFIG_ESP_CONSOLE_UART_CUSTOM
#endif

#ifdef CONFIG_ESP_CONSOLE_UART_CUSTOM_NUM_0
#define CONFIG_CONSOLE_UART_CUSTOM_NUM_0 CONFIG_ESP_CONSOLE_UART_CUSTOM_NUM_0
#endif

#ifdef CONFIG_ESP_CONSOLE_UART_CUSTOM_NUM_1
#define CONFIG_CONSOLE_UART_CUSTOM_NUM_1 CONFIG_ESP_CONSOLE_UART_CUSTOM_NUM_1
#endif

#ifdef CONFIG_ESP_CONSOLE_UART_DEFAULT
#define CONFIG_CONSOLE_UART_DEFAULT CONFIG_ESP_CONSOLE_UART_DEFAULT
#endif

#ifdef CONFIG_ESP_CONSOLE_UART_NONE
#define CONFIG_CONSOLE_UART_NONE CONFIG_ESP_CONSOLE_UART_NONE
#endif

#ifdef CONFIG_ESP_CONSOLE_UART_NUM
#define CONFIG_CONSOLE_UART_NUM CONFIG_ESP_CONSOLE_UART_NUM
#endif

#ifdef CONFIG_COMPILER_CXX_EXCEPTIONS
#define CONFIG_CXX_EXCEPTIONS CONFIG_COMPILER_CXX_EXCEPTIONS
#endif

#ifdef CONFIG_PTHREAD_DEFAULT_CORE_0
#define CONFIG_ESP32_DEFAULT_PTHREAD_CORE_0 CONFIG_PTHREAD_DEFAULT_CORE_0
#endif

#ifdef CONFIG_PTHREAD_DEFAULT_CORE_1
#define CONFIG_ESP32_DEFAULT_PTHREAD_CORE_1 CONFIG_PTHREAD_DEFAULT_CORE_1
#endif

#ifdef CONFIG_PTHREAD_DEFAULT_CORE_NO_AFFINITY
#define CONFIG_ESP32_DEFAULT_PTHREAD_CORE_NO_AFFINITY CONFIG_PTHREAD_DEFAULT_CORE_NO_AFFINITY
#endif

#ifdef CONFIG_PTHREAD_STACK_MIN
#define CONFIG_ESP32_PTHREAD_STACK_MIN CONFIG_PTHREAD_STACK_MIN
#endif

#ifdef CONFIG_PTHREAD_TASK_CORE_DEFAULT
#define CONFIG_ESP32_PTHREAD_TASK_CORE_DEFAULT CONFIG_PTHREAD_TASK_CORE_DEFAULT
#endif

#ifdef CONFIG_PTHREAD_TASK_NAME_DEFAULT
#define CONFIG_ESP32_PTHREAD_TASK_NAME_DEFAULT CONFIG_PTHREAD_TASK_NAME_DEFAULT
#endif

#ifdef CONFIG_PTHREAD_TASK_PRIO_DEFAULT
#define CONFIG_ESP32_PTHREAD_TASK_PRIO_DEFAULT CONFIG_PTHREAD_TASK_PRIO_DEFAULT
#endif

#ifdef CONFIG_PTHREAD_TASK_STACK_SIZE_DEFAULT
#define CONFIG_ESP32_PTHREAD_TASK_STACK_SIZE_DEFAULT CONFIG_PTHREAD_TASK_STACK_SIZE_DEFAULT
#endif

#ifdef CONFIG_LWIP_ESP_GRATUITOUS_ARP
#define CONFIG_ESP_GRATUITOUS_ARP CONFIG_LWIP_ESP_GRATUITOUS_ARP
#endif

#ifdef CONFIG_LWIP_TCP_KEEP_CONNECTION_WHEN_IP_CHANGES
#define CONFIG_ESP_TCP_KEEP_CONNECTION_WHEN_IP_CHANGES CONFIG_LWIP_TCP_KEEP_CONNECTION_WHEN_IP_CHANGES
#endif

#ifdef CONFIG_ESPTOOLPY_FLASHMODE_DIO
#define CONFIG_FLASHMODE_DIO CONFIG_ESPTOOLPY_FLASHMODE_DIO
#endif

#ifdef CONFIG_ESPTOOLPY_FLASHMODE_DOUT
#define CONFIG_FLASHMODE_DOUT CONFIG_ESPTOOLPY_FLASHMODE_DOUT
#endif

#ifdef CONFIG_ESPTOOLPY_FLASHMODE_QIO
#define CONFIG_FLASHMODE_QIO CONFIG_ESPTOOLPY_FLASHMODE_QIO
#endif

#ifdef CONFIG_ESPTOOLPY_FLASHMODE_QOUT
#define CONFIG_FLASHMODE_QOUT CONFIG_ESPTOOLPY_FLASHMODE_QOUT
#endif

#ifdef CONFIG_LWIP_GARP_TMR_INTERVAL
#define CONFIG_GARP_TMR_INTERVAL CONFIG_LWIP_GARP_TMR_INTERVAL
#endif

#ifdef CONFIG_LWIP_L2_TO_L3_COPY
#define CONFIG_L2_TO_L3_COPY CONFIG_LWIP_L2_TO_L3_COPY
#endif

#ifdef CONFIG_ESP_MAIN_TASK_STACK_SIZE
#define CONFIG_MAIN_TASK_STACK_SIZE CONFIG_ESP_MAIN_TASK_STACK_SIZE
#endif

#ifdef CONFIG_SDK_MAKE_WARN_UNDEFINED_VARIABLES
#define CONFIG_MAKE_WARN_UNDEFINED_VARIABLES CONFIG_SDK_MAKE_WARN_UNDEFINED_VARIABLES
#endif

#ifdef CONFIG_FMB_CONTROLLER_NOTIFY_QUEUE_SIZE
#define CONFIG_MB_CONTROLLER_NOTIFY_QUEUE_SIZE CONFIG_FMB_CONTROLLER_NOTIFY_QUEUE_SIZE
#endif

#ifdef CONFIG_FMB_CONTROLLER_NOTIFY_TIMEOUT
#define CONFIG_MB_CONTROLLER_NOTIFY_TIMEOUT CONFIG_FMB_CONTROLLER_NOTIFY_TIMEOUT
#endif

#ifdef CONFIG_FMB_CONTROLLER_SLAVE_ID
#define CONFIG_MB_CONTROLLER_SLAVE_ID CONFIG_FMB_CONTROLLER_SLAVE_ID
#endif

#ifdef CONFIG_FMB_CONTROLLER_SLAVE_ID_SUPPORT
#define CONFIG_MB_CONTROLLER_SLAVE_ID_SUPPORT CONFIG_FMB_CONTROLLER_SLAVE_ID_SUPPORT
#endif

#ifdef CONFIG_FMB_CONTROLLER_STACK_SIZE
#define CONFIG_MB_CONTROLLER_STACK_SIZE CONFIG_FMB_CONTROLLER_STACK_SIZE
#endif

#ifdef CONFIG_FMB_EVENT_QUEUE_TIMEOUT
#define CONFIG_MB_EVENT_QUEUE_TIMEOUT CONFIG_FMB_EVENT_QUEUE_TIMEOUT
#endif

#ifdef CONFIG_FMB_MASTER_DELAY_MS_CONVERT
#define CONFIG_MB_MASTER_DELAY_MS_CONVERT CONFIG_FMB_MASTER_DELAY_MS_CONVERT
#endif

#ifdef CONFIG_FMB_MASTER_TIMEOUT_MS_RESPOND
#define CONFIG_MB_MASTER_TIMEOUT_MS_RESPOND CONFIG_FMB_MASTER_TIMEOUT_MS_RESPOND
#endif

#ifdef CONFIG_FMB_QUEUE_LENGTH
#define CONFIG_MB_QUEUE_LENGTH CONFIG_FMB_QUEUE_LENGTH
#endif

#ifdef CONFIG_FMB_SERIAL_BUF_SIZE
#define CONFIG_MB_SERIAL_BUF_SIZE CONFIG_FMB_SERIAL_BUF_SIZE
#endif

#ifdef CONFIG_FMB_PORT_TASK_PRIO
#define CONFIG_MB_SERIAL_TASK_PRIO CONFIG_FMB_PORT_TASK_PRIO
#endif

#ifdef CONFIG_FMB_PORT_TASK_STACK_SIZE
#define CONFIG_MB_SERIAL_TASK_STACK_SIZE CONFIG_FMB_PORT_TASK_STACK_SIZE
#endif

#ifdef CONFIG_FMB_TIMER_GROUP
#define CONFIG_MB_TIMER_GROUP CONFIG_FMB_TIMER_GROUP
#endif

#ifdef CONFIG_FMB_TIMER_INDEX
#define CONFIG_MB_TIMER_INDEX CONFIG_FMB_TIMER_INDEX
#endif

#ifdef CONFIG_FMB_TIMER_PORT_ENABLED
#define CONFIG_MB_TIMER_PORT_ENABLED CONFIG_FMB_TIMER_PORT_ENABLED
#endif

#ifdef CONFIG_ESPTOOLPY_MONITOR_BAUD
#define CONFIG_MONITOR_BAUD CONFIG_ESPTOOLPY_MONITOR_BAUD
#endif

#ifdef CONFIG_ESPTOOLPY_MONITOR_BAUD_115200B
#define CONFIG_MONITOR_BAUD_115200B CONFIG_ESPTOOLPY_MONITOR_BAUD_115200B
#endif

#ifdef CONFIG_ESPTOOLPY_MONITOR_BAUD_230400B
#define CONFIG_MONITOR_BAUD_230400B CONFIG_ESPTOOLPY_MONITOR_BAUD_230400B
#endif

#ifdef CONFIG_ESPTOOLPY_MONITOR_BAUD_2MB
#define CONFIG_MONITOR_BAUD_2MB CONFIG_ESPTOOLPY_MONITOR_BAUD_2MB
#endif

#ifdef CONFIG_ESPTOOLPY_MONITOR_BAUD_57600B
#define CONFIG_MONITOR_BAUD_57600B CONFIG_ESPTOOLPY_MONITOR_BAUD_57600B
#endif

#ifdef CONFIG_ESPTOOLPY_MONITOR_BAUD_74880B
#define CONFIG_MONITOR_BAUD_74880B CONFIG_ESPTOOLPY_MONITOR_BAUD_74880B
#endif

#ifdef CONFIG_ESPTOOLPY_MONITOR_BAUD_921600B
#define CONFIG_MONITOR_BAUD_921600B CONFIG_ESPTOOLPY_MONITOR_BAUD_921600B
#endif

#ifdef CONFIG_ESPTOOLPY_MONITOR_BAUD_9600B
#define CONFIG_MONITOR_BAUD_9600B CONFIG_ESPTOOLPY_MONITOR_BAUD_9600B
#endif

#ifdef CONFIG_ESPTOOLPY_MONITOR_BAUD_OTHER
#define CONFIG_MONITOR_BAUD_OTHER CONFIG_ESPTOOLPY_MONITOR_BAUD_OTHER
#endif

#ifdef CONFIG_ESPTOOLPY_MONITOR_BAUD_OTHER_VAL
#define CONFIG_MONITOR_BAUD_OTHER_VAL CONFIG_ESPTOOLPY_MONITOR_BAUD_OTHER_VAL
#endif

#ifdef CONFIG_COMPILER_OPTIMIZATION_ASSERTIONS_DISABLE
#define CONFIG_OPTIMIZATION_ASSERTIONS_DISABLED CONFIG_COMPILER_OPTIMIZATION_ASSERTIONS_DISABLE
#endif

#ifdef CONFIG_COMPILER_OPTIMIZATION_ASSERTIONS_ENABLE
#define CONFIG_OPTIMIZATION_ASSERTIONS_ENABLED CONFIG_COMPILER_OPTIMIZATION_ASSERTIONS_ENABLE
#endif

#ifdef CONFIG_COMPILER_OPTIMIZATION_ASSERTIONS_SILENT
#define CONFIG_OPTIMIZATION_ASSERTIONS_SILENT CONFIG_COMPILER_OPTIMIZATION_ASSERTIONS_SILENT
#endif

#ifdef CONFIG_COMPILER_OPTIMIZATION_ASSERTION_LEVEL
#define CONFIG_OPTIMIZATION_ASSERTION_LEVEL CONFIG_COMPILER_OPTIMIZATION_ASSERTION_LEVEL
#endif

#ifdef CONFIG_COMPILER_OPTIMIZATION
#define CONFIG_OPTIMIZATION_COMPILER CONFIG_COMPILER_OPTIMIZATION
#endif

#ifdef CONFIG_COMPILER_OPTIMIZATION_LEVEL_DEBUG
#define CONFIG_OPTIMIZATION_LEVEL_DEBUG CONFIG_COMPILER_OPTIMIZATION_LEVEL_DEBUG
#endif

#ifdef CONFIG_COMPILER_OPTIMIZATION_LEVEL_RELEASE
#define CONFIG_OPTIMIZATION_LEVEL_RELEASE CONFIG_COMPILER_OPTIMIZATION_LEVEL_RELEASE
#endif

#ifdef CONFIG_LWIP_PPP_CHAP_SUPPORT
#define CONFIG_PPP_CHAP_SUPPORT CONFIG_LWIP_PPP_CHAP_SUPPORT
#endif

#ifdef CONFIG_LWIP_PPP_DEBUG_ON
#define CONFIG_PPP_DEBUG_ON CONFIG_LWIP_PPP_DEBUG_ON
#endif

#ifdef CONFIG_LWIP_PPP_MPPE_SUPPORT
#define CONFIG_PPP_MPPE_SUPPORT CONFIG_LWIP_PPP_MPPE_SUPPORT
#endif

#ifdef CONFIG_LWIP_PPP_MSCHAP_SUPPORT
#define CONFIG_PPP_MSCHAP_SUPPORT CONFIG_LWIP_PPP_MSCHAP_SUPPORT
#endif

#ifdef CONFIG_LWIP_PPP_NOTIFY_PHASE_SUPPORT
#define CONFIG_PPP_NOTIFY_PHASE_SUPPORT CONFIG_LWIP_PPP_NOTIFY_PHASE_SUPPORT
#endif

#ifdef CONFIG_LWIP_PPP_PAP_SUPPORT
#define CONFIG_PPP_PAP_SUPPORT CONFIG_LWIP_PPP_PAP_SUPPORT
#endif

#ifdef CONFIG_LWIP_PPP_SUPPORT
#define CONFIG_PPP_SUPPORT CONFIG_LWIP_PPP_SUPPORT
#endif

#ifdef CONFIG_COMPILER_STACK_CHECK
#define CONFIG_STACK_CHECK CONFIG_COMPILER_STACK_CHECK
#endif

#ifdef CONFIG_COMPILER_STACK_CHECK_MODE_ALL
#define CONFIG_STACK_CHECK_ALL CONFIG_COMPILER_STACK_CHECK_MODE_ALL
#endif

#ifdef CONFIG_COMPILER_STACK_CHECK_MODE
#define CONFIG_STACK_CHECK_MODE CONFIG_COMPILER_STACK_CHECK_MODE
#endif

#ifdef CONFIG_COMPILER_STACK_CHECK_MODE_NONE
#define CONFIG_STACK_CHECK_NONE CONFIG_COMPILER_STACK_CHECK_MODE_NONE
#endif

#ifdef CONFIG_COMPILER_STACK_CHECK_MODE_NORM
#define CONFIG_STACK_CHECK_NORM CONFIG_COMPILER_STACK_CHECK_MODE_NORM
#endif

#ifdef CONFIG_COMPILER_STACK_CHECK_MODE_STRONG
#define CONFIG_STACK_CHECK_STRONG CONFIG_COMPILER_STACK_CHECK_MODE_STRONG
#endif

#ifdef CONFIG_VFS_SUPPORT_TERMIOS
#define CONFIG_SUPPORT_TERMIOS CONFIG_VFS_SUPPORT_TERMIOS
#endif

#ifdef CONFIG_VFS_SUPPRESS_SELECT_DEBUG_OUTPUT
#define CONFIG_SUPPRESS_SELECT_DEBUG_OUTPUT CONFIG_VFS_SUPPRESS_SELECT_DEBUG_OUTPUT
#endif

#ifdef CONFIG_IDF_TARGET
#define CONFIG_TARGET_PLATFORM CONFIG_IDF_TARGET
#endif

#ifdef CONFIG_ESP_TASK_WDT
#define CONFIG_TASK_WDT CONFIG_ESP_TASK_WDT
#endif

#ifdef CONFIG_ESP_TASK_WDT_PANIC
#define CONFIG_TASK_WDT_PANIC CONFIG_ESP_TASK_WDT_PANIC
#endif

#ifdef CONFIG_ESP_TASK_WDT_TIMEOUT_S
#define CONFIG_TASK_WDT_TIMEOUT_S CONFIG_ESP_TASK_WDT_TIMEOUT_S
#endif

#ifdef CONFIG_LWIP_TCPIP_RECVMBOX_SIZE
#define CONFIG_TCPIP_RECVMBOX_SIZE CONFIG_LWIP_TCPIP_RECVMBOX_SIZE
#endif

#ifdef CONFIG_LWIP_TCPIP_TASK_AFFINITY
#define CONFIG_TCPIP_TASK_AFFINITY CONFIG_LWIP_TCPIP_TASK_AFFINITY
#endif

#ifdef CONFIG_LWIP_TCPIP_TASK_AFFINITY_CPU0
#define CONFIG_TCPIP_TASK_AFFINITY_CPU0 CONFIG_LWIP_TCPIP_TASK_AFFINITY_CPU0
#endif

#ifdef CONFIG_LWIP_TCPIP_TASK_AFFINITY_CPU1
#define CONFIG_TCPIP_TASK_AFFINITY_CPU1 CONFIG_LWIP_TCPIP_TASK_AFFINITY_CPU1
#endif

#ifdef CONFIG_LWIP_TCPIP_TASK_AFFINITY_NO_AFFINITY
#define CONFIG_TCPIP_TASK_AFFINITY_NO_AFFINITY CONFIG_LWIP_TCPIP_TASK_AFFINITY_NO_AFFINITY
#endif

#ifdef CONFIG_LWIP_TCPIP_TASK_STACK_SIZE
#define CONFIG_TCPIP_TASK_STACK_SIZE CONFIG_LWIP_TCPIP_TASK_STACK_SIZE
#endif

#ifdef CONFIG_LWIP_TCP_MAXRTX
#define CONFIG_TCP_MAXRTX CONFIG_LWIP_TCP_MAXRTX
#endif

#ifdef CONFIG_LWIP_TCP_MSL
#define CONFIG_TCP_MSL CONFIG_LWIP_TCP_MSL
#endif

#ifdef CONFIG_LWIP_TCP_MSS
#define CONFIG_TCP_MSS CONFIG_LWIP_TCP_MSS
#endif

#ifdef CONFIG_LWIP_TCP_OVERSIZE
#define CONFIG_TCP_OVERSIZE CONFIG_LWIP_TCP_OVERSIZE
#endif

#ifdef CONFIG_LWIP_TCP_OVERSIZE_DISABLE
#define CONFIG_TCP_OVERSIZE_DISABLE CONFIG_LWIP_TCP_OVERSIZE_DISABLE
#endif

#ifdef CONFIG_LWIP_TCP_OVERSIZE_MSS
#define CONFIG_TCP_OVERSIZE_MSS CONFIG_LWIP_TCP_OVERSIZE_MSS
#endif

#ifdef CONFIG_LWIP_TCP_OVERSIZE_QUARTER_MSS
#define CONFIG_TCP_OVERSIZE_QUARTER_MSS CONFIG_LWIP_TCP_OVERSIZE_QUARTER_MSS
#endif

#ifdef CONFIG_LWIP_TCP_QUEUE_OOSEQ
#define CONFIG_TCP_QUEUE_OOSEQ CONFIG_LWIP_TCP_QUEUE_OOSEQ
#endif

#ifdef CONFIG_LWIP_TCP_RECVMBOX_SIZE
#define CONFIG_TCP_RECVMBOX_SIZE CONFIG_LWIP_TCP_RECVMBOX_SIZE
#endif

#ifdef CONFIG_LWIP_TCP_SND_BUF_DEFAULT
#define CONFIG_TCP_SND_BUF_DEFAULT CONFIG_LWIP_TCP_SND_BUF_DEFAULT
#endif

#ifdef CONFIG_LWIP_TCP_SYNMAXRTX
#define CONFIG_TCP_SYNMAXRTX CONFIG_LWIP_TCP_SYNMAXRTX
#endif

#ifdef CONFIG_LWIP_TCP_WND_DEFAULT
#define CONFIG_TCP_WND_DEFAULT CONFIG_LWIP_TCP_WND_DEFAULT
#endif

#ifdef CONFIG_SDK_TOOLPREFIX
#define CONFIG_TOOLPREFIX CONFIG_SDK_TOOLPREFIX
#endif

#ifdef CONFIG_ESP_UART0_SWAP_IO
#define CONFIG_UART0_SWAP_IO CONFIG_ESP_UART0_SWAP_IO
#endif

#ifdef CONFIG_LWIP_UDP_RECVMBOX_SIZE
#define CONFIG_UDP_RECVMBOX_SIZE CONFIG_LWIP_UDP_RECVMBOX_SIZE
#endif

#ifdef CONFIG_LWIP_USE_ONLY_LWIP_SELECT
#define CONFIG_USE_ONLY_LWIP_SELECT CONFIG_LWIP_USE_ONLY_LWIP_SELECT
#endif

#ifdef CONFIG_COMPILER_WARN_WRITE_STRINGS
#define CONFIG_WARN_WRITE_STRINGS CONFIG_COMPILER_WARN_WRITE_STRINGS
#endif

