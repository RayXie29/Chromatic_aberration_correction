# Chromatic aberration correction algorithm

This repo is the implementation of paper "Removing chromatic aberration by digital image processing" <br />
Chromatic aberration is due to different indices of color in light. And most of the time, it looked like color fringes along the boundary or color blur. <br /> 
This paper observe the color behavior on edges in image and correct the chrmoatic aberration by shifting the abnormal color varying into a reasonable range. First we need to set a threshold to find the edge where we will start to estimate the reasonable range for this area. Then we use maximum and minimum color difference between B&G and R&G to be the BG/RG color difference threshold of this range. If we found a pixel which its R-G and B-G bigger or smaller than color difference threshold in this range, then we use this threshold to replace its color difference. Also we need to do above steps in both horizontal and vertical direction to correct all the color aberration in image. <br />
<br />
Here is the zoom in view of original image<br />
As you can see, there are many color fringes on the edge of lamp<br />
![alt text](https://raw.githubusercontent.com/RayXie29/Chromatic_aberration_correction/master/imgs/beforeCorrection.bmp)
<br />
<br />
<br />
Here is the zoom in view after correction<br />
Teh chromatic aberration were corrected and the quality of other region remain almost the same.<br />
![alt text](https://raw.githubusercontent.com/RayXie29/Chromatic_aberration_correction/master/imgs/afterCorrection.bmp)

<br />
<br />
Reference:<br />
1.https://www.spiedigitallibrary.org/journals/Optical-Engineering/volume-49/issue-6/067002/Removing-chromatic-aberration-by-digital-image-processing/10.1117/1.3455506.short?SSO=1 (Removing chromatic aberration by digital image processing)<br />
