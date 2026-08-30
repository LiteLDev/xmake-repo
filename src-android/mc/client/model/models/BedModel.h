#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class GeometryPtr;
class ScreenContext;
// clang-format on

class BedModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mBody;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mLeg0;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mLeg1;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mLeg2;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mLeg3;
    // NOLINTEND

public:
    // prevent constructor by default
    BedModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BedModel();

    virtual void render(::ScreenContext&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BedModel(::GeometryPtr const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::GeometryPtr const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $render(::ScreenContext&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
