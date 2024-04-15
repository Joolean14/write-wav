#include <stdio.h>


#ifndef WAV_HEADERS_H
#define WAV_HEADERS_H

struct wav_header {
  char riff[4];             // "RIFF"
  __int32_t flength;        // file length in bytes
  char wave[4];             // "WAVE"
  char fmt[4];              // "fmt "
  __int32_t chunk_size;     // size of FMT chunk in bytes (usually 16)
  __int16_t format_tag;     // 1=PCM, 257=Mu-Law, 258=A-Law, 259=ADPCM
  __int16_t num_chans;      // 1=mono, 2=stereo
  __int32_t srate;          // Sampling rate in samples per second
  __int32_t bytes_per_sec;  // bytes per second = srate*bytes_per_samp
  __int16_t bytes_per_samp; // 2=16-bit mono, 4=16-bit stereo
  __int16_t bits_per_samp;  // Number of bits per sample
  char data[4];             // "data"
  __int32_t dlength;        // data length in bytes (filelength - 44)
};


// const int sample_rate = 8000;
// const int duration_seconds = 10;
// const int buffer_size = sample_rate * duration_seconds;
// short int buffer[buffer_size] = {};

// const int header_length = sizeof(struct wav_header);

#endif 