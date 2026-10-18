#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/persona/TrustedSkinHelper.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/world/level/LevelArguments.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
class LevelData;
class ResourcePackManager;
namespace VoxelShapes { class VoxelShapeRegistry; }
// clang-format on

struct ClientLevelArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 312, ::LevelArguments>                               mBase;
    ::ll::UntypedStorage<8, 16>                                                mLevelData;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>                           mClientResourcePackManager;
    ::ll::TypedStorage<8, 216, ::TrustedSkinHelper>                            mTrustedSkinHelper;
    ::ll::TypedStorage<8, 8, std::unique_ptr<EntitySystems>>                   mCameraSystems;
    ::ll::TypedStorage<8, 8, std::unique_ptr<VoxelShapes::VoxelShapeRegistry>> mShapeRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientLevelArguments& operator=(ClientLevelArguments const&);
    ClientLevelArguments(ClientLevelArguments const&);
    ClientLevelArguments();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClientLevelArguments();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ClientLevelArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 312> mUnk13f328;
    ::ll::UntypedStorage<8, 16>  mUnkc86228;
    ::ll::UntypedStorage<8, 8>   mUnk5058c7;
    ::ll::UntypedStorage<8, 216> mUnk293af1;
    ::ll::UntypedStorage<8, 8>   mUnkfadec2;
    ::ll::UntypedStorage<8, 8>   mUnk244b39;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientLevelArguments& operator=(ClientLevelArguments const&);
    ClientLevelArguments(ClientLevelArguments const&);
    ClientLevelArguments();
};
#else // @header-generator platform
struct ClientLevelArguments {};
#endif // @header-generator platform
#endif // @header-generator platform
