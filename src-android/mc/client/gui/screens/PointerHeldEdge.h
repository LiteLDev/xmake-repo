#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/NodeId.h"

// auto generated forward declare list
// clang-format off
struct PointerHeldScreenEventData;
// clang-format on

struct PointerHeldEdge {
public:
    // PointerHeldEdge inner types define
    using RequirementCallback = std::function<bool(const PointerHeldScreenEventData&, const std::string&, int)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>        mRequirement;
    ::ll::TypedStorage<4, 4, ::NodeId> mTargetNode;
    ::ll::UntypedStorage<4, 12>        mPriority;
    // NOLINTEND

public:
    // prevent constructor by default
    PointerHeldEdge& operator=(PointerHeldEdge const&);
    PointerHeldEdge(PointerHeldEdge const&);
};
