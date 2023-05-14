program highTemp2
    implicit none
    integer,dimension(31)::t,h=0,hh=0
    integer::i,s,c=1
    open(unit=10,file='temp.txt',status="old",&
        action="read",position="rewind",iostat=s)
    if(s>0) stop "Cannot open file."
    do i=1,31
        read(10,'(i2)',iostat=s)t(i)
        if(s>0) t(i)=0
    end do
    s=0
    do i=1,31
        if(t(i)==0)then
            select case(i)
            case(1)
                t(i)=t(i+1)
            case(2:30)
                t(i)=(t(i-1)+t(i+1))/2
            case(31)
                t(i)=t(i-1)
            end select
        end if
        if(t(i)>=35)then
            h(c)=h(c)+1
            hh(c)=hh(c)+t(i)-35
        else if(h(c)>2)then
            c=c+1
        else
            h(c)=0
            hh(c)=0
        end if
    end do
    if(h(c)>0)c=c+1
    write(*,'(a,i2,a)')'There are ',c-1,' high temperature events'
    do i=1,c-1
        write(*,'(a,i2,a,i2,a,i2)')'Event ',i,' last for ',h(i),' days. Severity: ',hh(i)
    end do
end program highTemp2