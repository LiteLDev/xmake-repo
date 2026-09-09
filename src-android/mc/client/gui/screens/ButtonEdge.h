#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ButtonEventType.h"
#include "mc/client/gui/screens/NodeId.h"

struct ButtonEdge {
public:
    // ButtonEdge inner types define
    using RequirementCallback = std::function<bool(uint, ButtonEventType, const std::string&, int)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>        mRequirement;
    ::ll::TypedStorage<4, 4, ::NodeId> mTargetNode;
    ::ll::UntypedStorage<4, 12>        mPriority;
    // NOLINTEND

public:
    // prevent constructor by default
    ButtonEdge& operator=(ButtonEdge const&);
    ButtonEdge(ButtonEdge const&);
};
