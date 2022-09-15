#define MICROPY_HW_BOARD_NAME "IB_DUAL"
#define MICROPY_HW_MCU_NAME "SAMD51G19A"

#define CIRCUITPY_MCU_FAMILY samd51

#define BOARD_HAS_CRYSTAL 1

#define MICROPY_HW_LED_STATUS   (&pin_PA20)

//#define MICROPY_HW_APA102_MOSI   (&pin_PB03)
//#define MICROPY_HW_APA102_SCK    (&pin_PB02)

#define DEFAULT_I2C_BUS_SCL (&pin_PA13)
#define DEFAULT_I2C_BUS_SDA (&pin_PA12)

#define DEFAULT_SPI_BUS_SCK (&pin_PA16)
#define DEFAULT_SPI_BUS_MOSI (&pin_PA17)
#define DEFAULT_SPI_BUS_MISO (&pin_PA19)

#define DEFAULT_UART_BUS_RX (&pin_PA05)
#define DEFAULT_UART_BUS_TX (&pin_PA04)

// USB is always used internally so skip the pin objects for it.
#define IGNORE_PIN_PA24     1
#define IGNORE_PIN_PA25     1

// Reference Voltage VDDANA
#define DAC_REF_AVDD
