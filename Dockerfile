FROM ubuntu:18.10
RUN apt-get update
RUN apt-get install -y build-essential cppcheck clang-tidy clang
RUN mkdir /root/modern
WORKDIR /root/modern
CMD /bin/bash