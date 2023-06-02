program windplot
parameter(nx=37,ny=17,nt=48)
real,dimension(nx,ny,nt)::u,v
open(10,file='U850.dat')
do it=1,nt
    read(10,'(2i7)')
    read(10,'(37f6.2)')((u(i,j,it),i=1,nx),j=1,ny)
end do
close(10)
open(11,file='V850.dat')
do it=1,nt
    read(11,'(2i7)')
    read(11,'(37f6.2)')((v(i,j,it),i=1,nx),j=1,ny)
end do
close(11)
open(12,file='uv.grd',Access='Direct',Form='Unformatted',RecL=4*nx*ny)
do it=1,nt
    write(12,rec=it)((u(i,j,it),i=1,nx),j=1,ny)
    write(12,rec=it)((v(i,j,it),i=1,nx),j=1,ny)
end do
close(12)
end program windplot