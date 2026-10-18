#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/persona/ClientSkinInfoData.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class EntityId;
class GeometryGroup;
// clang-format on

struct ClientSkin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                            mInitialized;
    ::ll::TypedStorage<1, 1, bool>                            mIsLoadingGeometry;
    ::ll::TypedStorage<4, 4, int>                             mReferenceCount;
    ::ll::UntypedStorage<1, 32>                               mEntity;
    ::ll::TypedStorage<8, 280, ::ClientSkinInfoData>          mSkinInfoData;
    ::ll::TypedStorage<8, 16, std::shared_ptr<GeometryGroup>> mClientSkinGeometryGroup;
    // NOLINTEND
};
#else // @header-generator platform
struct ClientSkin {};
#endif // @header-generator platform
