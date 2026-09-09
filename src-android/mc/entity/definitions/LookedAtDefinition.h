#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/entity/definitions/SetTargetMode.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/util/FloatRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/level/ShapeType.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct LookedAtComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct LookedAtDefinition {
public:
    // LookedAtDefinition inner types declare
    // clang-format off
    struct LookAtLocation;
    // clang-format on

    // LookedAtDefinition inner types define
    struct LookAtLocation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorLocation> mLocation;
        ::ll::TypedStorage<4, 4, float>                                mVerticalOffset;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void setLocation(std::string const&);
        // NOLINTEND
    };

    using LookAtLocationSet = ::brstd::
        flat_set<LookedAtDefinition::LookAtLocation, std::less<void>, std::vector<LookedAtDefinition::LookAtLocation>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnLookedAt;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger> mOnNotLookedAt;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>       mFilter;
    ::ll::UntypedStorage<8, 24>                         mLookAtActorLocations;
    ::ll::TypedStorage<4, 8, ::FloatRange>              mLookedAtCooldown;
    ::ll::TypedStorage<1, 1, ::ShapeType>               mLineOfSightObstructionType;
    ::ll::TypedStorage<4, 4, float>                     mSearchRadius;
    ::ll::TypedStorage<4, 4, float>                     mFieldOfView;
    ::ll::TypedStorage<4, 4, float>                     mMinLookedAtDuration;
    ::ll::TypedStorage<1, 1, ::SetTargetMode>           mSetTargetMode;
    ::ll::TypedStorage<1, 1, bool>                      mScaleFOVByDistance;
    ::ll::TypedStorage<1, 1, bool>                      mFindPlayersOnly;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LookedAtDefinition();

    MCNAPI void initialize(::EntityContext&, ::LookedAtComponent&) const;

    MCNAPI void setFieldOfView(float const&);

    MCNAPI void setLineOfSightObstructionType(std::string const&);

    MCNAPI void setSetTargetMode(std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LookedAtDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
