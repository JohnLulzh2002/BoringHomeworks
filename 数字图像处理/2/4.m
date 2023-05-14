f=imread('pout.tif');
[x,y]=size(f);
p=zeros([256,1]);
for i=f
	for j=i.'
		p(j+1)=p(j+1)+1;
	end
end
p=double(p)/double(x*y);
c=zeros([256,1]);
c(1)=p(1);
for i=2:256
	c(i)=c(i-1)+p(i);
end
c=round(c*255);
g=f;
for i=1:x
    for j=1:y
		g(i,j)=c(f(i,j)+1);
	end
end
subplot(2,2,1);imshow(f);title('pout');
subplot(2,2,2);imshow(g);title('hist-equal');
subplot(2,2,3);hist(f);
subplot(2,2,4);hist(g);