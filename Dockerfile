FROM gcc:latest
COPY . /usr/src/c_solver
WORKDIR /usr/src/c_solver
RUN gcc -o c_solver main.c
CMD ["./c_solver"]