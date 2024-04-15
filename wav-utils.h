#ifndef WAV_UTILS_H
#define WAV_UTILS_H

void setWAVFileHeaders(struct WAVHeader *header);
void writeWAVFile(struct WAVHeader *header);
void generatePitchSamples(float pitch);

#endif 