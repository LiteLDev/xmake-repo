#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SimpleContainer;
// clang-format on

struct ActorEquipmentComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<SimpleContainer>> mHand;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SimpleContainer>> mArmor;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SimpleContainer>> mHand;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SimpleContainer>> mArmor;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ActorEquipmentComponent& operator=(ActorEquipmentComponent const&);
    ActorEquipmentComponent(ActorEquipmentComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
