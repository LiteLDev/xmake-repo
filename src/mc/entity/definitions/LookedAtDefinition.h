#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/entity/definitions/SetTargetMode.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/flat_set.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/util/FloatRange.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/level/ShapeType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
struct LookedAtComponent;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorLocation> mLocation;
        ::ll::TypedStorage<4, 4, float>                                mVerticalOffset;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4> mUnk62964c;
        ::ll::UntypedStorage<4, 4> mUnkd67202;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        LookAtLocation& operator=(LookAtLocation const&);
        LookAtLocation(LookAtLocation const&);
        LookAtLocation();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void setLocation(std::string const&);
#else // @header-generator platform
        MCAPI void setLocation(::std::string const& str);
#endif // @header-generator platform
        // NOLINTEND
    };
#if defined(LL_PLAT_A) // @header-generator platform

    using LookAtLocationSet = ::brstd::
        flat_set<LookedAtDefinition::LookAtLocation, std::less<void>, std::vector<LookedAtDefinition::LookAtLocation>>;
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 104> mUnkf6bfe5;
    ::ll::UntypedStorage<8, 104> mUnk6b21d3;
    ::ll::UntypedStorage<8, 64>  mUnkd33b3f;
    ::ll::UntypedStorage<8, 24>  mUnkb9c5e6;
    ::ll::UntypedStorage<4, 8>   mUnke98893;
    ::ll::UntypedStorage<1, 1>   mUnk2506d4;
    ::ll::UntypedStorage<4, 4>   mUnkf8292c;
    ::ll::UntypedStorage<4, 4>   mUnkde9d21;
    ::ll::UntypedStorage<4, 4>   mUnkfc9623;
    ::ll::UntypedStorage<1, 1>   mUnkb54097;
    ::ll::UntypedStorage<1, 1>   mUnkaa520a;
    ::ll::UntypedStorage<1, 1>   mUnkef3718;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LookedAtDefinition& operator=(LookedAtDefinition const&);
    LookedAtDefinition(LookedAtDefinition const&);
    LookedAtDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LookedAtDefinition();
#else // @header-generator platform
    MCAPI void setFieldOfView(float const& fieldOfViewInDegrees);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void initialize(::EntityContext&, ::LookedAtComponent&) const;
#else // @header-generator platform
    MCAPI void setLineOfSightObstructionType(::std::string const& str);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setFieldOfView(float const&);

    MCNAPI void setLineOfSightObstructionType(std::string const&);

    MCNAPI void setSetTargetMode(std::string const&);
#else // @header-generator platform
    MCAPI void setSetTargetMode(::std::string const& str);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LookedAtDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::LookedAtDefinition>>& root
    );
#endif // @header-generator platform
    // NOLINTEND
};
