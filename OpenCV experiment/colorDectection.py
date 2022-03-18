import cv2

import numpy as np

def empty():
    pass

cv2.namedWindow("tracbars")
cv2.resizeWindow("tracbars",640,240)

#trackbar making for hue,stauration,value.......
cv2.createTrackbar("hueMIN","tracbars",0,179,empty)
cv2.createTrackbar("hueMAX","tracbars",36,179,empty)

cv2.createTrackbar("saturationMIN","tracbars",110,255,empty)
cv2.createTrackbar("saturationMax","tracbars",255,255,empty)

cv2.createTrackbar("ValueMIN","tracbars",95,255,empty)
cv2.createTrackbar("ValueMAX","tracbars",255,255,empty)


#trackbar read function......

while True:
 
    img = cv2.imread("lambo.jpg")

    imgHSV = cv2.cvtColor(img,cv2.COLOR_BGR2HSV)
    h_min = cv2.getTrackbarPos("hueMIN","tracbars")
    h_max = cv2.getTrackbarPos("hueMAX","tracbars")

    s_min = cv2.getTrackbarPos("saturationMIN","tracbars")
    s_max = cv2.getTrackbarPos("saturationMax","tracbars")

    v_min = cv2.getTrackbarPos("ValueMIN","tracbars")
    v_max = cv2.getTrackbarPos("ValueMAX","tracbars")
    print(h_min,h_max,s_min,s_max,v_min,v_max)

    lower = np.array([h_min,s_min,v_min])
    upper = np.array([h_max,s_max,v_max])

    #it will return filttered out the image
    mask = cv2.inRange(imgHSV,lower,upper)
    #it gives us the result image which contain only orange color .....
    imgResult = cv2.bitwise_and(img,img,mask=mask)

    cv2.imshow("original image",img)
    cv2.imshow("hsv image",imgHSV)
    cv2.imshow("mask image",mask)
    cv2.imshow("result image",imgResult)
    cv2.waitKey(1)







