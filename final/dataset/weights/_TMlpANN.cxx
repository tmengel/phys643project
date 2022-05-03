#include "dataset/weights/_TMlpANN.h"
#include <cmath>

double _TMlpANN::Value(int index,double in0,double in1,double in2,double in3,double in4,double in5,double in6,double in7,double in8,double in9,double in10,double in11) {
   input0 = (in0 - -0.673887)/0.30534;
   input1 = (in1 - -0.546735)/0.381783;
   input2 = (in2 - -0.795258)/0.246582;
   input3 = (in3 - -0.753386)/0.261407;
   input4 = (in4 - -0.810988)/0.218246;
   input5 = (in5 - -0.738815)/0.27085;
   input6 = (in6 - -0.956646)/0.0816186;
   input7 = (in7 - 0.446582)/0.563403;
   input8 = (in8 - -0.969089)/0.0644783;
   input9 = (in9 - -0.912864)/0.131108;
   input10 = (in10 - -0.891525)/0.158212;
   input11 = (in11 - -0.969815)/0.0572035;
   switch(index) {
     case 0:
         return neuron0x563cda782510();
     default:
         return 0.;
   }
}

double _TMlpANN::Value(int index, double* input) {
   input0 = (input[0] - -0.673887)/0.30534;
   input1 = (input[1] - -0.546735)/0.381783;
   input2 = (input[2] - -0.795258)/0.246582;
   input3 = (input[3] - -0.753386)/0.261407;
   input4 = (input[4] - -0.810988)/0.218246;
   input5 = (input[5] - -0.738815)/0.27085;
   input6 = (input[6] - -0.956646)/0.0816186;
   input7 = (input[7] - 0.446582)/0.563403;
   input8 = (input[8] - -0.969089)/0.0644783;
   input9 = (input[9] - -0.912864)/0.131108;
   input10 = (input[10] - -0.891525)/0.158212;
   input11 = (input[11] - -0.969815)/0.0572035;
   switch(index) {
     case 0:
         return neuron0x563cda782510();
     default:
         return 0.;
   }
}

double _TMlpANN::neuron0x563cd5be7b60() {
   return input0;
}

double _TMlpANN::neuron0x563cd5be84c0() {
   return input1;
}

double _TMlpANN::neuron0x563cd5be8330() {
   return input2;
}

double _TMlpANN::neuron0x563cd5bf28c0() {
   return input3;
}

double _TMlpANN::neuron0x563cd5bf2730() {
   return input4;
}

double _TMlpANN::neuron0x563cc8995500() {
   return input5;
}

double _TMlpANN::neuron0x563ce02a1ef0() {
   return input6;
}

double _TMlpANN::neuron0x563cdc081940() {
   return input7;
}

double _TMlpANN::neuron0x563cda776420() {
   return input8;
}

double _TMlpANN::neuron0x563cda7752d0() {
   return input9;
}

double _TMlpANN::neuron0x563cdb7012f0() {
   return input10;
}

double _TMlpANN::neuron0x563cdadda5f0() {
   return input11;
}

double _TMlpANN::input0x563cda784e60() {
   double input = -0.183768;
   input += synapse0x563cd784e1c0();
   input += synapse0x563cd5bbfe60();
   input += synapse0x563cd736a4b0();
   input += synapse0x563cdd427780();
   input += synapse0x563ce02b57b0();
   input += synapse0x563cda785110();
   input += synapse0x563cda785150();
   input += synapse0x563cda785190();
   input += synapse0x563cda7851d0();
   input += synapse0x563cda785210();
   input += synapse0x563cda785250();
   input += synapse0x563cdd387710();
   return input;
}

