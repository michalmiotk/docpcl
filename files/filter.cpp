#include <iostream>
#include <pcl/point_types.h>
#include <pcl/filters/passthrough.h>
#include <pcl/point_cloud.h>

int main (int argc, char** argv)
{
  pcl::PointCloud<pcl::PointXYZ>::Ptr cloud (new pcl::PointCloud<pcl::PointXYZ>);
  pcl::PointCloud<pcl::PointXYZ>::Ptr cloud_filtered (new pcl::PointCloud<pcl::PointXYZ>);

  // Fill in the cloud data
  cloud->width  = 4;
  cloud->height = 1;
  cloud->points.resize (cloud->width * cloud->height);

  
  // Create the filtering object
  pcl::PassThrough<pcl::PointXYZ> a;
  return (0);
}
