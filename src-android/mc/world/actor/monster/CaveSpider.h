#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/monster/Spider.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class CaveSpider : public ::Spider {
public:
    // prevent constructor by default
    CaveSpider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CaveSpider();

    virtual void getDebugText(std::vector<std::string>&);

    virtual float getModelScale() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CaveSpider(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $getDebugText(std::vector<std::string>&);

    MCNAPI float $getModelScale() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
