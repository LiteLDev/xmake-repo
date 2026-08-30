#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/AliasInfoDescription.h"
#include "mc/world/actor/DefintionDescription.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct ActorAliasDescription : public ::DefintionDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<AliasInfoDescription>> mAliases;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAliasDescription& operator=(ActorAliasDescription const&);
    ActorAliasDescription(ActorAliasDescription const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorAliasDescription();

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
