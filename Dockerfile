FROM ubuntu
RUN apt -y update && apt -y install build-essential
WORKDIR /tmp
COPY greatest.c  .
RUN gcc greatest.c
CMD ["./a.out"]
