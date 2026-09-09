#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/library/DeepLinkType.h"

struct LibraryDeeplink {
public:
    // LibraryDeeplink inner types define
    using OptionalArguments = std::unordered_map<std::string, std::string>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                  itemId;
    ::ll::TypedStorage<1, 1, ::DeepLinkType>                                type;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> additionalArguments;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryDeeplink();
};
