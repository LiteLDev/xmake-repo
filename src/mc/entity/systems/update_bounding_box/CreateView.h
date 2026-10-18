#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/Filter.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Read.h"
#endif // @header-generator platform
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/ecs/strict/Write.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
struct AABBShapeComponent;
struct ActorDataBoundingBoxComponent;
struct ActorDataDirtyFlagsComponent;
struct DepenetrationComponent;
struct MinecartFlagComponent;
struct OffsetsComponent;
struct PlayerComponent;
struct ShouldUpdateBoundingBoxRequestComponent;
struct ShulkerFlagComponent;
// clang-format on

namespace UpdateBoundingBox {

struct CreateView {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 8> mContext;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        8,
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
            ::EntityFactoryT<>>&>
        mContext;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CreateView& operator=(CreateView const&);
    CreateView(CreateView const&);
    CreateView();
};

} // namespace UpdateBoundingBox
