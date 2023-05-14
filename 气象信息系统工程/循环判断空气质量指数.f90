program main
    implicit none
    character(9),dimension(5)::s=(/'武汉   ','深圳   ','温州   ','北京   ','哈尔滨'/)
    integer,dimension(5)::len=(/6,6,6,6,9/)
    integer::i
    real::t,rh,v,ichb
    ! parameter(E0=6.11)
    ! E1=E0*exp(17.67*t/(243.5+t))
    ! print *,"t=",t
    do i=1,5
        print *,'输入'//s(i)(1:len(i))//'日平均气温(单位：℃):'
        read *,t
        print *,'输入'//s(i)(1:len(i))//'相对湿度（单位：%）:'
        read *,rh
        print *,'输入'//s(i)(1:len(i))//'日平均风速（单位：m/s）:'
        read *,v
        ichb=(1.8*t+32)-0.55*(1-rh/100)*(1.8*t-26)-3.2*sqrt(v)
        if(ichb<=25)then
            print *,s(i)(1:len(i))//'体感寒冷'
        else if(ichb<=38)then
            print *,s(i)(1:len(i))//'体感冷'
        else if(ichb<=50)then
            print *,s(i)(1:len(i))//'体感凉'
        else if(ichb<=55)then
            print *,s(i)(1:len(i))//'体感凉爽'
        else if(ichb<=70)then
            print *,s(i)(1:len(i))//'体感舒服'
        else if(ichb<=75)then
            print *,s(i)(1:len(i))//'体感暖和'
        else if(ichb<=80)then
            print *,s(i)(1:len(i))//'体感热'
        else if(ichb<=85)then
            print *,s(i)(1:len(i))//'体感炎热'
        else
            print *,s(i)(1:len(i))//'体感酷热'
        end if
        write (*,'(a,f6.2)') '人体舒适度指数:',ichb
    end do
    stop
end program main