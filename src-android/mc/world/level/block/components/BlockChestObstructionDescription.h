#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentDescription.h"
#include "mc/world/level/block/components/ChestObstructionRule.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockChestObstructionDescription : public ::BlockComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ChestObstructionRule> mChestObstructionRule;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockChestObstructionDescription& operator=(BlockChestObstructionDescription const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockChestObstructionDescription();

    virtual std::string const& getName() const;

    virtual void initializeComponent(::BlockComponentStorage&) const;

    virtual void initializeComponentFromCode(::BlockComponentStorage&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockChestObstructionDescription(::ChestObstructionRule const);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ChestObstructionRule const& DEFAULT_OBSTRUCTION_RULE();

    MCNAPI static std::string const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ChestObstructionRule const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string const& $getName() const;

    MCNAPI void $initializeComponent(::BlockComponentStorage&) const;

    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
