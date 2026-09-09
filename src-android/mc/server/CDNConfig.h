#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class CDNConfig : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::pair<std::string, std::string>>> mPackCDNUrls;
    ::ll::UntypedStorage<1, 24>                                                 mPath;
    // NOLINTEND

public:
    // prevent constructor by default
    CDNConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<std::pair<std::string, std::string>> getCDNUrls();
    // NOLINTEND
};
