#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/geom/ModelPart.h"
#include "mc/client/model/models/Model.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class Block;
class ScreenContext;
// clang-format on

class HangingSignModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr> mDefaultMaterial;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mPlank;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mBoard;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mVChain;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mChainL1;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mChainL2;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mChainR1;
    ::ll::TypedStorage<8, 544, ::ModelPart>       mChainR2;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HangingSignModel();

    virtual void render(::ScreenContext&);
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
