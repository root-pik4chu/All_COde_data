

import cv2

def contours(img):
    contours,hirearchy  = cv2.findContours(img,cv2.RETR_EXTERNAL,cv2.CHAIN_APPROX_NONE)
    for cnt in contours:
        area = cv2.contourArea(cnt)
        print(area,"- area")
        cv2.drawContours(imgcontour,cnt,-1,(100,255,0),4)
        perimeter = cv2.arcLength(cnt,True)
        print(perimeter,"- perimeter")
        approx = cv2.approxPolyDP(cnt,0.02*perimeter,True)
        print(len(approx),"- points")

img = cv2.imread("shapes.png")
imgcontour = img.copy()

imgGray = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
imgBlur = cv2.GaussianBlur(imgGray,(7,7),1)
imgCanny = cv2.Canny(imgBlur,50,50)
contours(imgCanny)

#cv2.imshow("image gray ",imgGray)
cv2.imshow("image original ",img)
cv2.imshow("image canny ",imgCanny)
cv2.imshow("imgcontour",imgcontour)
#cv2.imshow("image blur ",imgBlur)
cv2.waitKey(0)
     
# udyaa bakicha kam  kraaa lagtee...okay
#image khali naav lihina baki raylaa
#ajaun lay sara kam bi aahe like ... height and width le kadhnaa 
#an sobt calculate krnaaa




