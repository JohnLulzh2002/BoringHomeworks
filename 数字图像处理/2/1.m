pkg load image;
f=imread('pout.tif');
subplot(1,2,1);imshow(f);title('pout');
subplot(1,2,2);imshow(imadjust(f));title('imadjust');