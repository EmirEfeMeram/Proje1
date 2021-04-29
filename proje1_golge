#Proje_2 Sonuç kodları
import numpy as np
import cv2 

img=cv2.imread('staj_shape9.jpg')
gray1 = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)#grayscale uyguladık
scale_percent = 70 # orjinal boyutun %70 oranı
width = int(img.shape[1] * scale_percent / 100)
height = int(img.shape[0] * scale_percent / 100)
dim = (width, height)  
img = cv2.resize(img, dim, interpolation = cv2.INTER_AREA)#img boyutunu ayarladık
gray1 = cv2.resize(gray1, dim, interpolation = cv2.INTER_AREA)#grayscale boyutunu ayarladık
gray1 = cv2.blur(gray1,(5,5))#grayscale'e gauss filtresi uyguladık

img1=cv2.blur(gray1,(3,3))-20#adaptive treshold için filtre uyguladık

_,threshold=cv2.threshold(img1,90,255,cv2.THRESH_BINARY)#treshold çıkardık
_,contours,_=cv2.findContours(threshold,cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)#kontörleri kümeledik
sorted_contours= sorted(contours, key=cv2.contourArea)#kontör kümelerin küçükten büyüğe sıraladık / label işlemi yaptık 


for cnt in sorted_contours:#kontör kümeleri içinde for döngüsü oluşturduk
    img2 = cv2.imread('staj_shape9.jpg',cv2.IMREAD_GRAYSCALE)#resimi tekrar içe aktardık grayscale uyguladık
    scale_percent = 70
    width = int(img2.shape[1] * scale_percent / 100)
    height = int(img2.shape[0] * scale_percent / 100)
    dim = (width, height)  
    img2 = cv2.resize(img2, dim, interpolation = cv2.INTER_AREA)#boyutunu ayarladık
    img2 = cv2.blur(img2,(5,5))#gauss filtresi uyguladık
    
    img2=cv2.blur(img2,(3,3))-20 #adaptive treshold için filtre uyguladık
    
    cv2.drawContours(img,[cnt],0,(0),5)#kontör çizdirdik
    size=cv2.contourArea(cnt)#kontör kümelerinin boyutunu hesapladık
    M= cv2.moments(cnt)#yazıları yerleştirmek için kullandığımız kodlar
    cx= int(M['m10']/M['m00'])#yazıları yerleştirmek için kullandığımız kodlar
    cy= int(M['m01']/M['m00'])#yazıları yerleştirmek için kullandığımız kodlar
    x,y,w,h= cv2.boundingRect(cnt)#yazıları yerleştirmek için kullandığımız kodlar

    if size <100000:#100000 den küçük kontör sayısına sahip kontör kümelerini aldık böylece sadece şekiller üzerinde işlem yap
        gray = np.float32(img2)
        mask = np.zeros(gray.shape, dtype="uint8")#alınan şekile mask işlemi uyguladık
        cv2.fillPoly(mask, [cnt], (255,255,255))
        edges = cv2.Canny(mask, 50, 100)#mask uygulanmış şekilin canny sini çıkardık
        lines = cv2.HoughLinesP(edges, 2, np.pi/184, 60, np.array([]), 50, 50)#şekilde ki düz çizgileri bulduk
        
        for line in lines:
            kenar=len(lines)#şekilde ki düz çizgileri saydırdık böylece kenar sayısını bulduk

        #kenar sayısına göre şekil ismini yazdırdık
        if kenar==3:
            cv2.putText(img, text='Ucgen', org=(cx-10,y+30),
            fontFace= cv2.FONT_HERSHEY_SIMPLEX, fontScale=1, color=(0,255,0),
            thickness=2, lineType=cv2.LINE_AA)
        elif kenar==4:
            cv2.putText(img, text='Dikdortgen', org=(cx-10,y+30),
            fontFace= cv2.FONT_HERSHEY_SIMPLEX, fontScale=1, color=(0,255,0),
            thickness=2, lineType=cv2.LINE_AA)
        elif kenar==5:
            cv2.putText(img, text='Besgen', org=(cx-10,y+30),
            fontFace= cv2.FONT_HERSHEY_SIMPLEX, fontScale=1, color=(0,255,0),
            thickness=2, lineType=cv2.LINE_AA)
        elif kenar==6:
            cv2.putText(img, text='Altigen', org=(cx-10,y+30),
            fontFace= cv2.FONT_HERSHEY_SIMPLEX, fontScale=1, color=(0,255,0),
            thickness=2, lineType=cv2.LINE_AA)
        else:
            cv2.putText(img, text='Daire', org=(cx-10,y+30),
            fontFace= cv2.FONT_HERSHEY_SIMPLEX, fontScale=1, color=(0,255,0),
            thickness=2, lineType=cv2.LINE_AA)
            

cv2.imshow('staj_shape9',img)
cv2.waitKey(0)
cv2.destroyAllWindows()
