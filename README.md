## WAV File Format

The WAVE file format, known as WAV (Waveform Audio File Format), is a subset of Microsoft’s Resource Interchange File Format (RIFF) specification designed for storing digital audio files. Unlike newer audio formats like MP3, WAV does not apply any compression to the audio data, resulting in larger file sizes while maintaining high audio quality. However, WAV files can be compressed using Audio Compression Manager (ACM) codecs. It is commonly used for storing audio recordings, including those found on audio CDs.

### WAV File Structure

A WAV file consists of a file header followed by a sequence of data chunks. The file header contains metadata information about the audio file, while the data chunks store the actual sample data.

#### WAV File Header

The WAV file header is 44 bytes long and follows this format:

| Positions | Sample Value | Description                                           |
|-----------|--------------|-------------------------------------------------------|
| 1 - 4     | “RIFF”       | Marks the file as a RIFF file                         |
| 5 - 8     | File size    | Size of the overall file - 8 bytes, in bytes          |
| 9 -12     | “WAVE”       | File Type Header                                      |
| 13-16     | “fmt "        | Format chunk marker                                   |
| 17-20     | 16           | Length of format data as listed above                 |
| 21-22     | 1            | Type of format (1 is PCM)                             |
| 23-24     | 2            | Number of Channels                                    |
| 25-28     | 44100        | Sample Rate                                           |
| 29-32     | 176400       | (Sample Rate * BitsPerSample * Channels) / 8          |
| 33-34     | 4            | (BitsPerSample * Channels) / 8                        |
| 35-36     | 16           | Bits per sample                                       |
| 37-40     | “data”       | “data” chunk header                                   |
| 41-44     | File size    | Size of the data section                              |

Sample values are provided above for a 16-bit stereo source.

### WAV File Usage

WAV files are widely supported across various platforms and software applications. They are commonly used for audio editing, playback, and distribution of high-quality audio recordings.

### Compression

While WAV files do not apply compression to the audio data, they can be compressed using Audio Compression Manager (ACM) codecs to reduce file sizes.

---

*Did you know? You can contribute to the file format community by sharing your knowledge and findings at [FileFormat.com](https://www.fileformat.com/)!*
