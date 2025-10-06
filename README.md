# Arduino_Sine_Wave_
Generate and visualize a sine wave using Arduino — implemented using PWM and RC filter, tested on oscilloscope for real-time waveform analysis.


This project demonstrates how to generate a sine wave using an Arduino and a simple RC low-pass filter. The Arduino outputs a PWM signal whose duty cycle follows a sine pattern, and the RC filter smooths it into an analog sine-like waveform. The circuit uses a 10 kΩ resistor and a 0.1 µF capacitor connected to a PWM pin. The generated signal can be observed on an oscilloscope, where changing the delay in the code adjusts the output frequency. This setup provides an easy and low-cost way to understand digital-to-analog signal generation using PWM.
