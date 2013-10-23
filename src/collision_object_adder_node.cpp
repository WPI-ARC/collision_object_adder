#include "ros/ros.h"
#include "shape_msgs/Mesh.h"
#include "shape_msgs/MeshTriangle.h"
#include "geometry_msgs/Point.h"
#include "geometry_msgs/Pose.h"
#include "moveit_msgs/CollisionObject.h"
#include "visualization_msgs/Marker.h"

#include "std_msgs/String.h"

#include <sstream>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "talker");

 
  ros::NodeHandle n;

  ros::Publisher collision_object_publisher = n.advertise<moveit_msgs::CollisionObject>("collision_object", 1000);
  ros::Publisher vis_pub = n.advertise<visualization_msgs::Marker>( "visualization_marker", 0 );

  ros::Publisher chatter_pub = n.advertise<std_msgs::String>("chatter", 1000);

	/*while(collision_object_publisher.getNumSubscribers() < 1)
	{
  ros::WallDuration sleep_t(0.5);
  sleep_t.sleep();    
	}*/

//create a marker message 
  visualization_msgs::Marker marker;
	marker.header.frame_id = "odom_combined";
	marker.header.stamp = ros::Time();
	marker.ns = "rviz_mesh_display";
	marker.id = 0;
	marker.type = visualization_msgs::Marker::TRIANGLE_LIST;
	marker.action = visualization_msgs::Marker::ADD;
	marker.scale.x = 1;
	marker.scale.y = 1;
	marker.scale.z = 1;
	marker.pose.orientation.w = 1.0;	
	marker.color.a = 1.0;
	marker.color.r = 0.0;
	marker.color.g = 1.0;
	marker.color.b = 0.0;
	marker.points;

//create a mesh object message
  moveit_msgs::CollisionObject add_object;
	add_object.header.frame_id = "odom_combined";
	add_object.id = "mesh";
	shape_msgs::Mesh mesh;
	geometry_msgs::Pose pose;

/*	geometry_msgs::Point point0;
	point0.x=0.5; point0.y=-0.8; point0.z=0.8;
	geometry_msgs::Point point1;
	point1.x=1; point1.y=-0.8; point1.z=0.8;
	geometry_msgs::Point point2;
	point2.x=0.5; point2.y=-0.3; point2.z=0.8;
	geometry_msgs::Point point3;
	point3.x=0.5; point3.y=-0.8; point3.z=1.3;
*/
	geometry_msgs::Point point0;
	point0.x=0.7; point0.y=-0.9; point0.z=0;
	geometry_msgs::Point point1;
	point1.x=1.2; point1.y=-0.8; point1.z=0.8;
	geometry_msgs::Point point2;
	point2.x=0.7; point2.y=-0.4; point2.z=0;
	geometry_msgs::Point point3;
	point3.x=0.7; point3.y=-0.9; point3.z=1.3;
	geometry_msgs::Point point4;
	point4.x=0.7; point4.y=-0.55; point4.z=1.05;
	geometry_msgs::Point point5;
	point5.x=0.7; point5.y=-0.8; point5.z=1.05;
	geometry_msgs::Point point6;
	point6.x=0.7; point6.y=-0.55; point6.z=0.8;
	geometry_msgs::Point point7;
	point7.x=0.95; point7.y=-0.8; point7.z=1.05;
	geometry_msgs::Point point8;
	point8.x=0.95; point8.y=-0.8; point8.z=0.8;
	geometry_msgs::Point point9;
	point9.x=0.95; point9.y=-0.55; point9.z=0.8;

	geometry_msgs::Point point10;
	point10.x=0.7; point10.y=-0.4; point10.z=1.3;
	geometry_msgs::Point point11;
	point11.x=0.7; point11.y=-0.55; point11.z=1.3;
	geometry_msgs::Point point12;
	point12.x=0.7; point12.y=-0.3; point12.z=1.05;
	geometry_msgs::Point point13;
	point13.x=1.2; point13.y=-0.4; point13.z=1.3;
	geometry_msgs::Point point14;
	point14.x=1.2; point14.y=-0.3; point14.z=1.05;
	geometry_msgs::Point point15;
	point15.x=1.2; point15.y=-0.4; point15.z=0;
	geometry_msgs::Point point16;
	point16.x=0.95; point16.y=-0.3; point16.z=1.3;
	geometry_msgs::Point point17;
	point17.x=0.95; point17.y=-0.3; point17.z=0.8;
	geometry_msgs::Point point18;
	point18.x=0.95; point18.y=-0.3; point18.z=1.05;

//fill points in marker message
/*
	marker.points.push_back(point0);
	marker.points.push_back(point1);
	marker.points.push_back(point2);
	marker.points.push_back(point0);
	marker.points.push_back(point1);
	marker.points.push_back(point3);
	marker.points.push_back(point1);
	marker.points.push_back(point2);
	marker.points.push_back(point3);
	marker.points.push_back(point2);
	marker.points.push_back(point0);
	marker.points.push_back(point3);

	marker.points.push_back(point10);
	marker.points.push_back(point3);
	marker.points.push_back(point2);
	marker.points.push_back(point10);
	marker.points.push_back(point2);
	marker.points.push_back(point15);
	marker.points.push_back(point10);
	marker.points.push_back(point13);
	marker.points.push_back(point15);
	marker.points.push_back(point10);
	marker.points.push_back(point13);
	marker.points.push_back(point3);
	marker.points.push_back(point13);
	marker.points.push_back(point3);
	marker.points.push_back(point1);
	marker.points.push_back(point13);
	marker.points.push_back(point15);
	marker.points.push_back(point1);
*/




