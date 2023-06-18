program forFun
    implicit none
    integer :: num,i
    integer :: table

    write(*,*) "Enter the number : "
    read(*,*) num
    do i = 1, 10
        table = num * i
        print *, table
    end do
end program forFun