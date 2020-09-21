% This file simulate Pulse Position Modulation (PPM) as per message signal amplitude
% 
% Created By: JCBRO Labs
% Date: 03/06/2017
% website: www.jcbrolabs.org
% mail: jcbrolabs@gmail.com
clc; clear all; close all;
fc = 20;    %carrier frequency
fm = 2;     % message frequency
fs = 1000;  % sampling frequency
t = 1;  
n = [0:1/fs:t];
n = n(1:end - 1);
duty = 10;
% no. of samples in one square wave period
per = fs/fc;
% no. of samples in on time
on_t = per/duty;

s = square(2*pi*fc*n,duty);
s(find(s<0)) = 0;
% message signal
m = sin(2*pi*fm*n);

% Triangular wave
A=1.25;
c=A.*sawtooth(2*pi*fc*n);%Carrier sawtooth

% 
ppm = zeros(1,length(s));

% find ids where carrier is greater than message
id = find(c > m);
idd = diff(id);
iddd = find(idd ~= 1);
temp(1) = id(1);
temp(2:length(iddd)+1) = id(iddd + 1);

% ppm signal
for i = 1:length(temp)
    ppm(temp(i) : temp(i) + on_t - 1) = 1;
end
% Plot
subplot(3,1,1);plot(n,m,'LineWidth',2);title('Message Signal');hold on; plot(n,c,'r','LineWidth',2);grid on;
subplot(3,1,2);plot(n,s,'LineWidth',2);title('Pulse Train');grid on; ylim([-0.2 1.2]);
subplot(3,1,3);plot(n,ppm,'LineWidth',2);title('PPM Signal'); grid on; ylim([-0.2 1.2]);

