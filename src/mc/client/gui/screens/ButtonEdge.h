#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/ButtonEventType.h"
#include "mc/client/gui/screens/NodeId.h"

struct ButtonEdge {
public:
    // ButtonEdge inner types define
    using RequirementCallback = ::std::function<bool(uint, ::ButtonEventType, ::std::string const&, int)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool(uint, ::ButtonEventType, ::std::string const&, int)>> mRequirement;
    ::ll::TypedStorage<4, 4, ::NodeId>                                                                   mTargetNode;
    ::ll::TypedStorage<4, 4, int>                                                                        mPriority;
    // NOLINTEND
};
#else // @header-generator platform
struct ButtonEdge {};
#endif // @header-generator platform
#endif // @header-generator platform
