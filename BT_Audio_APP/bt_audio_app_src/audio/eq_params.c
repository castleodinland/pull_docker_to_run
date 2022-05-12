//EQ style: Classical
const unsigned char Classical[112] = {
    0xA5, 0x5A,/*sync head*/
    0xA0,/*control*/
    0x6B,/*Length*/
    0xFF,/*all parameter*/
    0x01, 0x00,/*enable*/
    0x00, 0x00,/*pregain*/
    0x00, 0x00,/*reserved*/
    0x01, 0x00,/*filter1 enable*/
    0x01, 0x00,/*filter1 type*/
    0x0A, 0x01,/*filter1 f0*/
    0xB7, 0x00,/*filter1 Q*/
    0x28, 0x05,/*filter1 Gain*/
    0x01, 0x00,/*filter2 enable*/
    0x00, 0x00,/*filter2 type*/
    0x7F, 0x02,/*filter2 f0*/
    0x42, 0x03,/*filter2 Q*/
    0x88, 0xFB,/*filter2 Gain*/
    0x01, 0x00,/*filter3 enable*/
    0x00, 0x00,/*filter3 type*/
    0xEE, 0x06,/*filter3 f0*/
    0xD5, 0x02,/*filter3 Q*/
    0x2D, 0xFE,/*filter3 Gain*/
    0x00, 0x00,/*filter4 enable*/
    0x00, 0x00,/*filter4 type*/
    0xE8, 0x03,/*filter4 f0*/
    0xD4, 0x02,/*filter4 Q*/
    0x00, 0x00,/*filter4 Gain*/
    0x01, 0x00,/*filter5 enable*/
    0x02, 0x00,/*filter5 type*/
    0xB2, 0x0E,/*filter5 f0*/
    0x25, 0x01,/*filter5 Q*/
    0x91, 0x04,/*filter5 Gain*/
    0x00, 0x00,/*filter6 enable*/
    0x00, 0x00,/*filter6 type*/
    0xE8, 0x03,/*filter6 f0*/
    0xD4, 0x02,/*filter6 Q*/
    0x00, 0x00,/*filter6 Gain*/
    0x00, 0x00,/*filter7 enable*/
    0x00, 0x00,/*filter7 type*/
    0xE8, 0x03,/*filter7 f0*/
    0xD4, 0x02,/*filter7 Q*/
    0x00, 0x00,/*filter7 Gain*/
    0x00, 0x00,/*filter8 enable*/
    0x00, 0x00,/*filter8 type*/
    0xE8, 0x03,/*filter8 f0*/
    0xD4, 0x02,/*filter8 Q*/
    0x00, 0x00,/*filter8 Gain*/
    0x00, 0x00,/*filter9 enable*/
    0x00, 0x00,/*filter9 type*/
    0xE8, 0x03,/*filter9 f0*/
    0xD4, 0x02,/*filter9 Q*/
    0x00, 0x00,/*filter9 Gain*/
    0x00, 0x00,/*filter10 enable*/
    0x00, 0x00,/*filter10 type*/
    0xE8, 0x03,/*filter10 f0*/
    0xD4, 0x02,/*filter10 Q*/
    0x00, 0x00,/*filter10 Gain*/
    0x16,/*sync tail*/
};
//EQ style: Vocal Booster
const unsigned char Vocal_Booster[112] = {
    0xA5, 0x5A,/*sync head*/
    0xA0,/*control*/
    0x6B,/*Length*/
    0xFF,/*all parameter*/
    0x01, 0x00,/*enable*/
    0x00, 0x00,/*pregain*/
    0x00, 0x00,/*reserved*/
    0x00, 0x00,/*filter1 enable*/
    0x01, 0x00,/*filter1 type*/
    0x0A, 0x01,/*filter1 f0*/
    0xB7, 0x00,/*filter1 Q*/
    0x28, 0x05,/*filter1 Gain*/
    0x01, 0x00,/*filter2 enable*/
    0x00, 0x00,/*filter2 type*/
    0x60, 0x00,/*filter2 f0*/
    0xFA, 0x01,/*filter2 Q*/
    0x0C, 0xFB,/*filter2 Gain*/
    0x01, 0x00,/*filter3 enable*/
    0x00, 0x00,/*filter3 type*/
    0x1F, 0x02,/*filter3 f0*/
    0x4D, 0x01,/*filter3 Q*/
    0x1A, 0x04,/*filter3 Gain*/
    0x01, 0x00,/*filter4 enable*/
    0x00, 0x00,/*filter4 type*/
    0xA3, 0x09,/*filter4 f0*/
    0x06, 0x03,/*filter4 Q*/
    0x17, 0x01,/*filter4 Gain*/
    0x01, 0x00,/*filter5 enable*/
    0x02, 0x00,/*filter5 type*/
    0xE3, 0x29,/*filter5 f0*/
    0xCD, 0x02,/*filter5 Q*/
    0x44, 0xFE,/*filter5 Gain*/
    0x00, 0x00,/*filter6 enable*/
    0x00, 0x00,/*filter6 type*/
    0xE8, 0x03,/*filter6 f0*/
    0xD4, 0x02,/*filter6 Q*/
    0x00, 0x00,/*filter6 Gain*/
    0x00, 0x00,/*filter7 enable*/
    0x00, 0x00,/*filter7 type*/
    0xE8, 0x03,/*filter7 f0*/
    0xD4, 0x02,/*filter7 Q*/
    0x00, 0x00,/*filter7 Gain*/
    0x00, 0x00,/*filter8 enable*/
    0x00, 0x00,/*filter8 type*/
    0xE8, 0x03,/*filter8 f0*/
    0xD4, 0x02,/*filter8 Q*/
    0x00, 0x00,/*filter8 Gain*/
    0x00, 0x00,/*filter9 enable*/
    0x00, 0x00,/*filter9 type*/
    0xE8, 0x03,/*filter9 f0*/
    0xD4, 0x02,/*filter9 Q*/
    0x00, 0x00,/*filter9 Gain*/
    0x00, 0x00,/*filter10 enable*/
    0x00, 0x00,/*filter10 type*/
    0xE8, 0x03,/*filter10 f0*/
    0xD4, 0x02,/*filter10 Q*/
    0x00, 0x00,/*filter10 Gain*/
    0x16,/*sync tail*/
};
//EQ style: Flat
const unsigned char Flat[112] = {
    0xA5, 0x5A,/*sync head*/
    0xA0,/*control*/
    0x6B,/*Length*/
    0xFF,/*all parameter*/
    0x01, 0x00,/*enable*/
    0x00, 0x00,/*pregain*/
    0x00, 0x00,/*reserved*/
    0x00, 0x00,/*filter1 enable*/
    0x01, 0x00,/*filter1 type*/
    0x0A, 0x01,/*filter1 f0*/
    0xB7, 0x00,/*filter1 Q*/
    0x28, 0x05,/*filter1 Gain*/
    0x00, 0x00,/*filter2 enable*/
    0x00, 0x00,/*filter2 type*/
    0x60, 0x00,/*filter2 f0*/
    0xFA, 0x01,/*filter2 Q*/
    0x0C, 0xFB,/*filter2 Gain*/
    0x00, 0x00,/*filter3 enable*/
    0x00, 0x00,/*filter3 type*/
    0x1F, 0x02,/*filter3 f0*/
    0x4D, 0x01,/*filter3 Q*/
    0x1A, 0x04,/*filter3 Gain*/
    0x00, 0x00,/*filter4 enable*/
    0x00, 0x00,/*filter4 type*/
    0xA3, 0x09,/*filter4 f0*/
    0x06, 0x03,/*filter4 Q*/
    0x17, 0x01,/*filter4 Gain*/
    0x00, 0x00,/*filter5 enable*/
    0x02, 0x00,/*filter5 type*/
    0xE3, 0x29,/*filter5 f0*/
    0xCD, 0x02,/*filter5 Q*/
    0x44, 0xFE,/*filter5 Gain*/
    0x00, 0x00,/*filter6 enable*/
    0x00, 0x00,/*filter6 type*/
    0xE8, 0x03,/*filter6 f0*/
    0xD4, 0x02,/*filter6 Q*/
    0x00, 0x00,/*filter6 Gain*/
    0x00, 0x00,/*filter7 enable*/
    0x00, 0x00,/*filter7 type*/
    0xE8, 0x03,/*filter7 f0*/
    0xD4, 0x02,/*filter7 Q*/
    0x00, 0x00,/*filter7 Gain*/
    0x00, 0x00,/*filter8 enable*/
    0x00, 0x00,/*filter8 type*/
    0xE8, 0x03,/*filter8 f0*/
    0xD4, 0x02,/*filter8 Q*/
    0x00, 0x00,/*filter8 Gain*/
    0x00, 0x00,/*filter9 enable*/
    0x00, 0x00,/*filter9 type*/
    0xE8, 0x03,/*filter9 f0*/
    0xD4, 0x02,/*filter9 Q*/
    0x00, 0x00,/*filter9 Gain*/
    0x00, 0x00,/*filter10 enable*/
    0x00, 0x00,/*filter10 type*/
    0xE8, 0x03,/*filter10 f0*/
    0xD4, 0x02,/*filter10 Q*/
    0x00, 0x00,/*filter10 Gain*/
    0x16,/*sync tail*/
};
//EQ style: Pop
const unsigned char Pop[112] = {
    0xA5, 0x5A,/*sync head*/
    0xA0,/*control*/
    0x6B,/*Length*/
    0xFF,/*all parameter*/
    0x01, 0x00,/*enable*/
    0x00, 0x00,/*pregain*/
    0x00, 0x00,/*reserved*/
    0x01, 0x00,/*filter1 enable*/
    0x01, 0x00,/*filter1 type*/
    0xCC, 0x00,/*filter1 f0*/
    0x26, 0x02,/*filter1 Q*/
    0xD7, 0xFD,/*filter1 Gain*/
    0x01, 0x00,/*filter2 enable*/
    0x00, 0x00,/*filter2 type*/
    0xCA, 0x02,/*filter2 f0*/
    0xE8, 0x01,/*filter2 Q*/
    0xF9, 0x03,/*filter2 Gain*/
    0x00, 0x00,/*filter3 enable*/
    0x00, 0x00,/*filter3 type*/
    0x1F, 0x02,/*filter3 f0*/
    0x4D, 0x01,/*filter3 Q*/
    0x1A, 0x04,/*filter3 Gain*/
    0x00, 0x00,/*filter4 enable*/
    0x00, 0x00,/*filter4 type*/
    0xA3, 0x09,/*filter4 f0*/
    0x06, 0x03,/*filter4 Q*/
    0x17, 0x01,/*filter4 Gain*/
    0x01, 0x00,/*filter5 enable*/
    0x02, 0x00,/*filter5 type*/
    0x33, 0x12,/*filter5 f0*/
    0x8C, 0x02,/*filter5 Q*/
    0x0E, 0xFE,/*filter5 Gain*/
    0x00, 0x00,/*filter6 enable*/
    0x00, 0x00,/*filter6 type*/
    0xE8, 0x03,/*filter6 f0*/
    0xD4, 0x02,/*filter6 Q*/
    0x00, 0x00,/*filter6 Gain*/
    0x00, 0x00,/*filter7 enable*/
    0x00, 0x00,/*filter7 type*/
    0xE8, 0x03,/*filter7 f0*/
    0xD4, 0x02,/*filter7 Q*/
    0x00, 0x00,/*filter7 Gain*/
    0x00, 0x00,/*filter8 enable*/
    0x00, 0x00,/*filter8 type*/
    0xE8, 0x03,/*filter8 f0*/
    0xD4, 0x02,/*filter8 Q*/
    0x00, 0x00,/*filter8 Gain*/
    0x00, 0x00,/*filter9 enable*/
    0x00, 0x00,/*filter9 type*/
    0xE8, 0x03,/*filter9 f0*/
    0xD4, 0x02,/*filter9 Q*/
    0x00, 0x00,/*filter9 Gain*/
    0x00, 0x00,/*filter10 enable*/
    0x00, 0x00,/*filter10 type*/
    0xE8, 0x03,/*filter10 f0*/
    0xD4, 0x02,/*filter10 Q*/
    0x00, 0x00,/*filter10 Gain*/
    0x16,/*sync tail*/
};
//EQ style: Rock
const unsigned char Rock[112] = {
    0xA5, 0x5A,/*sync head*/
    0xA0,/*control*/
    0x6B,/*Length*/
    0xFF,/*all parameter*/
    0x01, 0x00,/*enable*/
    0x00, 0x00,/*pregain*/
    0x00, 0x00,/*reserved*/
    0x01, 0x00,/*filter1 enable*/
    0x01, 0x00,/*filter1 type*/
    0xC4, 0x00,/*filter1 f0*/
    0x84, 0x02,/*filter1 Q*/
    0xD1, 0x04,/*filter1 Gain*/
    0x01, 0x00,/*filter2 enable*/
    0x00, 0x00,/*filter2 type*/
    0xC3, 0x03,/*filter2 f0*/
    0x33, 0x01,/*filter2 Q*/
    0xB9, 0xFD,/*filter2 Gain*/
    0x00, 0x00,/*filter3 enable*/
    0x00, 0x00,/*filter3 type*/
    0x1F, 0x02,/*filter3 f0*/
    0x4D, 0x01,/*filter3 Q*/
    0x1A, 0x04,/*filter3 Gain*/
    0x00, 0x00,/*filter4 enable*/
    0x00, 0x00,/*filter4 type*/
    0xA3, 0x09,/*filter4 f0*/
    0x06, 0x03,/*filter4 Q*/
    0x17, 0x01,/*filter4 Gain*/
    0x01, 0x00,/*filter5 enable*/
    0x02, 0x00,/*filter5 type*/
    0x8F, 0x0D,/*filter5 f0*/
    0x14, 0x02,/*filter5 Q*/
    0x40, 0x04,/*filter5 Gain*/
    0x00, 0x00,/*filter6 enable*/
    0x00, 0x00,/*filter6 type*/
    0xE8, 0x03,/*filter6 f0*/
    0xD4, 0x02,/*filter6 Q*/
    0x00, 0x00,/*filter6 Gain*/
    0x00, 0x00,/*filter7 enable*/
    0x00, 0x00,/*filter7 type*/
    0xE8, 0x03,/*filter7 f0*/
    0xD4, 0x02,/*filter7 Q*/
    0x00, 0x00,/*filter7 Gain*/
    0x00, 0x00,/*filter8 enable*/
    0x00, 0x00,/*filter8 type*/
    0xE8, 0x03,/*filter8 f0*/
    0xD4, 0x02,/*filter8 Q*/
    0x00, 0x00,/*filter8 Gain*/
    0x00, 0x00,/*filter9 enable*/
    0x00, 0x00,/*filter9 type*/
    0xE8, 0x03,/*filter9 f0*/
    0xD4, 0x02,/*filter9 Q*/
    0x00, 0x00,/*filter9 Gain*/
    0x00, 0x00,/*filter10 enable*/
    0x00, 0x00,/*filter10 type*/
    0xE8, 0x03,/*filter10 f0*/
    0xD4, 0x02,/*filter10 Q*/
    0x00, 0x00,/*filter10 Gain*/
    0x16,/*sync tail*/
};
//EQ style: Jazz
const unsigned char Jazz[112] = {
    0xA5, 0x5A,/*sync head*/
    0xA0,/*control*/
    0x6B,/*Length*/
    0xFF,/*all parameter*/
    0x01, 0x00,/*enable*/
    0x00, 0x00,/*pregain*/
    0x00, 0x00,/*reserved*/
    0x01, 0x00,/*filter1 enable*/
    0x01, 0x00,/*filter1 type*/
    0x70, 0x00,/*filter1 f0*/
    0x85, 0x01,/*filter1 Q*/
    0x2C, 0x04,/*filter1 Gain*/
    0x00, 0x00,/*filter2 enable*/
    0x00, 0x00,/*filter2 type*/
    0xC3, 0x03,/*filter2 f0*/
    0x33, 0x01,/*filter2 Q*/
    0xB9, 0xFD,/*filter2 Gain*/
    0x01, 0x00,/*filter3 enable*/
    0x00, 0x00,/*filter3 type*/
    0x93, 0x02,/*filter3 f0*/
    0x6A, 0x03,/*filter3 Q*/
    0xE4, 0xFD,/*filter3 Gain*/
    0x00, 0x00,/*filter4 enable*/
    0x00, 0x00,/*filter4 type*/
    0xA3, 0x09,/*filter4 f0*/
    0x06, 0x03,/*filter4 Q*/
    0x17, 0x01,/*filter4 Gain*/
    0x01, 0x00,/*filter5 enable*/
    0x02, 0x00,/*filter5 type*/
    0xD8, 0x11,/*filter5 f0*/
    0x25, 0x02,/*filter5 Q*/
    0xC2, 0x02,/*filter5 Gain*/
    0x00, 0x00,/*filter6 enable*/
    0x00, 0x00,/*filter6 type*/
    0xE8, 0x03,/*filter6 f0*/
    0xD4, 0x02,/*filter6 Q*/
    0x00, 0x00,/*filter6 Gain*/
    0x00, 0x00,/*filter7 enable*/
    0x00, 0x00,/*filter7 type*/
    0xE8, 0x03,/*filter7 f0*/
    0xD4, 0x02,/*filter7 Q*/
    0x00, 0x00,/*filter7 Gain*/
    0x00, 0x00,/*filter8 enable*/
    0x00, 0x00,/*filter8 type*/
    0xE8, 0x03,/*filter8 f0*/
    0xD4, 0x02,/*filter8 Q*/
    0x00, 0x00,/*filter8 Gain*/
    0x00, 0x00,/*filter9 enable*/
    0x00, 0x00,/*filter9 type*/
    0xE8, 0x03,/*filter9 f0*/
    0xD4, 0x02,/*filter9 Q*/
    0x00, 0x00,/*filter9 Gain*/
    0x00, 0x00,/*filter10 enable*/
    0x00, 0x00,/*filter10 type*/
    0xE8, 0x03,/*filter10 f0*/
    0xD4, 0x02,/*filter10 Q*/
    0x00, 0x00,/*filter10 Gain*/
    0x16,/*sync tail*/
};
