#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/definitions/DynamicAmbientSound.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class AmbientSoundServerComponent;
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct DynamicAmbientSound;
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct AmbientSoundIntervalDefinition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                             mValue;
    ::ll::TypedStorage<4, 4, float>                             mRange;
    ::ll::TypedStorage<8, 24, std::string>                      mEventName;
    ::ll::TypedStorage<8, 24, std::vector<DynamicAmbientSound>> mDynamicSounds;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnkc810b5;
    ::ll::UntypedStorage<4, 4>  mUnkae8549;
    ::ll::UntypedStorage<8, 32> mUnk2c49f2;
    ::ll::UntypedStorage<8, 24> mUnk1307bf;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AmbientSoundIntervalDefinition& operator=(AmbientSoundIntervalDefinition const&);
    AmbientSoundIntervalDefinition(AmbientSoundIntervalDefinition const&);
    AmbientSoundIntervalDefinition();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AmbientSoundIntervalDefinition();
#else // @header-generator platform
    MCAPI void addDynamic(::DynamicAmbientSound const& definition);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addDynamic(::DynamicAmbientSound const&);

    MCNAPI void initialize(::EntityContext&, ::AmbientSoundServerComponent&) const;

    MCNAPI ~AmbientSoundIntervalDefinition();
#else // @header-generator platform
    MCAPI void initialize(::EntityContext& entity, ::AmbientSoundServerComponent& component) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AmbientSoundIntervalDefinition>>&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::AmbientSoundIntervalDefinition>>&
            root
    );
#endif // @header-generator platform
    // NOLINTEND
};
