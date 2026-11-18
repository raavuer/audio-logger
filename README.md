### Audio Logger

This project is for learning C but has real application as well. My goal is for an audio logger that could used for my local church's radio station. The intent is to have a week's worth of on air audio recorded so that one could compare system and device logs with the real audio of what played. This does have other applications and will basically be an audio recorder with time-based retention and deletion, but it is also for me to learn and practice with an attempt at not using AI (critical thinking baby!!) and using mostly documentation for learning and reference.

Assuming you air/record at 96kbps, one day of audio will be approximately 1GB of data, and one week will be approximately 7.26GB. I might consider adding a compression algorithm or technique to shrink this more, but 1GB seems fine for a whole day's recording.

---

Psuedo Code:

    audio-file = file.create("audio.mp3")
    file.open(audio-file)
    audio-stream = input-stream(audio-source)
    while (time.now != 00:00):
      file.write(audio-file, audio-stream)
    file.close(audio-file)

