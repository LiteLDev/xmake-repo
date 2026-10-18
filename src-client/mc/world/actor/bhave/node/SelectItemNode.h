#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Item;
// clang-format on

class SelectItemNode : public ::BehaviorNode {
public:
    // SelectItemNode inner types define
    enum State : uint {
        Preconditions      = 0,
        MoveToolToHotbar   = 1,
        SelectToolInHotbar = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>            mItemName;
    ::ll::TypedStorage<8, 8, ::Item const*>           mItem;
    ::ll::TypedStorage<4, 4, int>                     mItemSlot;
    ::ll::TypedStorage<4, 4, ::SelectItemNode::State> mState;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BehaviorStatus tick(::Actor&);

    virtual void initializeFromDefinition(::Actor&);
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
