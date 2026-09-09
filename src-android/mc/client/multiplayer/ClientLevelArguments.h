#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
