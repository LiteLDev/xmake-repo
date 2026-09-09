#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class GeometryPtr;
class ScreenContext;
// clang-format on

class GuardianModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mHead;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mEye;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mTailPart0;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mTailPart1;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mTailPart2;
    ::ll::TypedStorage<8, 6528, ::ModelPart[12]>  mSpikeParts;
    ::ll::TypedStorage<4, 144, ::Vec3[12]>        mSpikePositions;
    // NOLINTEND

public:
    // prevent constructor by default
    GuardianModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GuardianModel();

    virtual void render(::ScreenContext&, ::Actor&, float, float, float, float, float, float);

    virtual void setupAnim(::Actor&, float, float, float, float, float, float);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GuardianModel(::GeometryPtr const, bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::Vec3 const[12]> SPIKE_ANGLES();

    MCNAPI static ::std::add_lvalue_reference_t<::Vec3 const[12]> SPIKE_POSITIONS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::GeometryPtr const, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $render(::ScreenContext&, ::Actor&, float, float, float, float, float, float);

    MCNAPI void $setupAnim(::Actor&, float, float, float, float, float, float);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
