#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#ifndef LL_GENERATED_ANDROID_BASE_STUB_UPDATEBOUNDINGBOX__BBSYSTEMBASE
#define LL_GENERATED_ANDROID_BASE_STUB_UPDATEBOUNDINGBOX__BBSYSTEMBASE
namespace UpdateBoundingBox { class BBSystemBase {}; }
#endif
#else // @header-generator platform
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataBoundingBoxComponent;
struct ActorDataDirtyFlagsComponent;
struct DepenetrationComponent;
struct MinecartFlagComponent;
struct OffsetsComponent;
struct PlayerComponent;
struct ShouldUpdateBoundingBoxRequestComponent;
struct ShulkerFlagComponent;
#endif // @header-generator platform
// clang-format on

namespace UpdateBoundingBox {

#if defined(LL_PLAT_A) // @header-generator platform
struct SystemImpl : public ::UpdateBoundingBox::BBSystemBase {
#else // @header-generator platform
struct SystemImpl : public ::IStrictTickingSystem<::StrictExecutionContext<
                        ::Filter<::PlayerComponent, ::MinecartFlagComponent, ::ShulkerFlagComponent>,
                        ::Read<>,
                        ::Write<
                            ::AABBShapeComponent,
                            ::ActorDataBoundingBoxComponent,
                            ::ActorDataDirtyFlagsComponent,
                            ::DepenetrationComponent,
                            ::OffsetsComponent>,
                        ::AddRemove<::ShouldUpdateBoundingBoxRequestComponent>,
                        ::GlobalRead<>,
                        ::GlobalWrite<>,
                        ::EntityFactoryT<>>> {
public:
    // SystemImpl inner types define
    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
        ::Filter<::PlayerComponent, ::MinecartFlagComponent, ::ShulkerFlagComponent>,
        ::Read<>,
        ::Write<
            ::AABBShapeComponent,
            ::ActorDataBoundingBoxComponent,
            ::ActorDataDirtyFlagsComponent,
            ::DepenetrationComponent,
            ::OffsetsComponent>,
        ::AddRemove<::ShouldUpdateBoundingBoxRequestComponent>,
        ::GlobalRead<>,
        ::GlobalWrite<>,
        ::EntityFactoryT<>>>;

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float const> mSneakHeight;
    ::ll::TypedStorage<1, 1, bool const>  mIsClientSide;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
        ::StrictExecutionContext<
            ::Filter<::PlayerComponent, ::MinecartFlagComponent, ::ShulkerFlagComponent>,
            ::Read<>,
            ::Write<
                ::AABBShapeComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataDirtyFlagsComponent,
                ::DepenetrationComponent,
                ::OffsetsComponent>,
            ::AddRemove<::ShouldUpdateBoundingBoxRequestComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    ) /*override*/;

    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<::PlayerComponent, ::MinecartFlagComponent, ::ShulkerFlagComponent>,
            ::Read<>,
            ::Write<
                ::AABBShapeComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataDirtyFlagsComponent,
                ::DepenetrationComponent,
                ::OffsetsComponent>,
            ::AddRemove<::ShouldUpdateBoundingBoxRequestComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
        ::StrictExecutionContext<
            ::Filter<::PlayerComponent, ::MinecartFlagComponent, ::ShulkerFlagComponent>,
            ::Read<>,
            ::Write<
                ::AABBShapeComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataDirtyFlagsComponent,
                ::DepenetrationComponent,
                ::OffsetsComponent>,
            ::AddRemove<::ShouldUpdateBoundingBoxRequestComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext
    );

    MCAPI void $singleTick(
        ::StrictExecutionContext<
            ::Filter<::PlayerComponent, ::MinecartFlagComponent, ::ShulkerFlagComponent>,
            ::Read<>,
            ::Write<
                ::AABBShapeComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataDirtyFlagsComponent,
                ::DepenetrationComponent,
                ::OffsetsComponent>,
            ::AddRemove<::ShouldUpdateBoundingBoxRequestComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#endif // @header-generator platform
};

} // namespace UpdateBoundingBox
