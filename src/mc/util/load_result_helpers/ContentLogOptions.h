#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ResultCode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/puv/Logger.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace LoadResultHelpers {

struct ContentLogOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<2, 2, ::cereal::ResultCode>                                     parseMask;
    ::ll::UntypedStorage<1, 1>                                                         upgradeMask;
    ::ll::UntypedStorage<1, 1>                                                         validationMask;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<cereal::ResultCode, std::string>>> parseFormats;
    ::ll::UntypedStorage<8, 24>                                                        upgradeFormats;
    ::ll::UntypedStorage<8, 24>                                                        validationFormats;
#else // @header-generator platform
    ::ll::UntypedStorage<2, 2>  mUnkc66f7d;
    ::ll::UntypedStorage<1, 1>  mUnk8c7efb;
    ::ll::UntypedStorage<1, 1>  mUnk92c993;
    ::ll::UntypedStorage<8, 24> mUnkd1cab7;
    ::ll::UntypedStorage<8, 24> mUnkea5aaf;
    ::ll::UntypedStorage<8, 24> mUnkb675fb;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentLogOptions& operator=(ContentLogOptions const&);
    ContentLogOptions(ContentLogOptions const&);
    ContentLogOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addParseFormat(::cereal::ResultCode mask, ::std::string const& formatString);

    MCNAPI ~ContentLogOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace LoadResultHelpers
