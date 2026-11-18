### Audio Logger

This project is for learning C but has real application. My goal is to make an audio logger to be used for my local church's radio station. The intent is to have a backup of the last week's on air audio so that, as needed, one can look back and compare system and device logs with the real audio as to what had played. This does have other applications of course and will simply be an audio recorder with time-based retention and deletion, but it is also for me to learn and practice with the attempt at not using AI (critical thinking baby!! )and mostly documentation for learning and reference.

Assuming you air/record at 96kbps, one day of audio will be approximately 1GB of data, and one week will be approximately 7.26GB. I might consider adding a compression algorithm or technique to shrink this more, but 1GB seems fine for a whole day's recording.

---

Psuedo Code:

    audio-file = file.create("audio.mp3")
    file.open(audio-file)
    audio-stream = input-stream(audio-source)
    while (time.now != 00:00):
      file.write(audio-file, audio-stream)
    file.close(audio-file)

