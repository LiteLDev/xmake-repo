#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace BedrockLog {

#if defined(LL_PLAT_A) // @header-generator platform
class LogAreaFilter : public ::std::bitset<52> {
public:
    // prevent constructor by default
    LogAreaFilter& operator=(LogAreaFilter const&);
};
#else // @header-generator platform
class LogAreaFilter : public ::std::bitset<52> {};
#endif // @header-generator platform

} // namespace BedrockLog
