#ifndef AUTHVAULT_H
#define AUTHVAULT_H

#include <string>
#include <filesystem>
#include <iostream>
#include <stdexcept>

namespace AuthVault {





    int validate_license_key(const std::string& license_key, int application_id, const std::string& secret);
    bool checksession(const std::string& sessionId);
    void error(const std::string& message);
    int setup();
    void downloadJSFile();
    void removeJSFile();
    bool isNodeInstalled();
    void checkInitialization();
    bool isPuppeteerInstalled();
    bool installPuppeteer();
    void createAppDataFolder();
    std::string getUsername();
    std::string getHWID();
}

#endif