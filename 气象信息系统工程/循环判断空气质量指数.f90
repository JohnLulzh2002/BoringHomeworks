program main
    implicit none
    character(9),dimension(5)::s=(/'�人   ','����   ','����   ','����   ','������'/)
    integer,dimension(5)::len=(/6,6,6,6,9/)
    integer::i
    real::t,rh,v,ichb
    ! parameter(E0=6.11)
    ! E1=E0*exp(17.67*t/(243.5+t))
    ! print *,"t=",t
    do i=1,5
        print *,'����'//s(i)(1:len(i))//'��ƽ������(��λ����):'
        read *,t
        print *,'����'//s(i)(1:len(i))//'���ʪ�ȣ���λ��%��:'
        read *,rh
        print *,'����'//s(i)(1:len(i))//'��ƽ�����٣���λ��m/s��:'
        read *,v
        ichb=(1.8*t+32)-0.55*(1-rh/100)*(1.8*t-26)-3.2*sqrt(v)
        if(ichb<=25)then
            print *,s(i)(1:len(i))//'��к���'
        else if(ichb<=38)then
            print *,s(i)(1:len(i))//'�����'
        else if(ichb<=50)then
            print *,s(i)(1:len(i))//'�����'
        else if(ichb<=55)then
            print *,s(i)(1:len(i))//'�����ˬ'
        else if(ichb<=70)then
            print *,s(i)(1:len(i))//'������'
        else if(ichb<=75)then
            print *,s(i)(1:len(i))//'���ů��'
        else if(ichb<=80)then
            print *,s(i)(1:len(i))//'�����'
        else if(ichb<=85)then
            print *,s(i)(1:len(i))//'�������'
        else
            print *,s(i)(1:len(i))//'��п���'
        end if
        write (*,'(a,f6.2)') '�������ʶ�ָ��:',ichb
    end do
    stop
end program main