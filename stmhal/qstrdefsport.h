/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2013, 2014 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

// qstrs specific to this port

Q(help)
Q(pyb)
Q(unique_id)
Q(bootloader)
Q(info)
Q(sd_test)
Q(present)
Q(power)
Q(wfi)
Q(disable_irq)
Q(enable_irq)
Q(stop)
Q(standby)
Q(source_dir)
Q(main)
Q(usb_mode)
Q(sync)
Q(gc)
Q(repl_info)
Q(delay)
Q(udelay)
Q(servo)
Q(pwm)
Q(read)
Q(readall)
Q(readline)
Q(write)
Q(have_cdc)
Q(hid)
Q(time)
Q(rng)
Q(LCD)
Q(SD)
Q(SDcard)
Q(FileIO)
// Entries for sys.path
Q(0:/)
Q(0:/lib)
Q(1:/)
Q(1:/lib)
Q(millis)

// for file class
Q(seek)
Q(tell)

// for RTC class
Q(RTC)
Q(info)
Q(datetime)

// for Pin class
Q(Pin)
Q(PinAF)
Q(PinNamed)
Q(init)
Q(value)
Q(low)
Q(high)
Q(name)
Q(port)
Q(pin)
Q(mapper)
Q(dict)
Q(debug)
Q(board)
Q(cpu)
Q(IN)
Q(OUT_PP)
Q(OUT_OD)
Q(AF_PP)
Q(AF_OD)
Q(ANALOG)
Q(PULL_NONE)
Q(PULL_UP)
Q(PULL_DOWN)

// for LED object
Q(LED)
Q(on)
Q(off)
Q(toggle)
Q(intensity)

// for Switch class
Q(Switch)
Q(callback)

// for UART class
Q(UART)
Q(baudrate)
Q(bits)
Q(stop)
Q(parity)
Q(init)
Q(deinit)
Q(all)
Q(send)
Q(recv)

// for Timer class
Q(Timer)
Q(counter)
Q(prescaler)
Q(period)
Q(callback)
Q(freq)
Q(mode)
Q(div)

// for ExtInt class
Q(ExtInt)
Q(pin)
Q(mode)
Q(pull)
Q(callback)
Q(line)
Q(enable)
Q(disable)
Q(swint)
Q(regs)
Q(IRQ_RISING)
Q(IRQ_FALLING)
Q(IRQ_RISING_FALLING)
Q(EVT_RISING)
Q(EVT_FALLING)
Q(EVT_RISING_FALLING)

// for I2C object
Q(I2C)
Q(mode)
Q(addr)
Q(baudrate)
Q(gencall)
Q(data)
Q(memaddr)
Q(timeout)
Q(init)
Q(deinit)
Q(is_ready)
Q(scan)
Q(send)
Q(recv)
Q(mem_read)
Q(mem_write)

// for SPI class
Q(SPI)
Q(init)
Q(deinit)
Q(send)
Q(recv)
Q(send_recv)
Q(mode)
Q(baudrate)
Q(polarity)
Q(phase)
Q(dir)
Q(bits)
Q(nss)
Q(firstbit)
Q(ti)
Q(crc)
Q(MASTER)
Q(SLAVE)
Q(MSB)
Q(LSB)

// for Accel object
Q(Accel)
Q(x)
Q(y)
Q(z)
Q(tilt)
Q(filtered_xyz)

// for ADC object
Q(ADC)
Q(ADCAll)
Q(read_timed)
Q(read_channel)
Q(read_core_temp)
Q(read_core_vbat)
Q(read_core_vref)

// for DAC class
Q(DAC)
Q(noise)
Q(triangle)
Q(write)
Q(write_timed)
Q(data)
Q(freq)
Q(mode)
Q(NORMAL)
Q(CIRCULAR)

// for Servo object
Q(Servo)
Q(pulse_width)
Q(calibration)
Q(angle)
Q(speed)

// for os module
Q(os)
Q(/)
Q(listdir)
Q(mkdir)
Q(remove)
Q(rmdir)
Q(unlink)
Q(sep)
Q(urandom)

// for time module
Q(time)
Q(localtime)
Q(sleep)

// for input
Q(input)

// for stm module
Q(stm)
Q(mem)
Q(mem8)
Q(mem16)
Q(mem32)

