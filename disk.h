#ifndef DISK_H
#define DISK_H

class Disk {
    public:
    Disk(double x, double y, double r);
    
    void move(double dx, double dy);
    
    double distance(Disk& d);

    double radius;
    double x;
    double y;
};

#endif