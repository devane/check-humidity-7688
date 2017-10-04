## fork of omega2-checkHumidity (works with LinkIt Smart 7688)
## additional notes

xCompile.sh script from here: https://github.com/OnionIoT/c-cross-compile-example/blob/master/xCompile.sh
more info about xCompile.sh here: https://docs.onion.io/omega2-docs/cross-compiling.html

compile it with:

$ sh xCompile.sh -buildroot ~/dev/lede-project/lede/

where -buildroot is root directory of openwrt/lede source tree configured for linkit smart 7688 (make menuconfig)


How to connect it:

DHT11/22 sensors have 3 pins
1 pin - Data (Signal)
2 pin - Vcc
3 pin - Ground

Data or Signal pin is marked as capital S

Here is wiring picture [DHT22 to Mediatek LinkIt Smart 7688](http://horizon9.org/~geroy/download/mediatek-linkit-smart-7688-dht11-wiring.jpg)

============================================================

Adapted code (fastgpio) to get [DHT11-DHT22-Sensor-Examples](https://wiki.onion.io/Tutorials/PHP-DHT11-DHT22-Sensor-Examples) working on Omega*2*(+).

./checkHumidity <GPIO-PIN> <DHT-TYPE>
GPIO-PIN : 0-19
DHT-TYPE : DHT11 or DHT22

## Example
```bash
root@LEDE:~# ./checkHumidity 19 DHT11
33.000000
26.000000

```
See https://wiki.onion.io/Tutorials/PHP-DHT11-DHT22-Sensor-Examples

## Origin tutorial and source
- https://wiki.onion.io/Tutorials/PHP-DHT11-DHT22-Sensor-Examples

## Links
- http://community.onion.io/topic/299/dht11-and-dht22-temperature-humidity-sensor-code
- http://community.onion.io/topic/1390/dht11-22-checkhumidity-syntax-error
- https://github.com/OnionIoT/fast-gpio
- https://docs.onion.io/omega2-docs/cross-compiling.html
- https://github.com/OnionIoT/OpenWRT-Packages/wiki/Setting-Up-the-Cross-Compile-Environment#step-2-get-openwrt-source


## Credits
- Adafruit Industries (original dht_read implementation)
- [Hugetto Hugetto](http://community.onion.io/user/hugetto-hugetto)
- [Contributors](https://github.com/OnionIoT/fast-gpio/graphs/contributors) of [onion/fast-gpio](https://github.com/OnionIoT/fast-gpio) fastgpioomega2
# check-humidity-7688
