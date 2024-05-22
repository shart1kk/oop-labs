#ifndef IPASS_H
#define IPASS_H

class IPass {
public:
    virtual bool isValid() const = 0;
    virtual void issuePass() = 0;
    virtual void revokePass() = 0;
    virtual ~IPass() = default;
};

#endif