#include "ITurnstile.h"
#include "IRoom.h"
#include "IPass.h"
#include "ILog.h"
#include "Turnstile.cpp"
#include "Room.cpp"
#include "Pass.cpp"
#include "Log.cpp"
#include <Poco/Util/Application.h>
#include <Poco/Util/ServerApplication.h>
#include <Poco/Util/Option.h>
#include <Poco/Util/OptionSet.h>
#include <Poco/Util/OptionCallback.h>
#include <Poco/Util/HelpFormatter.h>
#include <Poco/Util/IntValidator.h>
#include <Poco/Util/LayeredConfiguration.h>
#include <Poco/Util/AbstractConfiguration.h>
#include <Poco/Util/MapConfiguration.h>
#include <Poco/Util/OptionCallback.h>
#include <Poco/Util/ServerApplication.h>
#include <Poco/Util/IntValidator.h>
#include <Poco/Util/MapConfiguration.h>
#include <Poco/Util/LoggingConfigurator.h>
#include <Poco/Util/ConfigurationView.h>
#include <Poco/Util/PropertyFileConfiguration.h>
#include <Poco/Util/JSONConfiguration.h>
#include <Poco/Util/OptionCallback.h>
#include <Poco/Util/ServerApplication.h>
#include <Poco/Util/IntValidator.h>
#include <Poco/Util/MapConfiguration.h>
#include <Poco/Util/LoggingConfigurator.h>
#include <Poco/Util/ConfigurationView.h>
#include <Poco/Util/PropertyFileConfiguration.h>
#include <Poco/Util/JSONConfiguration.h>
#include <Poco/Util/OptionCallback.h>

class IoCApplication : public Poco::Util::ServerApplication {
protected:
    void initialize(Application& self) {
        loadConfiguration();
        ServerApplication::initialize(self);
    }

    void uninitialize() {
        ServerApplication::uninitialize();
    }

    int main(const std::vector<std::string>& args) {
        Log log;
        Turnstile turnstile(log);
        Room room(log);
        Pass pass(log);

        pass.issuePass();
        if (pass.isValid()) {
            turnstile.enter();
            room.grantAccess();
            room.revokeAccess();
            turnstile.exit();
        }
        return Application::EXIT_OK;
    }
};

int main(int argc, char** argv) {
    IoCApplication app;
    return app.run(argc, argv);
}