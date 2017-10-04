## fork of omega2-checkHumidity (works with LinkIt Smart 7688)
## additional notes

xCompile.sh script from here: https://github.com/OnionIoT/c-cross-compile-example/blob/master/xCompile.sh
more info about xCompile.sh here: https://docs.onion.io/omega2-docs/cross-compiling.html

compile it with:
$ sh xCompile.sh -buildroot ~/dev/lede-project/lede/

where -buildroot is root directory of openwrt/lede source tree configured for linkit smart 7688 (make menuconfig)


Adapted code (fastgpio) to get [DHT11-DHT22-Sensor-Examples](https://wiki.onion.io/Tutorials/PHP-DHT11-DHT22-Sensor-Examples) working on Omega*2*(+).

![omega2+ with DHT22](https://h0l0gram.github.io/omega2-checkHumidity/images/omega2-dht22-breadboard.png)

## Prerequisites
- Omega2(+)
- Compiled binary requires firmware **0.1.10 b160** (you may be able to compile from source for older firmware as well)
(See [Updating the Omega2](https://docs.onion.io/omega2-docs/using-the-omega-updating.html) to check or update firmware)

## Install
```bash
root@Omega-1234:~# mkdir checkHumidity && cd checkHumidity
root@Omega-1234:~/checkHumidity# wget https://github.com/h0l0gram/omega2-checkHumidity/raw/master/bin/checkHumidity
root@Omega-1234:~/checkHumidity# chmod -R 755 checkHumidity
```
## Run
```bash
./checkHumidity <GPIO-PIN> <DHT-TYPE>
GPIO-PIN : 0-19
DHT-TYPE : DHT11 or DHT22

```
## Example
```bash
root@Omega-1234:~#cd checkHumidity
root@Omega-1234:~/checkHumidity# ./checkHumidity 19 DHT22
48.299999
28.299999


```
See https://wiki.onion.io/Tutorials/PHP-DHT11-DHT22-Sensor-Examples

**Hints/improvements welcome!**


## Cross compile env used:
```bash
docker run -it --name omega2-sdk-app -v /mysource:/remote jlcs/omega2-sdk bash
cd /lede;make
```
git clone https://github.com/h0l0gram/omega2-checkHumidity.git /mysource

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
