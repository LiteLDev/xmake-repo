#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

class PistonArmModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mArmBase;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mArm;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mFront;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PistonArmModel();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PistonArmModel();

    MCNAPI void renderArm(::ScreenContext&, float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

class PistonArmModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mArmBase;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mArm;
    ::ll::TypedStorage<8, 576, ::ModelPart>       mFront;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PistonArmModel();

    MCAPI void renderArm(::ScreenContext& screenContext, float progress);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class PistonArmModel {};
#endif // @header-generator platform
#endif // @header-generator platform
