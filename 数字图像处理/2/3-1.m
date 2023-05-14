f1=imread('0308.bmp');
g1=log(f1+1);
g1=uint8(g1*(255.0/max(max(g1)))+0.5);
subplot(2,2,1);imshow(f1);title('0308');
subplot(2,2,2);imshow(g1);title('log');
subplot(2,2,3);hist(f1);title('0308-hist');
subplot(2,2,4);hist(g1);title('log-hist');
