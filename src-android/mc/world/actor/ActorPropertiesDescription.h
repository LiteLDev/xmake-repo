#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/world/actor/DefintionDescription.h"

// auto generated forward declare list
// clang-format off
class PropertyGroup;
namespace Json { class Value; }
// clang-format on

struct ActorPropertiesDescription : public ::DefintionDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<const PropertyGroup>> mPropertyGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorPropertiesDescription(ActorPropertiesDescription const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorPropertiesDescription();

    virtual char const* getJsonName() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI char const* $getJsonName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
