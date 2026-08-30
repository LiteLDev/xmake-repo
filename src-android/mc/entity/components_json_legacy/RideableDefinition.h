#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/entity/components_json_legacy/DismountMode.h"
#include "mc/entity/components_json_legacy/SeatDescription.h"
#include "mc/util/HashStringHashGreater.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class RideableComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RideableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, int> mSeatCount;
    ::ll::TypedStorage<4, 4, int> mControllingSeat;
    ::ll::TypedStorage<1, 1, bool> mSkipInteractIfCrouching;
    ::ll::TypedStorage<8, 24, std::vector<SeatDescription>> mSeats;
    ::ll::TypedStorage<8, 24, std::set<HashedString, Util::HashStringHashGreater, std::allocator<HashedString>>> mFamilyTypes;
    ::ll::TypedStorage<8, 24, std::string> mInteractText;
    ::ll::TypedStorage<1, 1, bool> mPullInEntities;
    ::ll::TypedStorage<1, 1, bool> mPassengerCanPick;
    ::ll::TypedStorage<4, 4, float> mPassengerMaxWidth;
    ::ll::TypedStorage<1, 1, ::DismountMode> mDismountMode;
    ::ll::TypedStorage<8, 24, std::string> mOnRiderEnterEvent;
    ::ll::TypedStorage<8, 24, std::string> mOnRiderExitEvent;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addFamilyTypeByName(std::string const&);

    MCNAPI void initialize(::EntityContext&, ::RideableComponent&) const;

    MCNAPI void setDismountMode(std::string const&);

    MCNAPI ~RideableDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, RideableDefinition>>&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
