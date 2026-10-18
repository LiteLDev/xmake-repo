#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/NsaId.h"
#include "mc/platform/PsnId.h"
#include "mc/platform/Xuid.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
struct OnlineId : public ::std::variant<Social::Xuid, Social::PsnId, Social::NsaId> {};
#else // @header-generator platform
struct OnlineId {};
#endif // @header-generator platform

} // namespace Social