double _TMlpANN::neuron0x563cda784e60() {
   double input = input0x563cda784e60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cdb1624b0() {
   double input = -0.00716971;
   input += synapse0x563cdb1627f0();
   input += synapse0x563cdb162830();
   input += synapse0x563cdb162870();
   input += synapse0x563cdb1628b0();
   input += synapse0x563cdb1628f0();
   input += synapse0x563cd9fb4a40();
   input += synapse0x563cdeee8510();
   input += synapse0x563cdc352380();
   input += synapse0x563cda11d4e0();
   input += synapse0x563cd9a12240();
   input += synapse0x563cd97f5410();
   input += synapse0x563cda285f40();
   return input;
}

double _TMlpANN::neuron0x563cdb1624b0() {
   double input = input0x563cdb1624b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563ce640ba20() {
   double input = 0.352151;
   input += synapse0x563ce640bcd0();
   input += synapse0x563ce640bd10();
   input += synapse0x563ce640bd50();
   input += synapse0x563ce640bd90();
   input += synapse0x563ce640bdd0();
   input += synapse0x563ce640be10();
   input += synapse0x563cd93076b0();
   input += synapse0x563cdfe66670();
   input += synapse0x563cdf212af0();
   input += synapse0x563cd9c2efa0();
   input += synapse0x563cdf80fa60();
   input += synapse0x563cda557b20();
   return input;
}

double _TMlpANN::neuron0x563ce640ba20() {
   double input = input0x563ce640ba20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cd6ca85a0() {
   double input = -0.509192;
   input += synapse0x563cd6ca88e0();
   input += synapse0x563cd6ca8920();
   input += synapse0x563cd6ca8960();
   input += synapse0x563cd6ca89a0();
   input += synapse0x563cd6ca89e0();
   input += synapse0x563cde2f0230();
   input += synapse0x563cdd05b720();
   input += synapse0x563cda4a3280();
   input += synapse0x563cde7dd1c0();
   input += synapse0x563cdf4898a0();
   input += synapse0x563cdf15f260();
   input += synapse0x563cdfcfcc10();
   return input;
}

double _TMlpANN::neuron0x563cd6ca85a0() {
   double input = input0x563cd6ca85a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cd6ec5760() {
   double input = 1.20645;
   input += synapse0x563cd6ec5aa0();
   input += synapse0x563cd6ec5ae0();
   input += synapse0x563cd6ec5b20();
   input += synapse0x563cd6ec5b60();
   input += synapse0x563cd6ec5ba0();
   input += synapse0x563cdee8d400();
   input += synapse0x563cdd8ba2a0();
   input += synapse0x563cdf9d15f0();
   input += synapse0x563cdc0dc470();
   input += synapse0x563cde457dd0();
   input += synapse0x563ce0138100();
   input += synapse0x563cdd58f3a0();
   return input;
}

double _TMlpANN::neuron0x563cd6ec5760() {
   double input = input0x563cd6ec5760();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cd70886d0() {
   double input = -0.241169;
   input += synapse0x563cd7088980();
   input += synapse0x563cd70889c0();
   input += synapse0x563cd7088a00();
   input += synapse0x563cd7088a40();
   input += synapse0x563cd7088a80();
   input += synapse0x563cd7088ac0();
   input += synapse0x563cdf2c6d00();
   input += synapse0x563ce0191820();
   input += synapse0x563cdea53f40();
   input += synapse0x563cde01e5c0();
   input += synapse0x563cde837330();
   input += synapse0x563cdff74fa0();
   return input;
}

double _TMlpANN::neuron0x563cd70886d0() {
   double input = input0x563cd70886d0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cd724b7b0() {
   double input = -2.68138;
   input += synapse0x563cd724baf0();
   input += synapse0x563cd724bb30();
   input += synapse0x563cd724bb70();
   input += synapse0x563cd724bbb0();
   input += synapse0x563cd724bbf0();
   input += synapse0x563cdcd89d60();
   input += synapse0x563cddcf31e0();
   input += synapse0x563cdfcfdc20();
   input += synapse0x563cde9466b0();
   input += synapse0x563cdf5f2cd0();
   input += synapse0x563cdec17510();
   input += synapse0x563cd5be8680();
   return input;
}

double _TMlpANN::neuron0x563cd724b7b0() {
   double input = input0x563cd724b7b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cd73b45c0() {
   double input = 0.194151;
   input += synapse0x563cd73b4900();
   input += synapse0x563cd73b4940();
   input += synapse0x563cd73b4980();
   input += synapse0x563cd73b49c0();
   input += synapse0x563cd73b4a00();
   input += synapse0x563cdd16a110();
   input += synapse0x563ce640c420();
   input += synapse0x563cdf3d6010();
   input += synapse0x563cdd278bc0();
   input += synapse0x563cdfb95180();
   input += synapse0x563ce00838d0();
   input += synapse0x563cdcef2a00();
   return input;
}

double _TMlpANN::neuron0x563cd73b45c0() {
   double input = input0x563cd73b45c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cd751d460() {
   double input = 0.672165;
   input += synapse0x563cd751d7a0();
   input += synapse0x563cd751d7e0();
   input += synapse0x563cd751d820();
   input += synapse0x563cd751d860();
   input += synapse0x563cd751d8a0();
   input += synapse0x563cdf9d2600();
   input += synapse0x563cdcc21010();
   input += synapse0x563cdfcfd1e0();
   input += synapse0x563cdc353400();
   input += synapse0x563cdc7e7190();
   input += synapse0x563cdc5ca290();
   input += synapse0x563cdcbc6e40();
   return input;
}

double _TMlpANN::neuron0x563cd751d460() {
   double input = input0x563cd751d460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cd762c0a0() {
   double input = 1.85503;
   input += synapse0x563cd762c3e0();
   input += synapse0x563cd762c420();
   input += synapse0x563cd762c460();
   input += synapse0x563cd762c4a0();
   input += synapse0x563cd762c4e0();
   input += synapse0x563cdca03fa0();
   input += synapse0x563cde3fdc30();
   input += synapse0x563cdda7c140();
   input += synapse0x563cdd32d540();
   input += synapse0x563cdf4e3980();
   input += synapse0x563cde8914a0();
   input += synapse0x563cdfa2bd20();
   return input;
}

double _TMlpANN::neuron0x563cd762c0a0() {
   double input = input0x563cd762c0a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cd773ac70() {
   double input = 0.854055;
   input += synapse0x563cd773afb0();
   input += synapse0x563cd773aff0();
   input += synapse0x563cd773b030();
   input += synapse0x563cd773b070();
   input += synapse0x563cd773b0b0();
   input += synapse0x563cdfd57340();
   input += synapse0x563cdfb94160();
   input += synapse0x563cddb303b0();
   input += synapse0x563cdd5e9140();
   input += synapse0x563cde99fdb0();
   input += synapse0x563cdf15e220();
   input += synapse0x563cdf42f730();
   return input;
}

double _TMlpANN::neuron0x563cd773ac70() {
   double input = input0x563cd773ac70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cd77ef670() {
   double input = -2.28133;
   input += synapse0x563cd77ef9b0();
   input += synapse0x563cd77ef9f0();
   input += synapse0x563cd77efa30();
   input += synapse0x563cd77efa70();
   input += synapse0x563cd77efab0();
   input += synapse0x563cddc3eef0();
   input += synapse0x563cda628ae0();
   input += synapse0x563cdd69cc90();
   input += synapse0x563cdf597b40();
   input += synapse0x563cdf75a7e0();
   input += synapse0x563cdf7006e0();
   input += synapse0x563cdd9c7df0();
   return input;
}

double _TMlpANN::neuron0x563cd77ef670() {
   double input = input0x563cd77ef670();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cd784af60() {
   double input = -0.917734;
   input += synapse0x563cd784b2a0();
   input += synapse0x563cd784b2e0();
   input += synapse0x563cd784b320();
   input += synapse0x563cd784b360();
   input += synapse0x563cd784b3a0();
   input += synapse0x563cde5c0370();
   input += synapse0x563cdd277ed0();
   input += synapse0x563cdf04fec0();
   input += synapse0x563cdf37af00();
   input += synapse0x563cddfc4500();
   input += synapse0x563cdfdb1440();
   input += synapse0x563cdf26cc00();
   return input;
}

double _TMlpANN::neuron0x563cd784af60() {
   double input = input0x563cd784af60();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cda770260() {
   double input = -0.225398;
   input += synapse0x563cda7705a0();
   input += synapse0x563cda7705e0();
   input += synapse0x563cda770620();
   input += synapse0x563cda770660();
   input += synapse0x563cda7706a0();
   input += synapse0x563cde6cee20();
   input += synapse0x563cdf53da40();
   input += synapse0x563cdf104120();
   input += synapse0x563cdf320e00();
   input += synapse0x563cdf1b89f0();
   input += synapse0x563ce00828c0();
   input += synapse0x563cddd4d390();
   input += synapse0x563cdd96dc10();
   return input;
}

double _TMlpANN::neuron0x563cda770260() {
   double input = input0x563cda770260();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cdd3e31c0() {
   double input = -0.321993;
   input += synapse0x563cdd3e3500();
   input += synapse0x563cdd3e3540();
   input += synapse0x563cdd3e3580();
   input += synapse0x563cdd3e35c0();
   input += synapse0x563cdf5f1ca0();
   input += synapse0x563cddbe4690();
   input += synapse0x563cdd750f90();
   input += synapse0x563cdf8c32f0();
   input += synapse0x563cde186c30();
   input += synapse0x563cd784d4e0();
   input += synapse0x563cdcd88d10();
   input += synapse0x563cdd05ace0();
   input += synapse0x563cdd32cad0();
   return input;
}

double _TMlpANN::neuron0x563cdd3e31c0() {
   double input = input0x563cdd3e31c0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cdb9d1c70() {
   double input = 0.543101;
   input += synapse0x563cdb9d1fb0();
   input += synapse0x563cdb9d1ff0();
   input += synapse0x563cdb9d2030();
   input += synapse0x563cdb9d2070();
   input += synapse0x563cdd3e1470();
   input += synapse0x563cda7717d0();
   input += synapse0x563cddbe50c0();
   input += synapse0x563cdf80e9e0();
   input += synapse0x563cda785290();
   input += synapse0x563ce640be50();
   input += synapse0x563cd7088b00();
   input += synapse0x563cdd3e3600();
   input += synapse0x563cd5d070f0();
   return input;
}

double _TMlpANN::neuron0x563cdb9d1c70() {
   double input = input0x563cdb9d1c70();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cd8388870() {
   double input = -0.423227;
   input += synapse0x563cd8388bb0();
   input += synapse0x563cd8388bf0();
   input += synapse0x563cd8388c30();
   input += synapse0x563cd8388c70();
   input += synapse0x563cd8388cb0();
   input += synapse0x563cdb9d20b0();
   input += synapse0x563cd9523560();
   input += synapse0x563cd9c2e060();
   input += synapse0x563cd8cb16c0();
   input += synapse0x563cddad6380();
   input += synapse0x563cdb978100();
   input += synapse0x563cdc081400();
   input += synapse0x563cd9a6c4d0();
   return input;
}

double _TMlpANN::neuron0x563cd8388870() {
   double input = input0x563cd8388870();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cdaddfaf0() {
   double input = -0.677745;
   input += synapse0x563cdaddfe30();
   input += synapse0x563cdaddfe70();
   input += synapse0x563cdaddfeb0();
   input += synapse0x563cdaddfef0();
   input += synapse0x563cdaddff30();
   input += synapse0x563cda3eeab0();
   input += synapse0x563cdd2d2e50();
   input += synapse0x563cd97f4500();
   input += synapse0x563cd90366f0();
   input += synapse0x563cd8ecd350();
   input += synapse0x563cdef9bda0();
   input += synapse0x563cda286010();
   input += synapse0x563cd876a680();
   return input;
}

double _TMlpANN::neuron0x563cdaddfaf0() {
   double input = input0x563cdaddfaf0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cd83899a0() {
   double input = 0.209415;
   input += synapse0x563cd8389ce0();
   input += synapse0x563cd8389d20();
   input += synapse0x563cd8389d60();
   input += synapse0x563cd8389da0();
   input += synapse0x563cd8389de0();
   input += synapse0x563cda0c2e80();
   input += synapse0x563cdcef1a60();
   input += synapse0x563cdb80f730();
   input += synapse0x563cdcc7b280();
   input += synapse0x563cd9ea60c0();
   input += synapse0x563cd9c89230();
   input += synapse0x563cdc731ee0();
   input += synapse0x563cda5b1d70();
   return input;
}

double _TMlpANN::neuron0x563cd83899a0() {
   double input = input0x563cd83899a0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cd838aa50() {
   double input = -0.401579;
   input += synapse0x563cd838ad90();
   input += synapse0x563cd838add0();
   input += synapse0x563cd838ae10();
   input += synapse0x563cd838ae50();
   input += synapse0x563cd838ae90();
   input += synapse0x563cd8aee590();
   input += synapse0x563cda00e230();
   input += synapse0x563cde675830();
   input += synapse0x563cdc67e690();
   input += synapse0x563cd99b7b40();
   input += synapse0x563cddf6a7d0();
   input += synapse0x563cdeb622e0();
   input += synapse0x563cd9f5a3a0();
   return input;
}

double _TMlpANN::neuron0x563cd838aa50() {
   double input = input0x563cd838aa50();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cda7803b0() {
   double input = 0.292538;
   input += synapse0x563cda7806f0();
   input += synapse0x563cda780730();
   input += synapse0x563cda780770();
   input += synapse0x563cda7807b0();
   input += synapse0x563cda7807f0();
   input += synapse0x563cde3a4640();
   input += synapse0x563cda556be0();
   input += synapse0x563cd9fb4b10();
   input += synapse0x563cd735a280();
   input += synapse0x563cd74c3040();
   input += synapse0x563cd784bea0();
   input += synapse0x563cd784c500();
   input += synapse0x563ce0029270();
   return input;
}

double _TMlpANN::neuron0x563cda7803b0() {
   double input = input0x563cda7803b0();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cdba85570() {
   double input = 0.452199;
   input += synapse0x563cdba858b0();
   input += synapse0x563cdba858f0();
   input += synapse0x563cdd16a1e0();
   input += synapse0x563cdc081e10();
   input += synapse0x563cda4fd450();
   input += synapse0x563cd8a3a860();
   input += synapse0x563ce0028890();
   input += synapse0x563cd9d97620();
   input += synapse0x563cda60b460();
   input += synapse0x563ce00dd0c0();
   input += synapse0x563cdade0100();
   input += synapse0x563cda76b7b0();
   input += synapse0x563cd5dbdd40();
   return input;
}

double _TMlpANN::neuron0x563cdba85570() {
   double input = input0x563cdba85570();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cd838bb00() {
   double input = 0.368241;
   input += synapse0x563cd838be40();
   input += synapse0x563cd838be80();
   input += synapse0x563cd838bec0();
   input += synapse0x563cd838bf00();
   input += synapse0x563cd838bf40();
   input += synapse0x563cd6e6b4c0();
   input += synapse0x563cd72a5ee0();
   input += synapse0x563cda784d90();
   input += synapse0x563cda772ec0();
   input += synapse0x563cd7578610();
   input += synapse0x563cda76b120();
   input += synapse0x563cd800a3c0();
   input += synapse0x563cda779070();
   return input;
}

double _TMlpANN::neuron0x563cd838bb00() {
   double input = input0x563cd838bb00();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cda781460() {
   double input = 0.737751;
   input += synapse0x563cda7817a0();
   input += synapse0x563cda7817e0();
   input += synapse0x563cda781820();
   input += synapse0x563cda781860();
   input += synapse0x563cda7818a0();
   input += synapse0x563cda76f080();
   input += synapse0x563cd784a7c0();
   input += synapse0x563cd8004db0();
   input += synapse0x563cd838af50();
   input += synapse0x563cd6c4ed40();
   input += synapse0x563cd73b5500();
   input += synapse0x563cdb4e3d40();
   input += synapse0x563ce640a800();
   return input;
}

double _TMlpANN::neuron0x563cda781460() {
   double input = input0x563cda781460();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cd838cc20() {
   double input = 0.0302111;
   input += synapse0x563cd838cf60();
   input += synapse0x563cd838cfa0();
   input += synapse0x563cd838cfe0();
   input += synapse0x563cd838d020();
   input += synapse0x563cd838d060();
   input += synapse0x563cd6ca94b0();
   input += synapse0x563cda7845e0();
   input += synapse0x563cd6fd4c40();
   input += synapse0x563cda771970();
   input += synapse0x563cd7089640();
   input += synapse0x563cd6ec55f0();
   input += synapse0x563cd6c4e1f0();
   input += synapse0x563cd6db7a90();
   return input;
}

double _TMlpANN::neuron0x563cd838cc20() {
   double input = input0x563cd838cc20();
   return ((input < -709. ? 0. : (1/(1+exp(-input)))) * 1)+0;
}

double _TMlpANN::input0x563cda782510() {
   double input = -0.313311;
   input += synapse0x563cda782850();
   input += synapse0x563cda782890();
   input += synapse0x563cda7828d0();
   input += synapse0x563cda782910();
   input += synapse0x563cda782950();
   input += synapse0x563cda785da0();
   input += synapse0x563cdb6fd8f0();
   input += synapse0x563ce640da40();
   input += synapse0x563cdb4e4df0();
   input += synapse0x563cd73000b0();
   input += synapse0x563cda780280();
   input += synapse0x563cdb4e25f0();
   return input;
}

double _TMlpANN::neuron0x563cda782510() {
   double input = input0x563cda782510();
   return (input * 1)+0;
}

double _TMlpANN::synapse0x563cd784e1c0() {
   return (neuron0x563cd5be7b60()*0.56785);
}

double _TMlpANN::synapse0x563cd5bbfe60() {
   return (neuron0x563cd5be84c0()*-1.05562);
}

double _TMlpANN::synapse0x563cd736a4b0() {
   return (neuron0x563cd5be8330()*0.288131);
}

double _TMlpANN::synapse0x563cdd427780() {
   return (neuron0x563cd5bf28c0()*-0.502768);
}

double _TMlpANN::synapse0x563ce02b57b0() {
   return (neuron0x563cd5bf2730()*0.454401);
}

double _TMlpANN::synapse0x563cda785110() {
   return (neuron0x563cc8995500()*-0.361114);
}

double _TMlpANN::synapse0x563cda785150() {
   return (neuron0x563ce02a1ef0()*-0.143704);
}

double _TMlpANN::synapse0x563cda785190() {
   return (neuron0x563cdc081940()*-0.160516);
}

double _TMlpANN::synapse0x563cda7851d0() {
   return (neuron0x563cda776420()*-0.8188);
}

double _TMlpANN::synapse0x563cda785210() {
   return (neuron0x563cda7752d0()*0.109088);
}

double _TMlpANN::synapse0x563cda785250() {
   return (neuron0x563cdb7012f0()*0.165147);
}

double _TMlpANN::synapse0x563cdd387710() {
   return (neuron0x563cdadda5f0()*-0.66552);
}

double _TMlpANN::synapse0x563cdb1627f0() {
   return (neuron0x563cd5be7b60()*0.105216);
}

double _TMlpANN::synapse0x563cdb162830() {
   return (neuron0x563cd5be84c0()*-0.60674);
}

double _TMlpANN::synapse0x563cdb162870() {
   return (neuron0x563cd5be8330()*-0.133364);
}

double _TMlpANN::synapse0x563cdb1628b0() {
   return (neuron0x563cd5bf28c0()*-0.644639);
}

double _TMlpANN::synapse0x563cdb1628f0() {
   return (neuron0x563cd5bf2730()*-0.0594063);
}

double _TMlpANN::synapse0x563cd9fb4a40() {
   return (neuron0x563cc8995500()*-0.716722);
}

double _TMlpANN::synapse0x563cdeee8510() {
   return (neuron0x563ce02a1ef0()*0.0936299);
}

double _TMlpANN::synapse0x563cdc352380() {
   return (neuron0x563cdc081940()*0.166621);
}

double _TMlpANN::synapse0x563cda11d4e0() {
   return (neuron0x563cda776420()*0.0454685);
}

double _TMlpANN::synapse0x563cd9a12240() {
   return (neuron0x563cda7752d0()*-0.00650654);
}

double _TMlpANN::synapse0x563cd97f5410() {
   return (neuron0x563cdb7012f0()*-0.0636346);
}

double _TMlpANN::synapse0x563cda285f40() {
   return (neuron0x563cdadda5f0()*0.316526);
}

double _TMlpANN::synapse0x563ce640bcd0() {
   return (neuron0x563cd5be7b60()*-2.07686);
}

double _TMlpANN::synapse0x563ce640bd10() {
   return (neuron0x563cd5be84c0()*-1.49112);
}

double _TMlpANN::synapse0x563ce640bd50() {
   return (neuron0x563cd5be8330()*-1.79824);
}

double _TMlpANN::synapse0x563ce640bd90() {
   return (neuron0x563cd5bf28c0()*-1.19581);
}

double _TMlpANN::synapse0x563ce640bdd0() {
   return (neuron0x563cd5bf2730()*-1.69369);
}

double _TMlpANN::synapse0x563ce640be10() {
   return (neuron0x563cc8995500()*-1.75443);
}

double _TMlpANN::synapse0x563cd93076b0() {
   return (neuron0x563ce02a1ef0()*1.30646);
}

double _TMlpANN::synapse0x563cdfe66670() {
   return (neuron0x563cdc081940()*-0.376539);
}

double _TMlpANN::synapse0x563cdf212af0() {
   return (neuron0x563cda776420()*0.918613);
}

double _TMlpANN::synapse0x563cd9c2efa0() {
   return (neuron0x563cda7752d0()*-0.122501);
}

double _TMlpANN::synapse0x563cdf80fa60() {
   return (neuron0x563cdb7012f0()*0.231705);
}

double _TMlpANN::synapse0x563cda557b20() {
   return (neuron0x563cdadda5f0()*1.34855);
}

double _TMlpANN::synapse0x563cd6ca88e0() {
   return (neuron0x563cd5be7b60()*-0.617403);
}

double _TMlpANN::synapse0x563cd6ca8920() {
   return (neuron0x563cd5be84c0()*-0.751976);
}

double _TMlpANN::synapse0x563cd6ca8960() {
   return (neuron0x563cd5be8330()*-0.111756);
}

double _TMlpANN::synapse0x563cd6ca89a0() {
   return (neuron0x563cd5bf28c0()*-0.19454);
}

double _TMlpANN::synapse0x563cd6ca89e0() {
   return (neuron0x563cd5bf2730()*-0.104415);
}

double _TMlpANN::synapse0x563cde2f0230() {
   return (neuron0x563cc8995500()*-0.146235);
}

double _TMlpANN::synapse0x563cdd05b720() {
   return (neuron0x563ce02a1ef0()*0.621977);
}

double _TMlpANN::synapse0x563cda4a3280() {
   return (neuron0x563cdc081940()*0.612122);
}

double _TMlpANN::synapse0x563cde7dd1c0() {
   return (neuron0x563cda776420()*0.46558);
}

double _TMlpANN::synapse0x563cdf4898a0() {
   return (neuron0x563cda7752d0()*0.135548);
}

double _TMlpANN::synapse0x563cdf15f260() {
   return (neuron0x563cdb7012f0()*-0.116443);
}

double _TMlpANN::synapse0x563cdfcfcc10() {
   return (neuron0x563cdadda5f0()*0.71551);
}

double _TMlpANN::synapse0x563cd6ec5aa0() {
   return (neuron0x563cd5be7b60()*-0.307768);
}

double _TMlpANN::synapse0x563cd6ec5ae0() {
   return (neuron0x563cd5be84c0()*0.904436);
}

double _TMlpANN::synapse0x563cd6ec5b20() {
   return (neuron0x563cd5be8330()*-0.180017);
}

double _TMlpANN::synapse0x563cd6ec5b60() {
   return (neuron0x563cd5bf28c0()*0.630559);
}

double _TMlpANN::synapse0x563cd6ec5ba0() {
   return (neuron0x563cd5bf2730()*-0.265359);
}

double _TMlpANN::synapse0x563cdee8d400() {
   return (neuron0x563cc8995500()*0.379805);
}

double _TMlpANN::synapse0x563cdd8ba2a0() {
   return (neuron0x563ce02a1ef0()*0.979224);
}

double _TMlpANN::synapse0x563cdf9d15f0() {
   return (neuron0x563cdc081940()*-0.131915);
}

double _TMlpANN::synapse0x563cdc0dc470() {
   return (neuron0x563cda776420()*0.648268);
}

double _TMlpANN::synapse0x563cde457dd0() {
   return (neuron0x563cda7752d0()*-0.0167106);
}

double _TMlpANN::synapse0x563ce0138100() {
   return (neuron0x563cdb7012f0()*-0.0495949);
}

double _TMlpANN::synapse0x563cdd58f3a0() {
   return (neuron0x563cdadda5f0()*1.18155);
}

double _TMlpANN::synapse0x563cd7088980() {
   return (neuron0x563cd5be7b60()*-1.12358);
}

double _TMlpANN::synapse0x563cd70889c0() {
   return (neuron0x563cd5be84c0()*0.433424);
}

double _TMlpANN::synapse0x563cd7088a00() {
   return (neuron0x563cd5be8330()*-0.490304);
}

double _TMlpANN::synapse0x563cd7088a40() {
   return (neuron0x563cd5bf28c0()*0.295009);
}

double _TMlpANN::synapse0x563cd7088a80() {
   return (neuron0x563cd5bf2730()*-0.525718);
}

double _TMlpANN::synapse0x563cd7088ac0() {
   return (neuron0x563cc8995500()*0.2494);
}

double _TMlpANN::synapse0x563cdf2c6d00() {
   return (neuron0x563ce02a1ef0()*0.405641);
}

double _TMlpANN::synapse0x563ce0191820() {
   return (neuron0x563cdc081940()*-0.200755);
}

double _TMlpANN::synapse0x563cdea53f40() {
   return (neuron0x563cda776420()*-0.125942);
}

double _TMlpANN::synapse0x563cde01e5c0() {
   return (neuron0x563cda7752d0()*-0.106051);
}

double _TMlpANN::synapse0x563cde837330() {
   return (neuron0x563cdb7012f0()*-0.127341);
}

double _TMlpANN::synapse0x563cdff74fa0() {
   return (neuron0x563cdadda5f0()*0.308292);
}

double _TMlpANN::synapse0x563cd724baf0() {
   return (neuron0x563cd5be7b60()*-3.76457);
}

double _TMlpANN::synapse0x563cd724bb30() {
   return (neuron0x563cd5be84c0()*2.12308);
}

double _TMlpANN::synapse0x563cd724bb70() {
   return (neuron0x563cd5be8330()*-4.22087);
}

double _TMlpANN::synapse0x563cd724bbb0() {
   return (neuron0x563cd5bf28c0()*1.75938);
}

double _TMlpANN::synapse0x563cd724bbf0() {
   return (neuron0x563cd5bf2730()*-4.2381);
}

double _TMlpANN::synapse0x563cdcd89d60() {
   return (neuron0x563cc8995500()*1.82021);
}

double _TMlpANN::synapse0x563cddcf31e0() {
   return (neuron0x563ce02a1ef0()*-0.699863);
}

double _TMlpANN::synapse0x563cdfcfdc20() {
   return (neuron0x563cdc081940()*-0.0363316);
}

double _TMlpANN::synapse0x563cde9466b0() {
   return (neuron0x563cda776420()*-0.164254);
}

double _TMlpANN::synapse0x563cdf5f2cd0() {
   return (neuron0x563cda7752d0()*-0.0281807);
}

double _TMlpANN::synapse0x563cdec17510() {
   return (neuron0x563cdb7012f0()*0.0825358);
}

double _TMlpANN::synapse0x563cd5be8680() {
   return (neuron0x563cdadda5f0()*-0.813635);
}

double _TMlpANN::synapse0x563cd73b4900() {
   return (neuron0x563cd5be7b60()*0.492968);
}

double _TMlpANN::synapse0x563cd73b4940() {
   return (neuron0x563cd5be84c0()*-0.143187);
}

double _TMlpANN::synapse0x563cd73b4980() {
   return (neuron0x563cd5be8330()*0.707686);
}

double _TMlpANN::synapse0x563cd73b49c0() {
   return (neuron0x563cd5bf28c0()*-0.0826787);
}

double _TMlpANN::synapse0x563cd73b4a00() {
   return (neuron0x563cd5bf2730()*0.114177);
}

double _TMlpANN::synapse0x563cdd16a110() {
   return (neuron0x563cc8995500()*0.442665);
}

double _TMlpANN::synapse0x563ce640c420() {
   return (neuron0x563ce02a1ef0()*0.251601);
}

double _TMlpANN::synapse0x563cdf3d6010() {
   return (neuron0x563cdc081940()*0.468602);
}

double _TMlpANN::synapse0x563cdd278bc0() {
   return (neuron0x563cda776420()*0.0416768);
}

double _TMlpANN::synapse0x563cdfb95180() {
   return (neuron0x563cda7752d0()*-0.19173);
}

double _TMlpANN::synapse0x563ce00838d0() {
   return (neuron0x563cdb7012f0()*-0.263966);
}

double _TMlpANN::synapse0x563cdcef2a00() {
   return (neuron0x563cdadda5f0()*0.365425);
}

double _TMlpANN::synapse0x563cd751d7a0() {
   return (neuron0x563cd5be7b60()*-0.425284);
}

double _TMlpANN::synapse0x563cd751d7e0() {
   return (neuron0x563cd5be84c0()*1.32234);
}

double _TMlpANN::synapse0x563cd751d820() {
   return (neuron0x563cd5be8330()*-0.194831);
}

double _TMlpANN::synapse0x563cd751d860() {
   return (neuron0x563cd5bf28c0()*1.53425);
}

double _TMlpANN::synapse0x563cd751d8a0() {
   return (neuron0x563cd5bf2730()*-0.0556341);
}

double _TMlpANN::synapse0x563cdf9d2600() {
   return (neuron0x563cc8995500()*0.969838);
}

double _TMlpANN::synapse0x563cdcc21010() {
   return (neuron0x563ce02a1ef0()*-1.60952);
}

double _TMlpANN::synapse0x563cdfcfd1e0() {
   return (neuron0x563cdc081940()*0.179169);
}

double _TMlpANN::synapse0x563cdc353400() {
   return (neuron0x563cda776420()*-1.19085);
}

double _TMlpANN::synapse0x563cdc7e7190() {
   return (neuron0x563cda7752d0()*-0.250185);
}

double _TMlpANN::synapse0x563cdc5ca290() {
   return (neuron0x563cdb7012f0()*-0.185787);
}

double _TMlpANN::synapse0x563cdcbc6e40() {
   return (neuron0x563cdadda5f0()*-1.48886);
}

double _TMlpANN::synapse0x563cd762c3e0() {
   return (neuron0x563cd5be7b60()*0.551431);
}

double _TMlpANN::synapse0x563cd762c420() {
   return (neuron0x563cd5be84c0()*1.00616);
}

double _TMlpANN::synapse0x563cd762c460() {
   return (neuron0x563cd5be8330()*0.0340515);
}

double _TMlpANN::synapse0x563cd762c4a0() {
   return (neuron0x563cd5bf28c0()*0.777624);
}

double _TMlpANN::synapse0x563cd762c4e0() {
   return (neuron0x563cd5bf2730()*-0.00849487);
}

double _TMlpANN::synapse0x563cdca03fa0() {
   return (neuron0x563cc8995500()*0.794479);
}

double _TMlpANN::synapse0x563cde3fdc30() {
   return (neuron0x563ce02a1ef0()*0.310105);
}

double _TMlpANN::synapse0x563cdda7c140() {
   return (neuron0x563cdc081940()*-0.0965709);
}

double _TMlpANN::synapse0x563cdd32d540() {
   return (neuron0x563cda776420()*-0.472641);
}

double _TMlpANN::synapse0x563cdf4e3980() {
   return (neuron0x563cda7752d0()*0.0335801);
}

double _TMlpANN::synapse0x563cde8914a0() {
   return (neuron0x563cdb7012f0()*0.0616209);
}

double _TMlpANN::synapse0x563cdfa2bd20() {
   return (neuron0x563cdadda5f0()*0.492838);
}

double _TMlpANN::synapse0x563cd773afb0() {
   return (neuron0x563cd5be7b60()*0.0654829);
}

double _TMlpANN::synapse0x563cd773aff0() {
   return (neuron0x563cd5be84c0()*1.60892);
}

double _TMlpANN::synapse0x563cd773b030() {
   return (neuron0x563cd5be8330()*-0.0182305);
}

double _TMlpANN::synapse0x563cd773b070() {
   return (neuron0x563cd5bf28c0()*0.379169);
}

double _TMlpANN::synapse0x563cd773b0b0() {
   return (neuron0x563cd5bf2730()*-0.285713);
}

double _TMlpANN::synapse0x563cdfd57340() {
   return (neuron0x563cc8995500()*1.25513);
}

double _TMlpANN::synapse0x563cdfb94160() {
   return (neuron0x563ce02a1ef0()*-1.27163);
}

double _TMlpANN::synapse0x563cddb303b0() {
   return (neuron0x563cdc081940()*0.251295);
}

double _TMlpANN::synapse0x563cdd5e9140() {
   return (neuron0x563cda776420()*-0.657321);
}

double _TMlpANN::synapse0x563cde99fdb0() {
   return (neuron0x563cda7752d0()*-0.0513618);
}

double _TMlpANN::synapse0x563cdf15e220() {
   return (neuron0x563cdb7012f0()*-0.187571);
}

double _TMlpANN::synapse0x563cdf42f730() {
   return (neuron0x563cdadda5f0()*-1.7211);
}

double _TMlpANN::synapse0x563cd77ef9b0() {
   return (neuron0x563cd5be7b60()*1.29564);
}

double _TMlpANN::synapse0x563cd77ef9f0() {
   return (neuron0x563cd5be84c0()*-0.105742);
}

double _TMlpANN::synapse0x563cd77efa30() {
   return (neuron0x563cd5be8330()*0.746028);
}

double _TMlpANN::synapse0x563cd77efa70() {
   return (neuron0x563cd5bf28c0()*-0.249575);
}

double _TMlpANN::synapse0x563cd77efab0() {
   return (neuron0x563cd5bf2730()*0.874235);
}

double _TMlpANN::synapse0x563cddc3eef0() {
   return (neuron0x563cc8995500()*-0.305867);
}

double _TMlpANN::synapse0x563cda628ae0() {
   return (neuron0x563ce02a1ef0()*-2.09862);
}

double _TMlpANN::synapse0x563cdd69cc90() {
   return (neuron0x563cdc081940()*-0.00902314);
}

double _TMlpANN::synapse0x563cdf597b40() {
   return (neuron0x563cda776420()*-0.90211);
}

double _TMlpANN::synapse0x563cdf75a7e0() {
   return (neuron0x563cda7752d0()*0.101994);
}

double _TMlpANN::synapse0x563cdf7006e0() {
   return (neuron0x563cdb7012f0()*0.142396);
}

double _TMlpANN::synapse0x563cdd9c7df0() {
   return (neuron0x563cdadda5f0()*-2.58664);
}

double _TMlpANN::synapse0x563cd784b2a0() {
   return (neuron0x563cd5be7b60()*-0.24614);
}

double _TMlpANN::synapse0x563cd784b2e0() {
   return (neuron0x563cd5be84c0()*-0.746659);
}

double _TMlpANN::synapse0x563cd784b320() {
   return (neuron0x563cd5be8330()*0.325343);
}

double _TMlpANN::synapse0x563cd784b360() {
   return (neuron0x563cd5bf28c0()*-0.920717);
}

double _TMlpANN::synapse0x563cd784b3a0() {
   return (neuron0x563cd5bf2730()*-0.434294);
}

double _TMlpANN::synapse0x563cde5c0370() {
   return (neuron0x563cc8995500()*-0.232042);
}

double _TMlpANN::synapse0x563cdd277ed0() {
   return (neuron0x563ce02a1ef0()*0.0271137);
}

double _TMlpANN::synapse0x563cdf04fec0() {
   return (neuron0x563cdc081940()*0.142666);
}

double _TMlpANN::synapse0x563cdf37af00() {
   return (neuron0x563cda776420()*0.226117);
}

double _TMlpANN::synapse0x563cddfc4500() {
   return (neuron0x563cda7752d0()*-0.00490297);
}

double _TMlpANN::synapse0x563cdfdb1440() {
   return (neuron0x563cdb7012f0()*0.110821);
}

double _TMlpANN::synapse0x563cdf26cc00() {
   return (neuron0x563cdadda5f0()*0.372915);
}

double _TMlpANN::synapse0x563cda7705a0() {
   return (neuron0x563cda784e60()*0.115521);
}

double _TMlpANN::synapse0x563cda7705e0() {
   return (neuron0x563cdb1624b0()*0.171821);
}

double _TMlpANN::synapse0x563cda770620() {
   return (neuron0x563ce640ba20()*-0.313453);
}

double _TMlpANN::synapse0x563cda770660() {
   return (neuron0x563cd6ca85a0()*-0.254662);
}

double _TMlpANN::synapse0x563cda7706a0() {
   return (neuron0x563cd6ec5760()*-0.071985);
}

double _TMlpANN::synapse0x563cde6cee20() {
   return (neuron0x563cd70886d0()*-0.261842);
}

double _TMlpANN::synapse0x563cdf53da40() {
   return (neuron0x563cd724b7b0()*0.667468);
}

double _TMlpANN::synapse0x563cdf104120() {
   return (neuron0x563cd73b45c0()*0.273121);
}

double _TMlpANN::synapse0x563cdf320e00() {
   return (neuron0x563cd751d460()*0.446588);
}

double _TMlpANN::synapse0x563cdf1b89f0() {
   return (neuron0x563cd762c0a0()*0.252494);
}

double _TMlpANN::synapse0x563ce00828c0() {
   return (neuron0x563cd773ac70()*0.677628);
}

double _TMlpANN::synapse0x563cddd4d390() {
   return (neuron0x563cd77ef670()*0.0729976);
}

double _TMlpANN::synapse0x563cdd96dc10() {
   return (neuron0x563cd784af60()*-0.579023);
}

double _TMlpANN::synapse0x563cdd3e3500() {
   return (neuron0x563cda784e60()*-0.281212);
}

double _TMlpANN::synapse0x563cdd3e3540() {
   return (neuron0x563cdb1624b0()*-0.385351);
}

double _TMlpANN::synapse0x563cdd3e3580() {
   return (neuron0x563ce640ba20()*-0.423286);
}

double _TMlpANN::synapse0x563cdd3e35c0() {
   return (neuron0x563cd6ca85a0()*-0.182856);
}

double _TMlpANN::synapse0x563cdf5f1ca0() {
   return (neuron0x563cd6ec5760()*-0.210675);
}

double _TMlpANN::synapse0x563cddbe4690() {
   return (neuron0x563cd70886d0()*0.00342621);
}

double _TMlpANN::synapse0x563cdd750f90() {
   return (neuron0x563cd724b7b0()*-0.282709);
}

double _TMlpANN::synapse0x563cdf8c32f0() {
   return (neuron0x563cd73b45c0()*0.174394);
}

double _TMlpANN::synapse0x563cde186c30() {
   return (neuron0x563cd751d460()*-0.0896357);
}

double _TMlpANN::synapse0x563cd784d4e0() {
   return (neuron0x563cd762c0a0()*-0.0207303);
}

double _TMlpANN::synapse0x563cdcd88d10() {
   return (neuron0x563cd773ac70()*0.0978981);
}

double _TMlpANN::synapse0x563cdd05ace0() {
   return (neuron0x563cd77ef670()*-0.346356);
}

double _TMlpANN::synapse0x563cdd32cad0() {
   return (neuron0x563cd784af60()*-0.348285);
}

double _TMlpANN::synapse0x563cdb9d1fb0() {
   return (neuron0x563cda784e60()*0.612422);
}

double _TMlpANN::synapse0x563cdb9d1ff0() {
   return (neuron0x563cdb1624b0()*0.341692);
}

double _TMlpANN::synapse0x563cdb9d2030() {
   return (neuron0x563ce640ba20()*-0.757132);
}

double _TMlpANN::synapse0x563cdb9d2070() {
   return (neuron0x563cd6ca85a0()*-0.291238);
}

double _TMlpANN::synapse0x563cdd3e1470() {
   return (neuron0x563cd6ec5760()*-0.577092);
}

double _TMlpANN::synapse0x563cda7717d0() {
   return (neuron0x563cd70886d0()*0.171844);
}

double _TMlpANN::synapse0x563cddbe50c0() {
   return (neuron0x563cd724b7b0()*-0.350505);
}

double _TMlpANN::synapse0x563cdf80e9e0() {
   return (neuron0x563cd73b45c0()*-0.122201);
}

double _TMlpANN::synapse0x563cda785290() {
   return (neuron0x563cd751d460()*0.575281);
}

double _TMlpANN::synapse0x563ce640be50() {
   return (neuron0x563cd762c0a0()*-0.0771761);
}

double _TMlpANN::synapse0x563cd7088b00() {
   return (neuron0x563cd773ac70()*0.458162);
}

double _TMlpANN::synapse0x563cdd3e3600() {
   return (neuron0x563cd77ef670()*0.963782);
}

double _TMlpANN::synapse0x563cd5d070f0() {
   return (neuron0x563cd784af60()*0.107188);
}

double _TMlpANN::synapse0x563cd8388bb0() {
   return (neuron0x563cda784e60()*0.195712);
}

double _TMlpANN::synapse0x563cd8388bf0() {
   return (neuron0x563cdb1624b0()*0.106121);
}

double _TMlpANN::synapse0x563cd8388c30() {
   return (neuron0x563ce640ba20()*-0.124128);
}

double _TMlpANN::synapse0x563cd8388c70() {
   return (neuron0x563cd6ca85a0()*0.381497);
}

double _TMlpANN::synapse0x563cd8388cb0() {
   return (neuron0x563cd6ec5760()*-0.0667291);
}

double _TMlpANN::synapse0x563cdb9d20b0() {
   return (neuron0x563cd70886d0()*-0.134089);
}

double _TMlpANN::synapse0x563cd9523560() {
   return (neuron0x563cd724b7b0()*-0.722907);
}

double _TMlpANN::synapse0x563cd9c2e060() {
   return (neuron0x563cd73b45c0()*0.361461);
}

double _TMlpANN::synapse0x563cd8cb16c0() {
   return (neuron0x563cd751d460()*-0.408791);
}

double _TMlpANN::synapse0x563cddad6380() {
   return (neuron0x563cd762c0a0()*-0.728125);
}

double _TMlpANN::synapse0x563cdb978100() {
   return (neuron0x563cd773ac70()*-0.819556);
}

double _TMlpANN::synapse0x563cdc081400() {
   return (neuron0x563cd77ef670()*0.812038);
}

double _TMlpANN::synapse0x563cd9a6c4d0() {
   return (neuron0x563cd784af60()*0.69992);
}

double _TMlpANN::synapse0x563cdaddfe30() {
   return (neuron0x563cda784e60()*-0.362966);
}

double _TMlpANN::synapse0x563cdaddfe70() {
   return (neuron0x563cdb1624b0()*-1.15155);
}

double _TMlpANN::synapse0x563cdaddfeb0() {
   return (neuron0x563ce640ba20()*-0.349719);
}

double _TMlpANN::synapse0x563cdaddfef0() {
   return (neuron0x563cd6ca85a0()*-0.111118);
}

double _TMlpANN::synapse0x563cdaddff30() {
   return (neuron0x563cd6ec5760()*-0.475164);
}

double _TMlpANN::synapse0x563cda3eeab0() {
   return (neuron0x563cd70886d0()*0.167148);
}

double _TMlpANN::synapse0x563cdd2d2e50() {
   return (neuron0x563cd724b7b0()*-0.31703);
}

double _TMlpANN::synapse0x563cd97f4500() {
   return (neuron0x563cd73b45c0()*0.3474);
}

double _TMlpANN::synapse0x563cd90366f0() {
   return (neuron0x563cd751d460()*0.316559);
}

double _TMlpANN::synapse0x563cd8ecd350() {
   return (neuron0x563cd762c0a0()*0.82961);
}

double _TMlpANN::synapse0x563cdef9bda0() {
   return (neuron0x563cd773ac70()*0.773776);
}

double _TMlpANN::synapse0x563cda286010() {
   return (neuron0x563cd77ef670()*-0.541921);
}

double _TMlpANN::synapse0x563cd876a680() {
   return (neuron0x563cd784af60()*-0.971685);
}

double _TMlpANN::synapse0x563cd8389ce0() {
   return (neuron0x563cda784e60()*0.22754);
}

double _TMlpANN::synapse0x563cd8389d20() {
   return (neuron0x563cdb1624b0()*-0.992493);
}

double _TMlpANN::synapse0x563cd8389d60() {
   return (neuron0x563ce640ba20()*0.0574254);
}

double _TMlpANN::synapse0x563cd8389da0() {
   return (neuron0x563cd6ca85a0()*-0.913465);
}

double _TMlpANN::synapse0x563cd8389de0() {
   return (neuron0x563cd6ec5760()*0.131639);
}

double _TMlpANN::synapse0x563cda0c2e80() {
   return (neuron0x563cd70886d0()*-0.406831);
}

double _TMlpANN::synapse0x563cdcef1a60() {
   return (neuron0x563cd724b7b0()*2.28169);
}

double _TMlpANN::synapse0x563cdb80f730() {
   return (neuron0x563cd73b45c0()*0.355947);
}

double _TMlpANN::synapse0x563cdcc7b280() {
   return (neuron0x563cd751d460()*1.14835);
}

double _TMlpANN::synapse0x563cd9ea60c0() {
   return (neuron0x563cd762c0a0()*0.0555214);
}

double _TMlpANN::synapse0x563cd9c89230() {
   return (neuron0x563cd773ac70()*0.810487);
}

double _TMlpANN::synapse0x563cdc731ee0() {
   return (neuron0x563cd77ef670()*1.96837);
}

double _TMlpANN::synapse0x563cda5b1d70() {
   return (neuron0x563cd784af60()*-0.55942);
}

double _TMlpANN::synapse0x563cd838ad90() {
   return (neuron0x563cda784e60()*0.830463);
}

double _TMlpANN::synapse0x563cd838add0() {
   return (neuron0x563cdb1624b0()*1.23032);
}

double _TMlpANN::synapse0x563cd838ae10() {
   return (neuron0x563ce640ba20()*-0.589539);
}

double _TMlpANN::synapse0x563cd838ae50() {
   return (neuron0x563cd6ca85a0()*1.0781);
}

double _TMlpANN::synapse0x563cd838ae90() {
   return (neuron0x563cd6ec5760()*-1.91225);
}

double _TMlpANN::synapse0x563cd8aee590() {
   return (neuron0x563cd70886d0()*0.420317);
}

double _TMlpANN::synapse0x563cda00e230() {
   return (neuron0x563cd724b7b0()*-0.610827);
}

double _TMlpANN::synapse0x563cde675830() {
   return (neuron0x563cd73b45c0()*-1.1025);
}

double _TMlpANN::synapse0x563cdc67e690() {
   return (neuron0x563cd751d460()*-2.09036);
}

double _TMlpANN::synapse0x563cd99b7b40() {
   return (neuron0x563cd762c0a0()*-2.26448);
}

double _TMlpANN::synapse0x563cddf6a7d0() {
   return (neuron0x563cd773ac70()*-2.26766);
}

double _TMlpANN::synapse0x563cdeb622e0() {
   return (neuron0x563cd77ef670()*-2.01328);
}

double _TMlpANN::synapse0x563cd9f5a3a0() {
   return (neuron0x563cd784af60()*0.934102);
}

double _TMlpANN::synapse0x563cda7806f0() {
   return (neuron0x563cda784e60()*0.112692);
}

double _TMlpANN::synapse0x563cda780730() {
   return (neuron0x563cdb1624b0()*-0.477282);
}

double _TMlpANN::synapse0x563cda780770() {
   return (neuron0x563ce640ba20()*-0.370055);
}

double _TMlpANN::synapse0x563cda7807b0() {
   return (neuron0x563cd6ca85a0()*-0.0546085);
}

double _TMlpANN::synapse0x563cda7807f0() {
   return (neuron0x563cd6ec5760()*1.16858);
}

double _TMlpANN::synapse0x563cde3a4640() {
   return (neuron0x563cd70886d0()*-0.117671);
}

double _TMlpANN::synapse0x563cda556be0() {
   return (neuron0x563cd724b7b0()*1.10449);
}

double _TMlpANN::synapse0x563cd9fb4b10() {
   return (neuron0x563cd73b45c0()*0.121645);
}

double _TMlpANN::synapse0x563cd735a280() {
   return (neuron0x563cd751d460()*0.456371);
}

double _TMlpANN::synapse0x563cd74c3040() {
   return (neuron0x563cd762c0a0()*0.305175);
}

double _TMlpANN::synapse0x563cd784bea0() {
   return (neuron0x563cd773ac70()*0.465471);
}

double _TMlpANN::synapse0x563cd784c500() {
   return (neuron0x563cd77ef670()*1.51121);
}

double _TMlpANN::synapse0x563ce0029270() {
   return (neuron0x563cd784af60()*0.562578);
}

double _TMlpANN::synapse0x563cdba858b0() {
   return (neuron0x563cda784e60()*0.0779834);
}

double _TMlpANN::synapse0x563cdba858f0() {
   return (neuron0x563cdb1624b0()*0.444986);
}

double _TMlpANN::synapse0x563cdd16a1e0() {
   return (neuron0x563ce640ba20()*0.739998);
}

double _TMlpANN::synapse0x563cdc081e10() {
   return (neuron0x563cd6ca85a0()*-0.0493551);
}

double _TMlpANN::synapse0x563cda4fd450() {
   return (neuron0x563cd6ec5760()*0.631819);
}

double _TMlpANN::synapse0x563cd8a3a860() {
   return (neuron0x563cd70886d0()*0.193857);
}

double _TMlpANN::synapse0x563ce0028890() {
   return (neuron0x563cd724b7b0()*0.888551);
}

double _TMlpANN::synapse0x563cd9d97620() {
   return (neuron0x563cd73b45c0()*-0.141499);
}

double _TMlpANN::synapse0x563cda60b460() {
   return (neuron0x563cd751d460()*-0.394273);
}

double _TMlpANN::synapse0x563ce00dd0c0() {
   return (neuron0x563cd762c0a0()*0.320547);
}

double _TMlpANN::synapse0x563cdade0100() {
   return (neuron0x563cd773ac70()*-0.459325);
}

double _TMlpANN::synapse0x563cda76b7b0() {
   return (neuron0x563cd77ef670()*-0.474701);
}

double _TMlpANN::synapse0x563cd5dbdd40() {
   return (neuron0x563cd784af60()*-0.0116819);
}

double _TMlpANN::synapse0x563cd838be40() {
   return (neuron0x563cda784e60()*-0.0729184);
}

double _TMlpANN::synapse0x563cd838be80() {
   return (neuron0x563cdb1624b0()*-0.0810292);
}

double _TMlpANN::synapse0x563cd838bec0() {
   return (neuron0x563ce640ba20()*-0.0268822);
}

double _TMlpANN::synapse0x563cd838bf00() {
   return (neuron0x563cd6ca85a0()*-0.273343);
}

double _TMlpANN::synapse0x563cd838bf40() {
   return (neuron0x563cd6ec5760()*0.386157);
}

double _TMlpANN::synapse0x563cd6e6b4c0() {
   return (neuron0x563cd70886d0()*-0.171446);
}

double _TMlpANN::synapse0x563cd72a5ee0() {
   return (neuron0x563cd724b7b0()*-0.295915);
}

double _TMlpANN::synapse0x563cda784d90() {
   return (neuron0x563cd73b45c0()*-0.601619);
}

double _TMlpANN::synapse0x563cda772ec0() {
   return (neuron0x563cd751d460()*-0.113026);
}

double _TMlpANN::synapse0x563cd7578610() {
   return (neuron0x563cd762c0a0()*0.301243);
}

double _TMlpANN::synapse0x563cda76b120() {
   return (neuron0x563cd773ac70()*0.00912177);
}

double _TMlpANN::synapse0x563cd800a3c0() {
   return (neuron0x563cd77ef670()*-0.108829);
}

double _TMlpANN::synapse0x563cda779070() {
   return (neuron0x563cd784af60()*-0.140697);
}

double _TMlpANN::synapse0x563cda7817a0() {
   return (neuron0x563cda784e60()*0.402355);
}

double _TMlpANN::synapse0x563cda7817e0() {
   return (neuron0x563cdb1624b0()*-0.349827);
}

double _TMlpANN::synapse0x563cda781820() {
   return (neuron0x563ce640ba20()*-0.459851);
}

double _TMlpANN::synapse0x563cda781860() {
   return (neuron0x563cd6ca85a0()*-0.180344);
}

double _TMlpANN::synapse0x563cda7818a0() {
   return (neuron0x563cd6ec5760()*-0.170177);
}

double _TMlpANN::synapse0x563cda76f080() {
   return (neuron0x563cd70886d0()*0.418222);
}

double _TMlpANN::synapse0x563cd784a7c0() {
   return (neuron0x563cd724b7b0()*0.191357);
}

double _TMlpANN::synapse0x563cd8004db0() {
   return (neuron0x563cd73b45c0()*0.261855);
}

double _TMlpANN::synapse0x563cd838af50() {
   return (neuron0x563cd751d460()*0.629553);
}

double _TMlpANN::synapse0x563cd6c4ed40() {
   return (neuron0x563cd762c0a0()*0.490077);
}

double _TMlpANN::synapse0x563cd73b5500() {
   return (neuron0x563cd773ac70()*-0.0630726);
}

double _TMlpANN::synapse0x563cdb4e3d40() {
   return (neuron0x563cd77ef670()*-0.117154);
}

double _TMlpANN::synapse0x563ce640a800() {
   return (neuron0x563cd784af60()*0.204999);
}

double _TMlpANN::synapse0x563cd838cf60() {
   return (neuron0x563cda784e60()*0.397363);
}

double _TMlpANN::synapse0x563cd838cfa0() {
   return (neuron0x563cdb1624b0()*0.315273);
}

double _TMlpANN::synapse0x563cd838cfe0() {
   return (neuron0x563ce640ba20()*-0.724322);
}

double _TMlpANN::synapse0x563cd838d020() {
   return (neuron0x563cd6ca85a0()*0.253722);
}

double _TMlpANN::synapse0x563cd838d060() {
   return (neuron0x563cd6ec5760()*-0.317294);
}

double _TMlpANN::synapse0x563cd6ca94b0() {
   return (neuron0x563cd70886d0()*1.18531);
}

double _TMlpANN::synapse0x563cda7845e0() {
   return (neuron0x563cd724b7b0()*2.0246);
}

double _TMlpANN::synapse0x563cd6fd4c40() {
   return (neuron0x563cd73b45c0()*-0.55949);
}

double _TMlpANN::synapse0x563cda771970() {
   return (neuron0x563cd751d460()*-0.267056);
}

double _TMlpANN::synapse0x563cd7089640() {
   return (neuron0x563cd762c0a0()*-1.75459);
}

double _TMlpANN::synapse0x563cd6ec55f0() {
   return (neuron0x563cd773ac70()*-0.375906);
}

double _TMlpANN::synapse0x563cd6c4e1f0() {
   return (neuron0x563cd77ef670()*1.16545);
}

double _TMlpANN::synapse0x563cd6db7a90() {
   return (neuron0x563cd784af60()*0.768584);
}

double _TMlpANN::synapse0x563cda782850() {
   return (neuron0x563cda770260()*-0.567296);
}

double _TMlpANN::synapse0x563cda782890() {
   return (neuron0x563cdd3e31c0()*0.400802);
}

double _TMlpANN::synapse0x563cda7828d0() {
   return (neuron0x563cdb9d1c70()*-0.886429);
}

double _TMlpANN::synapse0x563cda782910() {
   return (neuron0x563cd8388870()*1.12783);
}

double _TMlpANN::synapse0x563cda782950() {
   return (neuron0x563cdaddfaf0()*1.05677);
}

double _TMlpANN::synapse0x563cda785da0() {
   return (neuron0x563cd83899a0()*1.05167);
}

double _TMlpANN::synapse0x563cdb6fd8f0() {
   return (neuron0x563cd838aa50()*-2.63301);
}

double _TMlpANN::synapse0x563ce640da40() {
   return (neuron0x563cda7803b0()*0.811467);
}

double _TMlpANN::synapse0x563cdb4e4df0() {
   return (neuron0x563cdba85570()*-0.964548);
}

double _TMlpANN::synapse0x563cd73000b0() {
   return (neuron0x563cd838bb00()*0.189492);
}

double _TMlpANN::synapse0x563cda780280() {
   return (neuron0x563cda781460()*-0.203398);
}

double _TMlpANN::synapse0x563cdb4e25f0() {
   return (neuron0x563cd838cc20()*1.38256);
}

