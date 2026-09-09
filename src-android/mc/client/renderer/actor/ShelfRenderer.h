#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/actor/item_block_render_helpers/ItemTransformData.h"
#include "mc/client/renderer/blockactor/BlockActorRenderer.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/world/Direction.h"
#include "mc/world/item/ClockSpriteCalculator.h"
#include "mc/world/item/CompassSpriteCalculator.h"

// auto generated forward declare list
// clang-format off
class BaseActorRenderContext;
class Matrix;
class Vec3;
struct BlockActorRenderData;
// clang-format on

class ShelfRenderer : public ::BlockActorRenderer, public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::ClockSpriteCalculator>                                   mClockSpriteCalc;
    ::ll::TypedStorage<8, 32, ::CompassSpriteCalculator>                                 mCompassSpriteCalc;
    ::ll::TypedStorage<8, 32, ::CompassSpriteCalculator>                                 mRecoveryCompassSpriteCalc;
    ::ll::TypedStorage<4, 384, std::array<ItemBlockRenderHelpers::ItemTransformData, 3>> mItemTranslations;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShelfRenderer();

    virtual void render(::BaseActorRenderContext&, ::BlockActorRenderData&);

    virtual void onAppSuspended();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ShelfRenderer();
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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $render(::BaseActorRenderContext&, ::BlockActorRenderData&);

    MCNAPI void $onAppSuspended();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
