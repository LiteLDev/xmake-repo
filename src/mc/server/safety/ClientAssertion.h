#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services {

struct ClientAssertion {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mValue;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk8ebb41;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ClientAssertion& operator=(ClientAssertion const&);
    ClientAssertion(ClientAssertion const&);
    ClientAssertion();
#endif // @header-generator platform
};

} // namespace Bedrock::Services
