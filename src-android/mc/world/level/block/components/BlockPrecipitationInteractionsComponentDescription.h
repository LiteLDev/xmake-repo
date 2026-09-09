#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"
#include "mc/world/level/block/components/PrecipitationBehavior.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockPrecipitationInteractionsComponentDescription
: public ::NetworkedBlockComponentDescription<BlockPrecipitationInteractionsComponentDescription> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::PrecipitationBehavior> mBehavior;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPrecipitationInteractionsComponentDescription&
    operator=(BlockPrecipitationInteractionsComponentDescription const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockPrecipitationInteractionsComponentDescription();

    virtual std::string const& getName() const;

    virtual void initializeComponent(::BlockComponentStorage&) const;

    virtual void initializeComponentFromCode(::BlockComponentStorage&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockPrecipitationInteractionsComponentDescription(::PrecipitationBehavior);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PrecipitationBehavior const& DEFAULT_BEHAVIOR();

    MCNAPI static std::string const& NameID();

    MCNAPI static std::string const& PrecipitationBehaviorID();

    MCNAPI static std::string const& SchemaID();

    MCNAPI static ::SemVersion const& Version1_21_120();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PrecipitationBehavior);
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
