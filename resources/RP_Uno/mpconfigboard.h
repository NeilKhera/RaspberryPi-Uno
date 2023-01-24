#define MICROPY_HW_BOARD_NAME "Raspberry Pi Uno"
#define MICROPY_HW_MCU_NAME   "rp2040"

#define MICROPY_HW_LED_TX     (&pin_GPIO20)
#define MICROPY_HW_LED_RX     (&pin_GPIO21)

#define MICROPY_HW_LED_STATUS (&pin_GPIO13)
#define MICROPY_HW_NEOPIXEL   (&pin_GPIO18)

#define DEFAULT_I2C_BUS_SCL   (&pin_GPIO15)
#define DEFAULT_I2C_BUS_SDA   (&pin_GPIO14)

#define DEFAULT_SPI_BUS_SCK   (&pin_GPIO22)
#define DEFAULT_SPI_BUS_MOSI  (&pin_GPIO19)
#define DEFAULT_SPI_BUS_MISO  (&pin_GPIO16)

#define DEFAULT_UART_BUS_TX   (&pin_GPIO0)
#define DEFAULT_UART_BUS_RX   (&pin_GPIO1)