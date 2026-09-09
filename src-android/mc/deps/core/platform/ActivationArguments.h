#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/platform/ActivationArgumentType.h"
#include "mc/platform/brstd/basic_cstring_view.h"

namespace Bedrock {

class ActivationArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mArguments;
    ::ll::TypedStorage<8, 24, std::string>                                  mProcessRegistrationKey;
    ::ll::TypedStorage<8, 24, std::string>                                  mUrl;
    ::ll::TypedStorage<4, 4, ::Bedrock::ActivationArgumentType>             mType;
    ::ll::TypedStorage<4, 4, uint>                                          mNumArgs;
    ::ll::TypedStorage<1, 1, bool>                                          mGenerateDocumentation;
    ::ll::TypedStorage<1, 1, bool>                                          mGenerateAPIMetadata;
    ::ll::TypedStorage<8, 24, std::string>                                  mPacksUpgraderConfigPath;
    ::ll::TypedStorage<8, 24, std::string>                                  mPackOptimizerConfigPath;
    ::ll::TypedStorage<1, 1, bool>                                          mKernelMemoryAlreadyExtended;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const& KernelMemoryAlreadyExtended();
    // NOLINTEND
};

} // namespace Bedrock
