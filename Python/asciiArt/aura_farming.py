import cv2
import os
import time

# ASCII characters from darkest to lightest
ASCII_CHARS = "@%#*+=-:. "

def frame_to_ascii(frame, new_width=80):
    # Convert frame to grayscale
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    # Resize based on aspect ratio and width
    height, width = gray.shape
    aspect_ratio = height / width
    new_height = int(aspect_ratio * new_width * 0.55)  # 0.55 corrects squishing

    resized_gray = cv2.resize(gray, (new_width, new_height))

    # Map pixels to ASCII characters
    ascii_frame = ""
    for row in resized_gray:
        line = "".join(ASCII_CHARS[pixel // 25] for pixel in row)
        ascii_frame += line + "\n"
    return ascii_frame

def play_video_ascii(path):
    cap = cv2.VideoCapture(path)

    if not cap.isOpened():
        print(f"❌ Could not open video file: {path}")
        return

    try:
        while True:
            ret, frame = cap.read()
            if not ret:
                break

            # Clear screen
            os.system('cls' if os.name == 'nt' else 'clear')

            # Print ASCII frame
            print(frame_to_ascii(frame, new_width=80))

            # Control frame rate
            time.sleep(1 / 30)  # 30 FPS
    except KeyboardInterrupt:
        print("\n⏹ Playback stopped by user.")
    finally:
        cap.release()

if __name__ == "__main__":
    play_video_ascii("/Users/madhavjha/Documents/Codes/Python/asciiArt/aura_clean.mp4")