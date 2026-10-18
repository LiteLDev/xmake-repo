#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/entity/utilities/history/ComponentBits.h"

namespace History {

#if defined(LL_PLAT_A) // @header-generator platform
struct ComponentBitset : public ::Bedrock::EnumSet<History::ComponentBits, (History::ComponentBits)17> {};
#else // @header-generator platform
struct ComponentBitset : public ::Bedrock::EnumSet<::History::ComponentBits, 17> {};
#endif // @header-generator platform

} // namespace History
