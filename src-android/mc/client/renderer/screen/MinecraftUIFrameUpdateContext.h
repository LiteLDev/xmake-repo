#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/UIFrameUpdateContext.h"
#include "mc/client/renderer/FrameUpdateContext.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
// clang-format on

class MinecraftUIFrameUpdateContext : public ::UIFrameUpdateContext, public ::FrameUpdateContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClientInstance;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftUIFrameUpdateContext& operator=(MinecraftUIFrameUpdateContext const&);
    MinecraftUIFrameUpdateContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecraftUIFrameUpdateContext(::FrameUpdateContext&, ::IClientInstance&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FrameUpdateContext&, ::IClientInstance&);
    // NOLINTEND
};
