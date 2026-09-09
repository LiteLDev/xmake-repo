#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/BatchKey.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

struct MinecraftUIPersistentMeshItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 160, ::BatchKey>                  mFromBatchKey;
    ::ll::TypedStorage<8, 24, std::vector<mce::TexturePtr>> mTextures;
    ::ll::TypedStorage<4, 4, uint>                          mNumInstances;
    ::ll::TypedStorage<4, 4, int>                           mKeepAlive;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>           mMaterial;
    ::ll::TypedStorage<8, 616, ::mce::Mesh>                 mMesh;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftUIPersistentMeshItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MinecraftUIPersistentMeshItem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
