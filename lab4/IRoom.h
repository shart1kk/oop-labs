#ifndef IROOM_H
#define IROOM_H

class IRoom {
public:
    virtual void grantAccess() = 0;
    virtual void revokeAccess() = 0;
    virtual ~IRoom() = default;
};

#endif