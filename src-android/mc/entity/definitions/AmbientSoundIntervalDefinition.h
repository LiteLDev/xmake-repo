#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/DynamicAmbientSound.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class AmbientSoundServerComponent;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

struct AmbientSoundIntervalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                             mValue;
    ::ll::TypedStorage<4, 4, float>                             mRange;
    ::ll::TypedStorage<8, 24, std::string>                      mEventName;
    ::ll::TypedStorage<8, 24, std::vector<DynamicAmbientSound>> mDynamicSounds;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AmbientSoundIntervalDefinition();

    MCNAPI void addDynamic(::DynamicAmbientSound const&);

    MCNAPI void initialize(::EntityContext&, ::AmbientSoundServerComponent&) const;

    MCNAPI ~AmbientSoundIntervalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
    // NOLINTEND
};
