######### Case 3: Extract of a Queue from FFMpeg.

This use case implements a queue data abstraction **struct AVAudioFifo**. This is a global variable that is used in av_audio_fifo_free, av_audio_fifo_alloc, av_audio_fifo_realloc, av_audio_fifo_write, av_audio_fifo_peek, etc functions of file **audio_fifo.c**.

This test case was selected as a starting case of keeping the base case simple.

FFmpeg is a collection of libraries and tools to process multimedia content such as audio, video, subtitles and related metadata. https://github.com/ubitux/FFmpeg/tree/2940af9389e5cb2a7509655195e5ccb928577ed2

 


