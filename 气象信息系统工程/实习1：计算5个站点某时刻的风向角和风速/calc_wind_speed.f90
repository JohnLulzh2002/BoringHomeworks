program calc_wind_speed
    implicit none
    integer::t=0,i
    real,parameter::pi=3.1415926
    character(8),dimension(5)::s
    real,dimension(5)::alpha,v_bar,u,v
    open(unit=10,file='wind.txt',status="old",action="read",position="rewind",iostat=t)
    if(t>0)stop "Can't open data file"
    do i=1,5
        read(10,'(a6,f4.0,f3.1)',iostat=t)s(i),alpha(i),v_bar(i)
        if(t>0)stop "Can't read file"
        u(i)=v_bar(i)*sind(alpha(i)-180)
        v(i)=v_bar(i)*cosd(alpha(i)-180)
    end do
    close(10)
    open(unit=10,file='result.txt',status="new",action="write",position="rewind",iostat=t)
    if(t>0)stop "Can't open result file"
    do i=1,5
        write(10,'(a6,2f8.4)',iostat=t)s(i),u(i),v(i)
        if(t>0)stop "Can't write file"
    end do
    close(10)
end program calc_wind_speed