#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"

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
    ::ll::UntypedStorage<8, 8> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateView& operator=(CreateView const&);
    CreateView(CreateView const&);
    CreateView();
};

} // namespace UpdateBoundingBox
