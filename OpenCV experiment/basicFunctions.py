import cv2
import numpy as np


img = cv2.imread("sudo.jpg")

kernal = np.ones((5,5),np.uint8)

imGray = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
imblur = cv2.GaussianBlur(img,(7,7),0)

imgDilation = cv2.dilate(img,kernal,iterations=1)
imgEroded = cv2.erode(imgDilation,kernal,iterations=1)
imgCanny = cv2.Canny(img,100,100)

cv2.imshow("grey image ",imGray)
cv2.imshow("original image",img)
cv2.imshow("blur image",imblur)
cv2.imshow("Canny image",imgCanny)
cv2.imshow("dilate image",imgDilation)
cv2.imshow("eroded ",imgEroded)
cv2.waitKey(0)




