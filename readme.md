# how to docker 

sudo docker build . -t pcl  
sudo docker run -it -v /home/m/docpcl/files:/files pcl  



# how to compile

#g++ filter.cpp -o files -I/usr/local/include/pcl-1.8/pcl -I/usr/local/include/pcl-1.8 -I/usr/include/eigen3 -L/usr/local/lib/ -L/usr/lib/x86_64-linux-gnu/ -I/usr/include/boost -I/usr/include/ -lpcl_common -lpcl_filters