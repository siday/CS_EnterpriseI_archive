% setenv('ROS_MASTER_URI','http://192.168.1.2:11311')
% setenv('ROS_IP','192.168.1.1') 
% % rosinit('192.168.1.2',11311,'NodeHost','192.168.1.1')
rosinit('192.168.1.2')
pos = rossubscriber('/qualisys/CSEI/odom');
pause(1)
%%
t0 = clock;
interv = 1000;
step = 0;
x = [];
y = [];
psi = [];
run = true;

figure(1)
clf(1)
% hold on
grid on


p0 = [0.5,  0.3, 0.3, -0.5, -0.5;
        0, -0.1, 0.1, -0.1,  0.1];
while run
    
  odomdata = receive(pos,1);
  xi = odomdata.Pose.Pose.Position.X;
  yi = odomdata.Pose.Pose.Position.Y;
  x = [x, xi];
  y = [y, yi];
  quat = odomdata.Pose.Pose.Orientation;
  eul = quat2eul([quat.W, quat.X, quat.Y, quat.Z], 'XYZ');
  R   = [cos(eul(3)), -sin(eul(3)); sin(eul(3)), cos(eul(3))];
  p   = [xi;yi] + R*p0;
  psi = [psi, 180/pi*eul(3)];
  
  if size(x,2) > 1
    delete(xyp)
  end
  subplot(2, 2, [1 3])
  hold off
  %xyplot
 
  shipx = [p(1,1),p(1,2);
           p(1,2),p(1,4);
           p(1,4),p(1,5);
           p(1,5),p(1,3);
           p(1,3),p(1,1)];
  shipy = [p(2,1),p(2,2);
           p(2,2),p(2,4);
           p(2,4),p(2,5);
           p(2,5),p(2,3);
           p(2,3),p(2,1)];
      
  xyp = line(shipy,shipx,'Color','blue');
  axis([ (yi - 5) , (yi + 5), (xi - 5), (xi + 5) ]);
  
%   drawnow
%   
    refreshdata(xyp)
  
  subplot(2, 2, 2) 
  hold on
  axis([ 0, (size(x,2)+20), -2 , 2 ]);
  plot(x,'b');
  plot(y,'g');
  legend({'$x$','$y$'},'Interpreter','latex','FontSize', 13)
  axis([ 0, (size(x,2)+20), -2 , 2 ]);

  drawnow
  subplot(2, 2, 4)
 
  plot(psi);
  axis([ 0, (size(x,2)+20), -180 , 180 ]);
  legend({'$\psi$'},'Interpreter','latex','FontSize', 13)
  drawnow
  pause(0.01)
end