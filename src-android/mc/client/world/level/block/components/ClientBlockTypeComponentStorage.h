#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BlockBakedEmbeddedVisualComponent;
struct BlockBakedItemVisualComponent;
// clang-format on

struct ClientBlockTypeComponentStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<const BlockBakedEmbeddedVisualComponent>> mBakedEmbeddedVisual;
    ::ll::TypedStorage<8, 8, std::unique_ptr<const BlockBakedItemVisualComponent>>     mBakedItemVisual;
    // NOLINTEND
};
