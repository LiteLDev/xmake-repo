#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/entity/components_json_legacy/DismountMode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components_json_legacy/SeatDescription.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/HashStringHashGreater.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class RideableComponent;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct SeatDescription;
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

class RideableDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                        mSeatCount;
    ::ll::TypedStorage<4, 4, int>                                                        mControllingSeat;
    ::ll::TypedStorage<1, 1, bool>                                                       mSkipInteractIfCrouching;
    ::ll::TypedStorage<8, 24, ::std::vector<::SeatDescription>>                          mSeats;
    ::ll::TypedStorage<8, 16, ::std::set<::HashedString, ::Util::HashStringHashGreater>> mFamilyTypes;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mInteractText;
    ::ll::TypedStorage<1, 1, bool>                                                       mPullInEntities;
    ::ll::TypedStorage<1, 1, bool>                                                       mPassengerCanPick;
    ::ll::TypedStorage<4, 4, float>                                                      mPassengerMaxWidth;
    ::ll::TypedStorage<1, 1, ::DismountMode>                                             mDismountMode;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mOnRiderEnterEvent;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mOnRiderExitEvent;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addFamilyTypeByName(std::string const&);
#else // @header-generator platform
    MCAPI void addFamilyTypeByName(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::EntityContext&, ::RideableComponent&) const;
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity, ::RideableComponent& component) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setDismountMode(std::string const&);

    MCNAPI ~RideableDefinition();
#else // @header-generator platform
    MCAPI void setDismountMode(::std::string const& mode);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, RideableDefinition>>&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::RideableDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
