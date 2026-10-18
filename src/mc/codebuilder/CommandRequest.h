#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class CommandOrigin;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace CodeBuilder {

struct CommandRequest {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                            version;
    ::ll::TypedStorage<8, 24, std::string>                   commandLine;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandOrigin>> origin;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk8adccf;
    ::ll::UntypedStorage<8, 32> mUnk2f23fd;
    ::ll::UntypedStorage<8, 8>  mUnkc88ba7;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CommandRequest& operator=(CommandRequest const&);
    CommandRequest(CommandRequest const&);
    CommandRequest();
#endif // @header-generator platform
};

} // namespace CodeBuilder
