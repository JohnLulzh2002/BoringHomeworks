program mongolian_high
    implicit none
    integer::i,j,k
    integer,parameter::n=60,s=160
    real,dimension(s,n)::x
    real,dimension(n)::y

    open(unit=10,file='t1601.txt',status='old',action='read')
    do i=1,n
        do j=1,8
            read(10,'(20f5.0)')(x(k,i),k=(j-1)*20+1,j*20,1)
        end do
    end do
    close(10)

    open(unit=10,file='h-p.dat',status='old',action='read')
    do i=1,n
        read(10,'(f10.2)')y(i)
    end do
    close(10)
    
    open(unit=10,file='out.dat',status='new',action='write')
    do i=1,s
        write(10,'(f8.5)')corr(x(i,:),y)
    end do
    close(10)

    open(unit=10,file='out.grd',status='new',action='write')
    do i=1,s
        write(10,'(f8.5)')corr(x(i,:),y)
    end do
    close(10)
contains
    real function corr(x,y)
    real,dimension(n),intent(in)::x,y
        integer::i
        real::xbar,ybar
        real,dimension(n)::a,b,c
        xbar=sum(x)/60
        ybar=sum(y)/60
        corr=1
        do i=1,60
            a(i)=(x(i)-xbar)*(y(i)-ybar)
            b(i)=(x(i)-xbar)**2
            c(i)=(y(i)-ybar)**2
        end do
        corr=sum(a)/sqrt(sum(b))/sqrt(sum(c))
        return
    end function corr
end program mongolian_high