// for stm constants
Q(ADC)
Q(ADC1)
Q(ADC2)
Q(ADC3)
Q(ADC_CR1)
Q(ADC_CR2)
Q(ADC_DR)
Q(ADC_HTR)
Q(ADC_JDR1)
Q(ADC_JDR2)
Q(ADC_JDR3)
Q(ADC_JDR4)
Q(ADC_JOFR1)
Q(ADC_JOFR2)
Q(ADC_JOFR3)
Q(ADC_JOFR4)
Q(ADC_JSQR)
Q(ADC_LTR)
Q(ADC_SMPR1)
Q(ADC_SMPR2)
Q(ADC_SQR1)
Q(ADC_SQR2)
Q(ADC_SQR3)
Q(ADC_SR)
Q(CAN1)
Q(CAN2)
Q(CRC)
Q(CRC_CR)
Q(CRC_DR)
Q(CRC_IDR)
Q(DAC)
Q(DAC_CR)
Q(DAC_DHR12L1)
Q(DAC_DHR12L2)
Q(DAC_DHR12LD)
Q(DAC_DHR12R1)
Q(DAC_DHR12R2)
Q(DAC_DHR12RD)
Q(DAC_DHR8R1)
Q(DAC_DHR8R2)
Q(DAC_DHR8RD)
Q(DAC_DOR1)
Q(DAC_DOR2)
Q(DAC_SR)
Q(DAC_SWTRIGR)
Q(DBGMCU_APB1FZ)
Q(DBGMCU_APB2FZ)
Q(DBGMCU_CR)
Q(DBGMCU_IDCODE)
Q(DMA1)
Q(DMA2)
Q(DMA_HIFCR)
Q(DMA_HISR)
Q(DMA_LIFCR)
Q(DMA_LISR)
Q(EXTI)
Q(EXTI_EMR)
Q(EXTI_FTSR)
Q(EXTI_IMR)
Q(EXTI_PR)
Q(EXTI_RTSR)
Q(EXTI_SWIER)
Q(FLASH)
Q(FLASH_ACR)
Q(FLASH_CR)
Q(FLASH_KEYR)
Q(FLASH_OPTCR)
Q(FLASH_OPTCR1)
Q(FLASH_OPTKEYR)
Q(FLASH_SR)
Q(GPIOA)
Q(GPIOB)
Q(GPIOC)
Q(GPIOD)
Q(GPIOE)
Q(GPIOF)
Q(GPIOG)
Q(GPIOH)
Q(GPIOI)
Q(GPIO_AFR0)
Q(GPIO_AFR1)
Q(GPIO_BSRRH)
Q(GPIO_BSRRL)
Q(GPIO_IDR)
Q(GPIO_LCKR)
Q(GPIO_MODER)
Q(GPIO_ODR)
Q(GPIO_OSPEEDR)
Q(GPIO_OTYPER)
Q(GPIO_PUPDR)
Q(I2C1)
Q(I2C2)
Q(I2C3)
Q(I2C_CCR)
Q(I2C_CR1)
Q(I2C_CR2)
Q(I2C_DR)
Q(I2C_FLTR)
Q(I2C_OAR1)
Q(I2C_OAR2)
Q(I2C_SR1)
Q(I2C_SR2)
Q(I2C_TRISE)
Q(IWDG)
Q(IWDG_KR)
Q(IWDG_PR)
Q(IWDG_RLR)
Q(IWDG_SR)
Q(PWR)
Q(PWR_CR)
Q(PWR_CSR)
Q(RCC)
Q(RCC_AHB1ENR)
Q(RCC_AHB1LPENR)
Q(RCC_AHB1RSTR)
Q(RCC_AHB2ENR)
Q(RCC_AHB2LPENR)
Q(RCC_AHB2RSTR)
Q(RCC_AHB3ENR)
Q(RCC_AHB3LPENR)
Q(RCC_AHB3RSTR)
Q(RCC_APB1ENR)
Q(RCC_APB1LPENR)
Q(RCC_APB1RSTR)
Q(RCC_APB2ENR)
Q(RCC_APB2LPENR)
Q(RCC_APB2RSTR)
Q(RCC_BDCR)
Q(RCC_CFGR)
Q(RCC_CIR)
Q(RCC_CR)
Q(RCC_PLLCFGR)
Q(RCC_PLLI2SCFGR)
Q(RCC_SSCGR)
Q(RNG)
Q(RNG_CR)
Q(RNG_DR)
Q(RNG_SR)
Q(RTC)
Q(RTC_ALRMAR)
Q(RTC_ALRMBR)
Q(RTC_BKP0R)
Q(RTC_BKP10R)
Q(RTC_BKP11R)
Q(RTC_BKP12R)
Q(RTC_BKP13R)
Q(RTC_BKP14R)
Q(RTC_BKP15R)
Q(RTC_BKP16R)
Q(RTC_BKP17R)
Q(RTC_BKP18R)
Q(RTC_BKP19R)
Q(RTC_BKP1R)
Q(RTC_BKP2R)
Q(RTC_BKP3R)
Q(RTC_BKP4R)
Q(RTC_BKP5R)
Q(RTC_BKP6R)
Q(RTC_BKP7R)
Q(RTC_BKP8R)
Q(RTC_BKP9R)
Q(RTC_CALIBR)
Q(RTC_CALR)
Q(RTC_CR)
Q(RTC_DR)
Q(RTC_ISR)
Q(RTC_PRER)
Q(RTC_SHIFTR)
Q(RTC_SSR)
Q(RTC_TAFCR)
Q(RTC_TR)
Q(RTC_TSDR)
Q(RTC_TSSSR)
Q(RTC_TSTR)
Q(RTC_WPR)
Q(RTC_WUTR)
Q(SDIO)
Q(SPI1)
Q(SPI2)
Q(SPI3)
Q(SPI_CR1)
Q(SPI_CR2)
Q(SPI_CRCPR)
Q(SPI_DR)
Q(SPI_I2SCFGR)
Q(SPI_I2SPR)
Q(SPI_RXCRCR)
Q(SPI_SR)
Q(SPI_TXCRCR)
Q(SYSCFG)
Q(SYSCFG_CMPCR)
Q(SYSCFG_EXTICR0)
Q(SYSCFG_EXTICR1)
Q(SYSCFG_EXTICR2)
Q(SYSCFG_EXTICR3)
Q(SYSCFG_MEMRMP)
Q(SYSCFG_PMC)
Q(TIM1)
Q(TIM10)
Q(TIM11)
Q(TIM12)
Q(TIM13)
Q(TIM14)
Q(TIM2)
Q(TIM3)
Q(TIM4)
Q(TIM5)
Q(TIM6)
Q(TIM7)
Q(TIM8)
Q(TIM9)
Q(TIM_ARR)
Q(TIM_BDTR)
Q(TIM_CCER)
Q(TIM_CCMR1)
Q(TIM_CCMR2)
Q(TIM_CCR1)
Q(TIM_CCR2)
Q(TIM_CCR3)
Q(TIM_CCR4)
Q(TIM_CNT)
Q(TIM_CR1)
Q(TIM_CR2)
Q(TIM_DCR)
Q(TIM_DIER)
Q(TIM_DMAR)
Q(TIM_EGR)
Q(TIM_OR)
Q(TIM_PSC)
Q(TIM_RCR)
Q(TIM_SMCR)
Q(TIM_SR)
Q(UART4)
Q(UART5)
Q(USART1)
Q(USART2)
Q(USART3)
Q(USART6)
Q(USART_BRR)
Q(USART_CR1)
Q(USART_CR2)
Q(USART_CR3)
Q(USART_DR)
Q(USART_GTPR)
Q(USART_SR)
Q(WWDG)
Q(WWDG_CFR)
Q(WWDG_CR)
Q(WWDG_SR)


