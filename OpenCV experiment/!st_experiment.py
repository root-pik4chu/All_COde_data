
import cv2

print("its working...")

'''img = cv2.imread("sudo.jpg")
cv2.imshow("output",img)
cv2.waitKey(0)
'''


cap = cv2.VideoCapture(0)
cap.set(3,560)
cap.set(4,480)
cap.set(10,100)


while True:
    success , img = cap.read()
    cv2.imshow("video",img)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break


