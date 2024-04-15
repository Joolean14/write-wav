#include <math.h>
#include <stdio.h>
#include <string.h>

// #include "wav-utils.h"
// #include "wav-headers.h"





// void writeWAVFile() {
//   FILE *fp = fopen("c4.wav", "w");
//   fwrite(&wavh, 1, header_length, fp);
//   fwrite(buffer, 2, buffer_size, fp);
// }

// void generatePitchSamples(float pitch) {
//   for (int i = 0; i < buffer_size; i++) {
//     buffer[i] = (short int)((cos((2 * M_PI * pitch * i) / sample_rate) * 1000));
//   }
// }

// void setWAVFileHeaders(struct WAVHeader *header) {

//   strncpy(wavh.riff, "RIFF", 4);
//   strncpy(wavh.wave, "WAVE", 4);
//   strncpy(wavh.fmt, "fmt ", 4);
//   strncpy(wavh.data, "data", 4);

//   wavh.chunk_size = 16;
//   wavh.format_tag = 1;
//   wavh.num_chans = 1;
//   wavh.srate = sample_rate;
//   wavh.bits_per_samp = 16;
//   wavh.bytes_per_sec = wavh.srate * wavh.bits_per_samp / 8 * wavh.num_chans;
//   wavh.bytes_per_samp = wavh.bits_per_samp / 8 * wavh.num_chans;
//   wavh.dlength = buffer_size * wavh.bytes_per_samp;
//   wavh.flength = wavh.dlength + header_length;
// };