//fill points in mesh object message
	mesh.vertices.push_back(point0);
	mesh.vertices.push_back(point1);
	mesh.vertices.push_back(point2);
	mesh.vertices.push_back(point3);
	mesh.vertices.push_back(point4);
	mesh.vertices.push_back(point5);
	mesh.vertices.push_back(point6);
	mesh.vertices.push_back(point7);
	mesh.vertices.push_back(point8);
	mesh.vertices.push_back(point9);

	mesh.vertices.push_back(point10);
	mesh.vertices.push_back(point11);
	mesh.vertices.push_back(point12);
	mesh.vertices.push_back(point13);
	mesh.vertices.push_back(point14);
	mesh.vertices.push_back(point15);
	mesh.vertices.push_back(point16);
	mesh.vertices.push_back(point17);
	mesh.vertices.push_back(point18);

	shape_msgs::MeshTriangle triangle1;
	triangle1.vertex_indices[0]=3; triangle1.vertex_indices[1]=4; triangle1.vertex_indices[2]=5;
	shape_msgs::MeshTriangle triangle2;
	triangle2.vertex_indices[0]=4; triangle1.vertex_indices[1]=2; triangle1.vertex_indices[2]=6;
	shape_msgs::MeshTriangle triangle3;
	triangle3.vertex_indices[0]=4; triangle1.vertex_indices[1]=5; triangle1.vertex_indices[2]=6;
	shape_msgs::MeshTriangle triangle4;
	triangle4.vertex_indices[0]=5; triangle1.vertex_indices[1]=6; triangle1.vertex_indices[2]=0;

	shape_msgs::MeshTriangle triangle5;
	triangle5.vertex_indices[0]=3; triangle5.vertex_indices[1]=5; triangle5.vertex_indices[2]=7;
	shape_msgs::MeshTriangle triangle6;
	triangle6.vertex_indices[0]=5; triangle6.vertex_indices[1]=0; triangle6.vertex_indices[2]=8;
	shape_msgs::MeshTriangle triangle7;
	triangle7.vertex_indices[0]=5; triangle7.vertex_indices[1]=8; triangle7.vertex_indices[2]=7;
	shape_msgs::MeshTriangle triangle8;
	triangle8.vertex_indices[0]=7; triangle8.vertex_indices[1]=8; triangle8.vertex_indices[2]=1;

	shape_msgs::MeshTriangle triangle9;
	triangle9.vertex_indices[0]=2; triangle9.vertex_indices[1]=6; triangle9.vertex_indices[2]=9;
	shape_msgs::MeshTriangle triangle10;
	triangle10.vertex_indices[0]=6; triangle10.vertex_indices[1]=9; triangle10.vertex_indices[2]=8;
	shape_msgs::MeshTriangle triangle11;
	triangle11.vertex_indices[0]=6; triangle11.vertex_indices[1]=8; triangle11.vertex_indices[2]=0;
	shape_msgs::MeshTriangle triangle12;
	triangle12.vertex_indices[0]=9; triangle12.vertex_indices[1]=8; triangle12.vertex_indices[2]=1;

	shape_msgs::MeshTriangle triangle13;
	triangle13.vertex_indices[0]=3; triangle13.vertex_indices[1]=4; triangle13.vertex_indices[2]=7;
	shape_msgs::MeshTriangle triangle14;
	triangle14.vertex_indices[0]=2; triangle14.vertex_indices[1]=4; triangle14.vertex_indices[2]=9;
	shape_msgs::MeshTriangle triangle15;
	triangle15.vertex_indices[0]=9; triangle15.vertex_indices[1]=7; triangle15.vertex_indices[2]=1;
	shape_msgs::MeshTriangle triangle16;
	triangle16.vertex_indices[0]=4; triangle16.vertex_indices[1]=9; triangle16.vertex_indices[2]=7;

	shape_msgs::MeshTriangle triangle17;
	triangle17.vertex_indices[0]=13; triangle17.vertex_indices[1]=14; triangle17.vertex_indices[2]=16;
	shape_msgs::MeshTriangle triangle18;
	triangle18.vertex_indices[0]=16; triangle18.vertex_indices[1]=14; triangle18.vertex_indices[2]=18;
	shape_msgs::MeshTriangle triangle19;
	triangle19.vertex_indices[0]=10; triangle19.vertex_indices[1]=16; triangle19.vertex_indices[2]=18;
	shape_msgs::MeshTriangle triangle20;
	triangle20.vertex_indices[0]=10; triangle20.vertex_indices[1]=12; triangle20.vertex_indices[2]=18;
	shape_msgs::MeshTriangle triangle21;
	triangle21.vertex_indices[0]=12; triangle21.vertex_indices[1]=18; triangle21.vertex_indices[2]=17;
	shape_msgs::MeshTriangle triangle22;
	triangle22.vertex_indices[0]=12; triangle22.vertex_indices[1]=17; triangle22.vertex_indices[2]=2;
	shape_msgs::MeshTriangle triangle23;
	triangle23.vertex_indices[0]=17; triangle23.vertex_indices[1]=18; triangle23.vertex_indices[2]=15;
	shape_msgs::MeshTriangle triangle24;
	triangle24.vertex_indices[0]=18; triangle24.vertex_indices[1]=15; triangle24.vertex_indices[2]=14;
	shape_msgs::MeshTriangle triangle25;
	triangle25.vertex_indices[0]=2; triangle25.vertex_indices[1]=13; triangle25.vertex_indices[2]=15;
	shape_msgs::MeshTriangle triangle26;
	triangle26.vertex_indices[0]=17; triangle26.vertex_indices[1]=14; triangle26.vertex_indices[2]=15;
	shape_msgs::MeshTriangle triangle27;
	triangle27.vertex_indices[0]=10; triangle27.vertex_indices[1]=16; triangle27.vertex_indices[2]=12;
	shape_msgs::MeshTriangle triangle28;
	triangle28.vertex_indices[0]=10; triangle28.vertex_indices[1]=12; triangle28.vertex_indices[2]=11;
	shape_msgs::MeshTriangle triangle29;
	triangle29.vertex_indices[0]=12; triangle29.vertex_indices[1]=4; triangle29.vertex_indices[2]=2;
	shape_msgs::MeshTriangle triangle30;
	triangle30.vertex_indices[0]=12; triangle30.vertex_indices[1]=11; triangle30.vertex_indices[2]=4;
	shape_msgs::MeshTriangle triangle31;
	triangle31.vertex_indices[0]=11; triangle31.vertex_indices[1]=4; triangle31.vertex_indices[2]=3;




