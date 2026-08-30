#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class CompoundTag;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockRedstoneDescription : public ::BlockComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mRedstoneConductor;
    ::ll::TypedStorage<1, 1, bool> mAllowsWireToStepDown;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockRedstoneDescription& operator=(BlockRedstoneDescription const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockRedstoneDescription();

    virtual std::string const& getName() const;

    virtual void initializeComponent(::BlockComponentStorage&) const;

    virtual void initializeComponentFromCode(::BlockComponentStorage&) const;

    virtual bool isNetworkComponent() const;

    virtual std::unique_ptr<CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const&) const;

    virtual void initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockRedstoneDescription(bool, bool);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool const& ALLOWS_WIRE_TO_STEP_DOWN_DEFAULT();

    MCNAPI static std::string const& NameID();

    MCNAPI static bool const& REDSTONE_CONDUCTOR_DEFAULT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool, bool);
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

    MCNAPI bool $isNetworkComponent() const;

    MCNAPI std::unique_ptr<CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const&) const;

    MCNAPI void $initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
