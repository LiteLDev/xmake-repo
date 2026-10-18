#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/events/ClientHitDetectListener.h"
#include "mc/world/phys/HitResult.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace ImmersiveReaderUtils {

#if defined(LL_PLAT_A) // @header-generator platform
class ImmersiveReaderHitListener : public ::ClientHitDetectListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClient;
    ::ll::TypedStorage<4, 136, ::HitResult>      mCurrentHit;
    ::ll::TypedStorage<8, 8, ulong>              mForceCheckCurrentTick;
    // NOLINTEND

public:
    // prevent constructor by default
    ImmersiveReaderHitListener& operator=(ImmersiveReaderHitListener const&);
    ImmersiveReaderHitListener(ImmersiveReaderHitListener const&);
    ImmersiveReaderHitListener();
};
#else // @header-generator platform
class ImmersiveReaderHitListener {};
#endif // @header-generator platform

} // namespace ImmersiveReaderUtils
