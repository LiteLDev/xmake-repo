#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

class BannerModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 544, ::ModelPart>       mFlag;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mPole;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mLongPole;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mBar;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mBannerMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mBannerPoleMaterial;
    // NOLINTEND

public:
    // prevent constructor by default
    BannerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BannerModel();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BannerModel(uint const, uint const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint const, uint const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

class BannerModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 576, ::ModelPart>       mFlag;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mPole;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mLongPole;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mBar;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mBannerMaterial;
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mBannerPoleMaterial;
    // NOLINTEND

public:
    // prevent constructor by default
    BannerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BannerModel() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BannerModel(uint textureWidth, uint textureHeight);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint textureWidth, uint textureHeight);
    // NOLINTEND
};
#else // @header-generator platform
class BannerModel {};
#endif // @header-generator platform
#endif // @header-generator platform