//test

	shape_msgs::MeshTriangle triangle32;
	triangle32.vertex_indices[0]=10; triangle32.vertex_indices[1]=2; triangle32.vertex_indices[2]=15;
	shape_msgs::MeshTriangle triangle33;
	triangle33.vertex_indices[0]=10; triangle33.vertex_indices[1]=13; triangle33.vertex_indices[2]=15;
	shape_msgs::MeshTriangle triangle34;
	triangle34.vertex_indices[0]=10; triangle34.vertex_indices[1]=2; triangle34.vertex_indices[2]=3;
	shape_msgs::MeshTriangle triangle35;
	triangle35.vertex_indices[0]=2; triangle35.vertex_indices[1]=3; triangle35.vertex_indices[2]=0;


/*
	mesh.triangles.push_back(triangle1);
	mesh.triangles.push_back(triangle2);
	mesh.triangles.push_back(triangle3);
	mesh.triangles.push_back(triangle4);
	mesh.triangles.push_back(triangle5);
	mesh.triangles.push_back(triangle6);
	mesh.triangles.push_back(triangle7);
	mesh.triangles.push_back(triangle8);
	mesh.triangles.push_back(triangle9);
	mesh.triangles.push_back(triangle10);
	mesh.triangles.push_back(triangle11);
	mesh.triangles.push_back(triangle12);
	mesh.triangles.push_back(triangle13);
	mesh.triangles.push_back(triangle14);
	mesh.triangles.push_back(triangle15);
	mesh.triangles.push_back(triangle16);
	mesh.triangles.push_back(triangle17);
	mesh.triangles.push_back(triangle18);
	mesh.triangles.push_back(triangle19);
	mesh.triangles.push_back(triangle20);
	mesh.triangles.push_back(triangle21);
	mesh.triangles.push_back(triangle22);
	mesh.triangles.push_back(triangle23);
	mesh.triangles.push_back(triangle24);
	mesh.triangles.push_back(triangle25);
	mesh.triangles.push_back(triangle26);
	mesh.triangles.push_back(triangle27);
	mesh.triangles.push_back(triangle28);
	mesh.triangles.push_back(triangle29);
	mesh.triangles.push_back(triangle30);
	mesh.triangles.push_back(triangle31);
*/

	mesh.triangles.push_back(triangle32);
	mesh.triangles.push_back(triangle33);
	mesh.triangles.push_back(triangle34);
	mesh.triangles.push_back(triangle35);





	pose.orientation.w = 1.0;	 
	add_object.meshes.push_back(mesh);
	add_object.mesh_poses.push_back(pose);
	add_object.operation = add_object.ADD;

    std_msgs::String msg;

    std::stringstream ss;
    ss << "hello world " ;
    msg.data = ss.str();
ros::Rate loop_rate(0.5);
 while (ros::ok())
  {
		std::cout << "wait for 2 seconds and press any key and Enter: " << std::endl;
		std::cout << "press any key: ";
		int dummy;
		std::cin >> dummy;
		chatter_pub.publish(msg);
		collision_object_publisher.publish(add_object);
		vis_pub.publish(marker);
		ros::spinOnce();
		loop_rate.sleep();
	}

  return 0;
}
