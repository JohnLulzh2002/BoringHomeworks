f=imread('pout.tif');
a=min(min(f));
b=max(max(f));
g=uint8(double(f-a)/double(b-a)*255);
subplot(2,2,1);imshow(f);title('pout');
subplot(2,2,2);imshow(g);title('linear');
subplot(2,2,3);hist(f);title('pout-hist');
subplot(2,2,4);hist(g);title('linear-hist');
