import utime
import machine
pin27 = machine.Pin(27, machine.Pin.OUT)
while True:
        pin27.value(1)
        utime.sleep_ms(500)
        pin27.value(0)
        utime.sleep_ms(500)