//openmv entries
// Image
Q(image)
Q(Image)
Q(Surf)
Q(Cascade)
Q(save)
Q(size)
Q(blit)
Q(blend)
Q(scale)
Q(scaled)
Q(rainbow)
Q(histeq)
Q(median)
Q(threshold)
Q(draw_circle)
Q(draw_rectangle)
Q(draw_keypoints)
Q(find_blobs)
Q(find_template)
Q(find_features)
Q(find_keypoints)
Q(find_keypoints_match)

// Led Module
Q(led)
Q(RED)
Q(GREEN)
Q(BLUE)
Q(IR)
Q(on)
Q(off)
Q(toggle)

// Time Module
Q(time)
Q(ticks)
Q(sleep)
Q(clock)
Q(Clock)

// Clock
Q(tick)
Q(fps)
Q(avg)

//Sensor Module
Q(sensor)
Q(RGB565)
Q(YUV422)
Q(GRAYSCALE)
Q(JPEG)
Q(QQCIF)
Q(QQVGA)
Q(QCIF)
Q(QVGA)
Q(CIF)
Q(VGA)
Q(SVGA)
Q(SXGA)

Q(reset)
Q(snapshot)
Q(set_pixformat)
Q(set_framerate)
Q(set_framesize)
Q(set_gainceiling)
Q(set_contrast)
Q(set_brightness)
Q(set_quality)
Q(__write_reg)
Q(__read_reg)

// GPIOS
Q(P1)
Q(P2)
Q(P3)
Q(P4)
Q(P5)
Q(P6)
Q(PA1)
Q(PA2)
Q(PA3)
Q(PA4)
Q(PA5)
Q(PA6)
Q(PA7)
Q(PA8)
Q(PB1)
Q(PB2)
Q(PB3)
Q(PB4)
Q(IN)
Q(OUT)
Q(gpio)
Q(GPIO)
Q(low)
Q(high)

// SPI
Q(spi)
Q(read)
Q(write)
Q(write_image)

// File
Q(file)
Q(close)

//Wlan
Q(wlan)
Q(WEP)
Q(WPA)
Q(WPA2)
Q(init)
Q(connect)
Q(connected)
Q(ifconfig)
Q(patch_version)
Q(patch_program)
Q(socket)
Q(send)
Q(recv)
Q(bind)
Q(listen)
Q(accept)
Q(settimeout)
Q(setblocking)
Q(select)
Q(AF_INET)
Q(AF_INET6)
Q(SOCK_STREAM)
Q(SOCK_DGRAM)
Q(SOCK_RAW)
Q(IPPROTO_IP)
Q(IPPROTO_ICMP)
Q(IPPROTO_IPV4)
Q(IPPROTO_TCP)
Q(IPPROTO_UDP)
Q(IPPROTO_IPV6)
Q(IPPROTO_RAW)

// MLX90620
Q(mlx)
Q(init)
Q(read)
Q(read_raw)
