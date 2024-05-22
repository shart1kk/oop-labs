#include <gtest/gtest.h>
#include "Turnstile.h"
#include "Room.h"
#include "Pass.h"
#include "Log.h"

class MockLog : public ILog {
public:
    void log(const std::string& message) override {
    }
};

TEST(TurnstileTest, EnterTest) {
    MockLog mockLog;
    Turnstile turnstile(mockLog);
    
    bool entered = turnstile.enter();
    ASSERT_TRUE(entered);
}

TEST(RoomTest, GrantAccessTest) {
    MockLog mockLog;
    Room room(mockLog);

    bool granted = room.grantAccess();
    ASSERT_TRUE(granted);
}

TEST(PassTest, IsValidTest) {
    MockLog mockLog;
    Pass pass(mockLog);
    
    pass.issuePass();
    
    bool valid = pass.isValid();
    
    ASSERT_TRUE(valid);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}