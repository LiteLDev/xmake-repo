#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::Debug {

struct DevServer {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mId;
    ::ll::TypedStorage<8, 24, std::string> mHostName;
    ::ll::TypedStorage<8, 24, std::string> mUrl;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mPaths;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastUpdate;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    DevServer& operator=(DevServer const&);
    DevServer(DevServer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DevServer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI::Debug
