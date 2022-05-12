//ACPWorkbench Version: 2.21.14
const unsigned char DianYin[1958] = {
                  

0xA5, 0x5A,/*sync head*/
0x00,/*Version*/
0x07,/*length*/
0x30,/*Firmware Type*/
0x00, 0x01, 0x0a,/*Firmware Version*/
0x01, 0x21, 0x05,/*Effect Version*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x01,/*SYSTEM_CONTROL*/
0x0F,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*system_mode*/
0x00, 0x00,/*system_reset*/
0x01, 0x00,/*system_sr_enable*/
0x07, 0x00,/*system_sr_index*/
0x01, 0x00,/*system_mclk_enable*/
0x00, 0x00,/*system_mclk_index*/
0x01, 0x00,/*system_recover_enable*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x03,/*PGA0*/
0x2F,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*line1_left_enable*/
0x01, 0x00,/*line1_right_enable*/
0x00, 0x00,/*line2_left_enable*/
0x00, 0x00,/*line2_right_enable*/
0x00, 0x00,/*line4_left_enable*/
0x00, 0x00,/*line4_right_enable*/
0x00, 0x00,/*line5_left_enable*/
0x00, 0x00,/*line5_right_enable*/
0x12, 0x00,/*line1_left_gain*/
0x12, 0x00,/*line1_right_gain*/
0x12, 0x00,/*line2_left_gain*/
0x12, 0x00,/*line2_right_gain*/
0x15, 0x00,/*line4_5_left_gain*/
0x15, 0x00,/*line4_5_right_gain*/
0x15, 0x00,/*reserved*/
0x15, 0x00,/*reserved*/
0x00, 0x00,/*Diff_input_enable*/
0x00, 0x00,/*Diff_left_gain*/
0x00, 0x00,/*Diff_right_gain*/
0x03, 0x00,/*Line1_left_right_pins*/
0x03, 0x00,/*Line2_left_right_pins*/
0x03, 0x00,/*Line4_left_right_pins*/
0x03, 0x00,/*Line5_left_right_pins*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x04,/*ADC0*/
0x15,/*length*/
0xFF,/*all parameter*/
0x03, 0x00,/*enable*/
0x00, 0x00,/*mute*/
0xFF, 0x0F,/*left_volume*/
0xFF, 0x0F,/*right_volume*/
0x07, 0x00,/*sample_rate*/
0x00, 0x00,/*LR_swap*/
0x00, 0x00,/*hpc*/
0x00, 0x00,/*fade_time*/
0x00, 0x00,/*mclk_source*/
0x01, 0x00,/*dc_blocker*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x06,/*PGA1*/
0x13,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*line3_left_mic1_enable*/
0x01, 0x00,/*line3_right_mic2_enable*/
0x10, 0x00,/*line3_left_mic1_gain*/
0x00, 0x00,/*line3_left_mic1_gain_boost*/
0x10, 0x00,/*line3_right_mic2_gain*/
0x00, 0x00,/*line3_right_mic2_gain_boost*/
0x00, 0x00,/*mic_line_sel*/
0x01, 0x00,/*line3_left_mic1_pin*/
0x01, 0x00,/*line3_right_mic2_pin*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x07,/*ADC1*/
0x15,/*length*/
0xFF,/*all parameter*/
0x03, 0x00,/*enable*/
0x00, 0x00,/*mute*/
0xFF, 0x0F,/*left_volume*/
0xFF, 0x0F,/*right_volume*/
0x07, 0x00,/*sample_rate*/
0x00, 0x00,/*LR_swap*/
0x00, 0x00,/*hpc*/
0x00, 0x00,/*fade_time*/
0x00, 0x00,/*mclk_source*/
0x01, 0x00,/*dc_blocker*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x08,/*AGC1*/
0x1D,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*mode*/
0x00, 0x00,/*max_level*/
0x00, 0x00,/*target_level*/
0x00, 0x00,/*max_gain*/
0x00, 0x00,/*min_gain*/
0x00, 0x00,/*gain_offset*/
0x0A, 0x00,/*frame_time*/
0x0A, 0x00,/*hold_time*/
0x0A, 0x00,/*attack_time*/
0x0A, 0x00,/*decay_time*/
0x00, 0x00,/*noise_gate_enable*/
0x05, 0x00,/*noise_gate_threshold*/
0x00, 0x00,/*noise_gate_mode*/
0x00, 0x00,/*noise_gate_hold_time*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x09,/*DAC0*/
0x1D,/*length*/
0xFF,/*all parameter*/
0x03, 0x00,/*enable*/
0x07, 0x00,/*sample_rate*/
0x00, 0x00,/*mute*/
0x00, 0x10,/*left_volume*/
0x00, 0x10,/*right_volume*/
0x00, 0x00,/*dither*/
0x00, 0x00,/*scramble*/
0x00, 0x00,/*mode*/
0x00, 0x00,/*pause*/
0x00, 0x00,/*sample_edge_mode*/
0x00, 0x00,/*SCF_mute*/
0x00, 0x00,/*fade_time*/
0x00, 0x00,/*zero_num*/
0x00, 0x00,/*mclk_source*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x0A,/*DAC1*/
0x1D,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*enable*/
0x07, 0x00,/*sample_rate*/
0x00, 0x00,/*mute*/
0x5F, 0x06,/*left_volume*/
0x05, 0x08,/*right_volume*/
0x00, 0x00,/*dither*/
0x00, 0x00,/*scramble*/
0x00, 0x00,/*mode*/
0x00, 0x00,/*pause*/
0x00, 0x00,/*sample_edge_mode*/
0x00, 0x00,/*SCF_mute*/
0x00, 0x00,/*fade_time*/
0x00, 0x00,/*zero_num*/
0x00, 0x00,/*mclk_source*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x0B,/*I2S0*/
0x17,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*tx_enable*/
0x01, 0x00,/*rx_enable*/
0x07, 0x00,/*sample_rate*/
0x00, 0x00,/*mclk_source*/
0x00, 0x00,/*master_slave*/
0x00, 0x00,/*word_length*/
0x00, 0x00,/*stereo_mono*/
0x00, 0x00,/*fade_time*/
0x02, 0x00,/*data_format*/
0x00, 0x00,/*bclk_invert*/
0x00, 0x00,/*lrclk_invert*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x0C,/*I2S1*/
0x17,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*tx_enable*/
0x01, 0x00,/*rx_enable*/
0x07, 0x00,/*sample_rate*/
0x00, 0x00,/*mclk_source*/
0x00, 0x00,/*master_slave*/
0x00, 0x00,/*word_length*/
0x00, 0x00,/*stereo_mono*/
0x00, 0x00,/*fade_time*/
0x02, 0x00,/*data_format*/
0x00, 0x00,/*bclk_invert*/
0x00, 0x00,/*lrclk_invert*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x0D,/*SPDIF*/
0x0B,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x07, 0x00,/*sample_rate*/
0x00, 0x00,/*channel_mode*/
0x00, 0x00,/*io_mode*/
0x00, 0x00,/*lock_status*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xFC,/*USER_TAG*/
0x05,/*length*/
0xFF,
0x01,
0x02,
0x03,
0x04,
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x81,/*2:Music Noise Suppressor */
0x0B,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*enable*/
0x9C, 0xE6,/*threshold*/
0x02, 0x00,/*ratio*/
0x01, 0x00,/*attack*/
0x64, 0x00,/*release*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x82,/*1:Mic Noise Suppressor   */
0x0B,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*enable*/
0x6C, 0xEE,/*threshold*/
0x03, 0x00,/*ratio*/
0x02, 0x00,/*attack*/
0x64, 0x00,/*release*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x83,/*1:Mic Freq Shifter       */
0x05,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x04, 0x00,/*deltaf*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x84,/*1:Mic Howling Dector     */
0x05,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x01, 0x00,/*suppression mode*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x85,/*1:Mic Pitch Shifter      */
0x05,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x46, 0x00,/*key*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x86,/*1:Mic Auto Tune          */
0x09,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*enable*/
0x43, 0x00,/*key*/
0x75, 0x00,/*snap*/
0x00, 0x00,/*pitch_accuracy*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x87,/*1:Mic Voice Changer      */
0x07,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0xC8, 0x00,/*pitch*/
0x96, 0x00,/*formant*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x88,/*1:Mic Voice Changer Pro  */
0x07,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0xC8, 0x00,/*pitch*/
0x96, 0x00,/*formant*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x89,/*1:Mic Echo               */
0x0D,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x40, 0x1F,/*cutoff frequency*/
0x2C, 0x39,/*attenuation*/
0xF4, 0x01,/*delay*/
0x01, 0x00,/*direct*/
0xE8, 0x03,/*max delay*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x8A,/*1:Mic Reverb             */
0x0F,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x64, 0x00,/*dry*/
0x64, 0x00,/*wet*/
0x64, 0x00,/*width*/
0x41, 0x00,/*room*/
0x23, 0x00,/*damping*/
0x00, 0x00,/*mono*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x8B,/*1:Mic Plate Reverb       */
0x11,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*enable*/
0x40, 0x1F,/*high cutoff frequency*/
0x01, 0x00,/*modulation*/
0xC4, 0x09,/*predelay*/
0x3C, 0x00,/*diffusion*/
0x41, 0x00,/*decay*/
0x88, 0x13,/*damping*/
0x37, 0x00,/*wetdrymix*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x8C,/*1:Mic Pro Reverb         */
0x23,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0xF6, 0xFF,/*dry*/
0x00, 0x00,/*wet*/
0xF7, 0xFF,/*erwet*/
0xA0, 0x00,/*erfactor*/
0x46, 0x00,/*erwidth*/
0x28, 0x00,/*ertolate*/
0x80, 0x0C,/*rt60*/
0x14, 0x00,/*delay*/
0x64, 0x00,/*width*/
0x23, 0x00,/*wander*/
0x46, 0x00,/*spin*/
0x68, 0x42,/*inputlpf*/
0x58, 0x1B,/*damlpf*/
0xF4, 0x01,/*basslpf*/
0x0F, 0x00,/*bassb*/
0x10, 0x27,/*outputlpf*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x8D,/*3:Guitar PingPong        */
0x0D,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x9D, 0x5A,/*attenuation*/
0xE8, 0x03,/*delay*/
0x00, 0x00,/*high_quality_enable*/
0x64, 0x00,/*wetdrymix*/
0xE8, 0x03,/*max_delay*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x8E,/*3:Guitar Chorus          */
0x0F,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x0D, 0x00,/*delay_length*/
0x03, 0x00,/*modulation_depth*/
0x0A, 0x00,/*modulation_rate*/
0x1E, 0x00,/*feedback*/
0x5A, 0x00,/*dry*/
0x00, 0x00,/*wet*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x8F,/*3:Guitar Auto Wah        */
0x0F,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x01, 0x00,/*modulation_rate*/
0x64, 0x00,/*min_frequency*/
0xE8, 0x03,/*max_frequency*/
0x32, 0x00,/*depth*/
0x32, 0x00,/*dry*/
0x32, 0x00,/*wet*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x90,/*1:Mic Silence Dector     */
0x05,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*enable*/
0x00, 0x00,/*amplitude*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x91,/*2:Music Pitch Shifter Pro*/
0x05,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x46, 0x00,/*key*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x92,/*2:Music Voice Cut        */
0x05,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x64, 0x00,/*value*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x93,/*2:Music Voice Remove     */
0x07,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0xC8, 0x00,/*low_frequency*/
0x98, 0x3A,/*high_frequency*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x94,/*2:Music 3D               */
0x05,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x32, 0x00,/*intensity*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x95,/*2:Music 3D Plus          */
0x05,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x32, 0x00,/*intensity*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x96,/*2:Music Virtual Bass     */
0x09,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x4B, 0x00,/*cutoff_frequency*/
0x03, 0x00,/*intensity*/
0x01, 0x00,/*enhanced*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x97,/*2:Music Virtual Bass Clas*/
0x07,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x2D, 0x00,/*cutoff_frequency*/
0x0C, 0x00,/*intensity*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x98,/*2:Music Stereo Windener  */
0x05,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x01, 0x00,/*shaping*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x99,/*2:Music Delay            */
0x09,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x32, 0x00,/*delay*/
0x32, 0x00,/*max_delay*/
0x00, 0x00,/*high_quality_enable*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x9A,/*2:Music Exciter          */
0x09,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0xE8, 0x03,/*cutoff_frequency*/
0x64, 0x00,/*dry*/
0x64, 0x00,/*wet*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x9B,/*2:Music Phase            */
0x05,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x00, 0x00,/*phase_difference*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x9C,/*2:Music Drc              */
0x27,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*enable*/
0x2C, 0x01,/*crossover frequency*/
0x00, 0x00,/*mode*/
0xD4, 0x02,/*q1*/
0xD4, 0x02,/*q2*/
0x00, 0x00,/*threshold1*/
0x00, 0x00,/*threshold2*/
0x00, 0x00,/*threshold3*/
0x64, 0x00,/*ratio1*/
0x64, 0x00,/*ratio2*/
0x64, 0x00,/*ratio3*/
0x01, 0x00,/*attack1*/
0x01, 0x00,/*attack2*/
0x01, 0x00,/*attack3*/
0xE8, 0x03,/*release1*/
0xE8, 0x03,/*release2*/
0xE8, 0x03,/*release3*/
0x00, 0x10,/*pregain1*/
0x00, 0x10,/*pregain2*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x9D,/*1:Mic Drc                */
0x27,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*enable*/
0x2C, 0x01,/*crossover frequency*/
0x00, 0x00,/*mode*/
0xD4, 0x02,/*q1*/
0xD4, 0x02,/*q2*/
0x00, 0x00,/*threshold1*/
0x00, 0x00,/*threshold2*/
0x00, 0x00,/*threshold3*/
0x64, 0x00,/*ratio1*/
0x64, 0x00,/*ratio2*/
0x64, 0x00,/*ratio3*/
0x01, 0x00,/*attack1*/
0x01, 0x00,/*attack2*/
0x01, 0x00,/*attack3*/
0xE8, 0x03,/*release1*/
0xE8, 0x03,/*release2*/
0xE8, 0x03,/*release3*/
0x00, 0x10,/*pregain1*/
0x00, 0x10,/*pregain2*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x9E,/*4:Rec Drc                */
0x27,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x2C, 0x01,/*crossover frequency*/
0x00, 0x00,/*mode*/
0xD4, 0x02,/*q1*/
0xD4, 0x02,/*q2*/
0x00, 0x00,/*threshold1*/
0x00, 0x00,/*threshold2*/
0x00, 0x00,/*threshold3*/
0x64, 0x00,/*ratio1*/
0x64, 0x00,/*ratio2*/
0x64, 0x00,/*ratio3*/
0x01, 0x00,/*attack1*/
0x01, 0x00,/*attack2*/
0x01, 0x00,/*attack3*/
0xE8, 0x03,/*release1*/
0xE8, 0x03,/*release2*/
0xE8, 0x03,/*release3*/
0x00, 0x10,/*pregain1*/
0x00, 0x10,/*pregain2*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0x9F,/*2:Music Pre Eq           */
0x6B,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*enable*/
0x00, 0x00,/*pregain*/
0x02, 0x00,/*reserved*/
0x01, 0x00,/*filter1_enable*/
0x00, 0x00,/*filter1_type*/
0x64, 0x00,/*filter1_f0*/
0xD4, 0x02,/*filter1_Q*/
0x00, 0x00,/*filter1_gain*/
0x01, 0x00,/*filter2_enable*/
0x00, 0x00,/*filter2_type*/
0xD0, 0x07,/*filter2_f0*/
0xD4, 0x02,/*filter2_Q*/
0x00, 0x00,/*fi lter2_gain*/
0x00, 0x00,/*filter3_enable*/
0x05, 0x00,/*filter3_type*/
0x88, 0x13,/*filter3_f0*/
0xD4, 0x02,/*filter3_Q*/
0x00, 0x00,/*filter3_gain*/
0x00, 0x00,/*filter4_enable*/
0x05, 0x00,/*filter4_type*/
0x10, 0x27,/*filter4_f0*/
0xD4, 0x02,/*filter4_Q*/
0x00, 0x00,/*filter4_gain*/
0x00, 0x00,/*filter5_enable*/
0x00, 0x00,/*filter5_type*/
0x00, 0x00,/*filter5_f0*/
0x00, 0x00,/*filter5_Q*/
0x00, 0x00,/*filter5_gain*/
0x00, 0x00,/*filter6_enable*/
0x00, 0x00,/*filter6_type*/
0x00, 0x00,/*filter6_f0*/
0x00, 0x00,/*filter6_Q*/
0x00, 0x00,/*filter6_gain*/
0x00, 0x00,/*filter7_enable*/
0x00, 0x00,/*filter7_type*/
0x00, 0x00,/*filter7_f0*/
0x00, 0x00,/*filter7_Q*/
0x00, 0x00,/*filter7_gain*/
0x00, 0x00,/*filter8_enable*/
0x00, 0x00,/*filter8_type*/
0x00, 0x00,/*filter8_f0*/
0x00, 0x00,/*filter8_Q*/
0x00, 0x00,/*filter8_gain*/
0x00, 0x00,/*filter9_enable*/
0x00, 0x00,/*filter9_type*/
0x00, 0x00,/*filter9_f0*/
0x00, 0x00,/*filter9_Q*/
0x00, 0x00,/*filter9_gain*/
0x00, 0x00,/*filter10_enable*/
0x00, 0x00,/*filter10_type*/
0x00, 0x00,/*filter10_f0*/
0x00, 0x00,/*filter10_Q*/
0x00, 0x00,/*filter10_gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xA0,/*2:Music Out Eq           */
0x6B,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*enable*/
0x00, 0x00,/*pregain*/
0x02, 0x00,/*reserved*/
0x01, 0x00,/*filter1_enable*/
0x00, 0x00,/*filter1_type*/
0x64, 0x00,/*filter1_f0*/
0xD4, 0x02,/*filter1_Q*/
0x00, 0x00,/*filter1_gain*/
0x01, 0x00,/*filter2_enable*/
0x00, 0x00,/*filter2_type*/
0xD0, 0x07,/*filter2_f0*/
0xD4, 0x02,/*filter2_Q*/
0x00, 0x00,/*fi lter2_gain*/
0x00, 0x00,/*filter3_enable*/
0x05, 0x00,/*filter3_type*/
0x88, 0x13,/*filter3_f0*/
0xD4, 0x02,/*filter3_Q*/
0x00, 0x00,/*filter3_gain*/
0x00, 0x00,/*filter4_enable*/
0x05, 0x00,/*filter4_type*/
0x10, 0x27,/*filter4_f0*/
0xD4, 0x02,/*filter4_Q*/
0x00, 0x00,/*filter4_gain*/
0x00, 0x00,/*filter5_enable*/
0x00, 0x00,/*filter5_type*/
0x00, 0x00,/*filter5_f0*/
0x00, 0x00,/*filter5_Q*/
0x00, 0x00,/*filter5_gain*/
0x00, 0x00,/*filter6_enable*/
0x00, 0x00,/*filter6_type*/
0x00, 0x00,/*filter6_f0*/
0x00, 0x00,/*filter6_Q*/
0x00, 0x00,/*filter6_gain*/
0x00, 0x00,/*filter7_enable*/
0x00, 0x00,/*filter7_type*/
0x00, 0x00,/*filter7_f0*/
0x00, 0x00,/*filter7_Q*/
0x00, 0x00,/*filter7_gain*/
0x00, 0x00,/*filter8_enable*/
0x00, 0x00,/*filter8_type*/
0x00, 0x00,/*filter8_f0*/
0x00, 0x00,/*filter8_Q*/
0x00, 0x00,/*filter8_gain*/
0x00, 0x00,/*filter9_enable*/
0x00, 0x00,/*filter9_type*/
0x00, 0x00,/*filter9_f0*/
0x00, 0x00,/*filter9_Q*/
0x00, 0x00,/*filter9_gain*/
0x00, 0x00,/*filter10_enable*/
0x00, 0x00,/*filter10_type*/
0x00, 0x00,/*filter10_f0*/
0x00, 0x00,/*filter10_Q*/
0x00, 0x00,/*filter10_gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xA1,/*1:Mic Pre Eq             */
0x6B,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*enable*/
0x00, 0x00,/*pregain*/
0x01, 0x00,/*reserved*/
0x01, 0x00,/*filter1_enable*/
0x04, 0x00,/*filter1_type*/
0x32, 0x00,/*filter1_f0*/
0xCD, 0x02,/*filter1_Q*/
0x00, 0x00,/*filter1_gain*/
0x00, 0x00,/*filter2_enable*/
0x00, 0x00,/*filter2_type*/
0x40, 0x1F,/*filter2_f0*/
0x00, 0x08,/*filter2_Q*/
0x3D, 0x04,/*fi lter2_gain*/
0x00, 0x00,/*filter3_enable*/
0x00, 0x00,/*filter3_type*/
0x00, 0x00,/*filter3_f0*/
0x00, 0x00,/*filter3_Q*/
0x00, 0x00,/*filter3_gain*/
0x00, 0x00,/*filter4_enable*/
0x00, 0x00,/*filter4_type*/
0x00, 0x00,/*filter4_f0*/
0x00, 0x00,/*filter4_Q*/
0x00, 0x00,/*filter4_gain*/
0x00, 0x00,/*filter5_enable*/
0x00, 0x00,/*filter5_type*/
0x00, 0x00,/*filter5_f0*/
0x00, 0x00,/*filter5_Q*/
0x00, 0x00,/*filter5_gain*/
0x00, 0x00,/*filter6_enable*/
0x00, 0x00,/*filter6_type*/
0x00, 0x00,/*filter6_f0*/
0x00, 0x00,/*filter6_Q*/
0x00, 0x00,/*filter6_gain*/
0x00, 0x00,/*filter7_enable*/
0x00, 0x00,/*filter7_type*/
0x00, 0x00,/*filter7_f0*/
0x00, 0x00,/*filter7_Q*/
0x00, 0x00,/*filter7_gain*/
0x00, 0x00,/*filter8_enable*/
0x00, 0x00,/*filter8_type*/
0x00, 0x00,/*filter8_f0*/
0x00, 0x00,/*filter8_Q*/
0x00, 0x00,/*filter8_gain*/
0x00, 0x00,/*filter9_enable*/
0x00, 0x00,/*filter9_type*/
0x00, 0x00,/*filter9_f0*/
0x00, 0x00,/*filter9_Q*/
0x00, 0x00,/*filter9_gain*/
0x00, 0x00,/*filter10_enable*/
0x00, 0x00,/*filter10_type*/
0x00, 0x00,/*filter10_f0*/
0x00, 0x00,/*filter10_Q*/
0x00, 0x00,/*filter10_gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xA2,/*1:Mic Bypass Eq          */
0x6B,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*enable*/
0x00, 0x00,/*pregain*/
0x02, 0x00,/*reserved*/
0x01, 0x00,/*filter1_enable*/
0x04, 0x00,/*filter1_type*/
0x32, 0x00,/*filter1_f0*/
0xCD, 0x02,/*filter1_Q*/
0x00, 0x00,/*filter1_gain*/
0x01, 0x00,/*filter2_enable*/
0x03, 0x00,/*filter2_type*/
0x80, 0x3E,/*filter2_f0*/
0xCD, 0x02,/*filter2_Q*/
0x00, 0x00,/*fi lter2_gain*/
0x00, 0x00,/*filter3_enable*/
0x00, 0x00,/*filter3_type*/
0x00, 0x00,/*filter3_f0*/
0x00, 0x00,/*filter3_Q*/
0x00, 0x00,/*filter3_gain*/
0x00, 0x00,/*filter4_enable*/
0x00, 0x00,/*filter4_type*/
0x00, 0x00,/*filter4_f0*/
0x00, 0x00,/*filter4_Q*/
0x00, 0x00,/*filter4_gain*/
0x00, 0x00,/*filter5_enable*/
0x00, 0x00,/*filter5_type*/
0x00, 0x00,/*filter5_f0*/
0x00, 0x00,/*filter5_Q*/
0x00, 0x00,/*filter5_gain*/
0x00, 0x00,/*filter6_enable*/
0x00, 0x00,/*filter6_type*/
0x00, 0x00,/*filter6_f0*/
0x00, 0x00,/*filter6_Q*/
0x00, 0x00,/*filter6_gain*/
0x00, 0x00,/*filter7_enable*/
0x00, 0x00,/*filter7_type*/
0x00, 0x00,/*filter7_f0*/
0x00, 0x00,/*filter7_Q*/
0x00, 0x00,/*filter7_gain*/
0x00, 0x00,/*filter8_enable*/
0x00, 0x00,/*filter8_type*/
0x00, 0x00,/*filter8_f0*/
0x00, 0x00,/*filter8_Q*/
0x00, 0x00,/*filter8_gain*/
0x00, 0x00,/*filter9_enable*/
0x00, 0x00,/*filter9_type*/
0x00, 0x00,/*filter9_f0*/
0x00, 0x00,/*filter9_Q*/
0x00, 0x00,/*filter9_gain*/
0x00, 0x00,/*filter10_enable*/
0x00, 0x00,/*filter10_type*/
0x00, 0x00,/*filter10_f0*/
0x00, 0x00,/*filter10_Q*/
0x00, 0x00,/*filter10_gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xA3,/*1:Mic Echo Eq            */
0x6B,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x00, 0x00,/*pregain*/
0x02, 0x00,/*reserved*/
0x01, 0x00,/*filter1_enable*/
0x04, 0x00,/*filter1_type*/
0x32, 0x00,/*filter1_f0*/
0xD4, 0x02,/*filter1_Q*/
0x00, 0x00,/*filter1_gain*/
0x01, 0x00,/*filter2_enable*/
0x03, 0x00,/*filter2_type*/
0x80, 0x3E,/*filter2_f0*/
0xD4, 0x02,/*filter2_Q*/
0x00, 0x00,/*fi lter2_gain*/
0x00, 0x00,/*filter3_enable*/
0x00, 0x00,/*filter3_type*/
0x00, 0x00,/*filter3_f0*/
0x00, 0x00,/*filter3_Q*/
0x00, 0x00,/*filter3_gain*/
0x00, 0x00,/*filter4_enable*/
0x00, 0x00,/*filter4_type*/
0x00, 0x00,/*filter4_f0*/
0x00, 0x00,/*filter4_Q*/
0x00, 0x00,/*filter4_gain*/
0x00, 0x00,/*filter5_enable*/
0x00, 0x00,/*filter5_type*/
0x00, 0x00,/*filter5_f0*/
0x00, 0x00,/*filter5_Q*/
0x00, 0x00,/*filter5_gain*/
0x00, 0x00,/*filter6_enable*/
0x00, 0x00,/*filter6_type*/
0x00, 0x00,/*filter6_f0*/
0x00, 0x00,/*filter6_Q*/
0x00, 0x00,/*filter6_gain*/
0x00, 0x00,/*filter7_enable*/
0x00, 0x00,/*filter7_type*/
0x00, 0x00,/*filter7_f0*/
0x00, 0x00,/*filter7_Q*/
0x00, 0x00,/*filter7_gain*/
0x00, 0x00,/*filter8_enable*/
0x00, 0x00,/*filter8_type*/
0x00, 0x00,/*filter8_f0*/
0x00, 0x00,/*filter8_Q*/
0x00, 0x00,/*filter8_gain*/
0x00, 0x00,/*filter9_enable*/
0x00, 0x00,/*filter9_type*/
0x00, 0x00,/*filter9_f0*/
0x00, 0x00,/*filter9_Q*/
0x00, 0x00,/*filter9_gain*/
0x00, 0x00,/*filter10_enable*/
0x00, 0x00,/*filter10_type*/
0x00, 0x00,/*filter10_f0*/
0x00, 0x00,/*filter10_Q*/
0x00, 0x00,/*filter10_gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xA4,/*1:Mic Reverb Eq          */
0x6B,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*enable*/
0x00, 0x00,/*pregain*/
0x02, 0x00,/*reserved*/
0x01, 0x00,/*filter1_enable*/
0x04, 0x00,/*filter1_type*/
0x32, 0x00,/*filter1_f0*/
0xCD, 0x02,/*filter1_Q*/
0x00, 0x00,/*filter1_gain*/
0x01, 0x00,/*filter2_enable*/
0x03, 0x00,/*filter2_type*/
0x80, 0x3E,/*filter2_f0*/
0xCD, 0x02,/*filter2_Q*/
0x00, 0x00,/*fi lter2_gain*/
0x00, 0x00,/*filter3_enable*/
0x00, 0x00,/*filter3_type*/
0x00, 0x00,/*filter3_f0*/
0x00, 0x00,/*filter3_Q*/
0x00, 0x00,/*filter3_gain*/
0x00, 0x00,/*filter4_enable*/
0x00, 0x00,/*filter4_type*/
0x00, 0x00,/*filter4_f0*/
0x00, 0x00,/*filter4_Q*/
0x00, 0x00,/*filter4_gain*/
0x00, 0x00,/*filter5_enable*/
0x00, 0x00,/*filter5_type*/
0x00, 0x00,/*filter5_f0*/
0x00, 0x00,/*filter5_Q*/
0x00, 0x00,/*filter5_gain*/
0x00, 0x00,/*filter6_enable*/
0x00, 0x00,/*filter6_type*/
0x00, 0x00,/*filter6_f0*/
0x00, 0x00,/*filter6_Q*/
0x00, 0x00,/*filter6_gain*/
0x00, 0x00,/*filter7_enable*/
0x00, 0x00,/*filter7_type*/
0x00, 0x00,/*filter7_f0*/
0x00, 0x00,/*filter7_Q*/
0x00, 0x00,/*filter7_gain*/
0x00, 0x00,/*filter8_enable*/
0x00, 0x00,/*filter8_type*/
0x00, 0x00,/*filter8_f0*/
0x00, 0x00,/*filter8_Q*/
0x00, 0x00,/*filter8_gain*/
0x00, 0x00,/*filter9_enable*/
0x00, 0x00,/*filter9_type*/
0x00, 0x00,/*filter9_f0*/
0x00, 0x00,/*filter9_Q*/
0x00, 0x00,/*filter9_gain*/
0x00, 0x00,/*filter10_enable*/
0x00, 0x00,/*filter10_type*/
0x00, 0x00,/*filter10_f0*/
0x00, 0x00,/*filter10_Q*/
0x00, 0x00,/*filter10_gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xA5,/*1:Mic Out Eq             */
0x6B,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*enable*/
0x00, 0x00,/*pregain*/
0x02, 0x00,/*reserved*/
0x01, 0x00,/*filter1_enable*/
0x02, 0x00,/*filter1_type*/
0xD0, 0x07,/*filter1_f0*/
0xCD, 0x02,/*filter1_Q*/
0x00, 0x00,/*filter1_gain*/
0x01, 0x00,/*filter2_enable*/
0x01, 0x00,/*filter2_type*/
0xC8, 0x00,/*filter2_f0*/
0xCD, 0x02,/*filter2_Q*/
0x00, 0x00,/*fi lter2_gain*/
0x00, 0x00,/*filter3_enable*/
0x00, 0x00,/*filter3_type*/
0x00, 0x00,/*filter3_f0*/
0x00, 0x00,/*filter3_Q*/
0x00, 0x00,/*filter3_gain*/
0x00, 0x00,/*filter4_enable*/
0x00, 0x00,/*filter4_type*/
0x00, 0x00,/*filter4_f0*/
0x00, 0x00,/*filter4_Q*/
0x00, 0x00,/*filter4_gain*/
0x00, 0x00,/*filter5_enable*/
0x00, 0x00,/*filter5_type*/
0x00, 0x00,/*filter5_f0*/
0x00, 0x00,/*filter5_Q*/
0x00, 0x00,/*filter5_gain*/
0x00, 0x00,/*filter6_enable*/
0x00, 0x00,/*filter6_type*/
0x00, 0x00,/*filter6_f0*/
0x00, 0x00,/*filter6_Q*/
0x00, 0x00,/*filter6_gain*/
0x00, 0x00,/*filter7_enable*/
0x00, 0x00,/*filter7_type*/
0x00, 0x00,/*filter7_f0*/
0x00, 0x00,/*filter7_Q*/
0x00, 0x00,/*filter7_gain*/
0x00, 0x00,/*filter8_enable*/
0x00, 0x00,/*filter8_type*/
0x00, 0x00,/*filter8_f0*/
0x00, 0x00,/*filter8_Q*/
0x00, 0x00,/*filter8_gain*/
0x00, 0x00,/*filter9_enable*/
0x00, 0x00,/*filter9_type*/
0x00, 0x00,/*filter9_f0*/
0x00, 0x00,/*filter9_Q*/
0x00, 0x00,/*filter9_gain*/
0x00, 0x00,/*filter10_enable*/
0x00, 0x00,/*filter10_type*/
0x00, 0x00,/*filter10_f0*/
0x00, 0x00,/*filter10_Q*/
0x00, 0x00,/*filter10_gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xA6,/*4:Rec Out EQ             */
0x6B,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x00, 0x00,/*pregain*/
0x02, 0x00,/*reserved*/
0x01, 0x00,/*filter1_enable*/
0x00, 0x00,/*filter1_type*/
0xC8, 0x00,/*filter1_f0*/
0xD4, 0x02,/*filter1_Q*/
0x00, 0x00,/*filter1_gain*/
0x01, 0x00,/*filter2_enable*/
0x00, 0x00,/*filter2_type*/
0xD0, 0x07,/*filter2_f0*/
0xD4, 0x02,/*filter2_Q*/
0x00, 0x00,/*fi lter2_gain*/
0x00, 0x00,/*filter3_enable*/
0x00, 0x00,/*filter3_type*/
0x00, 0x00,/*filter3_f0*/
0x00, 0x00,/*filter3_Q*/
0x00, 0x00,/*filter3_gain*/
0x00, 0x00,/*filter4_enable*/
0x00, 0x00,/*filter4_type*/
0x00, 0x00,/*filter4_f0*/
0x00, 0x00,/*filter4_Q*/
0x00, 0x00,/*filter4_gain*/
0x00, 0x00,/*filter5_enable*/
0x00, 0x00,/*filter5_type*/
0x00, 0x00,/*filter5_f0*/
0x00, 0x00,/*filter5_Q*/
0x00, 0x00,/*filter5_gain*/
0x00, 0x00,/*filter6_enable*/
0x00, 0x00,/*filter6_type*/
0x00, 0x00,/*filter6_f0*/
0x00, 0x00,/*filter6_Q*/
0x00, 0x00,/*filter6_gain*/
0x00, 0x00,/*filter7_enable*/
0x00, 0x00,/*filter7_type*/
0x00, 0x00,/*filter7_f0*/
0x00, 0x00,/*filter7_Q*/
0x00, 0x00,/*filter7_gain*/
0x00, 0x00,/*filter8_enable*/
0x00, 0x00,/*filter8_type*/
0x00, 0x00,/*filter8_f0*/
0x00, 0x00,/*filter8_Q*/
0x00, 0x00,/*filter8_gain*/
0x00, 0x00,/*filter9_enable*/
0x00, 0x00,/*filter9_type*/
0x00, 0x00,/*filter9_f0*/
0x00, 0x00,/*filter9_Q*/
0x00, 0x00,/*filter9_gain*/
0x00, 0x00,/*filter10_enable*/
0x00, 0x00,/*filter10_type*/
0x00, 0x00,/*filter10_f0*/
0x00, 0x00,/*filter10_Q*/
0x00, 0x00,/*filter10_gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xA7,/*2:Music Out Gain         */
0x07,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*enable*/
0x00, 0x00,/*mute*/
0x00, 0x10,/*gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xA8,/*1:Mic Bypass Gain        */
0x07,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*enable*/
0x00, 0x00,/*mute*/
0x00, 0x10,/*gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xA9,/*1:Mic Echo Gain          */
0x07,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x00, 0x00,/*mute*/
0x00, 0x10,/*gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xAA,/*1:Mic Reverb Gain        */
0x07,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*enable*/
0x00, 0x00,/*mute*/
0x00, 0x10,/*gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xAB,/*1:Mic Out Gain           */
0x07,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*enable*/
0x00, 0x00,/*mute*/
0x00, 0x10,/*gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xAC,/*4:Rec Bypass Gain        */
0x07,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x00, 0x00,/*mute*/
0x00, 0x10,/*gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xAD,/*4:Rec Effect Gain        */
0x07,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x00, 0x00,/*mute*/
0x00, 0x10,/*gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xAE,/*4:Rec Music Gain         */
0x07,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x00, 0x00,/*mute*/
0x00, 0x10,/*gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xAF,/*4:Rec Effect Remind Gain */
0x07,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x00, 0x00,/*mute*/
0x00, 0x10,/*gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xB0,/*4:Usb Out Gain           */
0x07,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x00, 0x00,/*mute*/
0x00, 0x10,/*gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xB1,/*4:Key Remind Gain        */
0x07,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x00, 0x00,/*mute*/
0x00, 0x10,/*gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xB2,/*4:Effect Remind Gain     */
0x07,/*length*/
0xFF,/*all parameter*/
0x00, 0x00,/*enable*/
0x00, 0x00,/*mute*/
0x00, 0x10,/*gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xB3,/*2:I2s In Gain            */
0x07,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*enable*/
0x00, 0x00,/*mute*/
0xB6, 0x0C,/*gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xB4,/*2:Bt In Gain             */
0x07,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*enable*/
0x00, 0x00,/*mute*/
0xB6, 0x0C,/*gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xB5,/*2:Usb&Card In Gain       */
0x07,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*enable*/
0x00, 0x00,/*mute*/
0xB6, 0x0C,/*gain*/
0x16,/*sync tail*/

0xA5, 0x5A,/*sync head*/
0xB6,/*2:Spdif In Gain          */
0x07,/*length*/
0xFF,/*all parameter*/
0x01, 0x00,/*enable*/
0x00, 0x00,/*mute*/
0xB6, 0x0C,/*gain*/
0x16,/*sync tail*/

};
