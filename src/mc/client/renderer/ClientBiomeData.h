#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/DeferredRenderingBiomeDataDrivingIdentifiers.h"

struct ClientBiomeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                     mName;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>         mWaterColor;
    ::ll::TypedStorage<8, 200, ::DeferredRenderingBiomeDataDrivingIdentifiers> mIdentifiers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClientBiomeData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct ClientBiomeData {};
#endif // @header-generator platform
