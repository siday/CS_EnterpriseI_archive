function C = C(u,v,r)
%C
%    C = C(U,V,R)

%    This function was generated by the Symbolic Math Toolbox version 6.0.
%    24-May-2015 18:31:23

t2 = u.*1.679e1;
C = reshape([0.0,0.0,r.*5.54625e-1+v.*2.479e1,0.0,0.0,-t2,r.*(-5.54625e-1)-v.*2.479e1,t2,0.0],[3, 3]);