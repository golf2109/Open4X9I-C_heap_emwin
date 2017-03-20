# Open4X9I-C_heap_emwin
Плата WaveShare Open4X9I-C. MCU STM32F429IGT6. Дисплей 480*272 шина RGB 24 bits. Touch контроллер XPT2046 подключен по SPI2 1.4 MHz.
* Написан драйвер для работы с мышью PS/2.
Тактовый сигнал (clk) от PS/2 соединен с PA7 и тактирует таймер TIM3. TIM3 увеличивает значение CNT по спаду сигнала clk каждый раз генерируя прерывание TGI. В обработчике если установлен TIF вызывается PS2_Mouse_ISR() в которой происходит считывание уровня на выводе PC1 data таким образом побитно принимается посылка от мыши и релизован интерфейс PS/2. Когда CNT переполняется (ARR=10) TIM3 генерит прерывание UI с установкой флага UIF в обработчике запускается функция которая декодирует принятый пакет(PS2_Mouse_CheckScancode(scancode)).Передача делается так. MCU делает запрос (PA7 PC1 переводятся в GP output mode) clk=0--пауза(110мкс)--data=0--clk=1. Затем вывод PA7 вновь делается AF подключенным к TIM3. После этого PS/2 начинает формировать такты на clk 
а MCU в прерывании от TIM3 TGI при режиме TX_MODE формирует ножкой (PC1 GPIO) ноль или единицу каждый раз сдвигая на бит вправо байт который передаёт. TIM3 во время передачи увеличивается на 1 и при переполнении (ARR=10) происходит прерывание в нем меняется режим для последующего приема PS2_MOUSE_VAR.mode=RX_MODE. Байт отправлен.
* Модуль LTDC настроен на вывод 2 слоев(Layer_0 Layer_1). В нижнем слое(Layer_0) выводятся окна и виджеты-иконки. В верхнем слое(Layer_1)
виджеты-иконки alarm_a alarm_b, время и дата, виджет progbar(индикация использования памяти) а также виджет slider который переключает нижние окна. LTDC работает в режиме ARGB8888 (32 бита).
Для каждого слоя настроена "тройная буфферизация" для перерисовки 2 окон нижнего слоя и 1 "transparent" окна верхнего слоя. Для этого есть API emWin GUI_MULTIBUF_BeginEx(1) GUI_MULTIBUF_EndEx(1) которые вызываются в callback функции (WM_PRE_PAINT WM_POST_PAINT) перед и после перерисовки окон (WM_PAINT) и сообщают emWin использовать или выключить "тройную буфферизацию"
    * Для Layer_0 0xD0000000-0xD017E7FF(480*272*4(байта/пиксел)*3(буффера)=522240*3(буфера)=1566720 байт или 0x17E800)
    * Для Layer_1 0xD017E800-0xD02FCFFF
    
    
